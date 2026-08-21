package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;

class DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> implements com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<T> {
    private static final int MAX_LICENSE_DURATION_TO_RENEW = 60;
    private static final int MSG_KEYS = 1;
    private static final int MSG_PROVISION = 0;
    private static final java.lang.String TAG = "DefaultDrmSession";
    final com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback callback;
    private java.lang.Object currentKeyRequest;
    private java.lang.Object currentProvisionRequest;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher eventDispatcher;
    private final int initialDrmRequestRetryCount;
    private com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException lastException;
    private T mediaCrypto;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> mediaDrm;
    private final int mode;
    private byte[] offlineLicenseKeySetId;
    private int openCount;
    private final java.util.HashMap<java.lang.String, java.lang.String> optionalKeyRequestParameters;
    private com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>.PostRequestHandler postRequestHandler;
    final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>.PostResponseHandler postResponseHandler;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession.ProvisioningManager<T> provisioningManager;
    private android.os.HandlerThread requestHandlerThread;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData schemeData;
    private byte[] sessionId;
    private int state;
    final java.util.UUID uuid;

    private class PostRequestHandler extends android.os.Handler {
        final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession this$0;

        public PostRequestHandler(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r1, android.os.Looper r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        private long getRetryDelayMillis(int r3) {
                r2 = this;
                int r3 = r3 + (-1)
                int r3 = r3 * 1000
                r0 = 5000(0x1388, float:7.006E-42)
                int r3 = java.lang.Math.min(r3, r0)
                long r0 = (long) r3
                return r0
        }

        private boolean maybeRetryRequest(android.os.Message r5) {
                r4 = this;
                int r0 = r5.arg1
                r1 = 0
                r2 = 1
                if (r0 != r2) goto L8
                r0 = r2
                goto L9
            L8:
                r0 = r1
            L9:
                if (r0 != 0) goto Lc
                return r1
            Lc:
                int r0 = r5.arg2
                int r0 = r0 + r2
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r3 = r4.this$0
                int r3 = com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession.access$200(r3)
                if (r0 <= r3) goto L18
                return r1
            L18:
                android.os.Message r5 = android.os.Message.obtain(r5)
                r5.arg2 = r0
                long r0 = r4.getRetryDelayMillis(r0)
                r4.sendMessageDelayed(r5, r0)
                return r2
        }

        @Override
        public void handleMessage(android.os.Message r6) {
                r5 = this;
                java.lang.Object r0 = r6.obj
                int r1 = r6.what     // Catch: java.lang.Exception -> L37
                if (r1 == 0) goto L27
                r2 = 1
                if (r1 != r2) goto L21
                r1 = r0
                android.util.Pair r1 = (android.util.Pair) r1     // Catch: java.lang.Exception -> L37
                java.lang.Object r2 = r1.first     // Catch: java.lang.Exception -> L37
                com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$KeyRequest r2 = (com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.KeyRequest) r2     // Catch: java.lang.Exception -> L37
                java.lang.Object r1 = r1.second     // Catch: java.lang.Exception -> L37
                java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L37
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r3 = r5.this$0     // Catch: java.lang.Exception -> L37
                com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r3 = r3.callback     // Catch: java.lang.Exception -> L37
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r4 = r5.this$0     // Catch: java.lang.Exception -> L37
                java.util.UUID r4 = r4.uuid     // Catch: java.lang.Exception -> L37
                byte[] r1 = r3.executeKeyRequest(r4, r2, r1)     // Catch: java.lang.Exception -> L37
                goto L3f
            L21:
                java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Exception -> L37
                r1.<init>()     // Catch: java.lang.Exception -> L37
                throw r1     // Catch: java.lang.Exception -> L37
            L27:
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r1 = r5.this$0     // Catch: java.lang.Exception -> L37
                com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r1 = r1.callback     // Catch: java.lang.Exception -> L37
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r2 = r5.this$0     // Catch: java.lang.Exception -> L37
                java.util.UUID r2 = r2.uuid     // Catch: java.lang.Exception -> L37
                r3 = r0
                com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$ProvisionRequest r3 = (com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.ProvisionRequest) r3     // Catch: java.lang.Exception -> L37
                byte[] r1 = r1.executeProvisionRequest(r2, r3)     // Catch: java.lang.Exception -> L37
                goto L3f
            L37:
                r1 = move-exception
                boolean r2 = r5.maybeRetryRequest(r6)
                if (r2 == 0) goto L3f
                return
            L3f:
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r2 = r5.this$0
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>$PostResponseHandler r2 = r2.postResponseHandler
                int r6 = r6.what
                android.util.Pair r0 = android.util.Pair.create(r0, r1)
                android.os.Message r6 = r2.obtainMessage(r6, r0)
                r6.sendToTarget()
                return
        }

        void post(int r2, java.lang.Object r3, boolean r4) {
                r1 = this;
                r0 = 0
                android.os.Message r2 = r1.obtainMessage(r2, r4, r0, r3)
                r2.sendToTarget()
                return
        }
    }

