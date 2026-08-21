package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public interface DataSink {

    public interface Factory {
        com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSink createDataSink();
    }

    void close() throws java.io.IOException;

    void open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1) throws java.io.IOException;

    void write(byte[] r1, int r2, int r3) throws java.io.IOException;
}
