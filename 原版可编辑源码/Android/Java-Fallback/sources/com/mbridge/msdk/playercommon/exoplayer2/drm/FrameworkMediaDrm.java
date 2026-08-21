package com.mbridge.msdk.playercommon.exoplayer2.drm;

public final class FrameworkMediaDrm implements com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> {
    private static final java.lang.String CENC_SCHEME_MIME_TYPE = "cenc";
    private final android.media.MediaDrm mediaDrm;
    private final java.util.UUID uuid;



    private FrameworkMediaDrm(java.util.UUID r3) throws android.media.UnsupportedSchemeException {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.COMMON_PSSH_UUID
            boolean r0 = r0.equals(r3)
            r0 = r0 ^ 1
            java.lang.String r1 = "Use C.CLEARKEY_UUID instead"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0, r1)
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 27
            if (r0 >= r1) goto L23
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.CLEARKEY_UUID
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L23
            java.util.UUID r3 = com.mbridge.msdk.playercommon.exoplayer2.C.COMMON_PSSH_UUID
        L23:
            r2.uuid = r3
            android.media.MediaDrm r0 = new android.media.MediaDrm
            r0.<init>(r3)
            r2.mediaDrm = r0
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L43
            boolean r3 = needsForceL3Workaround()
            if (r3 == 0) goto L43
            android.media.MediaDrm r3 = r2.mediaDrm
            java.lang.String r0 = "securityLevel"
            java.lang.String r1 = "L3"
            r3.setPropertyString(r0, r1)
        L43:
            return
    }

    private static boolean needsForceL3Workaround() {
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "ASUS_Z00AD"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm newInstance(java.util.UUID r2) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm     // Catch: java.lang.Exception -> L6 android.media.UnsupportedSchemeException -> Le
            r0.<init>(r2)     // Catch: java.lang.Exception -> L6 android.media.UnsupportedSchemeException -> Le
            return r0
        L6:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException
            r1 = 2
            r0.<init>(r1, r2)
            throw r0
        Le:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException
            r1 = 1
            r0.<init>(r1, r2)
            throw r0
    }

    @Override
    public final void closeSession(byte[] r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            r0.closeSession(r2)
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto createMediaCrypto(byte[] r1) throws android.media.MediaCryptoException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto r1 = r0.createMediaCrypto(r1)
            return r1
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto createMediaCrypto(byte[] r5) throws android.media.MediaCryptoException {
            r4 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L20
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            java.util.UUID r1 = r4.uuid
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L20
            java.lang.String r0 = "securityLevel"
            java.lang.String r0 = r4.getPropertyString(r0)
            java.lang.String r1 = "L3"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            r0 = 1
            goto L21
        L20:
            r0 = 0
        L21:
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto
            android.media.MediaCrypto r2 = new android.media.MediaCrypto
            java.util.UUID r3 = r4.uuid
            r2.<init>(r3, r5)
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyRequest getKeyRequest(byte[] r8, byte[] r9, java.lang.String r10, int r11, java.util.HashMap<java.lang.String, java.lang.String> r12) throws android.media.NotProvisionedException {
            r7 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L10
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            java.util.UUID r1 = r7.uuid
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
        L10:
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.PLAYREADY_UUID
            java.util.UUID r1 = r7.uuid
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4d
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r1 = "Amazon"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L4d
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "AFTB"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L42
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "AFTS"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L42
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "AFTM"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L4d
        L42:
            java.util.UUID r0 = r7.uuid
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.parseSchemeSpecificData(r9, r0)
            if (r0 != 0) goto L4b
            goto L4d
        L4b:
            r3 = r0
            goto L4e
        L4d:
            r3 = r9
        L4e:
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r0 = 26
            if (r9 >= r0) goto L70
            java.util.UUID r9 = com.mbridge.msdk.playercommon.exoplayer2.C.CLEARKEY_UUID
            java.util.UUID r0 = r7.uuid
            boolean r9 = r9.equals(r0)
            if (r9 == 0) goto L70
            java.lang.String r9 = "video/mp4"
            boolean r9 = r9.equals(r10)
            if (r9 != 0) goto L6e
            java.lang.String r9 = "audio/mp4"
            boolean r9 = r9.equals(r10)
            if (r9 == 0) goto L70
        L6e:
            java.lang.String r10 = "cenc"
        L70:
            r4 = r10
            android.media.MediaDrm r1 = r7.mediaDrm
            r2 = r8
            r5 = r11
            r6 = r12
            android.media.MediaDrm$KeyRequest r8 = r1.getKeyRequest(r2, r3, r4, r5, r6)
            byte[] r9 = r8.getData()
            java.util.UUID r10 = com.mbridge.msdk.playercommon.exoplayer2.C.CLEARKEY_UUID
            java.util.UUID r11 = r7.uuid
            boolean r10 = r10.equals(r11)
            if (r10 == 0) goto L8c
            byte[] r9 = com.mbridge.msdk.playercommon.exoplayer2.drm.ClearKeyUtil.adjustRequestData(r9)
        L8c:
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$DefaultKeyRequest r10 = new com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$DefaultKeyRequest
            java.lang.String r8 = r8.getDefaultUrl()
            r10.<init>(r9, r8)
            return r10
    }

    @Override
    public final byte[] getPropertyByteArray(java.lang.String r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            byte[] r2 = r0.getPropertyByteArray(r2)
            return r2
    }

    @Override
    public final java.lang.String getPropertyString(java.lang.String r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            java.lang.String r2 = r0.getPropertyString(r2)
            return r2
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.ProvisionRequest getProvisionRequest() {
            r3 = this;
            android.media.MediaDrm r0 = r3.mediaDrm
            android.media.MediaDrm$ProvisionRequest r0 = r0.getProvisionRequest()
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$DefaultProvisionRequest r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$DefaultProvisionRequest
            byte[] r2 = r0.getData()
            java.lang.String r0 = r0.getDefaultUrl()
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public final byte[] openSession() throws android.media.MediaDrmException {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            byte[] r0 = r0.openSession()
            return r0
    }

    @Override
    public final byte[] provideKeyResponse(byte[] r3, byte[] r4) throws android.media.NotProvisionedException, android.media.DeniedByServerException {
            r2 = this;
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.CLEARKEY_UUID
            java.util.UUID r1 = r2.uuid
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Le
            byte[] r4 = com.mbridge.msdk.playercommon.exoplayer2.drm.ClearKeyUtil.adjustResponseData(r4)
        Le:
            android.media.MediaDrm r0 = r2.mediaDrm
            byte[] r3 = r0.provideKeyResponse(r3, r4)
            return r3
    }

    @Override
    public final void provideProvisionResponse(byte[] r2) throws android.media.DeniedByServerException {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            r0.provideProvisionResponse(r2)
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> queryKeyStatus(byte[] r2) {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            java.util.HashMap r2 = r0.queryKeyStatus(r2)
            return r2
    }

    @Override
    public final void release() {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            r0.release()
            return
    }

    @Override
    public final void restoreKeys(byte[] r2, byte[] r3) {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            r0.restoreKeys(r2, r3)
            return
    }

    @Override
    public final void setOnEventListener(com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.OnEventListener<? super com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3) {
            r2 = this;
            android.media.MediaDrm r0 = r2.mediaDrm
            if (r3 != 0) goto L6
            r3 = 0
            goto Lc
        L6:
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm$1
            r1.<init>(r2, r3)
            r3 = r1
        Lc:
            r0.setOnEventListener(r3)
            return
    }

    @Override
    public final void setOnKeyStatusChangeListener(com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.OnKeyStatusChangeListener<? super com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4) {
            r3 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 23
            if (r0 < r1) goto L16
            android.media.MediaDrm r0 = r3.mediaDrm
            r1 = 0
            if (r4 != 0) goto Ld
            r2 = r1
            goto L12
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm$2 r2 = new com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm$2
            r2.<init>(r3, r4)
        L12:
            r0.setOnKeyStatusChangeListener(r2, r1)
            return
        L16:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>()
            throw r4
    }

    @Override
    public final void setPropertyByteArray(java.lang.String r2, byte[] r3) {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            r0.setPropertyByteArray(r2, r3)
            return
    }

    @Override
    public final void setPropertyString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.media.MediaDrm r0 = r1.mediaDrm
            r0.setPropertyString(r2, r3)
            return
    }
}
