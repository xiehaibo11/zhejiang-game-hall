package com.mbridge.msdk.playercommon.exoplayer2.analytics;

public class AnalyticsCollector implements com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener, com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionEventListener, com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener {
    private final com.mbridge.msdk.playercommon.exoplayer2.util.Clock clock;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> listeners;
    private final com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.MediaPeriodQueueTracker mediaPeriodQueueTracker;
    private com.mbridge.msdk.playercommon.exoplayer2.Player player;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window window;

    public static class Factory {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector createAnalyticsCollector(com.mbridge.msdk.playercommon.exoplayer2.Player r2, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r3) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector
                r0.<init>(r2, r3)
                return r0
        }
    }

    private static final class MediaPeriodQueueTracker {
        private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId> activeMediaPeriods;
        private boolean isSeeking;
        private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId lastReportedPlayingMediaPeriod;
        private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period period;
        private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId readingMediaPeriod;
        private com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;

        public MediaPeriodQueueTracker() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.activeMediaPeriods = r0
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period
                r0.<init>()
                r1.period = r0
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = com.mbridge.msdk.playercommon.exoplayer2.Timeline.EMPTY
                r1.timeline = r0
                return
        }

        static java.util.ArrayList access$000(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.MediaPeriodQueueTracker r0) {
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r0.activeMediaPeriods
                return r0
        }

        private void updateLastReportedPlayingMediaPeriod() {
                r2 = this;
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r2.activeMediaPeriods
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L13
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r2.activeMediaPeriods
                r1 = 0
                java.lang.Object r0 = r0.get(r1)
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r0
                r2.lastReportedPlayingMediaPeriod = r0
            L13:
                return
        }

        private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId updateMediaPeriodToNewTimeline(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId r5, com.mbridge.msdk.playercommon.exoplayer2.Timeline r6) {
                r4 = this;
                boolean r0 = r6.isEmpty()
                if (r0 != 0) goto L3a
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r4.timeline
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto Lf
                goto L3a
            Lf:
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r4.timeline
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r5.mediaPeriodId
                int r1 = r1.periodIndex
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = r4.period
                r3 = 1
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r0.getPeriod(r1, r2, r3)
                java.lang.Object r0 = r0.uid
                int r0 = r6.getIndexOfPeriod(r0)
                r1 = -1
                if (r0 != r1) goto L26
                return r5
            L26:
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r4.period
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r6 = r6.getPeriod(r0, r1)
                int r6 = r6.windowIndex
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r1 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = r5.mediaPeriodId
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = r5.copyWithPeriodIndex(r0)
                r1.<init>(r6, r5)
                return r1
            L3a:
                return r5
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId getLastReportedPlayingMediaPeriod() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r1.lastReportedPlayingMediaPeriod
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId getLoadingMediaPeriod() {
                r2 = this;
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r2.activeMediaPeriods
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto La
                r0 = 0
                goto L18
            La:
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r2.activeMediaPeriods
                int r1 = r0.size()
                int r1 = r1 + (-1)
                java.lang.Object r0 = r0.get(r1)
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r0
            L18:
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId getPlayingMediaPeriod() {
                r2 = this;
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r2.activeMediaPeriods
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L1f
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r2.timeline
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L1f
                boolean r0 = r2.isSeeking
                if (r0 == 0) goto L15
                goto L1f
            L15:
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r2.activeMediaPeriods
                r1 = 0
                java.lang.Object r0 = r0.get(r1)
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r0
                goto L20
            L1f:
                r0 = 0
            L20:
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId getReadingMediaPeriod() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r1.readingMediaPeriod
                return r0
        }

        public final boolean isSeeking() {
                r1 = this;
                boolean r0 = r1.isSeeking
                return r0
        }

        public final void onMediaPeriodCreated(int r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r4) {
                r2 = this;
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r0 = r2.activeMediaPeriods
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r1 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId
                r1.<init>(r3, r4)
                r0.add(r1)
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r3 = r2.activeMediaPeriods
                int r3 = r3.size()
                r4 = 1
                if (r3 != r4) goto L1e
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r3 = r2.timeline
                boolean r3 = r3.isEmpty()
                if (r3 != 0) goto L1e
                r2.updateLastReportedPlayingMediaPeriod()
            L1e:
                return
        }

        public final void onMediaPeriodReleased(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId
                r0.<init>(r2, r3)
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r2 = r1.activeMediaPeriods
                r2.remove(r0)
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r2 = r1.readingMediaPeriod
                boolean r2 = r0.equals(r2)
                if (r2 == 0) goto L27
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r2 = r1.activeMediaPeriods
                boolean r2 = r2.isEmpty()
                if (r2 == 0) goto L1c
                r2 = 0
                goto L25
            L1c:
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r2 = r1.activeMediaPeriods
                r3 = 0
                java.lang.Object r2 = r2.get(r3)
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r2
            L25:
                r1.readingMediaPeriod = r2
            L27:
                return
        }

        public final void onPositionDiscontinuity(int r1) {
                r0 = this;
                r0.updateLastReportedPlayingMediaPeriod()
                return
        }

        public final void onReadingStarted(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId
                r0.<init>(r2, r3)
                r1.readingMediaPeriod = r0
                return
        }

        public final void onSeekProcessed() {
                r1 = this;
                r0 = 0
                r1.isSeeking = r0
                r1.updateLastReportedPlayingMediaPeriod()
                return
        }

        public final void onSeekStarted() {
                r1 = this;
                r0 = 1
                r1.isSeeking = r0
                return
        }

        public final void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.Timeline r4) {
                r3 = this;
                r0 = 0
            L1:
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r1 = r3.activeMediaPeriods
                int r1 = r1.size()
                if (r0 >= r1) goto L1b
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r1 = r3.activeMediaPeriods
                java.lang.Object r2 = r1.get(r0)
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r2
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r2 = r3.updateMediaPeriodToNewTimeline(r2, r4)
                r1.set(r0, r2)
                int r0 = r0 + 1
                goto L1
            L1b:
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r3.readingMediaPeriod
                if (r0 == 0) goto L25
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r3.updateMediaPeriodToNewTimeline(r0, r4)
                r3.readingMediaPeriod = r0
            L25:
                r3.timeline = r4
                r3.updateLastReportedPlayingMediaPeriod()
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId tryResolveWindowIndex(int r9) {
                r8 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r8.timeline
                r1 = 0
                if (r0 == 0) goto L36
                int r0 = r0.getPeriodCount()
                r2 = 0
                r3 = r1
            Lb:
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r4 = r8.activeMediaPeriods
                int r4 = r4.size()
                if (r2 >= r4) goto L35
                java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId> r4 = r8.activeMediaPeriods
                java.lang.Object r4 = r4.get(r2)
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r4 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r4
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = r4.mediaPeriodId
                int r5 = r5.periodIndex
                if (r5 >= r0) goto L32
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r6 = r8.timeline
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r7 = r8.period
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r5 = r6.getPeriod(r5, r7)
                int r5 = r5.windowIndex
                if (r5 != r9) goto L32
                if (r3 == 0) goto L30
                return r1
            L30:
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r3 = r4.mediaPeriodId
            L32:
                int r2 = r2 + 1
                goto Lb
            L35:
                r1 = r3
            L36:
                return r1
        }
    }

    private static final class WindowAndMediaPeriodId {
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId mediaPeriodId;
        public final int windowIndex;

        public WindowAndMediaPeriodId(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2) {
                r0 = this;
                r0.<init>()
                r0.windowIndex = r1
                r0.mediaPeriodId = r2
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L27
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L27
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r5 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r5
                int r2 = r4.windowIndex
                int r3 = r5.windowIndex
                if (r2 != r3) goto L25
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = r4.mediaPeriodId
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = r5.mediaPeriodId
                boolean r5 = r2.equals(r5)
                if (r5 == 0) goto L25
                goto L26
            L25:
                r0 = r1
            L26:
                return r0
            L27:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.windowIndex
                int r0 = r0 * 31
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r2.mediaPeriodId
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                return r0
        }
    }

    protected AnalyticsCollector(com.mbridge.msdk.playercommon.exoplayer2.Player r1, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r2) {
            r0 = this;
            r0.<init>()
            r0.player = r1
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r1 = (com.mbridge.msdk.playercommon.exoplayer2.util.Clock) r1
            r0.clock = r1
            java.util.concurrent.CopyOnWriteArraySet r1 = new java.util.concurrent.CopyOnWriteArraySet
            r1.<init>()
            r0.listeners = r1
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r1 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker
            r1.<init>()
            r0.mediaPeriodQueueTracker = r1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r1 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
            r1.<init>()
            r0.window = r1
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime generateEventTime(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId r2) {
            r1 = this;
            if (r2 != 0) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.Player r2 = r1.player
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.Player r2 = (com.mbridge.msdk.playercommon.exoplayer2.Player) r2
            int r2 = r2.getCurrentWindowIndex()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.tryResolveWindowIndex(r2)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r0)
            return r2
        L19:
            int r0 = r2.windowIndex
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r2 = r2.mediaPeriodId
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r0, r2)
            return r2
    }

    private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime generateLastReportedPlayingMediaPeriodEventTime() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r0.getLastReportedPlayingMediaPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r1.generateEventTime(r0)
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime generateLoadingMediaPeriodEventTime() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r0.getLoadingMediaPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r1.generateEventTime(r0)
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime generatePlayingMediaPeriodEventTime() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r0.getPlayingMediaPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r1.generateEventTime(r0)
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime generateReadingMediaPeriodEventTime() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r0 = r0.getReadingMediaPeriod()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r1.generateEventTime(r0)
            return r0
    }

    public void addListener(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r0 = r1.listeners
            r0.add(r2)
            return
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener.EventTime generateEventTime(int r14, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r15) {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r0 = r13.clock
            long r2 = r0.elapsedRealtime()
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r4 = r0.getCurrentTimeline()
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            int r0 = r0.getCurrentWindowIndex()
            r5 = 0
            if (r14 != r0) goto L46
            if (r15 == 0) goto L3e
            boolean r0 = r15.isAd()
            if (r0 == 0) goto L3e
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            int r0 = r0.getCurrentAdGroupIndex()
            int r1 = r15.adGroupIndex
            if (r0 != r1) goto L60
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            int r0 = r0.getCurrentAdIndexInAdGroup()
            int r1 = r15.adIndexInAdGroup
            if (r0 != r1) goto L60
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            long r5 = r0.getCurrentPosition()
            goto L60
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            long r0 = r0.getContentPosition()
        L44:
            r7 = r0
            goto L61
        L46:
            int r0 = r4.getWindowCount()
            if (r14 >= r0) goto L60
            if (r15 == 0) goto L55
            boolean r0 = r15.isAd()
            if (r0 == 0) goto L55
            goto L60
        L55:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r13.window
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r4.getWindow(r14, r0)
            long r0 = r0.getDefaultPositionMs()
            goto L44
        L60:
            r7 = r5
        L61:
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r13.player
            long r0 = r0.getBufferedPosition()
            com.mbridge.msdk.playercommon.exoplayer2.Player r5 = r13.player
            long r5 = r5.getContentPosition()
            long r11 = r0 - r5
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime
            com.mbridge.msdk.playercommon.exoplayer2.Player r1 = r13.player
            long r9 = r1.getCurrentPosition()
            r1 = r0
            r5 = r14
            r6 = r15
            r1.<init>(r2, r4, r5, r6, r7, r9, r11)
            return r0
    }

    protected java.util.Set<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> getListeners() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r0 = r1.listeners
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    public final void notifyNetworkTypeChanged(android.net.NetworkInfo r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onNetworkTypeChanged(r0, r4)
            goto La
        L1a:
            return
    }

    public final void notifySeekStarted() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r3.mediaPeriodQueueTracker
            boolean r0 = r0.isSeeking()
            if (r0 != 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r1 = r3.mediaPeriodQueueTracker
            r1.onSeekStarted()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onSeekStarted(r0)
            goto L17
        L27:
            return
    }

    public final void notifyViewportSizeChanged(int r4, int r5) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onViewportSizeChange(r0, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onAudioDecoderInitialized(java.lang.String r7, long r8, long r10) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r8 = r6.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r9 = r6.listeners
            java.util.Iterator r9 = r9.iterator()
        La:
            boolean r0 = r9.hasNext()
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r9.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r2 = 1
            r1 = r8
            r3 = r7
            r4 = r10
            r0.onDecoderInitialized(r1, r2, r3, r4)
            goto La
        L1e:
            return
    }

    @Override
    public final void onAudioDisabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r4.generateLastReportedPlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r4.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r3 = 1
            r2.onDecoderDisabled(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void onAudioEnabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r4.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r4.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r3 = 1
            r2.onDecoderEnabled(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void onAudioInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r4.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r4.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r3 = 1
            r2.onDecoderInputFormatChanged(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void onAudioSessionId(int r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onAudioSessionId(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onAudioSinkUnderrun(int r10, long r11, long r13) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r7 = r9.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r0 = r9.listeners
            java.util.Iterator r8 = r0.iterator()
        La:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r8.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r1 = r7
            r2 = r10
            r3 = r11
            r5 = r13
            r0.onAudioUnderrun(r1, r2, r3, r5)
            goto La
        L1e:
            return
    }

    @Override
    public final void onBandwidthSample(int r10, long r11, long r13) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r7 = r9.generateLoadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r0 = r9.listeners
            java.util.Iterator r8 = r0.iterator()
        La:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r8.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r1 = r7
            r2 = r10
            r3 = r11
            r5 = r13
            r0.onBandwidthEstimate(r1, r2, r3, r5)
            goto La
        L1e:
            return
    }

    @Override
    public final void onDownstreamFormatChanged(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onDownstreamFormatChanged(r2, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onDrmKeysLoaded() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onDrmKeysLoaded(r0)
            goto La
        L1a:
            return
    }

    @Override
    public final void onDrmKeysRemoved() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onDrmKeysRemoved(r0)
            goto La
        L1a:
            return
    }

    @Override
    public final void onDrmKeysRestored() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onDrmKeysRestored(r0)
            goto La
        L1a:
            return
    }

    @Override
    public final void onDrmSessionManagerError(java.lang.Exception r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onDrmSessionManagerError(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onDroppedFrames(int r4, long r5) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generateLastReportedPlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onDroppedVideoFrames(r0, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onLoadCanceled(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r4, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onLoadCanceled(r2, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onLoadCompleted(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r4, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onLoadCompleted(r2, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onLoadError(int r7, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r8, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r9, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r10, java.io.IOException r11, boolean r12) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r7 = r6.generateEventTime(r7, r8)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r8 = r6.listeners
            java.util.Iterator r8 = r8.iterator()
        La:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r8.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r1 = r7
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.onLoadError(r1, r2, r3, r4, r5)
            goto La
        L1f:
            return
    }

    @Override
    public final void onLoadStarted(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r4, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onLoadStarted(r2, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onLoadingChanged(boolean r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onLoadingChanged(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onMediaPeriodCreated(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            r0.onMediaPeriodCreated(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onMediaPeriodCreated(r2)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void onMediaPeriodReleased(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            r0.onMediaPeriodReleased(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onMediaPeriodReleased(r2)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void onMetadata(com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onMetadata(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onPlaybackParametersChanged(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPlayerError(com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onPlayerError(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPlayerStateChanged(boolean r4, int r5) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onPlayerStateChanged(r0, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPositionDiscontinuity(int r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r3.mediaPeriodQueueTracker
            r0.onPositionDiscontinuity(r4)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onPositionDiscontinuity(r0, r4)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void onReadingStarted(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r1.mediaPeriodQueueTracker
            r0.onReadingStarted(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onReadingStarted(r2)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void onRenderedFirstFrame(android.view.Surface r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onRenderedFirstFrame(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onRepeatModeChanged(int r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onRepeatModeChanged(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onSeekProcessed() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r3.mediaPeriodQueueTracker
            boolean r0 = r0.isSeeking()
            if (r0 == 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r0 = r3.mediaPeriodQueueTracker
            r0.onSeekProcessed()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onSeekProcessed(r0)
            goto L17
        L27:
            return
    }

    @Override
    public final void onShuffleModeEnabledChanged(boolean r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onShuffleModeChanged(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onTimelineChanged(com.mbridge.msdk.playercommon.exoplayer2.Timeline r2, java.lang.Object r3, int r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r3 = r1.mediaPeriodQueueTracker
            r3.onTimelineChanged(r2)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onTimelineChanged(r2, r4)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void onTracksChanged(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r4, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r5) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r3.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r3.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r2.onTracksChanged(r0, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onUpstreamDiscarded(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r2 = r1.generateEventTime(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r3 = r1.listeners
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r0.onUpstreamDiscarded(r2, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onVideoDecoderInitialized(java.lang.String r7, long r8, long r10) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r8 = r6.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r9 = r6.listeners
            java.util.Iterator r9 = r9.iterator()
        La:
            boolean r0 = r9.hasNext()
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r9.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r2 = 2
            r1 = r8
            r3 = r7
            r4 = r10
            r0.onDecoderInitialized(r1, r2, r3, r4)
            goto La
        L1e:
            return
    }

    @Override
    public final void onVideoDisabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r4.generateLastReportedPlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r4.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r3 = 2
            r2.onDecoderDisabled(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void onVideoEnabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r4.generatePlayingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r4.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r3 = 2
            r2.onDecoderEnabled(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void onVideoInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r0 = r4.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r1 = r4.listeners
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r2
            r3 = 2
            r2.onDecoderInputFormatChanged(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void onVideoSizeChanged(int r9, int r10, int r11, float r12) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener$EventTime r6 = r8.generateReadingMediaPeriodEventTime()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r0 = r8.listeners
            java.util.Iterator r7 = r0.iterator()
        La:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r7.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r0 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener) r0
            r1 = r6
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.onVideoSizeChanged(r1, r2, r3, r4, r5)
            goto La
        L1f:
            return
    }

    public void removeListener(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener> r0 = r1.listeners
            r0.remove(r2)
            return
    }

    public final void resetForNewMediaSource() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$MediaPeriodQueueTracker r1 = r3.mediaPeriodQueueTracker
            java.util.ArrayList r1 = com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.MediaPeriodQueueTracker.access$000(r1)
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$WindowAndMediaPeriodId r1 = (com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.WindowAndMediaPeriodId) r1
            int r2 = r1.windowIndex
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.mediaPeriodId
            r3.onMediaPeriodReleased(r2, r1)
            goto Lf
        L23:
            return
    }

    public void setPlayer(com.mbridge.msdk.playercommon.exoplayer2.Player r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Player r0 = r1.player
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.Player r2 = (com.mbridge.msdk.playercommon.exoplayer2.Player) r2
            r1.player = r2
            return
    }
}
