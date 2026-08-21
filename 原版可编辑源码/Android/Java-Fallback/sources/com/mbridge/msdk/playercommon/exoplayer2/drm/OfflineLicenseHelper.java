package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;

public final class OfflineLicenseHelper<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> {
    private final android.os.ConditionVariable conditionVariable;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T> drmSessionManager;
    private final android.os.HandlerThread handlerThread;


    public OfflineLicenseHelper(java.util.UUID r3, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r4, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r5, java.util.HashMap<java.lang.String, java.lang.String> r6) {
            r2 = this;
            r2.<init>()
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "OfflineLicenseHelper"
            r0.<init>(r1)
            r2.handlerThread = r0
            r0.start()
            android.os.ConditionVariable r0 = new android.os.ConditionVariable
            r0.<init>()
            r2.conditionVariable = r0
            com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper$1
            r0.<init>(r2)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager
            r1.<init>(r3, r4, r5, r6)
            r2.drmSessionManager = r1
            android.os.Handler r3 = new android.os.Handler
            android.os.HandlerThread r4 = r2.handlerThread
            android.os.Looper r4 = r4.getLooper()
            r3.<init>(r4)
            r1.addListener(r3, r0)
            return
    }

    static android.os.ConditionVariable access$000(com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper r0) {
            android.os.ConditionVariable r0 = r0.conditionVariable
            return r0
    }

    private byte[] blockingKeyRequest(int r2, byte[] r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r4) throws com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession r2 = r1.openBlockingKeyRequest(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r3 = r2.getError()
            byte[] r4 = r2.getOfflineLicenseKeySetId()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.drmSessionManager
            r0.releaseSession(r2)
            if (r3 != 0) goto L14
            return r4
        L14:
            throw r3
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newWidevineInstance(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            r0 = 0
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper r2 = newWidevineInstance(r2, r0, r3, r1)
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newWidevineInstance(java.lang.String r1, boolean r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper r1 = newWidevineInstance(r1, r2, r3, r0)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newWidevineInstance(java.lang.String r4, boolean r5, com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.Factory r6, java.util.HashMap<java.lang.String, java.lang.String> r7) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.OfflineLicenseHelper
            java.util.UUID r1 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            java.util.UUID r2 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm r2 = com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm.newInstance(r2)
            com.mbridge.msdk.playercommon.exoplayer2.drm.HttpMediaDrmCallback r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.HttpMediaDrmCallback
            r3.<init>(r4, r5, r6)
            r0.<init>(r1, r2, r3, r7)
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<T> openBlockingKeyRequest(int r2, byte[] r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.drmSessionManager
            r0.setMode(r2, r3)
            android.os.ConditionVariable r2 = r1.conditionVariable
            r2.close()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r1.drmSessionManager
            android.os.HandlerThread r3 = r1.handlerThread
            android.os.Looper r3 = r3.getLooper()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession r2 = r2.acquireSession(r3, r4)
            android.os.ConditionVariable r3 = r1.conditionVariable
            r3.block()
            return r2
    }

    public final synchronized byte[] downloadLicense(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException {
            r2 = this;
            monitor-enter(r2)
            if (r3 == 0) goto L5
            r0 = 1
            goto L6
        L5:
            r0 = 0
        L6:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)     // Catch: java.lang.Throwable -> L11
            r0 = 2
            r1 = 0
            byte[] r3 = r2.blockingKeyRequest(r0, r1, r3)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return r3
        L11:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized android.util.Pair<java.lang.Long, java.lang.Long> getLicenseDurationRemainingSec(byte[] r4) throws com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException {
            r3 = this;
            monitor-enter(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)     // Catch: java.lang.Throwable -> L34
            r0 = 1
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession r4 = r3.openBlockingKeyRequest(r0, r4, r1)     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r0 = r4.getError()     // Catch: java.lang.Throwable -> L34
            android.util.Pair r1 = com.mbridge.msdk.playercommon.exoplayer2.drm.WidevineUtil.getLicenseDurationRemainingSec(r4)     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r3.drmSessionManager     // Catch: java.lang.Throwable -> L34
            r2.releaseSession(r4)     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L32
            java.lang.Throwable r4 = r0.getCause()     // Catch: java.lang.Throwable -> L34
            boolean r4 = r4 instanceof com.mbridge.msdk.playercommon.exoplayer2.drm.KeysExpiredException     // Catch: java.lang.Throwable -> L34
            if (r4 == 0) goto L31
            r0 = 0
            java.lang.Long r4 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L34
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L34
            android.util.Pair r4 = android.util.Pair.create(r4, r0)     // Catch: java.lang.Throwable -> L34
            monitor-exit(r3)
            return r4
        L31:
            throw r0     // Catch: java.lang.Throwable -> L34
        L32:
            monitor-exit(r3)
            return r1
        L34:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized byte[] getPropertyByteArray(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.drmSessionManager     // Catch: java.lang.Throwable -> L9
            byte[] r2 = r0.getPropertyByteArray(r2)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized java.lang.String getPropertyString(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.drmSessionManager     // Catch: java.lang.Throwable -> L9
            java.lang.String r2 = r0.getPropertyString(r2)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void release() {
            r1 = this;
            android.os.HandlerThread r0 = r1.handlerThread
            r0.quit()
            return
    }

    public final synchronized void releaseLicense(byte[] r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)     // Catch: java.lang.Throwable -> Lb
            r0 = 3
            r1 = 0
            r2.blockingKeyRequest(r0, r3, r1)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r2)
            return
        Lb:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized byte[] renewLicense(byte[] r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)     // Catch: java.lang.Throwable -> Lc
            r0 = 2
            r1 = 0
            byte[] r3 = r2.blockingKeyRequest(r0, r3, r1)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r2)
            return r3
        Lc:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void setPropertyByteArray(java.lang.String r2, byte[] r3) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.drmSessionManager     // Catch: java.lang.Throwable -> L8
            r0.setPropertyByteArray(r2, r3)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void setPropertyString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.drmSessionManager     // Catch: java.lang.Throwable -> L8
            r0.setPropertyString(r2, r3)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
