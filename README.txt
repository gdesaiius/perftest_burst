This version of perfTest is specifically to test burstMode. Few additional parameters are added to support burstMode and those are described below:

-burstMode
Use burst mode. Send burst of ‘burstSamples’ and then wait for ‘burstDelay’ seconds.
Default: false
Range: None


-burstSamples <no_of_samples>
Number of samples to send in each burst.
Default: 10 samples.
Range: 1 - 100

-burstDelay <seconds>
Delay in seconds in-between each burst.
Default: 10 seconds.
Range: 1 - 100 seconds

Relavent parameters: dataLen, executionTime, latencyCount

Example:
Publisher command: 
./perftest_publisher -burstMode -burstSamples 100 -burstDelay 100 -latencyCount 50 -latencyTest -executionTime 180 -dataLen 9673113  -pub

Description: Enable burstMode. Send 100 samples in a burst then wait 100 seconds and send burst again. Continue this cycle for 180 (executionTime) seconds total. Each sample length is 9673113 including overhead bytes. Also perform latency test every 50 samples.

Subscriber command: 
./perftest_publisher -dataLen 9673113 -sub

Description: Subscriber side. No burstMode specific parameters needed.

NOTE: Attached perftest_qos_profiles.xml also includes code to enable monitor. It is commented out but you can uncomment it to enable monitor. If monitor enabled then verify that the LD_LIBRARY_PATH environment is properly set. Please RTI_Monitor_GettingStarted.pdf and RTI_Monitor_UsersManual.pdf for more details.
