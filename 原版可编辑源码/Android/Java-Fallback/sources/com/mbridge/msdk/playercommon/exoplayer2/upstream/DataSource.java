package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public interface DataSource {

    public interface Factory {
        com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource createDataSource();
    }

    void close() throws java.io.IOException;

    android.net.Uri getUri();

    long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1) throws java.io.IOException;

    int read(byte[] r1, int r2, int r3) throws java.io.IOException;
}
