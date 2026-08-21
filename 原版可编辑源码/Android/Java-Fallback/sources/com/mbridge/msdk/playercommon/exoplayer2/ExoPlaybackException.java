package com.mbridge.msdk.playercommon.exoplayer2;

public final class ExoPlaybackException extends java.lang.Exception {
    public static final int TYPE_RENDERER = 1;
    public static final int TYPE_SOURCE = 0;
    public static final int TYPE_UNEXPECTED = 2;
    public final int rendererIndex;
    public final int type;

    public @interface Type {
    }

    private ExoPlaybackException(int r1, java.lang.String r2, java.lang.Throwable r3, int r4) {
            r0 = this;
            r0.<init>(r2, r3)
            r0.type = r1
            r0.rendererIndex = r4
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException createForRenderer(java.lang.Exception r3, int r4) {
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException
            r1 = 1
            r2 = 0
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException createForSource(java.io.IOException r4) {
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException
            r1 = 0
            r2 = 0
            r3 = -1
            r0.<init>(r1, r2, r4, r3)
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException createForUnexpected(java.lang.RuntimeException r4) {
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException
            r1 = 2
            r2 = 0
            r3 = -1
            r0.<init>(r1, r2, r4, r3)
            return r0
    }

    public final java.lang.Exception getRendererException() {
            r2 = this;
            int r0 = r2.type
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            java.lang.Throwable r0 = r2.getCause()
            java.lang.Exception r0 = (java.lang.Exception) r0
            return r0
    }

    public final java.io.IOException getSourceException() {
            r1 = this;
            int r0 = r1.type
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.lang.Throwable r0 = r1.getCause()
            java.io.IOException r0 = (java.io.IOException) r0
            return r0
    }

    public final java.lang.RuntimeException getUnexpectedException() {
            r2 = this;
            int r0 = r2.type
            r1 = 2
            if (r0 != r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.lang.Throwable r0 = r2.getCause()
            java.lang.RuntimeException r0 = (java.lang.RuntimeException) r0
            return r0
    }
}
