package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;

public interface DrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> {
    com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<T> acquireSession(android.os.Looper r1, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2);

    boolean canAcquireSession(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1);

    void releaseSession(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<T> r1);
}
