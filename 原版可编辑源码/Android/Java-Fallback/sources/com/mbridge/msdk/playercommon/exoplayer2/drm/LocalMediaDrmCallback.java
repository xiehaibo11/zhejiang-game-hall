package com.mbridge.msdk.playercommon.exoplayer2.drm;

public final class LocalMediaDrmCallback implements com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback {
    private final byte[] keyResponse;

    public LocalMediaDrmCallback(byte[] r1) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            byte[] r1 = (byte[]) r1
            r0.keyResponse = r1
            return
    }

    @Override
    public final byte[] executeKeyRequest(java.util.UUID r1, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyRequest r2, java.lang.String r3) throws java.lang.Exception {
            r0 = this;
            byte[] r1 = r0.keyResponse
            return r1
    }

    @Override
    public final byte[] executeProvisionRequest(java.util.UUID r1, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.ProvisionRequest r2) throws java.io.IOException {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            r1.<init>()
            throw r1
    }
}
