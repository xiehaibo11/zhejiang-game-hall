package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;

public interface DrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> {
    public static final int STATE_ERROR = 1;
    public static final int STATE_OPENED = 3;
    public static final int STATE_OPENED_WITH_KEYS = 4;
    public static final int STATE_OPENING = 2;
    public static final int STATE_RELEASED = 0;

    public static class DrmSessionException extends java.lang.Exception {
        public DrmSessionException(java.lang.Throwable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public @interface State {
    }

    com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException getError();

    T getMediaCrypto();

    byte[] getOfflineLicenseKeySetId();

    int getState();

    java.util.Map<java.lang.String, java.lang.String> queryKeyStatus();
}
