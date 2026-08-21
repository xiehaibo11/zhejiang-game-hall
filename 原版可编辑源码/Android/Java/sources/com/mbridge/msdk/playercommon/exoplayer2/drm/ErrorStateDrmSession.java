package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession;
import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;
import java.util.Map;

public final class ErrorStateDrmSession<T extends ExoMediaCrypto> implements DrmSession<T> {
    private final DrmSession.DrmSessionException error;

    @Override
    public final T getMediaCrypto() {
        return null;
    }

    @Override
    public final byte[] getOfflineLicenseKeySetId() {
        return null;
    }

    @Override
    public final int getState() {
        return 1;
    }

    @Override
    public final Map<String, String> queryKeyStatus() {
        return null;
    }

    public ErrorStateDrmSession(DrmSession.DrmSessionException drmSessionException) {
        this.error = (DrmSession.DrmSessionException) Assertions.checkNotNull(drmSessionException);
    }

    @Override
    public final DrmSession.DrmSessionException getError() {
        return this.error;
    }
}
