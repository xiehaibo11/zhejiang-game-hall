package com.mbridge.msdk.playercommon.exoplayer2.drm;

import com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto;

public class DefaultDrmSessionManager<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> implements com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession.ProvisioningManager<T>, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<T> {
    public static final int INITIAL_DRM_REQUEST_RETRY_COUNT = 3;
    public static final int MODE_DOWNLOAD = 2;
    public static final int MODE_PLAYBACK = 0;
    public static final int MODE_QUERY = 1;
    public static final int MODE_RELEASE = 3;
    public static final java.lang.String PLAYREADY_CUSTOM_DATA_KEY = "PRCustomData";
    private static final java.lang.String TAG = "DefaultDrmSessionMgr";
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback callback;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener.EventDispatcher eventDispatcher;
    private final int initialDrmRequestRetryCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> mediaDrm;
    volatile com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T>.MediaDrmHandler mediaDrmHandler;
    private int mode;
    private final boolean multiSession;
    private byte[] offlineLicenseKeySetId;
    private final java.util.HashMap<java.lang.String, java.lang.String> optionalKeyRequestParameters;
    private android.os.Looper playbackLooper;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>> provisioningSessions;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T>> sessions;
    private final java.util.UUID uuid;

    static class 1 {
    }

    public interface EventListener extends com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener {
    }

    private class MediaDrmEventListener implements com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm.OnEventListener<T> {
        final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager this$0;

        private MediaDrmEventListener(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        MediaDrmEventListener(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onEvent(com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<? extends T> r1, byte[] r2, int r3, int r4, byte[] r5) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1 = r0.this$0
                int r1 = com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager.access$300(r1)
                if (r1 != 0) goto L13
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T>$MediaDrmHandler r1 = r1.mediaDrmHandler
                android.os.Message r1 = r1.obtainMessage(r3, r2)
                r1.sendToTarget()
            L13:
                return
        }
    }

    private class MediaDrmHandler extends android.os.Handler {
        final com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager this$0;

        public MediaDrmHandler(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1, android.os.Looper r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                return
        }

        @Override
        public void handleMessage(android.os.Message r5) {
                r4 = this;
                java.lang.Object r0 = r5.obj
                byte[] r0 = (byte[]) r0
                byte[] r0 = (byte[]) r0
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1 = r4.this$0
                java.util.List r1 = com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager.access$200(r1)
                java.util.Iterator r1 = r1.iterator()
            L10:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L27
                java.lang.Object r2 = r1.next()
                com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r2 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession) r2
                boolean r3 = r2.hasSessionId(r0)
                if (r3 == 0) goto L10
                int r5 = r5.what
                r2.onMediaDrmEvent(r5)
            L27:
                return
        }
    }

    public static final class MissingSchemeDataException extends java.lang.Exception {
        private MissingSchemeDataException(java.util.UUID r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Media does not support uuid: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r2.<init>(r3)
                return
        }

        MissingSchemeDataException(java.util.UUID r1, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public @interface Mode {
    }

    public DefaultDrmSessionManager(java.util.UUID r8, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r9, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r10, java.util.HashMap<java.lang.String, java.lang.String> r11) {
            r7 = this;
            r5 = 0
            r6 = 3
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public DefaultDrmSessionManager(java.util.UUID r1, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r2, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r3, java.util.HashMap<java.lang.String, java.lang.String> r4, android.os.Handler r5, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            if (r5 == 0) goto La
            if (r6 == 0) goto La
            r0.addListener(r5, r6)
        La:
            return
    }

    public DefaultDrmSessionManager(java.util.UUID r7, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r8, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r9, java.util.HashMap<java.lang.String, java.lang.String> r10, android.os.Handler r11, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r12, boolean r13) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r13
            r0.<init>(r1, r2, r3, r4, r5)
            if (r11 == 0) goto L10
            if (r12 == 0) goto L10
            r6.addListener(r11, r12)
        L10:
            return
    }

    public DefaultDrmSessionManager(java.util.UUID r8, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r9, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r10, java.util.HashMap<java.lang.String, java.lang.String> r11, android.os.Handler r12, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r13, boolean r14, int r15) {
            r7 = this;
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r14
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6)
            if (r12 == 0) goto L11
            if (r13 == 0) goto L11
            r7.addListener(r12, r13)
        L11:
            return
    }

