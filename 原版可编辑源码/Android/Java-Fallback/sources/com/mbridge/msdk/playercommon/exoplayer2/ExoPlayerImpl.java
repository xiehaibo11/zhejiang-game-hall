package com.mbridge.msdk.playercommon.exoplayer2;

final class ExoPlayerImpl implements com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer {
    private static final java.lang.String TAG = "ExoPlayerImpl";
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult emptyTrackSelectorResult;
    private final android.os.Handler eventHandler;
    private boolean hasPendingPrepare;
    private boolean hasPendingSeek;
    private final com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal internalPlayer;
    private final android.os.Handler internalPlayerHandler;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener> listeners;
    private int maskingPeriodIndex;
    private int maskingWindowIndex;
    private long maskingWindowPositionMs;
    private int pendingOperationAcks;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl.PlaybackInfoUpdate> pendingPlaybackInfoUpdates;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period period;
    private boolean playWhenReady;
    private com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException playbackError;
    private com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo playbackInfo;
    private com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters playbackParameters;
    private final com.mbridge.msdk.playercommon.exoplayer2.Renderer[] renderers;
    private int repeatMode;
    private boolean shuffleModeEnabled;
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector trackSelector;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window window;


    private static final class PlaybackInfoUpdate {
        private final boolean isLoadingChanged;
        private final java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener> listeners;
        private final boolean playWhenReady;
        private final com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo playbackInfo;
        private final boolean playbackStateOrPlayWhenReadyChanged;
        private final boolean positionDiscontinuity;
        private final int positionDiscontinuityReason;
        private final boolean seekProcessed;
        private final int timelineChangeReason;
        private final boolean timelineOrManifestChanged;
        private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector trackSelector;
        private final boolean trackSelectorResultChanged;

        public PlaybackInfoUpdate(com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1, com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2, java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener> r3, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r4, boolean r5, int r6, int r7, boolean r8, boolean r9, boolean r10) {
                r0 = this;
                r0.<init>()
                r0.playbackInfo = r1
                r0.listeners = r3
                r0.trackSelector = r4
                r0.positionDiscontinuity = r5
                r0.positionDiscontinuityReason = r6
                r0.timelineChangeReason = r7
                r0.seekProcessed = r8
                r0.playWhenReady = r9
                r3 = 0
                r4 = 1
                if (r10 != 0) goto L20
                int r5 = r2.playbackState
                int r6 = r1.playbackState
                if (r5 == r6) goto L1e
                goto L20
            L1e:
                r5 = r3
                goto L21
            L20:
                r5 = r4
            L21:
                r0.playbackStateOrPlayWhenReadyChanged = r5
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r5 = r2.timeline
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r6 = r1.timeline
                if (r5 != r6) goto L32
                java.lang.Object r5 = r2.manifest
                java.lang.Object r6 = r1.manifest
                if (r5 == r6) goto L30
                goto L32
            L30:
                r5 = r3
                goto L33
            L32:
                r5 = r4
            L33:
                r0.timelineOrManifestChanged = r5
                boolean r5 = r2.isLoading
                boolean r6 = r1.isLoading
                if (r5 == r6) goto L3d
                r5 = r4
                goto L3e
            L3d:
                r5 = r3
            L3e:
                r0.isLoadingChanged = r5
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r2 = r2.trackSelectorResult
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r1.trackSelectorResult
                if (r2 == r1) goto L47
                r3 = r4
            L47:
                r0.trackSelectorResultChanged = r3
                return
        }

