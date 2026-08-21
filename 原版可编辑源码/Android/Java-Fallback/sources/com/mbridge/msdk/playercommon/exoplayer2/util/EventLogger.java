package com.mbridge.msdk.playercommon.exoplayer2.util;

public class EventLogger implements com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener {
    private static final int MAX_TIMELINE_ITEM_LINES = 3;
    private static final java.lang.String TAG = "EventLogger";
    private static final java.text.NumberFormat TIME_FORMAT = null;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period period;
    private final long startTimeMs;
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector trackSelector;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window window;

    static {
            java.util.Locale r0 = java.util.Locale.US
            java.text.NumberFormat r0 = java.text.NumberFormat.getInstance(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.EventLogger.TIME_FORMAT = r0
            r1 = 2
            r0.setMinimumFractionDigits(r1)
            java.text.NumberFormat r0 = com.mbridge.msdk.playercommon.exoplayer2.util.EventLogger.TIME_FORMAT
            r0.setMaximumFractionDigits(r1)
            java.text.NumberFormat r0 = com.mbridge.msdk.playercommon.exoplayer2.util.EventLogger.TIME_FORMAT
            r1 = 0
            r0.setGroupingUsed(r1)
            return
    }

    public EventLogger(com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector r3) {
            r2 = this;
            r2.<init>()
            r2.trackSelector = r3
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r3 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
            r3.<init>()
            r2.window = r3
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r3 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period
            r3.<init>()
            r2.period = r3
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.startTimeMs = r0
            return
    }

    private static java.lang.String getAdaptiveSupportString(int r1, int r2) {
            r0 = 2
            if (r1 >= r0) goto L6
            java.lang.String r1 = "N/A"
            return r1
        L6:
            if (r2 == 0) goto L19
            r1 = 8
            if (r2 == r1) goto L16
            r1 = 16
            if (r2 == r1) goto L13
            java.lang.String r1 = "?"
            return r1
        L13:
            java.lang.String r1 = "YES"
            return r1
        L16:
            java.lang.String r1 = "YES_NOT_SEAMLESS"
            return r1
        L19:
            java.lang.String r1 = "NO"
            return r1
    }

    private static java.lang.String getDiscontinuityReasonString(int r1) {
            if (r1 == 0) goto L1d
            r0 = 1
            if (r1 == r0) goto L1a
            r0 = 2
            if (r1 == r0) goto L17
            r0 = 3
            if (r1 == r0) goto L14
            r0 = 4
            if (r1 == r0) goto L11
            java.lang.String r1 = "?"
            return r1
        L11:
            java.lang.String r1 = "INTERNAL"
            return r1
        L14:
            java.lang.String r1 = "AD_INSERTION"
            return r1
        L17:
            java.lang.String r1 = "SEEK_ADJUSTMENT"
            return r1
        L1a:
            java.lang.String r1 = "SEEK"
            return r1
        L1d:
            java.lang.String r1 = "PERIOD_TRANSITION"
            return r1
    }

    private java.lang.String getEventString(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " ["
            r0.append(r3)
            java.lang.String r2 = r1.getEventTimeString(r2)
            r0.append(r2)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private java.lang.String getEventString(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " ["
            r0.append(r3)
            java.lang.String r2 = r1.getEventTimeString(r2)
            r0.append(r2)
            java.lang.String r2 = ", "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private java.lang.String getEventTimeString(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "window="
            r0.append(r1)
            int r1 = r7.windowIndex
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r7.mediaPeriodId
            if (r1 == 0) goto L67
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", period="
            r1.append(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r7.mediaPeriodId
            int r0 = r0.periodIndex
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r7.mediaPeriodId
            boolean r1 = r1.isAd()
            if (r1 == 0) goto L67
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", adGroup="
            r1.append(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r7.mediaPeriodId
            int r0 = r0.adGroupIndex
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", ad="
            r1.append(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r7.mediaPeriodId
            int r0 = r0.adIndexInAdGroup
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L67:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r2 = r7.realtimeMs
            long r4 = r6.startTimeMs
            long r2 = r2 - r4
            java.lang.String r2 = getTimeString(r2)
            r1.append(r2)
            java.lang.String r2 = ", "
            r1.append(r2)
            long r3 = r7.currentPlaybackPositionMs
            java.lang.String r7 = getTimeString(r3)
            r1.append(r7)
            r1.append(r2)
            r1.append(r0)
            java.lang.String r7 = r1.toString()
            return r7
    }

    private static java.lang.String getFormatSupportString(int r1) {
            if (r1 == 0) goto L1d
            r0 = 1
            if (r1 == r0) goto L1a
            r0 = 2
            if (r1 == r0) goto L17
            r0 = 3
            if (r1 == r0) goto L14
            r0 = 4
            if (r1 == r0) goto L11
            java.lang.String r1 = "?"
            return r1
        L11:
            java.lang.String r1 = "YES"
            return r1
        L14:
            java.lang.String r1 = "NO_EXCEEDS_CAPABILITIES"
            return r1
        L17:
            java.lang.String r1 = "NO_UNSUPPORTED_DRM"
            return r1
        L1a:
            java.lang.String r1 = "NO_UNSUPPORTED_TYPE"
            return r1
        L1d:
            java.lang.String r1 = "NO"
            return r1
    }

    private static java.lang.String getRepeatModeString(int r1) {
            if (r1 == 0) goto L11
            r0 = 1
            if (r1 == r0) goto Le
            r0 = 2
            if (r1 == r0) goto Lb
            java.lang.String r1 = "?"
            return r1
        Lb:
            java.lang.String r1 = "ALL"
            return r1
        Le:
            java.lang.String r1 = "ONE"
            return r1
        L11:
            java.lang.String r1 = "OFF"
            return r1
    }

    private static java.lang.String getStateString(int r1) {
            r0 = 1
            if (r1 == r0) goto L18
            r0 = 2
            if (r1 == r0) goto L15
            r0 = 3
            if (r1 == r0) goto L12
            r0 = 4
            if (r1 == r0) goto Lf
            java.lang.String r1 = "?"
            return r1
        Lf:
            java.lang.String r1 = "ENDED"
            return r1
        L12:
            java.lang.String r1 = "READY"
            return r1
        L15:
            java.lang.String r1 = "BUFFERING"
            return r1
        L18:
            java.lang.String r1 = "IDLE"
            return r1
    }

    private static java.lang.String getTimeString(long r2) {
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto Lc
            java.lang.String r2 = "?"
            goto L17
        Lc:
            java.text.NumberFormat r0 = com.mbridge.msdk.playercommon.exoplayer2.util.EventLogger.TIME_FORMAT
            float r2 = (float) r2
            r3 = 1148846080(0x447a0000, float:1000.0)
            float r2 = r2 / r3
            double r2 = (double) r2
            java.lang.String r2 = r0.format(r2)
        L17:
            return r2
    }

    private static java.lang.String getTimelineChangeReasonString(int r1) {
            if (r1 == 0) goto L11
            r0 = 1
            if (r1 == r0) goto Le
            r0 = 2
            if (r1 == r0) goto Lb
            java.lang.String r1 = "?"
            return r1
        Lb:
            java.lang.String r1 = "DYNAMIC"
            return r1
        Le:
            java.lang.String r1 = "RESET"
            return r1
        L11:
            java.lang.String r1 = "PREPARED"
            return r1
    }

    private static java.lang.String getTrackStatusString(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r1, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r2, int r3) {
            if (r1 == 0) goto L11
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r0 = r1.getTrackGroup()
            if (r0 != r2) goto L11
            int r1 = r1.indexOf(r3)
            r2 = -1
            if (r1 == r2) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            java.lang.String r1 = getTrackStatusString(r1)
            return r1
    }

    private static java.lang.String getTrackStatusString(boolean r0) {
            if (r0 == 0) goto L5
            java.lang.String r0 = "[X]"
            goto L7
        L5:
            java.lang.String r0 = "[ ]"
        L7:
            return r0
    }

    private static java.lang.String getTrackTypeString(int r2) {
            if (r2 == 0) goto L3e
            r0 = 1
            if (r2 == r0) goto L3b
            r0 = 2
            if (r2 == r0) goto L38
            r0 = 3
            if (r2 == r0) goto L35
            r0 = 4
            if (r2 == r0) goto L32
            r0 = 5
            if (r2 == r0) goto L2f
            r0 = 10000(0x2710, float:1.4013E-41)
            if (r2 < r0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "custom ("
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = ")"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            goto L2e
        L2c:
            java.lang.String r2 = "?"
        L2e:
            return r2
        L2f:
            java.lang.String r2 = "none"
            return r2
        L32:
            java.lang.String r2 = "metadata"
            return r2
        L35:
            java.lang.String r2 = "text"
            return r2
        L38:
            java.lang.String r2 = "video"
            return r2
        L3b:
            java.lang.String r2 = "audio"
            return r2
        L3e:
            java.lang.String r2 = "default"
            return r2
    }

    private void logd(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.getEventString(r1, r2)
            r0.logd(r1)
            return
    }

    private void logd(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            java.lang.String r1 = r0.getEventString(r1, r2, r3)
            r0.logd(r1)
            return
    }

    private void loge(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r0 = this;
            java.lang.String r1 = r0.getEventString(r1, r2, r3)
            r0.loge(r1, r4)
            return
    }

    private void loge(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            java.lang.String r1 = r0.getEventString(r1, r2)
            r0.loge(r1, r3)
            return
    }

    private void printInternalError(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, java.lang.String r3, java.lang.Exception r4) {
            r1 = this;
            java.lang.String r0 = "internalError"
            r1.loge(r2, r0, r3, r4)
            return
    }

    private void printMetadata(com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r4, java.lang.String r5) {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r4.length()
            if (r0 >= r1) goto L20
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry r2 = r4.get(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r3.logd(r1)
            int r0 = r0 + 1
            goto L1
        L20:
            return
    }

    protected void logd(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "EventLogger"
            android.util.Log.d(r0, r2)
            return
    }

    protected void loge(java.lang.String r2, java.lang.Throwable r3) {
            r1 = this;
            java.lang.String r0 = "EventLogger"
            android.util.Log.e(r0, r2, r3)
            return
    }

    @Override
    public void onAudioSessionId(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, int r3) {
            r1 = this;
            java.lang.String r3 = java.lang.Integer.toString(r3)
            java.lang.String r0 = "audioSessionId"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onAudioUnderrun(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, int r3, long r4, long r6) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            r0.append(r4)
            r0.append(r3)
            r0.append(r6)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "audioTrackUnderrun"
            r5 = 0
            r1.loge(r2, r4, r3, r5)
            return
    }

    @Override
    public void onBandwidthEstimate(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, long r3, long r5) {
            r0 = this;
            return
    }

    @Override
    public void onDecoderDisabled(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
            r0 = this;
            java.lang.String r2 = getTrackTypeString(r2)
            java.lang.String r3 = "decoderDisabled"
            r0.logd(r1, r3, r2)
            return
    }

    @Override
    public void onDecoderEnabled(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
            r0 = this;
            java.lang.String r2 = getTrackTypeString(r2)
            java.lang.String r3 = "decoderEnabled"
            r0.logd(r1, r3, r2)
            return
    }

    @Override
    public void onDecoderInitialized(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, java.lang.String r3, long r4) {
            r0 = this;
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = getTrackTypeString(r2)
            r4.append(r2)
            java.lang.String r2 = ", "
            r4.append(r2)
            r4.append(r3)
            java.lang.String r2 = r4.toString()
            java.lang.String r3 = "decoderInitialized"
            r0.logd(r1, r3, r2)
            return
    }

    @Override
    public void onDecoderInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, int r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = getTrackTypeString(r3)
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.Format.toLogString(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "decoderInputFormatChanged"
            r1.logd(r2, r4, r3)
            return
    }

    @Override
    public void onDownstreamFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r3.trackFormat
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.Format.toLogString(r3)
            java.lang.String r0 = "downstreamFormatChanged"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onDrmKeysLoaded(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "drmKeysLoaded"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onDrmKeysRemoved(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "drmKeysRemoved"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onDrmKeysRestored(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "drmKeysRestored"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onDrmSessionManagerError(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, java.lang.Exception r3) {
            r1 = this;
            java.lang.String r0 = "drmSessionManagerError"
            r1.printInternalError(r2, r0, r3)
            return
    }

    @Override
    public void onDroppedVideoFrames(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, long r3) {
            r0 = this;
            java.lang.String r2 = java.lang.Integer.toString(r2)
            java.lang.String r3 = "droppedFrames"
            r0.logd(r1, r3, r2)
            return
    }

    @Override
    public void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3) {
            r0 = this;
            return
    }

    @Override
    public void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3) {
            r0 = this;
            return
    }

    @Override
    public void onLoadError(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3, java.io.IOException r4, boolean r5) {
            r0 = this;
            java.lang.String r2 = "loadError"
            r0.printInternalError(r1, r2, r4)
            return
    }

    @Override
    public void onLoadStarted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3) {
            r0 = this;
            return
    }

    @Override
    public void onLoadingChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = java.lang.Boolean.toString(r3)
            java.lang.String r0 = "loading"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onMediaPeriodCreated(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "mediaPeriodCreated"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onMediaPeriodReleased(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "mediaPeriodReleased"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onMetadata(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r3, com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "metadata ["
            r0.append(r1)
            java.lang.String r3 = r2.getEventTimeString(r3)
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.logd(r3)
            java.lang.String r3 = "  "
            r2.printMetadata(r4, r3)
            java.lang.String r3 = "]"
            r2.logd(r3)
            return
    }

    @Override
    public void onNetworkTypeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, android.net.NetworkInfo r3) {
            r1 = this;
            if (r3 != 0) goto L5
            java.lang.String r3 = "none"
            goto L9
        L5:
            java.lang.String r3 = r3.toString()
        L9:
            java.lang.String r0 = "networkTypeChanged"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r4, com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r5) {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            float r1 = r5.speed
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            float r1 = r5.pitch
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            boolean r5 = r5.skipSilence
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)
            r1 = 2
            r0[r1] = r5
            java.lang.String r5 = "speed=%.2f, pitch=%.2f, skipSilence=%s"
            java.lang.String r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.formatInvariant(r5, r0)
            java.lang.String r0 = "playbackParameters"
            r3.logd(r4, r0, r5)
            return
    }

    @Override
    public void onPlayerError(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r3) {
            r1 = this;
            java.lang.String r0 = "playerFailed"
            r1.loge(r2, r0, r3)
            return
    }

    @Override
    public void onPlayerStateChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, boolean r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            java.lang.String r3 = getStateString(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "state"
            r1.logd(r2, r4, r3)
            return
    }

    @Override
    public void onPositionDiscontinuity(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, int r3) {
            r1 = this;
            java.lang.String r3 = getDiscontinuityReasonString(r3)
            java.lang.String r0 = "positionDiscontinuity"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onReadingStarted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "mediaPeriodReadingStarted"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onRenderedFirstFrame(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, android.view.Surface r3) {
            r1 = this;
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "renderedFirstFrame"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onRepeatModeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, int r3) {
            r1 = this;
            java.lang.String r3 = getRepeatModeString(r3)
            java.lang.String r0 = "repeatMode"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onSeekProcessed(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "seekProcessed"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onSeekStarted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2) {
            r1 = this;
            java.lang.String r0 = "seekStarted"
            r1.logd(r2, r0)
            return
    }

    @Override
    public void onShuffleModeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, boolean r3) {
            r1 = this;
            java.lang.String r3 = java.lang.Boolean.toString(r3)
            java.lang.String r0 = "shuffleModeEnabled"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r9, int r10) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r9.timeline
            int r0 = r0.getPeriodCount()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r9.timeline
            int r1 = r1.getWindowCount()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "timelineChanged ["
            r2.append(r3)
            java.lang.String r3 = r8.getEventTimeString(r9)
            r2.append(r3)
            java.lang.String r3 = ", periodCount="
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = ", windowCount="
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = ", reason="
            r2.append(r3)
            java.lang.String r10 = getTimelineChangeReasonString(r10)
            r2.append(r10)
            java.lang.String r10 = r2.toString()
            r8.logd(r10)
            r10 = 0
            r2 = r10
        L42:
            r3 = 3
            int r4 = java.lang.Math.min(r0, r3)
            java.lang.String r5 = "]"
            if (r2 >= r4) goto L76
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r9.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r8.period
            r3.getPeriod(r2, r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "  period ["
            r3.append(r4)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r4 = r8.period
            long r6 = r4.getDurationMs()
            java.lang.String r4 = getTimeString(r6)
            r3.append(r4)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r8.logd(r3)
            int r2 = r2 + 1
            goto L42
        L76:
            java.lang.String r2 = "  ..."
            if (r0 <= r3) goto L7d
            r8.logd(r2)
        L7d:
            int r0 = java.lang.Math.min(r1, r3)
            if (r10 >= r0) goto Lc4
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r9.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r4 = r8.window
            r0.getWindow(r10, r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "  window ["
            r0.append(r4)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r4 = r8.window
            long r6 = r4.getDurationMs()
            java.lang.String r4 = getTimeString(r6)
            r0.append(r4)
            java.lang.String r4 = ", "
            r0.append(r4)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r6 = r8.window
            boolean r6 = r6.isSeekable
            r0.append(r6)
            r0.append(r4)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r4 = r8.window
            boolean r4 = r4.isDynamic
            r0.append(r4)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r8.logd(r0)
            int r10 = r10 + 1
            goto L7d
        Lc4:
            if (r1 <= r3) goto Lc9
            r8.logd(r2)
        Lc9:
            r8.logd(r5)
            return
    }

    @Override
    public void onTracksChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r20, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r21, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r22) {
            r19 = this;
            r0 = r19
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector r1 = r0.trackSelector
            if (r1 == 0) goto Lb
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo r1 = r1.getCurrentMappedTrackInfo()
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 != 0) goto L18
            java.lang.String r1 = "tracksChanged"
            java.lang.String r2 = "[]"
            r3 = r20
            r0.logd(r3, r1, r2)
            return
        L18:
            r3 = r20
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "tracksChanged ["
            r2.append(r4)
            java.lang.String r3 = r19.getEventTimeString(r20)
            r2.append(r3)
            java.lang.String r3 = ", "
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.logd(r2)
            int r2 = r1.getRendererCount()
            r5 = 0
        L3c:
            java.lang.String r6 = ", supported="
            java.lang.String r7 = " Track:"
            java.lang.String r8 = "    Group:"
            java.lang.String r9 = "  ]"
            java.lang.String r10 = "      "
            java.lang.String r11 = "    ]"
            java.lang.String r12 = " ["
            if (r5 >= r2) goto L12b
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r13 = r1.getTrackGroups(r5)
            r14 = r22
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r15 = r14.get(r5)
            int r4 = r13.length
            if (r4 <= 0) goto L123
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r21 = r2
            java.lang.String r2 = "  Renderer:"
            r4.append(r2)
            r4.append(r5)
            r4.append(r12)
            java.lang.String r2 = r4.toString()
            r0.logd(r2)
            r2 = 0
        L74:
            int r4 = r13.length
            if (r2 >= r4) goto Lfb
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r4 = r13.get(r2)
            r16 = r13
            int r13 = r4.length
            r17 = r9
            r14 = 0
            int r9 = r1.getAdaptiveSupport(r5, r2, r14)
            java.lang.String r9 = getAdaptiveSupportString(r13, r9)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r8)
            r13.append(r2)
            java.lang.String r14 = ", adaptive_supported="
            r13.append(r14)
            r13.append(r9)
            r13.append(r12)
            java.lang.String r9 = r13.toString()
            r0.logd(r9)
            r14 = 0
        La9:
            int r9 = r4.length
            if (r14 >= r9) goto Lec
            java.lang.String r9 = getTrackStatusString(r15, r4, r14)
            int r13 = r1.getTrackSupport(r5, r2, r14)
            java.lang.String r13 = getFormatSupportString(r13)
            r18 = r12
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r10)
            r12.append(r9)
            r12.append(r7)
            r12.append(r14)
            r12.append(r3)
            com.mbridge.msdk.playercommon.exoplayer2.Format r9 = r4.getFormat(r14)
            java.lang.String r9 = com.mbridge.msdk.playercommon.exoplayer2.Format.toLogString(r9)
            r12.append(r9)
            r12.append(r6)
            r12.append(r13)
            java.lang.String r9 = r12.toString()
            r0.logd(r9)
            int r14 = r14 + 1
            r12 = r18
            goto La9
        Lec:
            r18 = r12
            r0.logd(r11)
            int r2 = r2 + 1
            r14 = r22
            r13 = r16
            r9 = r17
            goto L74
        Lfb:
            r17 = r9
            if (r15 == 0) goto L11d
            r14 = 0
        L100:
            int r2 = r15.length()
            if (r14 >= r2) goto L11d
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r15.getFormat(r14)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2 = r2.metadata
            if (r2 == 0) goto L11a
            java.lang.String r4 = "    Metadata ["
            r0.logd(r4)
            r0.printMetadata(r2, r10)
            r0.logd(r11)
            goto L11d
        L11a:
            int r14 = r14 + 1
            goto L100
        L11d:
            r2 = r17
            r0.logd(r2)
            goto L125
        L123:
            r21 = r2
        L125:
            int r5 = r5 + 1
            r2 = r21
            goto L3c
        L12b:
            r2 = r9
            r18 = r12
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = r1.getUnmappedTrackGroups()
            int r4 = r1.length
            if (r4 <= 0) goto L1a3
            java.lang.String r4 = "  Renderer:None ["
            r0.logd(r4)
            r14 = 0
        L13c:
            int r4 = r1.length
            if (r14 >= r4) goto L1a0
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r8)
            r4.append(r14)
            r5 = r18
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r0.logd(r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r4 = r1.get(r14)
            r9 = 0
        L15c:
            int r12 = r4.length
            if (r9 >= r12) goto L198
            r12 = 0
            java.lang.String r13 = getTrackStatusString(r12)
            java.lang.String r15 = getFormatSupportString(r12)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r10)
            r12.append(r13)
            r12.append(r7)
            r12.append(r9)
            r12.append(r3)
            com.mbridge.msdk.playercommon.exoplayer2.Format r13 = r4.getFormat(r9)
            java.lang.String r13 = com.mbridge.msdk.playercommon.exoplayer2.Format.toLogString(r13)
            r12.append(r13)
            r12.append(r6)
            r12.append(r15)
            java.lang.String r12 = r12.toString()
            r0.logd(r12)
            int r9 = r9 + 1
            goto L15c
        L198:
            r0.logd(r11)
            int r14 = r14 + 1
            r18 = r5
            goto L13c
        L1a0:
            r0.logd(r2)
        L1a3:
            java.lang.String r1 = "]"
            r0.logd(r1)
            return
    }

    @Override
    public void onUpstreamDiscarded(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r3.trackFormat
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.Format.toLogString(r3)
            java.lang.String r0 = "upstreamDiscarded"
            r1.logd(r2, r0, r3)
            return
    }

    @Override
    public void onVideoSizeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, int r3, int r4, float r5) {
            r0 = this;
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r2 = ", "
            r4.append(r2)
            r4.append(r3)
            java.lang.String r2 = r4.toString()
            java.lang.String r3 = "videoSizeChanged"
            r0.logd(r1, r3, r2)
            return
    }

    @Override
    public void onViewportSizeChange(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r2, int r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ", "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "viewportSizeChanged"
            r1.logd(r2, r4, r3)
            return
    }
}
