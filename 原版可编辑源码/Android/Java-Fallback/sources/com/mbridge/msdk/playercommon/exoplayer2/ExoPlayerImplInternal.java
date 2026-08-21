package com.mbridge.msdk.playercommon.exoplayer2;

final class ExoPlayerImplInternal implements android.os.Handler.Callback, com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock.PlaybackParameterListener, com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Sender, com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector.InvalidationListener {
    private static final long DEFAULT_RELEASE_TIMEOUT_MS = 500;
    private static final int IDLE_INTERVAL_MS = 1000;
    private static final int MSG_DO_SOME_WORK = 2;
    public static final int MSG_ERROR = 2;
    private static final int MSG_PERIOD_PREPARED = 9;
    public static final int MSG_PLAYBACK_INFO_CHANGED = 0;
    public static final int MSG_PLAYBACK_PARAMETERS_CHANGED = 1;
    private static final int MSG_PREPARE = 0;
    private static final int MSG_REFRESH_SOURCE_INFO = 8;
    private static final int MSG_RELEASE = 7;
    private static final int MSG_SEEK_TO = 3;
    private static final int MSG_SEND_MESSAGE = 14;
    private static final int MSG_SEND_MESSAGE_TO_TARGET_THREAD = 15;
    private static final int MSG_SET_PLAYBACK_PARAMETERS = 4;
    private static final int MSG_SET_PLAY_WHEN_READY = 1;
    private static final int MSG_SET_REPEAT_MODE = 12;
    private static final int MSG_SET_SEEK_PARAMETERS = 5;
    private static final int MSG_SET_SHUFFLE_ENABLED = 13;
    private static final int MSG_SOURCE_CONTINUE_LOADING_REQUESTED = 10;
    private static final int MSG_STOP = 6;
    private static final int MSG_TRACK_SELECTION_INVALIDATED = 11;
    private static final int PREPARING_SOURCE_INTERVAL_MS = 10;
    private static final int RENDERING_INTERVAL_MS = 10;
    private static final java.lang.String TAG = "ExoPlayerImplInternal";
    private final long backBufferDurationUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.Clock clock;
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult emptyTrackSelectorResult;
    private com.mbridge.msdk.playercommon.exoplayer2.Renderer[] enabledRenderers;
    private final android.os.Handler eventHandler;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper handler;
    private final android.os.HandlerThread internalPlaybackThread;
    private final com.mbridge.msdk.playercommon.exoplayer2.LoadControl loadControl;
    private final com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock mediaClock;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
    private int nextPendingMessageIndex;
    private com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.SeekPosition pendingInitialSeekPosition;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo> pendingMessages;
    private int pendingPrepareCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period period;
    private boolean playWhenReady;
    private com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo playbackInfo;
    private final com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PlaybackInfoUpdate playbackInfoUpdate;
    private final com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer player;
    private final com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue queue;
    private boolean rebuffering;
    private boolean released;
    private final com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] rendererCapabilities;
    private long rendererPositionUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.Renderer[] renderers;
    private int repeatMode;
    private final boolean retainBackBufferFromKeyframe;
    private com.mbridge.msdk.playercommon.exoplayer2.SeekParameters seekParameters;
    private boolean shuffleModeEnabled;
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector trackSelector;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window window;


    private static final class MediaSourceRefreshInfo {
        public final java.lang.Object manifest;
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource source;
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;

        public MediaSourceRefreshInfo(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1, com.mbridge.msdk.playercommon.exoplayer2.Timeline r2, java.lang.Object r3) {
                r0 = this;
                r0.<init>()
                r0.source = r1
                r0.timeline = r2
                r0.manifest = r3
                return
        }
    }

    private static final class PendingMessageInfo implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo> {
        public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage message;
        public int resolvedPeriodIndex;
        public long resolvedPeriodTimeUs;
        public java.lang.Object resolvedPeriodUid;

        public PendingMessageInfo(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1) {
                r0 = this;
                r0.<init>()
                r0.message = r1
                return
        }

        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo r5) {
                r4 = this;
                java.lang.Object r0 = r4.resolvedPeriodUid
                r1 = 1
                r2 = 0
                if (r0 != 0) goto L8
                r0 = r1
                goto L9
            L8:
                r0 = r2
            L9:
                java.lang.Object r3 = r5.resolvedPeriodUid
                if (r3 != 0) goto Lf
                r3 = r1
                goto L10
            Lf:
                r3 = r2
            L10:
                if (r0 == r3) goto L18
                java.lang.Object r5 = r4.resolvedPeriodUid
                if (r5 == 0) goto L17
                r1 = -1
            L17:
                return r1
            L18:
                java.lang.Object r0 = r4.resolvedPeriodUid
                if (r0 != 0) goto L1d
                return r2
            L1d:
                int r0 = r4.resolvedPeriodIndex
                int r1 = r5.resolvedPeriodIndex
                int r0 = r0 - r1
                if (r0 == 0) goto L25
                return r0
            L25:
                long r0 = r4.resolvedPeriodTimeUs
                long r2 = r5.resolvedPeriodTimeUs
                int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.compareLong(r0, r2)
                return r5
        }

        @Override
        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
                int r1 = r0.compareTo(r1)
                return r1
        }

        public final void setResolvedPosition(int r1, long r2, java.lang.Object r4) {
                r0 = this;
                r0.resolvedPeriodIndex = r1
                r0.resolvedPeriodTimeUs = r2
                r0.resolvedPeriodUid = r4
                return
        }
    }

    private static final class PlaybackInfoUpdate {
        private int discontinuityReason;
        private com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo lastPlaybackInfo;
        private int operationAcks;
        private boolean positionDiscontinuity;

        private PlaybackInfoUpdate() {
                r0 = this;
                r0.<init>()
                return
        }

        PlaybackInfoUpdate(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static int access$100(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PlaybackInfoUpdate r0) {
                int r0 = r0.operationAcks
                return r0
        }

        static boolean access$200(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PlaybackInfoUpdate r0) {
                boolean r0 = r0.positionDiscontinuity
                return r0
        }

        static int access$300(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PlaybackInfoUpdate r0) {
                int r0 = r0.discontinuityReason
                return r0
        }

        public final boolean hasPendingUpdate(com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.lastPlaybackInfo
                if (r2 != r0) goto Lf
                int r2 = r1.operationAcks
                if (r2 > 0) goto Lf
                boolean r2 = r1.positionDiscontinuity
                if (r2 == 0) goto Ld
                goto Lf
            Ld:
                r2 = 0
                goto L10
            Lf:
                r2 = 1
            L10:
                return r2
        }

        public final void incrementPendingOperationAcks(int r2) {
                r1 = this;
                int r0 = r1.operationAcks
                int r0 = r0 + r2
                r1.operationAcks = r0
                return
        }

        public final void reset(com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1) {
                r0 = this;
                r0.lastPlaybackInfo = r1
                r1 = 0
                r0.operationAcks = r1
                r0.positionDiscontinuity = r1
                return
        }

        public final void setPositionDiscontinuity(int r4) {
                r3 = this;
                boolean r0 = r3.positionDiscontinuity
                r1 = 1
                if (r0 == 0) goto L12
                int r0 = r3.discontinuityReason
                r2 = 4
                if (r0 == r2) goto L12
                if (r4 != r2) goto Ld
                goto Le
            Ld:
                r1 = 0
            Le:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
                return
            L12:
                r3.positionDiscontinuity = r1
                r3.discontinuityReason = r4
                return
        }
    }

    private static final class SeekPosition {
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;
        public final int windowIndex;
        public final long windowPositionUs;

        public SeekPosition(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, int r2, long r3) {
                r0 = this;
                r0.<init>()
                r0.timeline = r1
                r0.windowIndex = r2
                r0.windowPositionUs = r3
                return
        }
    }

    public ExoPlayerImplInternal(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r11, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r12, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r13, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r14, boolean r15, int r16, boolean r17, android.os.Handler r18, com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r19, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r20) {
            r10 = this;
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r20
            r10.<init>()
            r0.renderers = r1
            r0.trackSelector = r2
            r4 = r13
            r0.emptyTrackSelectorResult = r4
            r5 = r14
            r0.loadControl = r5
            r6 = r15
            r0.playWhenReady = r6
            r6 = r16
            r0.repeatMode = r6
            r6 = r17
            r0.shuffleModeEnabled = r6
            r6 = r18
            r0.eventHandler = r6
            r6 = r19
            r0.player = r6
            r0.clock = r3
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r6 = new com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue
            r6.<init>()
            r0.queue = r6
            long r6 = r14.getBackBufferDurationUs()
            r0.backBufferDurationUs = r6
            boolean r5 = r14.retainBackBufferFromKeyframe()
            r0.retainBackBufferFromKeyframe = r5
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r5 = com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.DEFAULT
            r0.seekParameters = r5
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r5 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r6 = com.mbridge.msdk.playercommon.exoplayer2.Timeline.EMPTY
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r7 = com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.EMPTY
            r8 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r14 = r5
            r15 = r6
            r16 = r8
            r18 = r7
            r19 = r13
            r14.<init>(r15, r16, r18, r19)
            r0.playbackInfo = r5
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r4 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate
            r5 = 0
            r4.<init>(r5)
            r0.playbackInfoUpdate = r4
            int r4 = r1.length
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r4 = new com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[r4]
            r0.rendererCapabilities = r4
            r4 = 0
            r5 = r4
        L65:
            int r6 = r1.length
            if (r5 >= r6) goto L7a
            r6 = r1[r5]
            r6.setIndex(r5)
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r6 = r0.rendererCapabilities
            r7 = r1[r5]
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities r7 = r7.getCapabilities()
            r6[r5] = r7
            int r5 = r5 + 1
            goto L65
        L7a:
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r1 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock
            r1.<init>(r10, r3)
            r0.mediaClock = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.pendingMessages = r1
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.Renderer[r4]
            r0.enabledRenderers = r1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r1 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
            r1.<init>()
            r0.window = r1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period
            r1.<init>()
            r0.period = r1
            r12.init(r10)
            android.os.HandlerThread r1 = new android.os.HandlerThread
            r2 = -16
            java.lang.String r4 = "ExoPlayerImplInternal:Handler"
            r1.<init>(r4, r2)
            r0.internalPlaybackThread = r1
            r1.start()
            android.os.HandlerThread r1 = r0.internalPlaybackThread
            android.os.Looper r1 = r1.getLooper()
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r1 = r3.createHandler(r1, r10)
            r0.handler = r1
            return
    }

    static void access$400(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0, com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0.deliverMessage(r1)
            return
    }

    private void deliverMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            boolean r0 = r5.isCanceled()
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 1
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage$Target r1 = r5.getTarget()     // Catch: java.lang.Throwable -> L1b
            int r2 = r5.getType()     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r3 = r5.getPayload()     // Catch: java.lang.Throwable -> L1b
            r1.handleMessage(r2, r3)     // Catch: java.lang.Throwable -> L1b
            r5.markAsProcessed(r0)
            return
        L1b:
            r1 = move-exception
            r5.markAsProcessed(r0)
            throw r1
    }

    private void disableRenderer(com.mbridge.msdk.playercommon.exoplayer2.Renderer r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r0 = r1.mediaClock
            r0.onRendererDisabled(r2)
            r1.ensureStopped(r2)
            r2.disable()
            return
    }

    private void doSomeWork() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException, java.io.IOException {
            r17 = this;
            r0 = r17
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r1 = r0.clock
            long r1 = r1.uptimeMillis()
            r17.updatePeriods()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r0.queue
            boolean r3 = r3.hasPlayingPeriod()
            r4 = 10
            if (r3 != 0) goto L1c
            r17.maybeThrowPeriodPrepareError()
            r0.scheduleNextWork(r1, r4)
            return
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r3.getPlayingPeriod()
            java.lang.String r6 = "doSomeWork"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r6)
            r17.updatePlaybackPositions()
            long r6 = android.os.SystemClock.elapsedRealtime()
            r8 = 1000(0x3e8, double:4.94E-321)
            long r6 = r6 * r8
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r10 = r3.mediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r11 = r0.playbackInfo
            long r11 = r11.positionUs
            long r13 = r0.backBufferDurationUs
            long r11 = r11 - r13
            boolean r13 = r0.retainBackBufferFromKeyframe
            r10.discardBuffer(r11, r13)
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r10 = r0.enabledRenderers
            int r11 = r10.length
            r13 = 1
            r15 = r13
            r16 = r15
            r14 = 0
        L47:
            if (r14 >= r11) goto L84
            r12 = r10[r14]
            long r8 = r0.rendererPositionUs
            r12.render(r8, r6)
            if (r16 == 0) goto L5b
            boolean r8 = r12.isEnded()
            if (r8 == 0) goto L5b
            r16 = r13
            goto L5d
        L5b:
            r16 = 0
        L5d:
            boolean r8 = r12.isReady()
            if (r8 != 0) goto L72
            boolean r8 = r12.isEnded()
            if (r8 != 0) goto L72
            boolean r8 = r0.rendererWaitingForNextStream(r12)
            if (r8 == 0) goto L70
            goto L72
        L70:
            r8 = 0
            goto L73
        L72:
            r8 = r13
        L73:
            if (r8 != 0) goto L78
            r12.maybeThrowStreamError()
        L78:
            if (r15 == 0) goto L7e
            if (r8 == 0) goto L7e
            r15 = r13
            goto L7f
        L7e:
            r15 = 0
        L7f:
            int r14 = r14 + 1
            r8 = 1000(0x3e8, double:4.94E-321)
            goto L47
        L84:
            if (r15 != 0) goto L89
            r17.maybeThrowPeriodPrepareError()
        L89:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r6 = r3.info
            long r6 = r6.durationUs
            r8 = 4
            r9 = 3
            r10 = 2
            if (r16 == 0) goto Lb0
            r11 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r11 = (r6 > r11 ? 1 : (r6 == r11 ? 0 : -1))
            if (r11 == 0) goto La3
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r11 = r0.playbackInfo
            long r11 = r11.positionUs
            int r6 = (r6 > r11 ? 1 : (r6 == r11 ? 0 : -1))
            if (r6 > 0) goto Lb0
        La3:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r3.info
            boolean r3 = r3.isFinal
            if (r3 == 0) goto Lb0
            r0.setState(r8)
            r17.stopRenderers()
            goto Le5
        Lb0:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r0.playbackInfo
            int r3 = r3.playbackState
            if (r3 != r10) goto Lc7
            boolean r3 = r0.shouldTransitionToReadyState(r15)
            if (r3 == 0) goto Lc7
            r0.setState(r9)
            boolean r3 = r0.playWhenReady
            if (r3 == 0) goto Le5
            r17.startRenderers()
            goto Le5
        Lc7:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r0.playbackInfo
            int r3 = r3.playbackState
            if (r3 != r9) goto Le5
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r3 = r0.enabledRenderers
            int r3 = r3.length
            if (r3 != 0) goto Ld9
            boolean r3 = r17.isTimelineReady()
            if (r3 == 0) goto Ldb
            goto Le5
        Ld9:
            if (r15 != 0) goto Le5
        Ldb:
            boolean r3 = r0.playWhenReady
            r0.rebuffering = r3
            r0.setState(r10)
            r17.stopRenderers()
        Le5:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r0.playbackInfo
            int r3 = r3.playbackState
            if (r3 != r10) goto Lf9
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r3 = r0.enabledRenderers
            int r6 = r3.length
            r12 = 0
        Lef:
            if (r12 >= r6) goto Lf9
            r7 = r3[r12]
            r7.maybeThrowStreamError()
            int r12 = r12 + 1
            goto Lef
        Lf9:
            boolean r3 = r0.playWhenReady
            if (r3 == 0) goto L103
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r0.playbackInfo
            int r3 = r3.playbackState
            if (r3 == r9) goto L109
        L103:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r0.playbackInfo
            int r3 = r3.playbackState
            if (r3 != r10) goto L10d
        L109:
            r0.scheduleNextWork(r1, r4)
            goto L123
        L10d:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r3 = r0.enabledRenderers
            int r3 = r3.length
            if (r3 == 0) goto L11e
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r0.playbackInfo
            int r3 = r3.playbackState
            if (r3 == r8) goto L11e
            r3 = 1000(0x3e8, double:4.94E-321)
            r0.scheduleNextWork(r1, r3)
            goto L123
        L11e:
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r1 = r0.handler
            r1.removeMessages(r10)
        L123:
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()
            return
    }

    private void enableRenderer(int r12, boolean r13, int r14) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r11 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r11.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1 = r11.renderers
            r1 = r1[r12]
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r2 = r11.enabledRenderers
            r2[r14] = r1
            int r14 = r1.getState()
            if (r14 != 0) goto L55
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r14 = r0.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r14 = r14.rendererConfigurations
            r3 = r14[r12]
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r14 = r0.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r14 = r14.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r14 = r14.get(r12)
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r4 = getFormats(r14)
            boolean r14 = r11.playWhenReady
            r2 = 1
            r5 = 0
            if (r14 == 0) goto L35
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r14 = r11.playbackInfo
            int r14 = r14.playbackState
            r6 = 3
            if (r14 != r6) goto L35
            r14 = r2
            goto L36
        L35:
            r14 = r5
        L36:
            if (r13 != 0) goto L3c
            if (r14 == 0) goto L3c
            r8 = r2
            goto L3d
        L3c:
            r8 = r5
        L3d:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r13 = r0.sampleStreams
            r5 = r13[r12]
            long r6 = r11.rendererPositionUs
            long r9 = r0.getRendererOffset()
            r2 = r1
            r2.enable(r3, r4, r5, r6, r8, r9)
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r12 = r11.mediaClock
            r12.onRendererEnabled(r1)
            if (r14 == 0) goto L55
            r1.start()
        L55:
            return
    }

    private void enableRenderers(boolean[] r5, int r6) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r6 = new com.mbridge.msdk.playercommon.exoplayer2.Renderer[r6]
            r4.enabledRenderers = r6
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r6 = r4.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r6 = r6.getPlayingPeriod()
            r0 = 0
            r1 = r0
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r2 = r4.renderers
            int r2 = r2.length
            if (r0 >= r2) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r2 = r6.trackSelectorResult
            boolean r2 = r2.isRendererEnabled(r0)
            if (r2 == 0) goto L21
            boolean r2 = r5[r0]
            int r3 = r1 + 1
            r4.enableRenderer(r0, r2, r1)
            r1 = r3
        L21:
            int r0 = r0 + 1
            goto Lc
        L24:
            return
    }

    private void ensureStopped(com.mbridge.msdk.playercommon.exoplayer2.Renderer r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            int r0 = r3.getState()
            r1 = 2
            if (r0 != r1) goto La
            r3.stop()
        La:
            return
    }

    private int getFirstPeriodIndex() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto Lc
            r0 = 0
            goto L1a
        Lc:
            boolean r1 = r3.shuffleModeEnabled
            int r1 = r0.getFirstWindowIndex(r1)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r3.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r0.getWindow(r1, r2)
            int r0 = r0.firstPeriodIndex
        L1a:
            return r0
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.Format[] getFormats(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r4) {
            r0 = 0
            if (r4 == 0) goto L8
            int r1 = r4.length()
            goto L9
        L8:
            r1 = r0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r1]
        Lb:
            if (r0 >= r1) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r4.getFormat(r0)
            r2[r0] = r3
            int r0 = r0 + 1
            goto Lb
        L16:
            return r2
    }

    private android.util.Pair<java.lang.Integer, java.lang.Long> getPeriodPosition(com.mbridge.msdk.playercommon.exoplayer2.Timeline r7, int r8, long r9) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r1 = r6.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r6.period
            r0 = r7
            r3 = r8
            r4 = r9
            android.util.Pair r7 = r0.getPeriodPosition(r1, r2, r3, r4)
            return r7
    }

    private void handleContinueLoadingRequested(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r2.queue
            boolean r3 = r0.isLoading(r3)
            if (r3 != 0) goto L9
            return
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r2.queue
            long r0 = r2.rendererPositionUs
            r3.reevaluateBuffer(r0)
            r2.maybeContinueLoading()
            return
    }

    private void handlePeriodPrepared(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r2.queue
            boolean r3 = r0.isLoading(r3)
            if (r3 != 0) goto L9
            return
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r2.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r3.getLoadingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r0 = r2.mediaClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.getPlaybackParameters()
            float r0 = r0.speed
            r3.handlePrepared(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r3.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r3 = r3.trackSelectorResult
            r2.updateLoadControlTrackSelection(r0, r3)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r2.queue
            boolean r3 = r3.hasPlayingPeriod()
            if (r3 != 0) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r2.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r3.advancePlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r3.info
            long r0 = r3.startPositionUs
            r2.resetRendererPosition(r0)
            r3 = 0
            r2.updatePlayingPeriodRenderers(r3)
        L3a:
            r2.maybeContinueLoading()
            return
    }

    private void handleSourceInfoRefreshEndedPlayback() {
            r2 = this;
            r0 = 4
            r2.setState(r0)
            r0 = 0
            r1 = 1
            r2.resetInternal(r0, r1, r0)
            return
    }

    private void handleSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.MediaSourceRefreshInfo r20) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r19 = this;
            r0 = r19
            r1 = r20
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r1.source
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3 = r0.mediaSource
            if (r2 == r3) goto Lb
            return
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r2.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r1.timeline
            java.lang.Object r1 = r1.manifest
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r4 = r0.queue
            r4.setTimeline(r3)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r4 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r4.copyWithTimeline(r3, r1)
            r0.playbackInfo = r1
            r19.resolvePendingMessagePositions()
            int r1 = r0.pendingPrepareCount
            r4 = 0
            r5 = 1
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            if (r1 <= 0) goto Lb5
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r2 = r0.playbackInfoUpdate
            r2.incrementPendingOperationAcks(r1)
            r0.pendingPrepareCount = r4
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$SeekPosition r1 = r0.pendingInitialSeekPosition
            if (r1 == 0) goto L71
            android.util.Pair r1 = r0.resolveSeekPosition(r1, r5)
            r2 = 0
            r0.pendingInitialSeekPosition = r2
            if (r1 != 0) goto L49
            r19.handleSourceInfoRefreshEndedPlayback()
            goto Lb4
        L49:
            java.lang.Object r2 = r1.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.Object r1 = r1.second
            java.lang.Long r1 = (java.lang.Long) r1
            long r14 = r1.longValue()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r1 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r11 = r1.resolveMediaPeriodIdForAds(r2, r14)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r10 = r0.playbackInfo
            boolean r1 = r11.isAd()
            if (r1 == 0) goto L69
            r12 = r8
            goto L6a
        L69:
            r12 = r14
        L6a:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r10.fromNewPosition(r11, r12, r14)
            r0.playbackInfo = r1
            goto Lb4
        L71:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r0.playbackInfo
            long r1 = r1.startPositionUs
            int r1 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r1 != 0) goto Lb4
            boolean r1 = r3.isEmpty()
            if (r1 == 0) goto L83
            r19.handleSourceInfoRefreshEndedPlayback()
            goto Lb4
        L83:
            boolean r1 = r0.shuffleModeEnabled
            int r1 = r3.getFirstWindowIndex(r1)
            android.util.Pair r1 = r0.getPeriodPosition(r3, r1, r6)
            java.lang.Object r2 = r1.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.Object r1 = r1.second
            java.lang.Long r1 = (java.lang.Long) r1
            long r14 = r1.longValue()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r1 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r11 = r1.resolveMediaPeriodIdForAds(r2, r14)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r10 = r0.playbackInfo
            boolean r1 = r11.isAd()
            if (r1 == 0) goto Lad
            r12 = r8
            goto Lae
        Lad:
            r12 = r14
        Lae:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r10.fromNewPosition(r11, r12, r14)
            r0.playbackInfo = r1
        Lb4:
            return
        Lb5:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.periodId
            int r1 = r1.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r10 = r0.playbackInfo
            long r13 = r10.contentPositionUs
            boolean r10 = r2.isEmpty()
            if (r10 == 0) goto Le5
            boolean r2 = r3.isEmpty()
            if (r2 != 0) goto Le4
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r12 = r2.resolveMediaPeriodIdForAds(r1, r13)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r11 = r0.playbackInfo
            boolean r1 = r12.isAd()
            if (r1 == 0) goto Lda
            goto Ldb
        Lda:
            r8 = r13
        Ldb:
            r1 = r13
            r13 = r8
            r15 = r1
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r11.fromNewPosition(r12, r13, r15)
            r0.playbackInfo = r1
        Le4:
            return
        Le5:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r10 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r10 = r10.getFrontPeriod()
            if (r10 != 0) goto Lf6
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r11 = r0.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r11 = r2.getPeriod(r1, r11, r5)
            java.lang.Object r11 = r11.uid
            goto Lf8
        Lf6:
            java.lang.Object r11 = r10.uid
        Lf8:
            int r11 = r3.getIndexOfPeriod(r11)
            r12 = -1
            if (r11 != r12) goto L177
            int r1 = r0.resolveSubsequentPeriod(r1, r2, r3)
            if (r1 != r12) goto L109
            r19.handleSourceInfoRefreshEndedPlayback()
            return
        L109:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r0.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r3.getPeriod(r1, r2)
            int r1 = r1.windowIndex
            android.util.Pair r1 = r0.getPeriodPosition(r3, r1, r6)
            java.lang.Object r2 = r1.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.Object r1 = r1.second
            java.lang.Long r1 = (java.lang.Long) r1
            long r6 = r1.longValue()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r1 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r14 = r1.resolveMediaPeriodIdForAds(r2, r6)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r0.period
            r3.getPeriod(r2, r1, r5)
            if (r10 == 0) goto L160
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r0.period
            java.lang.Object r1 = r1.uid
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r10.info
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r3.copyWithPeriodIndex(r12)
            r10.info = r3
        L13e:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r10.next
            if (r3 == 0) goto L160
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r10 = r10.next
            java.lang.Object r3 = r10.uid
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L157
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r4 = r10.info
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r3.getUpdatedMediaPeriodInfo(r4, r2)
            r10.info = r3
            goto L13e
        L157:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r10.info
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r3 = r3.copyWithPeriodIndex(r12)
            r10.info = r3
            goto L13e
        L160:
            boolean r1 = r14.isAd()
            if (r1 == 0) goto L167
            goto L168
        L167:
            r8 = r6
        L168:
            long r15 = r0.seekToPeriodPosition(r14, r8)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r13 = r0.playbackInfo
            r17 = r6
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r13.fromNewPosition(r14, r15, r17)
            r0.playbackInfo = r1
            return
        L177:
            if (r11 == r1) goto L181
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r1.copyWithPeriodIndex(r11)
            r0.playbackInfo = r1
        L181:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.periodId
            boolean r2 = r1.isAd()
            if (r2 == 0) goto L1af
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r0.queue
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r12 = r2.resolveMediaPeriodIdForAds(r11, r13)
            boolean r2 = r12.equals(r1)
            if (r2 != 0) goto L1af
            boolean r1 = r12.isAd()
            if (r1 == 0) goto L19e
            goto L19f
        L19e:
            r8 = r13
        L19f:
            long r1 = r0.seekToPeriodPosition(r12, r8)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r11 = r0.playbackInfo
            r3 = r13
            r13 = r1
            r15 = r3
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r11.fromNewPosition(r12, r13, r15)
            r0.playbackInfo = r1
            return
        L1af:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r0.queue
            long r5 = r0.rendererPositionUs
            boolean r1 = r2.updateQueuedPeriods(r1, r5)
            if (r1 != 0) goto L1bc
            r0.seekToCurrentPosition(r4)
        L1bc:
            return
    }

    private boolean isTimelineReady() {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r5.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r1 = r0.info
            long r1 = r1.durationUs
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r5.playbackInfo
            long r3 = r3.positionUs
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 < 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r0.next
            if (r1 == 0) goto L32
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r0.next
            boolean r1 = r1.prepared
            if (r1 != 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.id
            boolean r0 = r0.isAd()
            if (r0 == 0) goto L32
            goto L34
        L32:
            r0 = 0
            goto L35
        L34:
            r0 = 1
        L35:
            return r0
    }

    private void maybeContinueLoading() {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r5.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getLoadingPeriod()
            long r1 = r0.getNextLoadPositionUs()
            r3 = -9223372036854775808
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L15
            r0 = 0
            r5.setIsLoading(r0)
            return
        L15:
            long r3 = r5.rendererPositionUs
            long r3 = r0.toPeriodTime(r3)
            long r1 = r1 - r3
            com.mbridge.msdk.playercommon.exoplayer2.LoadControl r3 = r5.loadControl
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r4 = r5.mediaClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r4 = r4.getPlaybackParameters()
            float r4 = r4.speed
            boolean r1 = r3.shouldContinueLoading(r1, r4)
            r5.setIsLoading(r1)
            if (r1 == 0) goto L34
            long r1 = r5.rendererPositionUs
            r0.continueLoading(r1)
        L34:
            return
    }

    private void maybeNotifyPlaybackInfoChanged() {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r0 = r5.playbackInfoUpdate
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r5.playbackInfo
            boolean r0 = r0.hasPendingUpdate(r1)
            if (r0 == 0) goto L33
            android.os.Handler r0 = r5.eventHandler
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r2 = r5.playbackInfoUpdate
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PlaybackInfoUpdate.access$100(r2)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r3 = r5.playbackInfoUpdate
            boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PlaybackInfoUpdate.access$200(r3)
            if (r3 == 0) goto L22
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r3 = r5.playbackInfoUpdate
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PlaybackInfoUpdate.access$300(r3)
            goto L23
        L22:
            r3 = -1
        L23:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r4 = r5.playbackInfo
            android.os.Message r0 = r0.obtainMessage(r1, r2, r3, r4)
            r0.sendToTarget()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r0 = r5.playbackInfoUpdate
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r5.playbackInfo
            r0.reset(r1)
        L33:
            return
    }

    private void maybeThrowPeriodPrepareError() throws java.io.IOException {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r5.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getLoadingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r1 = r5.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r1.getReadingPeriod()
            if (r0 == 0) goto L2f
            boolean r2 = r0.prepared
            if (r2 != 0) goto L2f
            if (r1 == 0) goto L18
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r1.next
            if (r1 != r0) goto L2f
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1 = r5.enabledRenderers
            int r2 = r1.length
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2a
            r4 = r1[r3]
            boolean r4 = r4.hasReadStreamToEnd()
            if (r4 != 0) goto L27
            return
        L27:
            int r3 = r3 + 1
            goto L1c
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r0.mediaPeriod
            r0.maybeThrowPrepareError()
        L2f:
            return
    }

    private void maybeTriggerPendingMessages(long r6, long r8) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r5 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r0 = r5.pendingMessages
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Led
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r5.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId
            boolean r0 = r0.isAd()
            if (r0 == 0) goto L14
            goto Led
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r5.playbackInfo
            long r0 = r0.startPositionUs
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 != 0) goto L1f
            r0 = 1
            long r6 = r6 - r0
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r5.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId
            int r0 = r0.periodIndex
            int r1 = r5.nextPendingMessageIndex
            r2 = 0
            if (r1 <= 0) goto L35
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r3 = r5.pendingMessages
            int r1 = r1 + (-1)
            java.lang.Object r1 = r3.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
            goto L36
        L35:
            r1 = r2
        L36:
            if (r1 == 0) goto L59
            int r3 = r1.resolvedPeriodIndex
            if (r3 > r0) goto L46
            int r3 = r1.resolvedPeriodIndex
            if (r3 != r0) goto L59
            long r3 = r1.resolvedPeriodTimeUs
            int r1 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r1 <= 0) goto L59
        L46:
            int r1 = r5.nextPendingMessageIndex
            int r1 = r1 + (-1)
            r5.nextPendingMessageIndex = r1
            if (r1 <= 0) goto L35
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r3 = r5.pendingMessages
            int r1 = r1 + (-1)
            java.lang.Object r1 = r3.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
            goto L36
        L59:
            int r1 = r5.nextPendingMessageIndex
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r3 = r5.pendingMessages
            int r3 = r3.size()
            if (r1 >= r3) goto L6e
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r1 = r5.pendingMessages
            int r3 = r5.nextPendingMessageIndex
            java.lang.Object r1 = r1.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
            goto L6f
        L6e:
            r1 = r2
        L6f:
            if (r1 == 0) goto L9c
            java.lang.Object r3 = r1.resolvedPeriodUid
            if (r3 == 0) goto L9c
            int r3 = r1.resolvedPeriodIndex
            if (r3 < r0) goto L83
            int r3 = r1.resolvedPeriodIndex
            if (r3 != r0) goto L9c
            long r3 = r1.resolvedPeriodTimeUs
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 > 0) goto L9c
        L83:
            int r1 = r5.nextPendingMessageIndex
            int r1 = r1 + 1
            r5.nextPendingMessageIndex = r1
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r3 = r5.pendingMessages
            int r3 = r3.size()
            if (r1 >= r3) goto L6e
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r1 = r5.pendingMessages
            int r3 = r5.nextPendingMessageIndex
            java.lang.Object r1 = r1.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
            goto L6f
        L9c:
            if (r1 == 0) goto Led
            java.lang.Object r3 = r1.resolvedPeriodUid
            if (r3 == 0) goto Led
            int r3 = r1.resolvedPeriodIndex
            if (r3 != r0) goto Led
            long r3 = r1.resolvedPeriodTimeUs
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 <= 0) goto Led
            long r3 = r1.resolvedPeriodTimeUs
            int r3 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r3 > 0) goto Led
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r1.message
            r5.sendMessageToTarget(r3)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r1.message
            boolean r3 = r3.getDeleteAfterDelivery()
            if (r3 != 0) goto Lcf
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1 = r1.message
            boolean r1 = r1.isCanceled()
            if (r1 == 0) goto Lc8
            goto Lcf
        Lc8:
            int r1 = r5.nextPendingMessageIndex
            int r1 = r1 + 1
            r5.nextPendingMessageIndex = r1
            goto Ld6
        Lcf:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r1 = r5.pendingMessages
            int r3 = r5.nextPendingMessageIndex
            r1.remove(r3)
        Ld6:
            int r1 = r5.nextPendingMessageIndex
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r3 = r5.pendingMessages
            int r3 = r3.size()
            if (r1 >= r3) goto Leb
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r1 = r5.pendingMessages
            int r3 = r5.nextPendingMessageIndex
            java.lang.Object r1 = r1.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
            goto L9c
        Leb:
            r1 = r2
            goto L9c
        Led:
            return
    }

    private void maybeUpdateLoadingPeriod() throws java.io.IOException {
            r12 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r12.queue
            long r1 = r12.rendererPositionUs
            r0.reevaluateBuffer(r1)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r12.queue
            boolean r0 = r0.shouldLoadNextMediaPeriod()
            if (r0 == 0) goto L4d
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r12.queue
            long r1 = r12.rendererPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r12.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.getNextMediaPeriodInfo(r1, r3)
            if (r0 != 0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r12.mediaSource
            r0.maybeThrowSourceInfoRefreshError()
            goto L4d
        L21:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r12.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r1.timeline
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = r0.id
            int r2 = r2.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r12.period
            r11 = 1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r1.getPeriod(r2, r3, r11)
            java.lang.Object r9 = r1.uid
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r4 = r12.queue
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r5 = r12.rendererCapabilities
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r6 = r12.trackSelector
            com.mbridge.msdk.playercommon.exoplayer2.LoadControl r1 = r12.loadControl
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r7 = r1.getAllocator()
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r8 = r12.mediaSource
            r10 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r4.enqueueNextMediaPeriod(r5, r6, r7, r8, r9, r10)
            long r2 = r0.startPositionUs
            r1.prepare(r12, r2)
            r12.setIsLoading(r11)
        L4d:
            return
    }

    private void prepareInternal(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3, boolean r4, boolean r5) {
            r2 = this;
            int r0 = r2.pendingPrepareCount
            r1 = 1
            int r0 = r0 + r1
            r2.pendingPrepareCount = r0
            r2.resetInternal(r1, r4, r5)
            com.mbridge.msdk.playercommon.exoplayer2.LoadControl r4 = r2.loadControl
            r4.onPrepared()
            r2.mediaSource = r3
            r4 = 2
            r2.setState(r4)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r5 = r2.player
            r3.prepareSource(r5, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r3 = r2.handler
            r3.sendEmptyMessage(r4)
            return
    }

    private void releaseInternal() {
            r3 = this;
            r0 = 1
            r3.resetInternal(r0, r0, r0)
            com.mbridge.msdk.playercommon.exoplayer2.LoadControl r1 = r3.loadControl
            r1.onReleased()
            r3.setState(r0)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 18
            if (r1 < r2) goto L18
            android.os.HandlerThread r1 = r3.internalPlaybackThread
            r1.quitSafely()
            goto L1d
        L18:
            android.os.HandlerThread r1 = r3.internalPlaybackThread
            r1.quit()
        L1d:
            monitor-enter(r3)
            r3.released = r0     // Catch: java.lang.Throwable -> L25
            r3.notifyAll()     // Catch: java.lang.Throwable -> L25
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L25
            throw r0
    }

    private boolean rendererWaitingForNextStream(com.mbridge.msdk.playercommon.exoplayer2.Renderer r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r2.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getReadingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r0.next
            if (r1 == 0) goto L18
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            boolean r0 = r0.prepared
            if (r0 == 0) goto L18
            boolean r3 = r3.hasReadStreamToEnd()
            if (r3 == 0) goto L18
            r3 = 1
            goto L19
        L18:
            r3 = 0
        L19:
            return r3
    }

    private void reselectTracksInternal() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r15 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r15.queue
            boolean r0 = r0.hasPlayingPeriod()
            if (r0 != 0) goto L9
            return
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r0 = r15.mediaClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.getPlaybackParameters()
            float r0 = r0.speed
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r1 = r15.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r1.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r15.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r2.getReadingPeriod()
            r3 = 1
            r4 = r3
        L1f:
            if (r1 == 0) goto Lfc
            boolean r5 = r1.prepared
            if (r5 != 0) goto L27
            goto Lfc
        L27:
            boolean r5 = r1.selectTracks(r0)
            r6 = 0
            if (r5 == 0) goto Lf5
            r0 = 4
            if (r4 == 0) goto Lc1
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r1 = r15.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r1.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r15.queue
            boolean r2 = r2.removeAfter(r1)
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r4 = r15.renderers
            int r4 = r4.length
            boolean[] r4 = new boolean[r4]
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r5 = r15.playbackInfo
            long r7 = r5.positionUs
            long r7 = r1.applyTrackSelection(r7, r2, r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = r1.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r5 = r1.trackSelectorResult
            r15.updateLoadControlTrackSelection(r2, r5)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r15.playbackInfo
            int r2 = r2.playbackState
            if (r2 == r0) goto L76
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r15.playbackInfo
            long r9 = r2.positionUs
            int r2 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r2 == 0) goto L76
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r9 = r15.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r10 = r9.periodId
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r15.playbackInfo
            long r13 = r2.contentPositionUs
            r11 = r7
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r9.fromNewPosition(r10, r11, r13)
            r15.playbackInfo = r2
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r2 = r15.playbackInfoUpdate
            r2.setPositionDiscontinuity(r0)
            r15.resetRendererPosition(r7)
        L76:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r2 = r15.renderers
            int r2 = r2.length
            boolean[] r2 = new boolean[r2]
            r5 = r6
            r7 = r5
        L7d:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r8 = r15.renderers
            int r9 = r8.length
            if (r5 >= r9) goto Lb1
            r8 = r8[r5]
            int r9 = r8.getState()
            if (r9 == 0) goto L8c
            r9 = r3
            goto L8d
        L8c:
            r9 = r6
        L8d:
            r2[r5] = r9
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r9 = r1.sampleStreams
            r9 = r9[r5]
            if (r9 == 0) goto L97
            int r7 = r7 + 1
        L97:
            boolean r10 = r2[r5]
            if (r10 == 0) goto Lae
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r10 = r8.getStream()
            if (r9 == r10) goto La5
            r15.disableRenderer(r8)
            goto Lae
        La5:
            boolean r9 = r4[r5]
            if (r9 == 0) goto Lae
            long r9 = r15.rendererPositionUs
            r8.resetPosition(r9)
        Lae:
            int r5 = r5 + 1
            goto L7d
        Lb1:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r15.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r4 = r1.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r1.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r3.copyWithTrackInfo(r4, r1)
            r15.playbackInfo = r1
            r15.enableRenderers(r2, r7)
            goto Le2
        Lc1:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r15.queue
            r2.removeAfter(r1)
            boolean r2 = r1.prepared
            if (r2 == 0) goto Le2
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r2 = r1.info
            long r2 = r2.startPositionUs
            long r4 = r15.rendererPositionUs
            long r4 = r1.toPeriodTime(r4)
            long r2 = java.lang.Math.max(r2, r4)
            r1.applyTrackSelection(r2, r6)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = r1.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r1.trackSelectorResult
            r15.updateLoadControlTrackSelection(r2, r1)
        Le2:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r15.playbackInfo
            int r1 = r1.playbackState
            if (r1 == r0) goto Lf4
            r15.maybeContinueLoading()
            r15.updatePlaybackPositions()
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r15.handler
            r1 = 2
            r0.sendEmptyMessage(r1)
        Lf4:
            return
        Lf5:
            if (r1 != r2) goto Lf8
            r4 = r6
        Lf8:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r1.next
            goto L1f
        Lfc:
            return
    }

    private void resetInternal(boolean r17, boolean r18, boolean r19) {
            r16 = this;
            r1 = r16
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r1.handler
            r2 = 2
            r0.removeMessages(r2)
            r2 = 0
            r1.rebuffering = r2
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r0 = r1.mediaClock
            r0.stop()
            r3 = 0
            r1.rendererPositionUs = r3
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r3 = r1.enabledRenderers
            int r4 = r3.length
            r5 = r2
        L18:
            if (r5 >= r4) goto L2d
            r0 = r3[r5]
            r1.disableRenderer(r0)     // Catch: java.lang.RuntimeException -> L20 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> L22
            goto L2a
        L20:
            r0 = move-exception
            goto L23
        L22:
            r0 = move-exception
        L23:
            java.lang.String r6 = "ExoPlayerImplInternal"
            java.lang.String r7 = "Stop failed."
            android.util.Log.e(r6, r7, r0)
        L2a:
            int r5 = r5 + 1
            goto L18
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.Renderer[r2]
            r1.enabledRenderers = r0
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r1.queue
            r3 = r18 ^ 1
            r0.clear(r3)
            r1.setIsLoading(r2)
            r0 = 0
            if (r18 == 0) goto L40
            r1.pendingInitialSeekPosition = r0
        L40:
            if (r19 == 0) goto L68
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r1.queue
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = com.mbridge.msdk.playercommon.exoplayer2.Timeline.EMPTY
            r3.setTimeline(r4)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r3 = r1.pendingMessages
            java.util.Iterator r3 = r3.iterator()
        L4f:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L61
            java.lang.Object r4 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r4 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r4
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r4 = r4.message
            r4.markAsProcessed(r2)
            goto L4f
        L61:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r3 = r1.pendingMessages
            r3.clear()
            r1.nextPendingMessageIndex = r2
        L68:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            if (r19 == 0) goto L6f
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = com.mbridge.msdk.playercommon.exoplayer2.Timeline.EMPTY
            goto L73
        L6f:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r3.timeline
        L73:
            r5 = r3
            if (r19 == 0) goto L78
            r6 = r0
            goto L7d
        L78:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r1.playbackInfo
            java.lang.Object r3 = r3.manifest
            r6 = r3
        L7d:
            if (r18 == 0) goto L89
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            int r4 = r16.getFirstPeriodIndex()
            r3.<init>(r4)
            goto L8d
        L89:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r3.periodId
        L8d:
            r7 = r3
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r18 == 0) goto L97
            r8 = r3
            goto L9b
        L97:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r8 = r1.playbackInfo
            long r8 = r8.positionUs
        L9b:
            if (r18 == 0) goto L9e
            goto La2
        L9e:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r1.playbackInfo
            long r3 = r3.contentPositionUs
        La2:
            r10 = r3
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r1.playbackInfo
            int r12 = r3.playbackState
            r13 = 0
            if (r19 == 0) goto Lad
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3 = com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.EMPTY
            goto Lb1
        Lad:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3 = r3.trackGroups
        Lb1:
            r14 = r3
            if (r19 == 0) goto Lb7
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r3 = r1.emptyTrackSelectorResult
            goto Lbb
        Lb7:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r3 = r3.trackSelectorResult
        Lbb:
            r15 = r3
            r4 = r2
            r4.<init>(r5, r6, r7, r8, r10, r12, r13, r14, r15)
            r1.playbackInfo = r2
            if (r17 == 0) goto Lcd
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r1.mediaSource
            if (r2 == 0) goto Lcd
            r2.releaseSource(r1)
            r1.mediaSource = r0
        Lcd:
            return
    }

    private void resetRendererPosition(long r5) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r4.queue
            boolean r0 = r0.hasPlayingPeriod()
            if (r0 != 0) goto L9
            goto L13
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r4.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            long r5 = r0.toRendererTime(r5)
        L13:
            r4.rendererPositionUs = r5
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r0 = r4.mediaClock
            r0.resetPosition(r5)
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r5 = r4.enabledRenderers
            int r6 = r5.length
            r0 = 0
        L1e:
            if (r0 >= r6) goto L2a
            r1 = r5[r0]
            long r2 = r4.rendererPositionUs
            r1.resetPosition(r2)
            int r0 = r0 + 1
            goto L1e
        L2a:
            return
    }

    private boolean resolvePendingMessagePosition(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo r8) {
            r7 = this;
            java.lang.Object r0 = r8.resolvedPeriodUid
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L50
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$SeekPosition r0 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$SeekPosition
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r8.message
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r3.getTimeline()
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r4 = r8.message
            int r4 = r4.getWindowIndex()
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r8.message
            long r5 = r5.getPositionMs()
            long r5 = com.mbridge.msdk.playercommon.exoplayer2.C.msToUs(r5)
            r0.<init>(r3, r4, r5)
            android.util.Pair r0 = r7.resolveSeekPosition(r0, r2)
            if (r0 != 0) goto L28
            return r2
        L28:
            java.lang.Object r2 = r0.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.Object r3 = r0.second
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r5 = r7.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r5 = r5.timeline
            java.lang.Object r0 = r0.first
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r6 = r7.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r5.getPeriod(r0, r6, r1)
            java.lang.Object r0 = r0.uid
            r8.setResolvedPosition(r2, r3, r0)
            goto L60
        L50:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r7.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            java.lang.Object r3 = r8.resolvedPeriodUid
            int r0 = r0.getIndexOfPeriod(r3)
            r3 = -1
            if (r0 != r3) goto L5e
            return r2
        L5e:
            r8.resolvedPeriodIndex = r0
        L60:
            return r1
    }

    private void resolvePendingMessagePositions() {
            r3 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r0 = r3.pendingMessages
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L2e
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r1 = r3.pendingMessages
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
            boolean r1 = r3.resolvePendingMessagePosition(r1)
            if (r1 != 0) goto L2b
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r1 = r3.pendingMessages
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.PendingMessageInfo) r1
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1 = r1.message
            r2 = 0
            r1.markAsProcessed(r2)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r1 = r3.pendingMessages
            r1.remove(r0)
        L2b:
            int r0 = r0 + (-1)
            goto L8
        L2e:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r0 = r3.pendingMessages
            java.util.Collections.sort(r0)
            return
    }

    private android.util.Pair<java.lang.Integer, java.lang.Long> resolveSeekPosition(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.SeekPosition r11, boolean r12) {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r10.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r11.timeline
            boolean r2 = r0.isEmpty()
            r3 = 0
            if (r2 == 0) goto Le
            return r3
        Le:
            boolean r2 = r1.isEmpty()
            if (r2 == 0) goto L15
            r1 = r0
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r5 = r10.window     // Catch: java.lang.IndexOutOfBoundsException -> L6b
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r6 = r10.period     // Catch: java.lang.IndexOutOfBoundsException -> L6b
            int r7 = r11.windowIndex     // Catch: java.lang.IndexOutOfBoundsException -> L6b
            long r8 = r11.windowPositionUs     // Catch: java.lang.IndexOutOfBoundsException -> L6b
            r4 = r1
            android.util.Pair r11 = r4.getPeriodPosition(r5, r6, r7, r8)     // Catch: java.lang.IndexOutOfBoundsException -> L6b
            if (r0 != r1) goto L25
            return r11
        L25:
            java.lang.Object r2 = r11.first
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r10.period
            r5 = 1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r1.getPeriod(r2, r4, r5)
            java.lang.Object r2 = r2.uid
            int r2 = r0.getIndexOfPeriod(r2)
            r4 = -1
            if (r2 == r4) goto L48
            java.lang.Integer r12 = java.lang.Integer.valueOf(r2)
            java.lang.Object r11 = r11.second
            android.util.Pair r11 = android.util.Pair.create(r12, r11)
            return r11
        L48:
            if (r12 == 0) goto L6a
            java.lang.Object r11 = r11.first
            java.lang.Integer r11 = (java.lang.Integer) r11
            int r11 = r11.intValue()
            int r11 = r10.resolveSubsequentPeriod(r11, r1, r0)
            if (r11 == r4) goto L6a
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r12 = r10.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r11 = r0.getPeriod(r11, r12)
            int r11 = r11.windowIndex
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            android.util.Pair r11 = r10.getPeriodPosition(r0, r11, r1)
            return r11
        L6a:
            return r3
        L6b:
            com.mbridge.msdk.playercommon.exoplayer2.IllegalSeekPositionException r12 = new com.mbridge.msdk.playercommon.exoplayer2.IllegalSeekPositionException
            int r1 = r11.windowIndex
            long r2 = r11.windowPositionUs
            r12.<init>(r0, r1, r2)
            throw r12
    }

    private int resolveSubsequentPeriod(int r10, com.mbridge.msdk.playercommon.exoplayer2.Timeline r11, com.mbridge.msdk.playercommon.exoplayer2.Timeline r12) {
            r9 = this;
            int r0 = r11.getPeriodCount()
            r1 = -1
            r2 = 0
            r4 = r10
            r10 = r1
        L8:
            if (r2 >= r0) goto L2c
            if (r10 != r1) goto L2c
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r5 = r9.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r6 = r9.window
            int r7 = r9.repeatMode
            boolean r8 = r9.shuffleModeEnabled
            r3 = r11
            int r4 = r3.getNextPeriodIndex(r4, r5, r6, r7, r8)
            if (r4 != r1) goto L1c
            goto L2c
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r10 = r9.period
            r3 = 1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r10 = r11.getPeriod(r4, r10, r3)
            java.lang.Object r10 = r10.uid
            int r10 = r12.getIndexOfPeriod(r10)
            int r2 = r2 + 1
            goto L8
        L2c:
            return r10
    }

    private void scheduleNextWork(long r3, long r5) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 2
            r0.removeMessages(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            long r3 = r3 + r5
            r0.sendEmptyMessageAtTime(r1, r3)
            return
    }

    private void seekToCurrentPosition(boolean r8) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r7.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = r0.id
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r7.playbackInfo
            long r0 = r0.positionUs
            r3 = 1
            long r3 = r7.seekToPeriodPosition(r2, r0, r3)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r7.playbackInfo
            long r0 = r0.positionUs
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r7.playbackInfo
            long r5 = r1.contentPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.fromNewPosition(r2, r3, r5)
            r7.playbackInfo = r0
            if (r8 == 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r8 = r7.playbackInfoUpdate
            r0 = 4
            r8.setPositionDiscontinuity(r0)
        L2d:
            return
    }

    private void seekToInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.SeekPosition r21) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r20 = this;
            r1 = r20
            r0 = r21
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r2 = r1.playbackInfoUpdate
            r3 = 1
            r2.incrementPendingOperationAcks(r3)
            android.util.Pair r2 = r1.resolveSeekPosition(r0, r3)
            r4 = 0
            r6 = 0
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r2 != 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            int r9 = r20.getFirstPeriodIndex()
            r2.<init>(r9)
            r15 = r2
            r2 = r3
            r12 = r7
            r18 = r12
            goto L5b
        L27:
            java.lang.Object r9 = r2.first
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            java.lang.Object r10 = r2.second
            java.lang.Long r10 = (java.lang.Long) r10
            long r10 = r10.longValue()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r12 = r1.queue
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r9 = r12.resolveMediaPeriodIdForAds(r9, r10)
            boolean r12 = r9.isAd()
            if (r12 == 0) goto L49
            r2 = r3
            r12 = r4
        L45:
            r15 = r9
            r18 = r10
            goto L5b
        L49:
            java.lang.Object r2 = r2.second
            java.lang.Long r2 = (java.lang.Long) r2
            long r12 = r2.longValue()
            long r14 = r0.windowPositionUs
            int r2 = (r14 > r7 ? 1 : (r14 == r7 ? 0 : -1))
            if (r2 != 0) goto L59
            r2 = r3
            goto L45
        L59:
            r2 = r6
            goto L45
        L5b:
            r9 = 2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r10 = r1.mediaSource     // Catch: java.lang.Throwable -> Lda
            if (r10 == 0) goto Lc6
            int r10 = r1.pendingPrepareCount     // Catch: java.lang.Throwable -> Lda
            if (r10 <= 0) goto L65
            goto Lc6
        L65:
            int r0 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r0 != 0) goto L71
            r0 = 4
            r1.setState(r0)     // Catch: java.lang.Throwable -> Lda
            r1.resetInternal(r6, r3, r6)     // Catch: java.lang.Throwable -> Lda
            goto Lc8
        L71:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo     // Catch: java.lang.Throwable -> Lda
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId     // Catch: java.lang.Throwable -> Lda
            boolean r0 = r15.equals(r0)     // Catch: java.lang.Throwable -> Lda
            if (r0 == 0) goto Lb7
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r1.queue     // Catch: java.lang.Throwable -> Lda
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()     // Catch: java.lang.Throwable -> Lda
            if (r0 == 0) goto L90
            int r4 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r4 == 0) goto L90
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r0.mediaPeriod     // Catch: java.lang.Throwable -> Lda
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r4 = r1.seekParameters     // Catch: java.lang.Throwable -> Lda
            long r4 = r0.getAdjustedSeekPositionUs(r12, r4)     // Catch: java.lang.Throwable -> Lda
            goto L91
        L90:
            r4 = r12
        L91:
            long r7 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r4)     // Catch: java.lang.Throwable -> Lda
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo     // Catch: java.lang.Throwable -> Lda
            long r10 = r0.positionUs     // Catch: java.lang.Throwable -> Lda
            long r10 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r10)     // Catch: java.lang.Throwable -> Lda
            int r0 = (r7 > r10 ? 1 : (r7 == r10 ? 0 : -1))
            if (r0 != 0) goto Lb8
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo     // Catch: java.lang.Throwable -> Lda
            long r3 = r0.positionUs     // Catch: java.lang.Throwable -> Lda
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r14 = r1.playbackInfo
            r16 = r3
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r14.fromNewPosition(r15, r16, r18)
            r1.playbackInfo = r0
            if (r2 == 0) goto Lb6
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r0 = r1.playbackInfoUpdate
            r0.setPositionDiscontinuity(r9)
        Lb6:
            return
        Lb7:
            r4 = r12
        Lb8:
            long r4 = r1.seekToPeriodPosition(r15, r4)     // Catch: java.lang.Throwable -> Lda
            int r0 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r0 == 0) goto Lc1
            goto Lc2
        Lc1:
            r3 = r6
        Lc2:
            r2 = r2 | r3
            r16 = r4
            goto Lca
        Lc6:
            r1.pendingInitialSeekPosition = r0     // Catch: java.lang.Throwable -> Lda
        Lc8:
            r16 = r12
        Lca:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r14 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r14.fromNewPosition(r15, r16, r18)
            r1.playbackInfo = r0
            if (r2 == 0) goto Ld9
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r0 = r1.playbackInfoUpdate
            r0.setPositionDiscontinuity(r9)
        Ld9:
            return
        Lda:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r14 = r1.playbackInfo
            r16 = r12
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r14.fromNewPosition(r15, r16, r18)
            r1.playbackInfo = r3
            if (r2 == 0) goto Lec
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r2 = r1.playbackInfoUpdate
            r2.setPositionDiscontinuity(r9)
        Lec:
            throw r0
    }

    private long seekToPeriodPosition(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r2.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r1 = r2.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r1 = r1.getReadingPeriod()
            if (r0 == r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            long r3 = r2.seekToPeriodPosition(r3, r4, r0)
            return r3
    }

    private long seekToPeriodPosition(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r6, long r7, boolean r9) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r5 = this;
            r5.stopRenderers()
            r0 = 0
            r5.rebuffering = r0
            r1 = 2
            r5.setState(r1)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r5.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r2.getPlayingPeriod()
            r3 = r2
        L11:
            if (r3 == 0) goto L26
            boolean r4 = r5.shouldKeepPeriodHolder(r6, r7, r3)
            if (r4 == 0) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r6 = r5.queue
            r6.removeAfter(r3)
            goto L26
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r3 = r5.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r3 = r3.advancePlayingPeriod()
            goto L11
        L26:
            if (r2 != r3) goto L2a
            if (r9 == 0) goto L3d
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r6 = r5.enabledRenderers
            int r9 = r6.length
            r2 = r0
        L2e:
            if (r2 >= r9) goto L38
            r4 = r6[r2]
            r5.disableRenderer(r4)
            int r2 = r2 + 1
            goto L2e
        L38:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r6 = new com.mbridge.msdk.playercommon.exoplayer2.Renderer[r0]
            r5.enabledRenderers = r6
            r2 = 0
        L3d:
            if (r3 == 0) goto L5f
            r5.updatePlayingPeriodRenderers(r2)
            boolean r6 = r3.hasEnabledTracks
            if (r6 == 0) goto L58
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r6 = r3.mediaPeriod
            long r6 = r6.seekToUs(r7)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r8 = r3.mediaPeriod
            long r2 = r5.backBufferDurationUs
            long r2 = r6 - r2
            boolean r9 = r5.retainBackBufferFromKeyframe
            r8.discardBuffer(r2, r9)
            r7 = r6
        L58:
            r5.resetRendererPosition(r7)
            r5.maybeContinueLoading()
            goto L68
        L5f:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r6 = r5.queue
            r9 = 1
            r6.clear(r9)
            r5.resetRendererPosition(r7)
        L68:
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r6 = r5.handler
            r6.sendEmptyMessage(r1)
            return r7
    }

    private void sendMessageInternal(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            long r0 = r5.getPositionMs()
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L11
            r4.sendMessageToTarget(r5)
            goto L3f
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r4.mediaSource
            if (r0 == 0) goto L35
            int r0 = r4.pendingPrepareCount
            if (r0 <= 0) goto L1a
            goto L35
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r0 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo
            r0.<init>(r5)
            boolean r1 = r4.resolvePendingMessagePosition(r0)
            if (r1 == 0) goto L30
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r5 = r4.pendingMessages
            r5.add(r0)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r5 = r4.pendingMessages
            java.util.Collections.sort(r5)
            goto L3f
        L30:
            r0 = 0
            r5.markAsProcessed(r0)
            goto L3f
        L35:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo> r0 = r4.pendingMessages
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo r1 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PendingMessageInfo
            r1.<init>(r5)
            r0.add(r1)
        L3f:
            return
    }

    private void sendMessageToTarget(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            android.os.Handler r0 = r3.getHandler()
            android.os.Looper r0 = r0.getLooper()
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r1 = r2.handler
            android.os.Looper r1 = r1.getLooper()
            if (r0 != r1) goto L27
            r2.deliverMessage(r3)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r2.playbackInfo
            int r3 = r3.playbackState
            r0 = 3
            r1 = 2
            if (r3 == r0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r2.playbackInfo
            int r3 = r3.playbackState
            if (r3 != r1) goto L32
        L21:
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r3 = r2.handler
            r3.sendEmptyMessage(r1)
            goto L32
        L27:
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 15
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
        L32:
            return
    }

    private void sendMessageToTargetThread(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3) {
            r2 = this;
            android.os.Handler r0 = r3.getHandler()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$1
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    private void setIsLoading(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            boolean r0 = r0.isLoading
            if (r0 == r2) goto Le
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.copyWithIsLoading(r2)
            r1.playbackInfo = r2
        Le:
            return
    }

    private void setPlayWhenReadyInternal(boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            r0 = 0
            r2.rebuffering = r0
            r2.playWhenReady = r3
            if (r3 != 0) goto Le
            r2.stopRenderers()
            r2.updatePlaybackPositions()
            goto L2a
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r2.playbackInfo
            int r3 = r3.playbackState
            r0 = 3
            r1 = 2
            if (r3 != r0) goto L1f
            r2.startRenderers()
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r3 = r2.handler
            r3.sendEmptyMessage(r1)
            goto L2a
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r2.playbackInfo
            int r3 = r3.playbackState
            if (r3 != r1) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r3 = r2.handler
            r3.sendEmptyMessage(r1)
        L2a:
            return
    }

    private void setPlaybackParametersInternal(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r0 = r1.mediaClock
            r0.setPlaybackParameters(r2)
            return
    }

    private void setRepeatModeInternal(int r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r1.repeatMode = r2
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r1.queue
            boolean r2 = r0.updateRepeatMode(r2)
            if (r2 != 0) goto Le
            r2 = 1
            r1.seekToCurrentPosition(r2)
        Le:
            return
    }

    private void setSeekParametersInternal(com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r1) {
            r0 = this;
            r0.seekParameters = r1
            return
    }

    private void setShuffleModeEnabledInternal(boolean r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r1.shuffleModeEnabled = r2
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r1.queue
            boolean r2 = r0.updateShuffleModeEnabled(r2)
            if (r2 != 0) goto Le
            r2 = 1
            r1.seekToCurrentPosition(r2)
        Le:
            return
    }

    private void setState(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            int r0 = r0.playbackState
            if (r0 == r2) goto Le
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.copyWithPlaybackState(r2)
            r1.playbackInfo = r2
        Le:
            return
    }

    private boolean shouldKeepPeriodHolder(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, long r4, com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r6) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r6.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.id
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L36
            boolean r3 = r6.prepared
            if (r3 == 0) goto L36
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r2.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r3.timeline
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r6.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.id
            int r0 = r0.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r2.period
            r3.getPeriod(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r2.period
            int r3 = r3.getAdGroupIndexAfterPositionUs(r4)
            r4 = -1
            if (r3 == r4) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r2.period
            long r3 = r4.getAdGroupTimeUs(r3)
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r5 = r6.info
            long r5 = r5.endPositionUs
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 != 0) goto L36
        L34:
            r3 = 1
            return r3
        L36:
            r3 = 0
            return r3
    }

    private boolean shouldTransitionToReadyState(boolean r8) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r7.enabledRenderers
            int r0 = r0.length
            if (r0 != 0) goto La
            boolean r8 = r7.isTimelineReady()
            return r8
        La:
            r0 = 0
            if (r8 != 0) goto Le
            return r0
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r8 = r7.playbackInfo
            boolean r8 = r8.isLoading
            r1 = 1
            if (r8 != 0) goto L16
            return r1
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r8 = r7.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r8 = r8.getLoadingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r2 = r8.info
            boolean r2 = r2.isFinal
            r2 = r2 ^ r1
            long r2 = r8.getBufferedPositionUs(r2)
            r4 = -9223372036854775808
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L44
            com.mbridge.msdk.playercommon.exoplayer2.LoadControl r4 = r7.loadControl
            long r5 = r7.rendererPositionUs
            long r5 = r8.toPeriodTime(r5)
            long r2 = r2 - r5
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r8 = r7.mediaClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r8 = r8.getPlaybackParameters()
            float r8 = r8.speed
            boolean r5 = r7.rebuffering
            boolean r8 = r4.shouldStartPlayback(r2, r8, r5)
            if (r8 == 0) goto L45
        L44:
            r0 = r1
        L45:
            return r0
    }

    private void startRenderers() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            r0 = 0
            r4.rebuffering = r0
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r1 = r4.mediaClock
            r1.start()
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1 = r4.enabledRenderers
            int r2 = r1.length
        Lb:
            if (r0 >= r2) goto L15
            r3 = r1[r0]
            r3.start()
            int r0 = r0 + 1
            goto Lb
        L15:
            return
    }

    private void stopInternal(boolean r3, boolean r4) {
            r2 = this;
            r0 = 1
            r2.resetInternal(r0, r3, r3)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r3 = r2.playbackInfoUpdate
            int r1 = r2.pendingPrepareCount
            int r1 = r1 + r4
            r3.incrementPendingOperationAcks(r1)
            r3 = 0
            r2.pendingPrepareCount = r3
            com.mbridge.msdk.playercommon.exoplayer2.LoadControl r3 = r2.loadControl
            r3.onStopped()
            r2.setState(r0)
            return
    }

    private void stopRenderers() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r0 = r4.mediaClock
            r0.stop()
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r4.enabledRenderers
            int r1 = r0.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L13
            r3 = r0[r2]
            r4.ensureStopped(r3)
            int r2 = r2 + 1
            goto L9
        L13:
            return
    }

    private void updateLoadControlTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r4) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.LoadControl r0 = r2.loadControl
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1 = r2.renderers
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r4 = r4.selections
            r0.onTracksSelected(r1, r3, r4)
            return
    }

    private void updatePeriods() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException, java.io.IOException {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r13.mediaSource
            if (r0 != 0) goto L5
            return
        L5:
            int r1 = r13.pendingPrepareCount
            if (r1 <= 0) goto Ld
            r0.maybeThrowSourceInfoRefreshError()
            return
        Ld:
            r13.maybeUpdateLoadingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r13.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getLoadingPeriod()
            r1 = 0
            if (r0 == 0) goto L2a
            boolean r0 = r0.isFullyBuffered()
            if (r0 == 0) goto L20
            goto L2a
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r13.playbackInfo
            boolean r0 = r0.isLoading
            if (r0 != 0) goto L2d
            r13.maybeContinueLoading()
            goto L2d
        L2a:
            r13.setIsLoading(r1)
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r13.queue
            boolean r0 = r0.hasPlayingPeriod()
            if (r0 != 0) goto L36
            return
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r13.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r13.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r2.getReadingPeriod()
            r3 = 1
            r4 = r1
        L44:
            boolean r5 = r13.playWhenReady
            if (r5 == 0) goto L8a
            if (r0 == r2) goto L8a
            long r5 = r13.rendererPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r7 = r0.next
            long r7 = r7.rendererPositionOffsetUs
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 < 0) goto L8a
            if (r4 == 0) goto L59
            r13.maybeNotifyPlaybackInfoChanged()
        L59:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r4 = r0.info
            boolean r4 = r4.isLastInTimelinePeriod
            if (r4 == 0) goto L61
            r4 = r1
            goto L62
        L61:
            r4 = 3
        L62:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r5 = r13.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r5 = r5.advancePlayingPeriod()
            r13.updatePlayingPeriodRenderers(r0)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r6 = r13.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r5.info
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r7 = r0.id
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r5.info
            long r8 = r0.startPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r5.info
            long r10 = r0.contentPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r6.fromNewPosition(r7, r8, r10)
            r13.playbackInfo = r0
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r0 = r13.playbackInfoUpdate
            r0.setPositionDiscontinuity(r4)
            r13.updatePlaybackPositions()
            r4 = r3
            r0 = r5
            goto L44
        L8a:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r2.info
            boolean r0 = r0.isFinal
            if (r0 == 0) goto Lb0
        L90:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r13.renderers
            int r3 = r0.length
            if (r1 >= r3) goto Laf
            r0 = r0[r1]
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r3 = r2.sampleStreams
            r3 = r3[r1]
            if (r3 == 0) goto Lac
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r4 = r0.getStream()
            if (r4 != r3) goto Lac
            boolean r3 = r0.hasReadStreamToEnd()
            if (r3 == 0) goto Lac
            r0.setCurrentStreamFinal()
        Lac:
            int r1 = r1 + 1
            goto L90
        Laf:
            return
        Lb0:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.next
            if (r0 == 0) goto L14f
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r2.next
            boolean r0 = r0.prepared
            if (r0 != 0) goto Lbc
            goto L14f
        Lbc:
            r0 = r1
        Lbd:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r4 = r13.renderers
            int r5 = r4.length
            if (r0 >= r5) goto Ldb
            r4 = r4[r0]
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r5 = r2.sampleStreams
            r5 = r5[r0]
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r6 = r4.getStream()
            if (r6 != r5) goto Lda
            if (r5 == 0) goto Ld7
            boolean r4 = r4.hasReadStreamToEnd()
            if (r4 != 0) goto Ld7
            goto Lda
        Ld7:
            int r0 = r0 + 1
            goto Lbd
        Lda:
            return
        Ldb:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r0 = r2.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r2 = r13.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r2 = r2.advanceReadingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r4 = r2.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r5 = r2.mediaPeriod
            long r5 = r5.readDiscontinuity()
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 == 0) goto Lf6
            r5 = r3
            goto Lf7
        Lf6:
            r5 = r1
        Lf7:
            r6 = r1
        Lf8:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r7 = r13.renderers
            int r8 = r7.length
            if (r6 >= r8) goto L14f
            r7 = r7[r6]
            boolean r8 = r0.isRendererEnabled(r6)
            if (r8 != 0) goto L106
            goto L14c
        L106:
            if (r5 == 0) goto L109
            goto L149
        L109:
            boolean r8 = r7.isCurrentStreamFinal()
            if (r8 != 0) goto L14c
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r8 = r4.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r8 = r8.get(r6)
            boolean r9 = r4.isRendererEnabled(r6)
            com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r10 = r13.rendererCapabilities
            r10 = r10[r6]
            int r10 = r10.getTrackType()
            r11 = 5
            if (r10 != r11) goto L126
            r10 = r3
            goto L127
        L126:
            r10 = r1
        L127:
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r11 = r0.rendererConfigurations
            r11 = r11[r6]
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r12 = r4.rendererConfigurations
            r12 = r12[r6]
            if (r9 == 0) goto L149
            boolean r9 = r12.equals(r11)
            if (r9 == 0) goto L149
            if (r10 != 0) goto L149
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r8 = getFormats(r8)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r9 = r2.sampleStreams
            r9 = r9[r6]
            long r10 = r2.getRendererOffset()
            r7.replaceStream(r8, r9, r10)
            goto L14c
        L149:
            r7.setCurrentStreamFinal()
        L14c:
            int r6 = r6 + 1
            goto Lf8
        L14f:
            return
    }

    private void updatePlaybackPositions() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r8.queue
            boolean r0 = r0.hasPlayingPeriod()
            if (r0 != 0) goto L9
            return
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r8.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r0.mediaPeriod
            long r4 = r1.readDiscontinuity()
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 == 0) goto L3e
            r8.resetRendererPosition(r4)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r8.playbackInfo
            long r1 = r1.positionUs
            int r1 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r1 == 0) goto L55
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r8.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r2.periodId
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r8.playbackInfo
            long r6 = r1.contentPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r2.fromNewPosition(r3, r4, r6)
            r8.playbackInfo = r1
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$PlaybackInfoUpdate r1 = r8.playbackInfoUpdate
            r2 = 4
            r1.setPositionDiscontinuity(r2)
            goto L55
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock r1 = r8.mediaClock
            long r1 = r1.syncAndGetPositionUs()
            r8.rendererPositionUs = r1
            long r1 = r0.toPeriodTime(r1)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r8.playbackInfo
            long r3 = r3.positionUs
            r8.maybeTriggerPendingMessages(r3, r1)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r8.playbackInfo
            r3.positionUs = r1
        L55:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r8.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r2 = r8.enabledRenderers
            int r2 = r2.length
            if (r2 != 0) goto L61
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodInfo r0 = r0.info
            long r2 = r0.durationUs
            goto L66
        L61:
            r2 = 1
            long r2 = r0.getBufferedPositionUs(r2)
        L66:
            r1.bufferedPositionUs = r2
            return
    }

    private void updatePlayingPeriodRenderers(com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r9) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r8.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getPlayingPeriod()
            if (r0 == 0) goto L60
            if (r9 != r0) goto Lb
            goto L60
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1 = r8.renderers
            int r1 = r1.length
            boolean[] r1 = new boolean[r1]
            r2 = 0
            r3 = r2
            r4 = r3
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r5 = r8.renderers
            int r6 = r5.length
            if (r3 >= r6) goto L51
            r5 = r5[r3]
            int r6 = r5.getState()
            if (r6 == 0) goto L22
            r6 = 1
            goto L23
        L22:
            r6 = r2
        L23:
            r1[r3] = r6
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r6 = r0.trackSelectorResult
            boolean r6 = r6.isRendererEnabled(r3)
            if (r6 == 0) goto L2f
            int r4 = r4 + 1
        L2f:
            boolean r6 = r1[r3]
            if (r6 == 0) goto L4e
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r6 = r0.trackSelectorResult
            boolean r6 = r6.isRendererEnabled(r3)
            if (r6 == 0) goto L4b
            boolean r6 = r5.isCurrentStreamFinal()
            if (r6 == 0) goto L4e
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r6 = r5.getStream()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r7 = r9.sampleStreams
            r7 = r7[r3]
            if (r6 != r7) goto L4e
        L4b:
            r8.disableRenderer(r5)
        L4e:
            int r3 = r3 + 1
            goto L13
        L51:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r9 = r8.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = r0.trackGroups
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r0 = r0.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r9 = r9.copyWithTrackInfo(r2, r0)
            r8.playbackInfo = r9
            r8.enableRenderers(r1, r4)
        L60:
            return
    }

    private void updateTrackSelectionPlaybackSpeed(float r6) {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodQueue r0 = r5.queue
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.getFrontPeriod()
        L6:
            if (r0 == 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r0.trackSelectorResult
            if (r1 == 0) goto L22
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r0.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r1 = r1.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r1 = r1.getAll()
            int r2 = r1.length
            r3 = 0
        L16:
            if (r3 >= r2) goto L22
            r4 = r1[r3]
            if (r4 == 0) goto L1f
            r4.onPlaybackSpeed(r6)
        L1f:
            int r3 = r3 + 1
            goto L16
        L22:
            com.mbridge.msdk.playercommon.exoplayer2.MediaPeriodHolder r0 = r0.next
            goto L6
        L25:
            return
    }

    public final android.os.Looper getPlaybackLooper() {
            r1 = this;
            android.os.HandlerThread r0 = r1.internalPlaybackThread
            android.os.Looper r0 = r0.getLooper()
            return r0
    }

    @Override
    public final boolean handleMessage(android.os.Message r7) {
            r6 = this;
            java.lang.String r0 = "ExoPlayerImplInternal"
            r1 = 2
            r2 = 1
            r3 = 0
            int r4 = r7.what     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            switch(r4) {
                case 0: goto L85;
                case 1: goto L7a;
                case 2: goto L76;
                case 3: goto L6e;
                case 4: goto L66;
                case 5: goto L5e;
                case 6: goto L53;
                case 7: goto L4f;
                case 8: goto L47;
                case 9: goto L3e;
                case 10: goto L35;
                case 11: goto L30;
                case 12: goto L29;
                case 13: goto L1d;
                case 14: goto L14;
                case 15: goto Lb;
                default: goto La;
            }     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
        La:
            return r3
        Lb:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r7 = (com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.sendMessageToTargetThread(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L14:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r7 = (com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.sendMessageInternal(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L1d:
            int r7 = r7.arg1     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            if (r7 == 0) goto L23
            r7 = r2
            goto L24
        L23:
            r7 = r3
        L24:
            r6.setShuffleModeEnabledInternal(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L29:
            int r7 = r7.arg1     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.setRepeatModeInternal(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L30:
            r6.reselectTracksInternal()     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L35:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r7 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.handleContinueLoadingRequested(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L3e:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r7 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.handlePeriodPrepared(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L47:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$MediaSourceRefreshInfo r7 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.MediaSourceRefreshInfo) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.handleSourceInfoRefreshed(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L4f:
            r6.releaseInternal()     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            return r2
        L53:
            int r7 = r7.arg1     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            if (r7 == 0) goto L59
            r7 = r2
            goto L5a
        L59:
            r7 = r3
        L5a:
            r6.stopInternal(r7, r2)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L5e:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r7 = (com.mbridge.msdk.playercommon.exoplayer2.SeekParameters) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.setSeekParametersInternal(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L66:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r7 = (com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.setPlaybackParametersInternal(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L6e:
            java.lang.Object r7 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$SeekPosition r7 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal.SeekPosition) r7     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            r6.seekToInternal(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L76:
            r6.doSomeWork()     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L7a:
            int r7 = r7.arg1     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            if (r7 == 0) goto L80
            r7 = r2
            goto L81
        L80:
            r7 = r3
        L81:
            r6.setPlayWhenReadyInternal(r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto L9a
        L85:
            java.lang.Object r4 = r7.obj     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource) r4     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            int r5 = r7.arg1     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            if (r5 == 0) goto L8f
            r5 = r2
            goto L90
        L8f:
            r5 = r3
        L90:
            int r7 = r7.arg2     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            if (r7 == 0) goto L96
            r7 = r2
            goto L97
        L96:
            r7 = r3
        L97:
            r6.prepareInternal(r4, r5, r7)     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
        L9a:
            r6.maybeNotifyPlaybackInfoChanged()     // Catch: java.lang.RuntimeException -> L9e java.io.IOException -> Lb8 com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException -> Ld2
            goto Le7
        L9e:
            r7 = move-exception
            java.lang.String r4 = "Internal runtime error."
            android.util.Log.e(r0, r4, r7)
            r6.stopInternal(r3, r3)
            android.os.Handler r0 = r6.eventHandler
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r7 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForUnexpected(r7)
            android.os.Message r7 = r0.obtainMessage(r1, r7)
            r7.sendToTarget()
            r6.maybeNotifyPlaybackInfoChanged()
            goto Le7
        Lb8:
            r7 = move-exception
            java.lang.String r4 = "Source error."
            android.util.Log.e(r0, r4, r7)
            r6.stopInternal(r3, r3)
            android.os.Handler r0 = r6.eventHandler
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r7 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForSource(r7)
            android.os.Message r7 = r0.obtainMessage(r1, r7)
            r7.sendToTarget()
            r6.maybeNotifyPlaybackInfoChanged()
            goto Le7
        Ld2:
            r7 = move-exception
            java.lang.String r4 = "Playback error."
            android.util.Log.e(r0, r4, r7)
            r6.stopInternal(r3, r3)
            android.os.Handler r0 = r6.eventHandler
            android.os.Message r7 = r0.obtainMessage(r1, r7)
            r7.sendToTarget()
            r6.maybeNotifyPlaybackInfoChanged()
        Le7:
            return r2
    }

    public final void onContinueLoadingRequested(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 10
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            return
    }

    @Override
    public final void onContinueLoadingRequested(com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod) r1
            r0.onContinueLoadingRequested(r1)
            return
    }

    @Override
    public final void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r3) {
            r2 = this;
            android.os.Handler r0 = r2.eventHandler
            r1 = 1
            android.os.Message r0 = r0.obtainMessage(r1, r3)
            r0.sendToTarget()
            float r3 = r3.speed
            r2.updateTrackSelectionPlaybackSpeed(r3)
            return
    }

    @Override
    public final void onPrepared(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 9
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            return
    }

    @Override
    public final void onSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3, com.mbridge.msdk.playercommon.exoplayer2.Timeline r4, java.lang.Object r5) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$MediaSourceRefreshInfo r1 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$MediaSourceRefreshInfo
            r1.<init>(r3, r4, r5)
            r3 = 8
            android.os.Message r3 = r0.obtainMessage(r3, r1)
            r3.sendToTarget()
            return
    }

    @Override
    public final void onTrackSelectionsInvalidated() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 11
            r0.sendEmptyMessage(r1)
            return
    }

    public final void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3, boolean r4, boolean r5) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 0
            android.os.Message r3 = r0.obtainMessage(r1, r4, r5, r3)
            r3.sendToTarget()
            return
    }

    public final synchronized void release() {
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.released     // Catch: java.lang.Throwable -> L44
            if (r0 != 0) goto L42
            android.os.HandlerThread r0 = r7.internalPlaybackThread     // Catch: java.lang.Throwable -> L44
            boolean r0 = r0.isAlive()     // Catch: java.lang.Throwable -> L44
            if (r0 != 0) goto Le
            goto L42
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r7.handler     // Catch: java.lang.Throwable -> L44
            r1 = 7
            r0.sendEmptyMessage(r1)     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r0 = r7.clock     // Catch: java.lang.Throwable -> L44
            long r0 = r0.elapsedRealtime()     // Catch: java.lang.Throwable -> L44
            r2 = 500(0x1f4, double:2.47E-321)
            long r0 = r0 + r2
            r4 = 0
        L1e:
            boolean r5 = r7.released     // Catch: java.lang.Throwable -> L44
            if (r5 != 0) goto L37
            r5 = 0
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 <= 0) goto L37
            r7.wait(r2)     // Catch: java.lang.InterruptedException -> L2c java.lang.Throwable -> L44
            goto L2e
        L2c:
            r2 = 1
            r4 = r2
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r2 = r7.clock     // Catch: java.lang.Throwable -> L44
            long r2 = r2.elapsedRealtime()     // Catch: java.lang.Throwable -> L44
            long r2 = r0 - r2
            goto L1e
        L37:
            if (r4 == 0) goto L40
            java.lang.Thread r0 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L44
            r0.interrupt()     // Catch: java.lang.Throwable -> L44
        L40:
            monitor-exit(r7)
            return
        L42:
            monitor-exit(r7)
            return
        L44:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public final void seekTo(com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, int r4, long r5) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$SeekPosition r1 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal$SeekPosition
            r1.<init>(r3, r4, r5)
            r3 = 3
            android.os.Message r3 = r0.obtainMessage(r3, r1)
            r3.sendToTarget()
            return
    }

    @Override
    public final synchronized void sendMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.released     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L12
            java.lang.String r0 = "ExoPlayerImplInternal"
            java.lang.String r1 = "Ignoring messages sent after release."
            android.util.Log.w(r0, r1)     // Catch: java.lang.Throwable -> L1f
            r0 = 0
            r3.markAsProcessed(r0)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r2)
            return
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler     // Catch: java.lang.Throwable -> L1f
            r1 = 14
            android.os.Message r3 = r0.obtainMessage(r1, r3)     // Catch: java.lang.Throwable -> L1f
            r3.sendToTarget()     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r2)
            return
        L1f:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void setPlayWhenReady(boolean r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r3.handler
            r1 = 0
            r2 = 1
            android.os.Message r4 = r0.obtainMessage(r2, r4, r1)
            r4.sendToTarget()
            return
    }

    public final void setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 4
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            return
    }

    public final void setRepeatMode(int r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r3.handler
            r1 = 12
            r2 = 0
            android.os.Message r4 = r0.obtainMessage(r1, r4, r2)
            r4.sendToTarget()
            return
    }

    public final void setSeekParameters(com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r2.handler
            r1 = 5
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            return
    }

    public final void setShuffleModeEnabled(boolean r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r3.handler
            r1 = 0
            r2 = 13
            android.os.Message r4 = r0.obtainMessage(r2, r4, r1)
            r4.sendToTarget()
            return
    }

    public final void stop(boolean r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper r0 = r3.handler
            r1 = 0
            r2 = 6
            android.os.Message r4 = r0.obtainMessage(r2, r4, r1)
            r4.sendToTarget()
            return
    }
}
