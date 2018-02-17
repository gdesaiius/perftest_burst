This version of perfTest is specifically to test the burst mode. The changes are made to perftest 2.0. Few additional parameters are added to support burstMode and those are described below:

-burstMode
Use burst mode. Send burst of ‘burstSamples’ and then wait for ‘burstDelay’ seconds.
Default: false
Range: None


-burstSamples <no_of_samples>
Number of samples to send in each burst.
Default: 10 samples.
Range: 1 - 100

-burstDelay <ms>
Delay in ms in-between each burst.
Default: 10 ms.
Range: 1 - 100000 seconds

Other relavent parameters: dataLen, executionTime

Example:
Publisher command: 
./perftest_publisher -burstMode -burstSamples 100 -burstDelay 100 -latencyTest -executionTime 180 -dataLen 400000  -pub

Description: Enable burstMode. Send 100 samples in a burst then wait 100 ms and send burst again. Continue this cycle for 180 (executionTime) seconds total. Each sample length is 400000 including overhead bytes.

Subscriber command: 
./perftest_publisher -dataLen 400000 -sub

Description: Subscriber side. No burstMode specific parameters needed.

Note: The perftest should be executed from top directory where QoS file is located.
