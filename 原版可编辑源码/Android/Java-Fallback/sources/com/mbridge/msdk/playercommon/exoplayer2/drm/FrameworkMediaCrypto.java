package com.mbridge.msdk.playercommon.exoplayer2.drm;

public final class FrameworkMediaCrypto implements com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto {
    private final boolean forceAllowInsecureDecoderComponents;
    private final android.media.MediaCrypto mediaCrypto;

    public FrameworkMediaCrypto(android.media.MediaCrypto r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public FrameworkMediaCrypto(android.media.MediaCrypto r1, boolean r2) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            android.media.MediaCrypto r1 = (android.media.MediaCrypto) r1
            r0.mediaCrypto = r1
            r0.forceAllowInsecureDecoderComponents = r2
            return
    }

    public final android.media.MediaCrypto getWrappedMediaCrypto() {
            r1 = this;
            android.media.MediaCrypto r0 = r1.mediaCrypto
            return r0
    }

    @Override
    public final boolean requiresSecureDecoderComponent(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.forceAllowInsecureDecoderComponents
            if (r0 != 0) goto Le
            android.media.MediaCrypto r0 = r1.mediaCrypto
            boolean r2 = r0.requiresSecureDecoderComponent(r2)
            if (r2 == 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }
}
