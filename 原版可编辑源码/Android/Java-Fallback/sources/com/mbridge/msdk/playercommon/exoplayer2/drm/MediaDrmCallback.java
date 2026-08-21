package com.mbridge.msdk.playercommon.exoplayer2.drm;

public interface MediaDrmCallback {
    byte[] executeKeyRequest(java.util.UUID r1, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyRequest r2, java.lang.String r3) throws java.lang.Exception;

    byte[] executeProvisionRequest(java.util.UUID r1, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.ProvisionRequest r2) throws java.lang.Exception;
}