        public final void notifyListeners() {
                r5 = this;
                boolean r0 = r5.timelineOrManifestChanged
                if (r0 != 0) goto L8
                int r0 = r5.timelineChangeReason
                if (r0 != 0) goto L28
            L8:
                java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L28
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r5.playbackInfo
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r2.timeline
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r5.playbackInfo
                java.lang.Object r3 = r3.manifest
                int r4 = r5.timelineChangeReason
                r1.onTimelineChanged(r2, r3, r4)
                goto Le
            L28:
                boolean r0 = r5.positionDiscontinuity
                if (r0 == 0) goto L44
                java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
                java.util.Iterator r0 = r0.iterator()
            L32:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L44
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
                int r2 = r5.positionDiscontinuityReason
                r1.onPositionDiscontinuity(r2)
                goto L32
            L44:
                boolean r0 = r5.trackSelectorResultChanged
                if (r0 == 0) goto L73
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r0 = r5.trackSelector
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r5.playbackInfo
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r1 = r1.trackSelectorResult
                java.lang.Object r1 = r1.info
                r0.onSelectionActivated(r1)
                java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
                java.util.Iterator r0 = r0.iterator()
            L59:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L73
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r5.playbackInfo
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = r2.trackGroups
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r5.playbackInfo
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r3 = r3.trackSelectorResult
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r3 = r3.selections
                r1.onTracksChanged(r2, r3)
                goto L59
            L73:
                boolean r0 = r5.isLoadingChanged
                if (r0 == 0) goto L91
                java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
                java.util.Iterator r0 = r0.iterator()
            L7d:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L91
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r5.playbackInfo
                boolean r2 = r2.isLoading
                r1.onLoadingChanged(r2)
                goto L7d
            L91:
                boolean r0 = r5.playbackStateOrPlayWhenReadyChanged
                if (r0 == 0) goto Lb1
                java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
                java.util.Iterator r0 = r0.iterator()
            L9b:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto Lb1
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
                boolean r2 = r5.playWhenReady
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r3 = r5.playbackInfo
                int r3 = r3.playbackState
                r1.onPlayerStateChanged(r2, r3)
                goto L9b
            Lb1:
                boolean r0 = r5.seekProcessed
                if (r0 == 0) goto Lcb
                java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
                java.util.Iterator r0 = r0.iterator()
            Lbb:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto Lcb
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
                r1.onSeekProcessed()
                goto Lbb
            Lcb:
                return
        }
    }

