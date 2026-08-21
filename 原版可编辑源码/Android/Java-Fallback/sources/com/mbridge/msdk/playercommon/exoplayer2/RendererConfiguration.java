package com.mbridge.msdk.playercommon.exoplayer2;

public final class RendererConfiguration {
    public static final com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration DEFAULT = null;
    public final int tunnelingAudioSessionId;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r0 = new com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration
            r1 = 0
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration.DEFAULT = r0
            return
    }

    public RendererConfiguration(int r1) {
            r0 = this;
            r0.<init>()
            r0.tunnelingAudioSessionId = r1
            return
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L1d
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L1d
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r5 = (com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration) r5
            int r2 = r4.tunnelingAudioSessionId
            int r5 = r5.tunnelingAudioSessionId
            if (r2 != r5) goto L1b
            goto L1c
        L1b:
            r0 = r1
        L1c:
            return r0
        L1d:
            return r1
    }

    public final int hashCode() {
            r1 = this;
            int r0 = r1.tunnelingAudioSessionId
            return r0
    }
}