    private class PostResponseHandler extends android.os.Handler {
        final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession this$0;

        public PostResponseHandler(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r1, android.os.Looper r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public void handleMessage(android.os.Message r4) {
                r3 = this;
                java.lang.Object r0 = r4.obj
                android.util.Pair r0 = (android.util.Pair) r0
                java.lang.Object r1 = r0.first
                java.lang.Object r0 = r0.second
                int r4 = r4.what
                if (r4 == 0) goto L16
                r2 = 1
                if (r4 == r2) goto L10
                goto L1b
            L10:
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r4 = r3.this$0
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession.access$100(r4, r1, r0)
                goto L1b
            L16:
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r4 = r3.this$0
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession.access$000(r4, r1, r0)
            L1b:
                return
        }
    }

    public interface ProvisioningManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> {
        void onProvisionCompleted();

        void onProvisionError(java.lang.Exception r1);

        void provisionRequired(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T> r1);
    }

    public DefaultDrmSession(java.util.UUID r1, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession.ProvisioningManager<T> r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData r4, int r5, byte[] r6, java.util.HashMap<java.lang.String, java.lang.String> r7, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r8, android.os.Looper r9, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher r10, int r11) {
            r0 = this;
            r0.<init>()
            r0.uuid = r1
            r0.provisioningManager = r3
            r0.mediaDrm = r2
            r0.mode = r5
            r0.offlineLicenseKeySetId = r6
            if (r6 != 0) goto L10
            goto L11
        L10:
            r4 = 0
        L11:
            r0.schemeData = r4
            r0.optionalKeyRequestParameters = r7
            r0.callback = r8
            r0.initialDrmRequestRetryCount = r11
            r0.eventDispatcher = r10
            r1 = 2
            r0.state = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$PostResponseHandler r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$PostResponseHandler
            r1.<init>(r0, r9)
            r0.postResponseHandler = r1
            android.os.HandlerThread r1 = new android.os.HandlerThread
            java.lang.String r2 = "DrmRequestHandler"
            r1.<init>(r2)
            r0.requestHandlerThread = r1
            r1.start()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$PostRequestHandler r1 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$PostRequestHandler
            android.os.HandlerThread r2 = r0.requestHandlerThread
            android.os.Looper r2 = r2.getLooper()
            r1.<init>(r0, r2)
            r0.postRequestHandler = r1
            return
    }

    static void access$000(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r0, java.lang.Object r1, java.lang.Object r2) {
            r0.onProvisionResponse(r1, r2)
            return
    }

    static void access$100(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r0, java.lang.Object r1, java.lang.Object r2) {
            r0.onKeyResponse(r1, r2)
            return
    }

    static int access$200(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r0) {
            int r0 = r0.initialDrmRequestRetryCount
            return r0
    }

    private void doLicense(boolean r8) {
            r7 = this;
            int r0 = r7.mode
            r1 = 1
            r2 = 2
            if (r0 == 0) goto L2b
            if (r0 == r1) goto L2b
            if (r0 == r2) goto L19
            r1 = 3
            if (r0 == r1) goto Lf
            goto L7c
        Lf:
            boolean r0 = r7.restoreKeys()
            if (r0 == 0) goto L7c
            r7.postKeyRequest(r1, r8)
            goto L7c
        L19:
            byte[] r0 = r7.offlineLicenseKeySetId
            if (r0 != 0) goto L21
            r7.postKeyRequest(r2, r8)
            goto L7c
        L21:
            boolean r0 = r7.restoreKeys()
            if (r0 == 0) goto L7c
            r7.postKeyRequest(r2, r8)
            goto L7c
        L2b:
            byte[] r0 = r7.offlineLicenseKeySetId
            if (r0 != 0) goto L33
            r7.postKeyRequest(r1, r8)
            goto L7c
        L33:
            int r0 = r7.state
            r1 = 4
            if (r0 == r1) goto L3e
            boolean r0 = r7.restoreKeys()
            if (r0 == 0) goto L7c
        L3e:
            long r3 = r7.getLicenseDurationRemainingSec()
            int r0 = r7.mode
            if (r0 != 0) goto L66
            r5 = 60
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto L66
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Offline license has expired or will expire soon. Remaining seconds: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DefaultDrmSession"
            android.util.Log.d(r1, r0)
            r7.postKeyRequest(r2, r8)
            goto L7c
        L66:
            r5 = 0
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 > 0) goto L75
            com.mbridge.msdk.playercommon.exoplayer2.drm.KeysExpiredException r8 = new com.mbridge.msdk.playercommon.exoplayer2.drm.KeysExpiredException
            r8.<init>()
            r7.onError(r8)
            goto L7c
        L75:
            r7.state = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r8 = r7.eventDispatcher
            r8.drmKeysRestored()
        L7c:
            return
    }