    public DefaultDrmSessionManager(java.util.UUID r8, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r9, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r10, java.util.HashMap<java.lang.String, java.lang.String> r11, boolean r12) {
            r7 = this;
            r6 = 3
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public DefaultDrmSessionManager(java.util.UUID r3, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T> r4, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r5, java.util.HashMap<java.lang.String, java.lang.String> r6, boolean r7, int r8) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.COMMON_PSSH_UUID
            boolean r0 = r0.equals(r3)
            r0 = r0 ^ 1
            java.lang.String r1 = "Use C.CLEARKEY_UUID instead"
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0, r1)
            r2.uuid = r3
            r2.mediaDrm = r4
            r2.callback = r5
            r2.optionalKeyRequestParameters = r6
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher
            r3.<init>()
            r2.eventDispatcher = r3
            r2.multiSession = r7
            r2.initialDrmRequestRetryCount = r8
            r3 = 0
            r2.mode = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.sessions = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.provisioningSessions = r3
            if (r7 == 0) goto L43
            java.lang.String r3 = "sessionSharing"
            java.lang.String r5 = "enable"
            r4.setPropertyString(r3, r5)
        L43:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager$MediaDrmEventListener r3 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager$MediaDrmEventListener
            r5 = 0
            r3.<init>(r2, r5)
            r4.setOnEventListener(r3)
            return
    }

    static java.util.List access$200(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r0) {
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r0.sessions
            return r0
    }

