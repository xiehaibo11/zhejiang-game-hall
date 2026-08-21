package com.mbridge.msdk.playercommon.exoplayer2.analytics;

public interface AnalyticsListener {

    public static final class EventTime {
        public final long currentPlaybackPositionMs;
        public final long eventPlaybackPositionMs;
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId mediaPeriodId;
        public final long realtimeMs;
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;
        public final long totalBufferedDurationMs;
        public final int windowIndex;

        public EventTime(long r1, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, int r4, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r5, long r6, long r8, long r10) {
                r0 = this;
                r0.<init>()
                r0.realtimeMs = r1
                r0.timeline = r3
                r0.windowIndex = r4
                r0.mediaPeriodId = r5
                r0.eventPlaybackPositionMs = r6
                r0.currentPlaybackPositionMs = r8
                r0.totalBufferedDurationMs = r10
                return
        }
    }

    void onAudioSessionId(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2);

    void onAudioUnderrun(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, long r3, long r5);

    void onBandwidthEstimate(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, long r3, long r5);

    void onDecoderDisabled(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3);

    void onDecoderEnabled(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3);

    void onDecoderInitialized(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, java.lang.String r3, long r4);

    void onDecoderInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3);

    void onDownstreamFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r2);

    void onDrmKeysLoaded(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onDrmKeysRemoved(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onDrmKeysRestored(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onDrmSessionManagerError(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, java.lang.Exception r2);

    void onDroppedVideoFrames(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, long r3);

    void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3);

    void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3);

    void onLoadError(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3, java.io.IOException r4, boolean r5);

    void onLoadStarted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3);

    void onLoadingChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, boolean r2);

    void onMediaPeriodCreated(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onMediaPeriodReleased(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onMetadata(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2);

    void onNetworkTypeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, android.net.NetworkInfo r2);

    void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2);

    void onPlayerError(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r2);

    void onPlayerStateChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, boolean r2, int r3);

    void onPositionDiscontinuity(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2);

    void onReadingStarted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onRenderedFirstFrame(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, android.view.Surface r2);

    void onRepeatModeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2);

    void onSeekProcessed(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onSeekStarted(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1);

    void onShuffleModeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, boolean r2);

    void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2);

    void onTracksChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r3);

    void onUpstreamDiscarded(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r2);

    void onVideoSizeChanged(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, int r3, int r4, float r5);

    void onViewportSizeChange(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime r1, int r2, int r3);
}
