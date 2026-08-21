package com.mbridge.msdk.playercommon.exoplayer2.drm;

public final class UnsupportedDrmException extends java.lang.Exception {
    public static final int REASON_INSTANTIATION_ERROR = 2;
    public static final int REASON_UNSUPPORTED_SCHEME = 1;
    public final int reason;

    public @interface Reason {
    }

    public UnsupportedDrmException(int r1) {
            r0 = this;
            r0.<init>()
            r0.reason = r1
            return
    }

    public UnsupportedDrmException(int r1, java.lang.Exception r2) {
            r0 = this;
            r0.<init>(r2)
            r0.reason = r1
            return
    }
}