    private long getLicenseDurationRemainingSec() {
            r5 = this;
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            java.util.UUID r1 = r5.uuid
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L10
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            return r0
        L10:
            android.util.Pair r0 = com.mbridge.msdk.playercommon.exoplayer2.drm.WidevineUtil.getLicenseDurationRemainingSec(r5)
            java.lang.Object r1 = r0.first
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            java.lang.Object r0 = r0.second
            java.lang.Long r0 = (java.lang.Long) r0
            long r3 = r0.longValue()
            long r0 = java.lang.Math.min(r1, r3)
            return r0
    }

    private boolean isOpen() {
            r2 = this;
            int r0 = r2.state
            r1 = 3
            if (r0 == r1) goto Lb
            r1 = 4
            if (r0 != r1) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    private void onError(java.lang.Exception r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException
            r0.<init>(r2)
            r1.lastException = r0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.drmSessionManagerError(r2)
            int r2 = r1.state
            r0 = 4
            if (r2 == r0) goto L14
            r2 = 1
            r1.state = r2
        L14:
            return
    }

    private void onKeyResponse(java.lang.Object r2, java.lang.Object r3) {
            r1 = this;
            java.lang.Object r0 = r1.currentKeyRequest
            if (r2 != r0) goto L57
            boolean r2 = r1.isOpen()
            if (r2 != 0) goto Lb
            goto L57
        Lb:
            r2 = 0
            r1.currentKeyRequest = r2
            boolean r2 = r3 instanceof java.lang.Exception
            if (r2 == 0) goto L18
            java.lang.Exception r3 = (java.lang.Exception) r3
            r1.onKeysError(r3)
            return
        L18:
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L53
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L53
            int r2 = r1.mode     // Catch: java.lang.Exception -> L53
            r0 = 3
            if (r2 != r0) goto L2e
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r1.mediaDrm     // Catch: java.lang.Exception -> L53
            byte[] r0 = r1.offlineLicenseKeySetId     // Catch: java.lang.Exception -> L53
            r2.provideKeyResponse(r0, r3)     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r2 = r1.eventDispatcher     // Catch: java.lang.Exception -> L53
            r2.drmKeysRemoved()     // Catch: java.lang.Exception -> L53
            goto L57
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r1.mediaDrm     // Catch: java.lang.Exception -> L53
            byte[] r0 = r1.sessionId     // Catch: java.lang.Exception -> L53
            byte[] r2 = r2.provideKeyResponse(r0, r3)     // Catch: java.lang.Exception -> L53
            int r3 = r1.mode     // Catch: java.lang.Exception -> L53
            r0 = 2
            if (r3 == r0) goto L43
            int r3 = r1.mode     // Catch: java.lang.Exception -> L53
            if (r3 != 0) goto L4a
            byte[] r3 = r1.offlineLicenseKeySetId     // Catch: java.lang.Exception -> L53
            if (r3 == 0) goto L4a
        L43:
            if (r2 == 0) goto L4a
            int r3 = r2.length     // Catch: java.lang.Exception -> L53
            if (r3 == 0) goto L4a
            r1.offlineLicenseKeySetId = r2     // Catch: java.lang.Exception -> L53
        L4a:
            r2 = 4
            r1.state = r2     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r2 = r1.eventDispatcher     // Catch: java.lang.Exception -> L53
            r2.drmKeysLoaded()     // Catch: java.lang.Exception -> L53
            goto L57
        L53:
            r2 = move-exception
            r1.onKeysError(r2)
        L57:
            return
    }

    private void onKeysError(java.lang.Exception r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.media.NotProvisionedException
            if (r0 == 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$ProvisioningManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r1.provisioningManager
            r2.provisionRequired(r1)
            goto Ld
        La:
            r1.onError(r2)
        Ld:
            return
    }

    private void onKeysExpired() {
            r2 = this;
            int r0 = r2.state
            r1 = 4
            if (r0 != r1) goto L10
            r0 = 3
            r2.state = r0
            com.mbridge.msdk.playercommon.exoplayer2.drm.KeysExpiredException r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.KeysExpiredException
            r0.<init>()
            r2.onError(r0)
        L10:
            return
    }

    private void onProvisionResponse(java.lang.Object r2, java.lang.Object r3) {
            r1 = this;
            java.lang.Object r0 = r1.currentProvisionRequest
            if (r2 != r0) goto L34
            int r2 = r1.state
            r0 = 2
            if (r2 == r0) goto L10
            boolean r2 = r1.isOpen()
            if (r2 != 0) goto L10
            goto L34
        L10:
            r2 = 0
            r1.currentProvisionRequest = r2
            boolean r2 = r3 instanceof java.lang.Exception
            if (r2 == 0) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$ProvisioningManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r1.provisioningManager
            java.lang.Exception r3 = (java.lang.Exception) r3
            r2.onProvisionError(r3)
            return
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r1.mediaDrm     // Catch: java.lang.Exception -> L2e
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L2e
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L2e
            r2.provideProvisionResponse(r3)     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$ProvisioningManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r1.provisioningManager
            r2.onProvisionCompleted()
            return
        L2e:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$ProvisioningManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r1.provisioningManager
            r3.onProvisionError(r2)
        L34:
            return
    }

    private boolean openInternal(boolean r4) {
            r3 = this;
            boolean r0 = r3.isOpen()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r3.mediaDrm     // Catch: java.lang.Exception -> L1c android.media.NotProvisionedException -> L21
            byte[] r0 = r0.openSession()     // Catch: java.lang.Exception -> L1c android.media.NotProvisionedException -> L21
            r3.sessionId = r0     // Catch: java.lang.Exception -> L1c android.media.NotProvisionedException -> L21
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r3.mediaDrm     // Catch: java.lang.Exception -> L1c android.media.NotProvisionedException -> L21
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto r0 = r2.createMediaCrypto(r0)     // Catch: java.lang.Exception -> L1c android.media.NotProvisionedException -> L21
            r3.mediaCrypto = r0     // Catch: java.lang.Exception -> L1c android.media.NotProvisionedException -> L21
            r0 = 3
            r3.state = r0     // Catch: java.lang.Exception -> L1c android.media.NotProvisionedException -> L21
            return r1
        L1c:
            r4 = move-exception
            r3.onError(r4)
            goto L2d
        L21:
            r0 = move-exception
            if (r4 == 0) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$ProvisioningManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r4 = r3.provisioningManager
            r4.provisionRequired(r3)
            goto L2d
        L2a:
            r3.onError(r0)
        L2d:
            r4 = 0
            return r4
    }

    private void postKeyRequest(int r9, boolean r10) {
            r8 = this;
            r0 = 3
            if (r9 != r0) goto L6
            byte[] r0 = r8.offlineLicenseKeySetId
            goto L8
        L6:
            byte[] r0 = r8.sessionId
        L8:
            r2 = r0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r0 = r8.schemeData
            r1 = 0
            if (r0 == 0) goto L1d
            byte[] r0 = r0.data
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r1 = r8.schemeData
            java.lang.String r1 = r1.mimeType
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r3 = r8.schemeData
            java.lang.String r3 = r3.licenseServerUrl
            r4 = r1
            r7 = r3
            r3 = r0
            r0 = r7
            goto L20
        L1d:
            r0 = r1
            r3 = r0
            r4 = r3
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1 = r8.mediaDrm     // Catch: java.lang.Exception -> L36
            java.util.HashMap<java.lang.String, java.lang.String> r6 = r8.optionalKeyRequestParameters     // Catch: java.lang.Exception -> L36
            r5 = r9
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$KeyRequest r9 = r1.getKeyRequest(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L36
            android.util.Pair r9 = android.util.Pair.create(r9, r0)     // Catch: java.lang.Exception -> L36
            r8.currentKeyRequest = r9     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>$PostRequestHandler r0 = r8.postRequestHandler     // Catch: java.lang.Exception -> L36
            r1 = 1
            r0.post(r1, r9, r10)     // Catch: java.lang.Exception -> L36
            goto L3a
        L36:
            r9 = move-exception
            r8.onKeysError(r9)
        L3a:
            return
    }

    private boolean restoreKeys() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r3.mediaDrm     // Catch: java.lang.Exception -> Lb
            byte[] r1 = r3.sessionId     // Catch: java.lang.Exception -> Lb
            byte[] r2 = r3.offlineLicenseKeySetId     // Catch: java.lang.Exception -> Lb
            r0.restoreKeys(r1, r2)     // Catch: java.lang.Exception -> Lb
            r0 = 1
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r1 = "DefaultDrmSession"
            java.lang.String r2 = "Error trying to restore Widevine keys."
            android.util.Log.e(r1, r2, r0)
            r3.onError(r0)
            r0 = 0
            return r0
    }

    public void acquire() {
            r2 = this;
            int r0 = r2.openCount
            r1 = 1
            int r0 = r0 + r1
            r2.openCount = r0
            if (r0 != r1) goto L16
            int r0 = r2.state
            if (r0 != r1) goto Ld
            return
        Ld:
            boolean r0 = r2.openInternal(r1)
            if (r0 == 0) goto L16
            r2.doLicense(r1)
        L16:
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession.DrmSessionException getError() {
            r2 = this;
            int r0 = r2.state
            r1 = 1
            if (r0 != r1) goto L8
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r0 = r2.lastException
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public final T getMediaCrypto() {
            r1 = this;
            T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto r0 = r1.mediaCrypto
            return r0
    }

    @Override
    public byte[] getOfflineLicenseKeySetId() {
            r1 = this;
            byte[] r0 = r1.offlineLicenseKeySetId
            return r0
    }

    @Override
    public final int getState() {
            r1 = this;
            int r0 = r1.state
            return r0
    }

    public boolean hasInitData(byte[] r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r0 = r1.schemeData
            if (r0 == 0) goto L7
            byte[] r0 = r0.data
            goto L8
        L7:
            r0 = 0
        L8:
            boolean r2 = java.util.Arrays.equals(r0, r2)
            return r2
    }

    public boolean hasSessionId(byte[] r2) {
            r1 = this;
            byte[] r0 = r1.sessionId
            boolean r2 = java.util.Arrays.equals(r0, r2)
            return r2
    }

    public void onMediaDrmEvent(int r3) {
            r2 = this;
            boolean r0 = r2.isOpen()
            if (r0 != 0) goto L7
            return
        L7:
            r0 = 1
            r1 = 3
            if (r3 == r0) goto L1a
            r0 = 2
            if (r3 == r0) goto L15
            if (r3 == r1) goto L11
            goto L21
        L11:
            r2.onKeysExpired()
            goto L21
        L15:
            r3 = 0
            r2.doLicense(r3)
            goto L21
        L1a:
            r2.state = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession$ProvisioningManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r2.provisioningManager
            r3.provisionRequired(r2)
        L21:
            return
    }

    public void onProvisionCompleted() {
            r1 = this;
            r0 = 0
            boolean r0 = r1.openInternal(r0)
            if (r0 == 0) goto Lb
            r0 = 1
            r1.doLicense(r0)
        Lb:
            return
    }

    public void onProvisionError(java.lang.Exception r1) {
            r0 = this;
            r0.onError(r1)
            return
    }

    public void provision() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r4.mediaDrm
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm$ProvisionRequest r0 = r0.getProvisionRequest()
            r4.currentProvisionRequest = r0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>$PostRequestHandler r1 = r4.postRequestHandler
            r2 = 0
            r3 = 1
            r1.post(r2, r0, r3)
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> queryKeyStatus() {
            r2 = this;
            byte[] r0 = r2.sessionId
            if (r0 != 0) goto L6
            r0 = 0
            goto Lc
        L6:
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1 = r2.mediaDrm
            java.util.Map r0 = r1.queryKeyStatus(r0)
        Lc:
            return r0
    }

    public boolean release() {
            r4 = this;
            int r0 = r4.openCount
            r1 = 1
            int r0 = r0 - r1
            r4.openCount = r0
            r2 = 0
            if (r0 != 0) goto L33
            r4.state = r2
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>$PostResponseHandler r0 = r4.postResponseHandler
            r2 = 0
            r0.removeCallbacksAndMessages(r2)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>$PostRequestHandler r0 = r4.postRequestHandler
            r0.removeCallbacksAndMessages(r2)
            r4.postRequestHandler = r2
            android.os.HandlerThread r0 = r4.requestHandlerThread
            r0.quit()
            r4.requestHandlerThread = r2
            r4.mediaCrypto = r2
            r4.lastException = r2
            r4.currentKeyRequest = r2
            r4.currentProvisionRequest = r2
            byte[] r0 = r4.sessionId
            if (r0 == 0) goto L32
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.mediaDrm
            r3.closeSession(r0)
            r4.sessionId = r2
        L32:
            return r1
        L33:
            return r2
    }
}
