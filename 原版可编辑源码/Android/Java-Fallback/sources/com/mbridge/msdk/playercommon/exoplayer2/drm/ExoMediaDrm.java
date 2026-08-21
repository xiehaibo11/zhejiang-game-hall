package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;

public interface ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> {
    public static final int EVENT_KEY_EXPIRED = 3;
    public static final int EVENT_KEY_REQUIRED = 2;
    public static final int EVENT_PROVISION_REQUIRED = 1;
    public static final int KEY_TYPE_OFFLINE = 2;
    public static final int KEY_TYPE_RELEASE = 3;
    public static final int KEY_TYPE_STREAMING = 1;

    public static final class DefaultKeyRequest implements com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyRequest {
        private final byte[] data;
        private final java.lang.String defaultUrl;

        public DefaultKeyRequest(byte[] r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.data = r1
                r0.defaultUrl = r2
                return
        }

        @Override
        public final byte[] getData() {
                r1 = this;
                byte[] r0 = r1.data
                return r0
        }

        @Override
        public final java.lang.String getDefaultUrl() {
                r1 = this;
                java.lang.String r0 = r1.defaultUrl
                return r0
        }
    }

    public static final class DefaultKeyStatus implements com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyStatus {
        private final byte[] keyId;
        private final int statusCode;

        DefaultKeyStatus(int r1, byte[] r2) {
                r0 = this;
                r0.<init>()
                r0.statusCode = r1
                r0.keyId = r2
                return
        }

        @Override
        public final byte[] getKeyId() {
                r1 = this;
                byte[] r0 = r1.keyId
                return r0
        }

        @Override
        public final int getStatusCode() {
                r1 = this;
                int r0 = r1.statusCode
                return r0
        }
    }

    public static final class DefaultProvisionRequest implements com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.ProvisionRequest {
        private final byte[] data;
        private final java.lang.String defaultUrl;

        public DefaultProvisionRequest(byte[] r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.data = r1
                r0.defaultUrl = r2
                return
        }

        @Override
        public final byte[] getData() {
                r1 = this;
                byte[] r0 = r1.data
                return r0
        }

        @Override
        public final java.lang.String getDefaultUrl() {
                r1 = this;
                java.lang.String r0 = r1.defaultUrl
                return r0
        }
    }

    public interface KeyRequest {
        byte[] getData();

        java.lang.String getDefaultUrl();
    }

    public interface KeyStatus {
        byte[] getKeyId();

        int getStatusCode();
    }

    public interface OnEventListener<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> {
        void onEvent(com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<? extends T> r1, byte[] r2, int r3, int r4, byte[] r5);
    }

    public interface OnKeyStatusChangeListener<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> {
        void onKeyStatusChange(com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<? extends T> r1, byte[] r2, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyStatus> r3, boolean r4);
    }

    public interface ProvisionRequest {
        byte[] getData();

        java.lang.String getDefaultUrl();
    }

    void closeSession(byte[] r1);

    T createMediaCrypto(byte[] r1) throws android.media.MediaCryptoException;

    com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyRequest getKeyRequest(byte[] r1, byte[] r2, java.lang.String r3, int r4, java.util.HashMap<java.lang.String, java.lang.String> r5) throws android.media.NotProvisionedException;

    byte[] getPropertyByteArray(java.lang.String r1);

    java.lang.String getPropertyString(java.lang.String r1);

    com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.ProvisionRequest getProvisionRequest();

    byte[] openSession() throws android.media.MediaDrmException;

    byte[] provideKeyResponse(byte[] r1, byte[] r2) throws android.media.NotProvisionedException, android.media.DeniedByServerException;

    void provideProvisionResponse(byte[] r1) throws android.media.DeniedByServerException;

    java.util.Map<java.lang.String, java.lang.String> queryKeyStatus(byte[] r1);

    void release();

    void restoreKeys(byte[] r1, byte[] r2);

    void setOnEventListener(com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.OnEventListener<? super T> r1);

    void setOnKeyStatusChangeListener(com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.OnKeyStatusChangeListener<? super T> r1);

    void setPropertyByteArray(java.lang.String r1, byte[] r2);

    void setPropertyString(java.lang.String r1, java.lang.String r2);
}
