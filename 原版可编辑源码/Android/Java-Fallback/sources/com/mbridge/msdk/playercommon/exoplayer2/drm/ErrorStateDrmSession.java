package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;

public final class ErrorStateDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> implements com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<T> {
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException error;

    public ErrorStateDrmSession(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException r1) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException) r1
            r0.error = r1
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException getError() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r0 = r1.error
            return r0
    }

    @Override
    public final T getMediaCrypto() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final byte[] getOfflineLicenseKeySetId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final int getState() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> queryKeyStatus() {
            r1 = this;
            r0 = 0
            return r0
    }
}