    static int access$300(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r0) {
            int r0 = r0.mode
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData getSchemeData(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r6, java.util.UUID r7, boolean r8) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r6.schemeDataCount
            r0.<init>(r1)
            r1 = 0
            r2 = r1
        L9:
            int r3 = r6.schemeDataCount
            r4 = 1
            if (r2 >= r3) goto L38
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r3 = r6.get(r2)
            boolean r5 = r3.matches(r7)
            if (r5 != 0) goto L2a
            java.util.UUID r5 = com.mbridge.msdk.playercommon.exoplayer2.C.CLEARKEY_UUID
            boolean r5 = r5.equals(r7)
            if (r5 == 0) goto L29
            java.util.UUID r5 = com.mbridge.msdk.playercommon.exoplayer2.C.COMMON_PSSH_UUID
            boolean r5 = r3.matches(r5)
            if (r5 == 0) goto L29
            goto L2a
        L29:
            r4 = r1
        L2a:
            if (r4 == 0) goto L35
            byte[] r4 = r3.data
            if (r4 != 0) goto L32
            if (r8 == 0) goto L35
        L32:
            r0.add(r3)
        L35:
            int r2 = r2 + 1
            goto L9
        L38:
            boolean r6 = r0.isEmpty()
            if (r6 == 0) goto L40
            r6 = 0
            return r6
        L40:
            java.util.UUID r6 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            boolean r6 = r6.equals(r7)
            if (r6 == 0) goto L76
            r6 = r1
        L49:
            int r7 = r0.size()
            if (r6 >= r7) goto L76
            java.lang.Object r7 = r0.get(r6)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r7 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData) r7
            boolean r8 = r7.hasData()
            if (r8 == 0) goto L62
            byte[] r8 = r7.data
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.PsshAtomUtil.parseVersion(r8)
            goto L63
        L62:
            r8 = -1
        L63:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r3 = 23
            if (r2 >= r3) goto L6c
            if (r8 != 0) goto L6c
            return r7
        L6c:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r2 < r3) goto L73
            if (r8 != r4) goto L73
            return r7
        L73:
            int r6 = r6 + 1
            goto L49
        L76:
            java.lang.Object r6 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r6 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData) r6
            return r6
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newFrameworkInstance(java.util.UUID r8, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r9, java.util.HashMap<java.lang.String, java.lang.String> r10) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r7 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm r2 = com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaDrm.newInstance(r8)
            r5 = 0
            r6 = 3
            r0 = r7
            r1 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newFrameworkInstance(java.util.UUID r0, com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r1, java.util.HashMap<java.lang.String, java.lang.String> r2, android.os.Handler r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r4) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r0 = newFrameworkInstance(r0, r1, r2)
            if (r3 == 0) goto Lb
            if (r4 == 0) goto Lb
            r0.addListener(r3, r4)
        Lb:
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newPlayReadyInstance(com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r2, java.lang.String r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L11
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "PRCustomData"
            r0.put(r1, r3)
            goto L12
        L11:
            r0 = 0
        L12:
            java.util.UUID r3 = com.mbridge.msdk.playercommon.exoplayer2.C.PLAYREADY_UUID
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r2 = newFrameworkInstance(r3, r2, r0)
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newPlayReadyInstance(com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r0, java.lang.String r1, android.os.Handler r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r0 = newPlayReadyInstance(r0, r1)
            if (r2 == 0) goto Lb
            if (r3 == 0) goto Lb
            r0.addListener(r2, r3)
        Lb:
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newWidevineInstance(com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r1, java.util.HashMap<java.lang.String, java.lang.String> r2) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.WIDEVINE_UUID
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r1 = newFrameworkInstance(r0, r1, r2)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> newWidevineInstance(com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r0, java.util.HashMap<java.lang.String, java.lang.String> r1, android.os.Handler r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r3) throws com.mbridge.msdk.playercommon.exoplayer2.drm.UnsupportedDrmException {
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r0 = newWidevineInstance(r0, r1)
            if (r2 == 0) goto Lb
            if (r3 == 0) goto Lb
            r0.addListener(r2, r3)
        Lb:
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<T> acquireSession(android.os.Looper r14, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r15) {
            r13 = this;
            android.os.Looper r0 = r13.playbackLooper
            r1 = 0
            if (r0 == 0) goto La
            if (r0 != r14) goto L8
            goto La
        L8:
            r0 = r1
            goto Lb
        La:
            r0 = 1
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r13.sessions
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L23
            r13.playbackLooper = r14
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager<T>$MediaDrmHandler r0 = r13.mediaDrmHandler
            if (r0 != 0) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager$MediaDrmHandler r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager$MediaDrmHandler
            r0.<init>(r13, r14)
            r13.mediaDrmHandler = r0
        L23:
            byte[] r0 = r13.offlineLicenseKeySetId
            r2 = 0
            if (r0 != 0) goto L49
            java.util.UUID r0 = r13.uuid
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r15 = getSchemeData(r15, r0, r1)
            if (r15 != 0) goto L47
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager$MissingSchemeDataException r14 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager$MissingSchemeDataException
            java.util.UUID r15 = r13.uuid
            r14.<init>(r15, r2)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r15 = r13.eventDispatcher
            r15.drmSessionManagerError(r14)
            com.mbridge.msdk.playercommon.exoplayer2.drm.ErrorStateDrmSession r15 = new com.mbridge.msdk.playercommon.exoplayer2.drm.ErrorStateDrmSession
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException
            r0.<init>(r14)
            r15.<init>(r0)
            return r15
        L47:
            r5 = r15
            goto L4a
        L49:
            r5 = r2
        L4a:
            boolean r15 = r13.multiSession
            if (r15 != 0) goto L61
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r15 = r13.sessions
            boolean r15 = r15.isEmpty()
            if (r15 == 0) goto L57
            goto L80
        L57:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r15 = r13.sessions
            java.lang.Object r15 = r15.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r15 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession) r15
            r2 = r15
            goto L80
        L61:
            if (r5 == 0) goto L66
            byte[] r15 = r5.data
            goto L67
        L66:
            r15 = r2
        L67:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r13.sessions
            java.util.Iterator r0 = r0.iterator()
        L6d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L80
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession) r1
            boolean r3 = r1.hasInitData(r15)
            if (r3 == 0) goto L6d
            r2 = r1
        L80:
            if (r2 != 0) goto La0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r15 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession
            java.util.UUID r2 = r13.uuid
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r13.mediaDrm
            int r6 = r13.mode
            byte[] r7 = r13.offlineLicenseKeySetId
            java.util.HashMap<java.lang.String, java.lang.String> r8 = r13.optionalKeyRequestParameters
            com.mbridge.msdk.playercommon.exoplayer2.drm.MediaDrmCallback r9 = r13.callback
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r11 = r13.eventDispatcher
            int r12 = r13.initialDrmRequestRetryCount
            r1 = r15
            r4 = r13
            r10 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r14 = r13.sessions
            r14.add(r15)
            r2 = r15
        La0:
            r2.acquire()
            return r2
    }

    public final void addListener(android.os.Handler r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.addListener(r2, r3)
            return
    }

    @Override
    public boolean canAcquireSession(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r5) {
            r4 = this;
            byte[] r0 = r4.offlineLicenseKeySetId
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            java.util.UUID r0 = r4.uuid
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r0 = getSchemeData(r5, r0, r1)
            r2 = 0
            if (r0 != 0) goto L39
            int r0 = r5.schemeDataCount
            if (r0 != r1) goto L38
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r0 = r5.get(r2)
            java.util.UUID r3 = com.mbridge.msdk.playercommon.exoplayer2.C.COMMON_PSSH_UUID
            boolean r0 = r0.matches(r3)
            if (r0 == 0) goto L38
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "DrmInitData only contains common PSSH SchemeData. Assuming support for: "
            r0.append(r3)
            java.util.UUID r3 = r4.uuid
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "DefaultDrmSessionMgr"
            android.util.Log.w(r3, r0)
            goto L39
        L38:
            return r2
        L39:
            java.lang.String r5 = r5.schemeType
            if (r5 == 0) goto L68
            java.lang.String r0 = "cenc"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L46
            goto L68
        L46:
            java.lang.String r0 = "cbc1"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L60
            java.lang.String r0 = "cbcs"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L60
            java.lang.String r0 = "cens"
            boolean r5 = r0.equals(r5)
            if (r5 == 0) goto L5f
            goto L60
        L5f:
            return r1
        L60:
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r0 = 25
            if (r5 < r0) goto L67
            goto L68
        L67:
            r1 = r2
        L68:
            return r1
    }

    public final byte[] getPropertyByteArray(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.mediaDrm
            byte[] r2 = r0.getPropertyByteArray(r2)
            return r2
    }

    public final java.lang.String getPropertyString(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.mediaDrm
            java.lang.String r2 = r0.getPropertyString(r2)
            return r2
    }

    @Override
    public void onProvisionCompleted() {
            r2 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r2.provisioningSessions
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession) r1
            r1.onProvisionCompleted()
            goto L6
        L16:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r2.provisioningSessions
            r0.clear()
            return
    }

    @Override
    public void onProvisionError(java.lang.Exception r3) {
            r2 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r2.provisioningSessions
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession) r1
            r1.onProvisionError(r3)
            goto L6
        L16:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r3 = r2.provisioningSessions
            r3.clear()
            return
    }

    @Override
    public void provisionRequired(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T> r3) {
            r2 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r2.provisioningSessions
            r0.add(r3)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r2.provisioningSessions
            int r0 = r0.size()
            r1 = 1
            if (r0 != r1) goto L11
            r3.provision()
        L11:
            return
    }

    @Override
    public void releaseSession(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<T> r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.mbridge.msdk.playercommon.exoplayer2.drm.ErrorStateDrmSession
            if (r0 == 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r4 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession) r4
            boolean r0 = r4.release()
            if (r0 == 0) goto L34
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r3.sessions
            r0.remove(r4)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r3.provisioningSessions
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto L2f
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r3.provisioningSessions
            r2 = 0
            java.lang.Object r0 = r0.get(r2)
            if (r0 != r4) goto L2f
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r3.provisioningSessions
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession r0 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession) r0
            r0.provision()
        L2f:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r3.provisioningSessions
            r0.remove(r4)
        L34:
            return
    }

    public final void removeListener(com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.removeListener(r2)
            return
    }

    public void setMode(int r2, byte[] r3) {
            r1 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSession<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto>> r0 = r1.sessions
            boolean r0 = r0.isEmpty()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r0 = 1
            if (r2 == r0) goto Lf
            r0 = 3
            if (r2 != r0) goto L12
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
        L12:
            r1.mode = r2
            r1.offlineLicenseKeySetId = r3
            return
    }

    public final void setPropertyByteArray(java.lang.String r2, byte[] r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.mediaDrm
            r0.setPropertyByteArray(r2, r3)
            return
    }

    public final void setPropertyString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaDrm<T extends com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r1.mediaDrm
            r0.setPropertyString(r2, r3)
            return
    }
}
