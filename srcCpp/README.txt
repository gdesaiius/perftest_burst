NDDSHOME should be defined as environment variable. NDDSHOME should point to your connext install directory, for example '/home/gautam/rti_connext_dds-5.3.0/'
Run makefile with target, for example 'make -f makefile TARGET_ARCH=x64Linux3gcc4.8.2'
Copy objs/{TARGET_ARCH}/perftest_publisher to parent directory where parftest_qos_profile.xml is located.