    public ExoPlayerImpl(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r14, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r15, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r16, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r17) {
            r13 = this;
            r11 = r13
            r1 = r14
            r13.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Init "
            r0.append(r2)
            int r2 = java.lang.System.identityHashCode(r13)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r0.append(r2)
            java.lang.String r2 = " ["
            r0.append(r2)
            java.lang.String r2 = "ExoPlayerLib/2.8.4"
            r0.append(r2)
            java.lang.String r2 = "] ["
            r0.append(r2)
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE_DEBUG_INFO
            r0.append(r2)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "ExoPlayerImpl"
            android.util.Log.i(r2, r0)
            int r0 = r1.length
            r2 = 0
            if (r0 <= 0) goto L42
            r0 = 1
            goto L43
        L42:
            r0 = r2
        L43:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r14)
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = (com.mbridge.msdk.playercommon.exoplayer2.Renderer[]) r0
            r11.renderers = r0
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r15)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r0 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector) r0
            r11.trackSelector = r0
            r11.playWhenReady = r2
            r11.repeatMode = r2
            r11.shuffleModeEnabled = r2
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r11.listeners = r0
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult
            int r2 = r1.length
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[r2]
            int r3 = r1.length
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r3 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[r3]
            r4 = 0
            r0.<init>(r2, r3, r4)
            r11.emptyTrackSelectorResult = r0
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
            r0.<init>()
            r11.window = r0
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period
            r0.<init>()
            r11.period = r0
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters.DEFAULT
            r11.playbackParameters = r0
            android.os.Looper r0 = android.os.Looper.myLooper()
            if (r0 == 0) goto L8e
            android.os.Looper r0 = android.os.Looper.myLooper()
            goto L92
        L8e:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
        L92:
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$1 r2 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$1
            r2.<init>(r13, r0)
            r11.eventHandler = r2
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = com.mbridge.msdk.playercommon.exoplayer2.Timeline.EMPTY
            r5 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r7 = com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.EMPTY
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r8 = r11.emptyTrackSelectorResult
            r3 = r0
            r3.<init>(r4, r5, r7, r8)
            r11.playbackInfo = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r11.pendingPlaybackInfoUpdates = r0
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r12 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r3 = r11.emptyTrackSelectorResult
            boolean r5 = r11.playWhenReady
            int r6 = r11.repeatMode
            boolean r7 = r11.shuffleModeEnabled
            android.os.Handler r8 = r11.eventHandler
            r0 = r12
            r1 = r14
            r2 = r15
            r4 = r16
            r9 = r13
            r10 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r11.internalPlayer = r12
            android.os.Handler r0 = new android.os.Handler
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r1 = r11.internalPlayer
            android.os.Looper r1 = r1.getPlaybackLooper()
            r0.<init>(r1)
            r11.internalPlayerHandler = r0
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo getResetPlaybackInfo(boolean r16, boolean r17, int r18) {
            r15 = this;
            r0 = r15
            if (r16 == 0) goto Ld
            r1 = 0
            r0.maskingWindowIndex = r1
            r0.maskingPeriodIndex = r1
            r1 = 0
            r0.maskingWindowPositionMs = r1
            goto L1f
        Ld:
            int r1 = r15.getCurrentWindowIndex()
            r0.maskingWindowIndex = r1
            int r1 = r15.getCurrentPeriodIndex()
            r0.maskingPeriodIndex = r1
            long r1 = r15.getCurrentPosition()
            r0.maskingWindowPositionMs = r1
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo
            if (r17 == 0) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = com.mbridge.msdk.playercommon.exoplayer2.Timeline.EMPTY
            goto L2a
        L26:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r2.timeline
        L2a:
            r4 = r2
            if (r17 == 0) goto L2f
            r2 = 0
            goto L33
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            java.lang.Object r2 = r2.manifest
        L33:
            r5 = r2
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r6 = r2.periodId
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            long r7 = r2.startPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            long r9 = r2.contentPositionUs
            r12 = 0
            if (r17 == 0) goto L46
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray.EMPTY
            goto L4a
        L46:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2 = r2.trackGroups
        L4a:
            r13 = r2
            if (r17 == 0) goto L50
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r2 = r0.emptyTrackSelectorResult
            goto L54
        L50:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r0.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r2 = r2.trackSelectorResult
        L54:
            r14 = r2
            r3 = r1
            r11 = r18
            r3.<init>(r4, r5, r6, r7, r9, r11, r12, r13, r14)
            return r1
    }

    private void handlePlaybackInfo(com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r8, int r9, boolean r10, int r11) {
            r7 = this;
            int r0 = r7.pendingOperationAcks
            int r0 = r0 - r9
            r7.pendingOperationAcks = r0
            if (r0 != 0) goto L52
            long r0 = r8.startPositionUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 != 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r8.periodId
            r2 = 0
            long r4 = r8.contentPositionUs
            r0 = r8
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r8 = r0.fromNewPosition(r1, r2, r4)
        L1d:
            r1 = r8
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r8 = r7.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r8 = r8.timeline
            boolean r8 = r8.isEmpty()
            r9 = 0
            if (r8 == 0) goto L2d
            boolean r8 = r7.hasPendingPrepare
            if (r8 == 0) goto L3d
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r8 = r1.timeline
            boolean r8 = r8.isEmpty()
            if (r8 == 0) goto L3d
            r7.maskingPeriodIndex = r9
            r7.maskingWindowIndex = r9
            r2 = 0
            r7.maskingWindowPositionMs = r2
        L3d:
            boolean r8 = r7.hasPendingPrepare
            if (r8 == 0) goto L43
            r4 = r9
            goto L45
        L43:
            r8 = 2
            r4 = r8
        L45:
            boolean r5 = r7.hasPendingSeek
            r7.hasPendingPrepare = r9
            r7.hasPendingSeek = r9
            r6 = 0
            r0 = r7
            r2 = r10
            r3 = r11
            r0.updatePlaybackInfo(r1, r2, r3, r4, r5, r6)
        L52:
            return
    }

    private long playbackInfoPositionUsToWindowPositionMs(long r4) {
            r3 = this;
            long r4 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r4)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId
            boolean r0 = r0.isAd()
            if (r0 != 0) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.periodId
            int r1 = r1.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r3.period
            r0.getPeriod(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r3.period
            long r0 = r0.getPositionInWindowMs()
            long r4 = r4 + r0
        L24:
            return r4
    }

    private boolean shouldMaskPosition() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L11
            int r0 = r1.pendingOperationAcks
            if (r0 <= 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            return r0
    }

    private void updatePlaybackInfo(com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r16, boolean r17, int r18, int r19, boolean r20, boolean r21) {
            r15 = this;
            r0 = r15
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate> r1 = r0.pendingPlaybackInfoUpdates
            boolean r1 = r1.isEmpty()
            r1 = r1 ^ 1
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate> r2 = r0.pendingPlaybackInfoUpdates
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate r14 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r5 = r0.playbackInfo
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r6 = r0.listeners
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r7 = r0.trackSelector
            boolean r12 = r0.playWhenReady
            r3 = r14
            r4 = r16
            r8 = r17
            r9 = r18
            r10 = r19
            r11 = r20
            r13 = r21
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            r2.addLast(r14)
            r2 = r16
            r0.playbackInfo = r2
            if (r1 == 0) goto L2f
            return
        L2f:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate> r1 = r0.pendingPlaybackInfoUpdates
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L48
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate> r1 = r0.pendingPlaybackInfoUpdates
            java.lang.Object r1 = r1.peekFirst()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate r1 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl.PlaybackInfoUpdate) r1
            r1.notifyListeners()
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl$PlaybackInfoUpdate> r1 = r0.pendingPlaybackInfoUpdates
            r1.removeFirst()
            goto L2f
        L48:
            return
    }

    @Override
    public final void addListener(com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r1.listeners
            r0.add(r2)
            return
    }

    @Override
    public final void blockingSendMessages(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer.ExoPlayerMessage... r8) {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r8.length
            r2 = 0
            r3 = r2
        L8:
            if (r3 >= r1) goto L28
            r4 = r8[r3]
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage$Target r5 = r4.target
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r7.createMessage(r5)
            int r6 = r4.messageType
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r5.setType(r6)
            java.lang.Object r4 = r4.message
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r4 = r5.setPayload(r4)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r4 = r4.send()
            r0.add(r4)
            int r3 = r3 + 1
            goto L8
        L28:
            java.util.Iterator r8 = r0.iterator()
            r0 = r2
        L2d:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L4f
            java.lang.Object r1 = r8.next()
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1 = (com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage) r1
            r3 = 1
            r4 = r3
        L3b:
            if (r4 == 0) goto L2d
            r1.blockUntilDelivered()     // Catch: java.util.concurrent.TimeoutException -> L42 java.lang.InterruptedException -> L4d
            r4 = r2
            goto L3b
        L42:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            java.lang.String r6 = "ExoPlayerImpl"
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
            goto L3b
        L4d:
            r0 = r3
            goto L3b
        L4f:
            if (r0 == 0) goto L58
            java.lang.Thread r8 = java.lang.Thread.currentThread()
            r8.interrupt()
        L58:
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage createMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target r8) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r6 = new com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r1 = r7.internalPlayer
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r7.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r0.timeline
            int r4 = r7.getCurrentWindowIndex()
            android.os.Handler r5 = r7.internalPlayerHandler
            r0 = r6
            r2 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    @Override
    public final int getBufferedPercentage() {
            r9 = this;
            long r0 = r9.getBufferedPosition()
            long r2 = r9.getDuration()
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            r7 = 100
            r8 = 0
            if (r6 == 0) goto L2a
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L19
            goto L2a
        L19:
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L20
            goto L2b
        L20:
            r4 = 100
            long r0 = r0 * r4
            long r0 = r0 / r2
            int r0 = (int) r0
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r0, r8, r7)
            goto L2b
        L2a:
            r7 = r8
        L2b:
            return r7
    }

    @Override
    public final long getBufferedPosition() {
            r2 = this;
            boolean r0 = r2.shouldMaskPosition()
            if (r0 == 0) goto L9
            long r0 = r2.maskingWindowPositionMs
            return r0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r2.playbackInfo
            long r0 = r0.bufferedPositionUs
            long r0 = r2.playbackInfoPositionUsToWindowPositionMs(r0)
            return r0
    }

    @Override
    public final long getContentPosition() {
            r4 = this;
            boolean r0 = r4.isPlayingAd()
            if (r0 == 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.periodId
            int r1 = r1.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r4.period
            r0.getPeriod(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r4.period
            long r0 = r0.getPositionInWindowMs()
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r4.playbackInfo
            long r2 = r2.contentPositionUs
            long r2 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r2)
            long r0 = r0 + r2
            return r0
        L25:
            long r0 = r4.getCurrentPosition()
            return r0
    }

    @Override
    public final int getCurrentAdGroupIndex() {
            r1 = this;
            boolean r0 = r1.isPlayingAd()
            if (r0 == 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId
            int r0 = r0.adGroupIndex
            goto Le
        Ld:
            r0 = -1
        Le:
            return r0
    }

    @Override
    public final int getCurrentAdIndexInAdGroup() {
            r1 = this;
            boolean r0 = r1.isPlayingAd()
            if (r0 == 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId
            int r0 = r0.adIndexInAdGroup
            goto Le
        Ld:
            r0 = -1
        Le:
            return r0
    }

    @Override
    public final java.lang.Object getCurrentManifest() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            java.lang.Object r0 = r0.manifest
            return r0
    }

    @Override
    public final int getCurrentPeriodIndex() {
            r1 = this;
            boolean r0 = r1.shouldMaskPosition()
            if (r0 == 0) goto L9
            int r0 = r1.maskingPeriodIndex
            return r0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId
            int r0 = r0.periodIndex
            return r0
    }

    @Override
    public final long getCurrentPosition() {
            r2 = this;
            boolean r0 = r2.shouldMaskPosition()
            if (r0 == 0) goto L9
            long r0 = r2.maskingWindowPositionMs
            return r0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r2.playbackInfo
            long r0 = r0.positionUs
            long r0 = r2.playbackInfoPositionUsToWindowPositionMs(r0)
            return r0
    }

    @Override
    public final java.lang.Object getCurrentTag() {
            r4 = this;
            int r0 = r4.getCurrentWindowIndex()
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r1.timeline
            int r1 = r1.getWindowCount()
            if (r0 <= r1) goto L10
            r0 = 0
            goto L1d
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r1.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r4.window
            r3 = 1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r1.getWindow(r0, r2, r3)
            java.lang.Object r0 = r0.tag
        L1d:
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Timeline getCurrentTimeline() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getCurrentTrackGroups() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r0.trackGroups
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray getCurrentTrackSelections() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r0 = r0.trackSelectorResult
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r0 = r0.selections
            return r0
    }

    @Override
    public final int getCurrentWindowIndex() {
            r3 = this;
            boolean r0 = r3.shouldMaskPosition()
            if (r0 == 0) goto L9
            int r0 = r3.maskingWindowIndex
            return r0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.periodId
            int r1 = r1.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r3.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r0.getPeriod(r1, r2)
            int r0 = r0.windowIndex
            return r0
    }

    @Override
    public final long getDuration() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L10
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
        L10:
            boolean r1 = r4.isPlayingAd()
            if (r1 == 0) goto L30
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r1 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.periodId
            int r2 = r1.periodIndex
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r4.period
            r0.getPeriod(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r4.period
            int r2 = r1.adGroupIndex
            int r1 = r1.adIndexInAdGroup
            long r0 = r0.getAdDurationUs(r2, r1)
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r0)
            return r0
        L30:
            int r1 = r4.getCurrentWindowIndex()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r4.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r0.getWindow(r1, r2)
            long r0 = r0.getDurationMs()
            return r0
    }

    @Override
    public final int getNextWindowIndex() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto Lc
            r0 = -1
            goto L18
        Lc:
            int r1 = r4.getCurrentWindowIndex()
            int r2 = r4.repeatMode
            boolean r3 = r4.shuffleModeEnabled
            int r0 = r0.getNextWindowIndex(r1, r2, r3)
        L18:
            return r0
    }

    @Override
    public final boolean getPlayWhenReady() {
            r1 = this;
            boolean r0 = r1.playWhenReady
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException getPlaybackError() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = r1.playbackError
            return r0
    }

    @Override
    public final android.os.Looper getPlaybackLooper() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r1.internalPlayer
            android.os.Looper r0 = r0.getPlaybackLooper()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r1.playbackParameters
            return r0
    }

    @Override
    public final int getPlaybackState() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            int r0 = r0.playbackState
            return r0
    }

    @Override
    public final int getPreviousWindowIndex() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r4.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto Lc
            r0 = -1
            goto L18
        Lc:
            int r1 = r4.getCurrentWindowIndex()
            int r2 = r4.repeatMode
            boolean r3 = r4.shuffleModeEnabled
            int r0 = r0.getPreviousWindowIndex(r1, r2, r3)
        L18:
            return r0
    }

    @Override
    public final int getRendererCount() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r1.renderers
            int r0 = r0.length
            return r0
    }

    @Override
    public final int getRendererType(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r1.renderers
            r2 = r0[r2]
            int r2 = r2.getTrackType()
            return r2
    }

    @Override
    public final int getRepeatMode() {
            r1 = this;
            int r0 = r1.repeatMode
            return r0
    }

    @Override
    public final boolean getShuffleModeEnabled() {
            r1 = this;
            boolean r0 = r1.shuffleModeEnabled
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Player.TextComponent getTextComponent() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Player.VideoComponent getVideoComponent() {
            r1 = this;
            r0 = 0
            return r0
    }

    final void handleEvent(android.os.Message r6) {
            r5 = this;
            int r0 = r6.what
            r1 = 1
            if (r0 == 0) goto L50
            if (r0 == r1) goto L2c
            r1 = 2
            if (r0 != r1) goto L26
            java.lang.Object r6 = r6.obj
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r6 = (com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException) r6
            r5.playbackError = r6
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L62
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
            r1.onPlayerError(r6)
            goto L16
        L26:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            r6.<init>()
            throw r6
        L2c:
            java.lang.Object r6 = r6.obj
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r6 = (com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters) r6
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r5.playbackParameters
            boolean r0 = r0.equals(r6)
            if (r0 != 0) goto L62
            r5.playbackParameters = r6
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r5.listeners
            java.util.Iterator r0 = r0.iterator()
        L40:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L62
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
            r1.onPlaybackParametersChanged(r6)
            goto L40
        L50:
            java.lang.Object r0 = r6.obj
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = (com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo) r0
            int r2 = r6.arg1
            int r3 = r6.arg2
            r4 = -1
            if (r3 == r4) goto L5c
            goto L5d
        L5c:
            r1 = 0
        L5d:
            int r6 = r6.arg2
            r5.handlePlaybackInfo(r0, r2, r1, r6)
        L62:
            return
    }

    @Override
    public final boolean isCurrentWindowDynamic() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L1a
            int r1 = r3.getCurrentWindowIndex()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r3.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r0.getWindow(r1, r2)
            boolean r0 = r0.isDynamic
            if (r0 == 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = 0
        L1b:
            return r0
    }

    @Override
    public final boolean isCurrentWindowSeekable() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r3.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L1a
            int r1 = r3.getCurrentWindowIndex()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r3.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r0.getWindow(r1, r2)
            boolean r0 = r0.isSeekable
            if (r0 == 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = 0
        L1b:
            return r0
    }

    @Override
    public final boolean isLoading() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            boolean r0 = r0.isLoading
            return r0
    }

    @Override
    public final boolean isPlayingAd() {
            r1 = this;
            boolean r0 = r1.shouldMaskPosition()
            if (r0 != 0) goto L12
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r1.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.periodId
            boolean r0 = r0.isAd()
            if (r0 == 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    @Override
    public final void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2) {
            r1 = this;
            r0 = 1
            r1.prepare(r2, r0, r0)
            return
    }

    @Override
    public final void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r9, boolean r10, boolean r11) {
            r8 = this;
            r0 = 0
            r8.playbackError = r0
            r0 = 2
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r8.getResetPlaybackInfo(r10, r11, r0)
            r0 = 1
            r8.hasPendingPrepare = r0
            int r1 = r8.pendingOperationAcks
            int r1 = r1 + r0
            r8.pendingOperationAcks = r1
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r8.internalPlayer
            r0.prepare(r9, r10, r11)
            r3 = 0
            r4 = 4
            r5 = 1
            r6 = 0
            r7 = 0
            r1 = r8
            r1.updatePlaybackInfo(r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public final void release() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Release "
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r3)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " ["
            r0.append(r1)
            java.lang.String r1 = "ExoPlayerLib/2.8.4"
            r0.append(r1)
            java.lang.String r1 = "] ["
            r0.append(r1)
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE_DEBUG_INFO
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerLibraryInfo.registeredModules()
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ExoPlayerImpl"
            android.util.Log.i(r1, r0)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r3.internalPlayer
            r0.release()
            android.os.Handler r0 = r3.eventHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }

    @Override
    public final void removeListener(com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r1.listeners
            r0.remove(r2)
            return
    }

    @Override
    public final void seekTo(int r11, long r12) {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r0 = r10.playbackInfo
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.timeline
            if (r11 < 0) goto L9e
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L12
            int r1 = r0.getWindowCount()
            if (r11 >= r1) goto L9e
        L12:
            r7 = 1
            r10.hasPendingSeek = r7
            int r1 = r10.pendingOperationAcks
            int r1 = r1 + r7
            r10.pendingOperationAcks = r1
            boolean r1 = r10.isPlayingAd()
            r2 = 0
            if (r1 == 0) goto L35
            java.lang.String r11 = "ExoPlayerImpl"
            java.lang.String r12 = "seekTo ignored because an ad is playing"
            android.util.Log.w(r11, r12)
            android.os.Handler r11 = r10.eventHandler
            r12 = -1
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r13 = r10.playbackInfo
            android.os.Message r11 = r11.obtainMessage(r2, r7, r12, r13)
            r11.sendToTarget()
            return
        L35:
            r10.maskingWindowIndex = r11
            boolean r1 = r0.isEmpty()
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r1 == 0) goto L4f
            int r1 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r1 != 0) goto L49
            r3 = 0
            goto L4a
        L49:
            r3 = r12
        L4a:
            r10.maskingWindowPositionMs = r3
            r10.maskingPeriodIndex = r2
            goto L7e
        L4f:
            int r1 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r1 != 0) goto L5e
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r1 = r10.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r1 = r0.getWindow(r11, r1)
            long r1 = r1.getDefaultPositionUs()
            goto L62
        L5e:
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.C.msToUs(r12)
        L62:
            r8 = r1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r2 = r10.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = r10.period
            r1 = r0
            r4 = r11
            r5 = r8
            android.util.Pair r1 = r1.getPeriodPosition(r2, r3, r4, r5)
            long r2 = com.mbridge.msdk.playercommon.exoplayer2.C.usToMs(r8)
            r10.maskingWindowPositionMs = r2
            java.lang.Object r1 = r1.first
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r10.maskingPeriodIndex = r1
        L7e:
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r1 = r10.internalPlayer
            long r12 = com.mbridge.msdk.playercommon.exoplayer2.C.msToUs(r12)
            r1.seekTo(r0, r11, r12)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r11 = r10.listeners
            java.util.Iterator r11 = r11.iterator()
        L8d:
            boolean r12 = r11.hasNext()
            if (r12 == 0) goto L9d
            java.lang.Object r12 = r11.next()
            com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r12 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r12
            r12.onPositionDiscontinuity(r7)
            goto L8d
        L9d:
            return
        L9e:
            com.mbridge.msdk.playercommon.exoplayer2.IllegalSeekPositionException r1 = new com.mbridge.msdk.playercommon.exoplayer2.IllegalSeekPositionException
            r1.<init>(r0, r11, r12)
            throw r1
    }

    @Override
    public final void seekTo(long r2) {
            r1 = this;
            int r0 = r1.getCurrentWindowIndex()
            r1.seekTo(r0, r2)
            return
    }

    @Override
    public final void seekToDefaultPosition() {
            r1 = this;
            int r0 = r1.getCurrentWindowIndex()
            r1.seekToDefaultPosition(r0)
            return
    }

    @Override
    public final void seekToDefaultPosition(int r3) {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.seekTo(r3, r0)
            return
    }

    @Override
    public final void sendMessages(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer.ExoPlayerMessage... r6) {
            r5 = this;
            int r0 = r6.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L1e
            r2 = r6[r1]
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage$Target r3 = r2.target
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r5.createMessage(r3)
            int r4 = r2.messageType
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r3.setType(r4)
            java.lang.Object r2 = r2.message
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r2 = r3.setPayload(r2)
            r2.send()
            int r1 = r1 + 1
            goto L2
        L1e:
            return
    }

    @Override
    public final void setPlayWhenReady(boolean r9) {
            r8 = this;
            boolean r0 = r8.playWhenReady
            if (r0 == r9) goto L16
            r8.playWhenReady = r9
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r8.internalPlayer
            r0.setPlayWhenReady(r9)
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r8.playbackInfo
            r3 = 0
            r4 = 4
            r5 = 1
            r6 = 0
            r7 = 1
            r1 = r8
            r1.updatePlaybackInfo(r2, r3, r4, r5, r6, r7)
        L16:
            return
    }

    @Override
    public final void setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2) {
            r1 = this;
            if (r2 != 0) goto L4
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters.DEFAULT
        L4:
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r1.internalPlayer
            r0.setPlaybackParameters(r2)
            return
    }

    @Override
    public final void setRepeatMode(int r3) {
            r2 = this;
            int r0 = r2.repeatMode
            if (r0 == r3) goto L21
            r2.repeatMode = r3
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r2.internalPlayer
            r0.setRepeatMode(r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r2.listeners
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
            r1.onRepeatModeChanged(r3)
            goto L11
        L21:
            return
    }

    @Override
    public final void setSeekParameters(com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r2) {
            r1 = this;
            if (r2 != 0) goto L4
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r2 = com.mbridge.msdk.playercommon.exoplayer2.SeekParameters.DEFAULT
        L4:
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r1.internalPlayer
            r0.setSeekParameters(r2)
            return
    }

    @Override
    public final void setShuffleModeEnabled(boolean r3) {
            r2 = this;
            boolean r0 = r2.shuffleModeEnabled
            if (r0 == r3) goto L21
            r2.shuffleModeEnabled = r3
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r2.internalPlayer
            r0.setShuffleModeEnabled(r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener> r0 = r2.listeners
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.Player$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener) r1
            r1.onShuffleModeEnabledChanged(r3)
            goto L11
        L21:
            return
    }

    @Override
    public final void stop() {
            r1 = this;
            r0 = 0
            r1.stop(r0)
            return
    }

    @Override
    public final void stop(boolean r9) {
            r8 = this;
            if (r9 == 0) goto L5
            r0 = 0
            r8.playbackError = r0
        L5:
            r0 = 1
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackInfo r2 = r8.getResetPlaybackInfo(r9, r9, r0)
            int r1 = r8.pendingOperationAcks
            int r1 = r1 + r0
            r8.pendingOperationAcks = r1
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImplInternal r0 = r8.internalPlayer
            r0.stop(r9)
            r3 = 0
            r4 = 4
            r5 = 1
            r6 = 0
            r7 = 0
            r1 = r8
            r1.updatePlaybackInfo(r2, r3, r4, r5, r6, r7)
            return
    }
}
