package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DataSourceException extends java.io.IOException {
    public static final int POSITION_OUT_OF_RANGE = 0;
    public final int reason;

    public DataSourceException(int r1) {
            r0 = this;
            r0.<init>()
            r0.reason = r1
            return
    }
}
