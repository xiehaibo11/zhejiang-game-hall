package com.mbridge.msdk.playercommon.exoplayer2.source;

public class ConcatenatingMediaSource extends com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder> implements com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target {
    private static final int MSG_ADD = 0;
    private static final int MSG_ADD_MULTIPLE = 1;
    private static final int MSG_CLEAR = 4;
    private static final int MSG_MOVE = 3;
    private static final int MSG_NOTIFY_LISTENER = 5;
    private static final int MSG_ON_COMPLETION = 6;
    private static final int MSG_REMOVE = 2;
    private final boolean isAtomic;
    private boolean listenerNotificationScheduled;
    private final java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod, com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder> mediaSourceByMediaPeriod;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder> mediaSourceHolders;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder> mediaSourcesPublic;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.EventDispatcher> pendingOnCompletionActions;
    private int periodCount;
    private com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer player;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder query;
    private com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder shuffleOrder;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window window;
    private int windowCount;

    static class 1 {
    }

    private static final class ConcatenatedTimeline extends com.mbridge.msdk.playercommon.exoplayer2.source.AbstractConcatenatedTimeline {
        private final java.util.HashMap<java.lang.Object, java.lang.Integer> childIndexByUid;
        private final int[] firstPeriodInChildIndices;
        private final int[] firstWindowInChildIndices;
        private final int periodCount;
        private final com.mbridge.msdk.playercommon.exoplayer2.Timeline[] timelines;
        private final java.lang.Object[] uids;
        private final int windowCount;

        public ConcatenatedTimeline(java.util.Collection<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder> r1, int r2, int r3, com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r4, boolean r5) {
                r0 = this;
                r0.<init>(r5, r4)
                r0.windowCount = r2
                r0.periodCount = r3
                int r2 = r1.size()
                int[] r3 = new int[r2]
                r0.firstPeriodInChildIndices = r3
                int[] r3 = new int[r2]
                r0.firstWindowInChildIndices = r3
                com.mbridge.msdk.playercommon.exoplayer2.Timeline[] r3 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline[r2]
                r0.timelines = r3
                java.lang.Object[] r2 = new java.lang.Object[r2]
                r0.uids = r2
                java.util.HashMap r2 = new java.util.HashMap
                r2.<init>()
                r0.childIndexByUid = r2
                java.util.Iterator r1 = r1.iterator()
                r2 = 0
            L27:
                boolean r3 = r1.hasNext()
                if (r3 == 0) goto L5c
                java.lang.Object r3 = r1.next()
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r3
                com.mbridge.msdk.playercommon.exoplayer2.Timeline[] r4 = r0.timelines
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r5 = r3.timeline
                r4[r2] = r5
                int[] r4 = r0.firstPeriodInChildIndices
                int r5 = r3.firstPeriodIndexInChild
                r4[r2] = r5
                int[] r4 = r0.firstWindowInChildIndices
                int r5 = r3.firstWindowIndexInChild
                r4[r2] = r5
                java.lang.Object[] r4 = r0.uids
                java.lang.Object r3 = r3.uid
                r4[r2] = r3
                java.util.HashMap<java.lang.Object, java.lang.Integer> r3 = r0.childIndexByUid
                java.lang.Object[] r4 = r0.uids
                r4 = r4[r2]
                int r5 = r2 + 1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r3.put(r4, r2)
                r2 = r5
                goto L27
            L5c:
                return
        }

        @Override
        protected final int getChildIndexByChildUid(java.lang.Object r2) {
                r1 = this;
                java.util.HashMap<java.lang.Object, java.lang.Integer> r0 = r1.childIndexByUid
                java.lang.Object r2 = r0.get(r2)
                java.lang.Integer r2 = (java.lang.Integer) r2
                if (r2 != 0) goto Lc
                r2 = -1
                goto L10
            Lc:
                int r2 = r2.intValue()
            L10:
                return r2
        }

        @Override
        protected final int getChildIndexByPeriodIndex(int r3) {
                r2 = this;
                int[] r0 = r2.firstPeriodInChildIndices
                int r3 = r3 + 1
                r1 = 0
                int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r3, r1, r1)
                return r3
        }

        @Override
        protected final int getChildIndexByWindowIndex(int r3) {
                r2 = this;
                int[] r0 = r2.firstWindowInChildIndices
                int r3 = r3 + 1
                r1 = 0
                int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r3, r1, r1)
                return r3
        }

        @Override
        protected final java.lang.Object getChildUidByChildIndex(int r2) {
                r1 = this;
                java.lang.Object[] r0 = r1.uids
                r2 = r0[r2]
                return r2
        }

        @Override
        protected final int getFirstPeriodIndexByChildIndex(int r2) {
                r1 = this;
                int[] r0 = r1.firstPeriodInChildIndices
                r2 = r0[r2]
                return r2
        }

        @Override
        protected final int getFirstWindowIndexByChildIndex(int r2) {
                r1 = this;
                int[] r0 = r1.firstWindowInChildIndices
                r2 = r0[r2]
                return r2
        }

        @Override
        public final int getPeriodCount() {
                r1 = this;
                int r0 = r1.periodCount
                return r0
        }

        @Override
        protected final com.mbridge.msdk.playercommon.exoplayer2.Timeline getTimelineByChildIndex(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline[] r0 = r1.timelines
                r2 = r0[r2]
                return r2
        }

        @Override
        public final int getWindowCount() {
                r1 = this;
                int r0 = r1.windowCount
                return r0
        }
    }

    private static final class DeferredTimeline extends com.mbridge.msdk.playercommon.exoplayer2.source.ForwardingTimeline {
        private static final java.lang.Object DUMMY_ID = null;
        private static final com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DummyTimeline dummyTimeline = null;
        private static final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period period = null;
        private final java.lang.Object replacedId;

        static {
                java.lang.Object r0 = new java.lang.Object
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline.DUMMY_ID = r0
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline.period = r0
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DummyTimeline r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DummyTimeline
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline.dummyTimeline = r0
                return
        }

        public DeferredTimeline() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DummyTimeline r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline.dummyTimeline
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        private DeferredTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, java.lang.Object r2) {
                r0 = this;
                r0.<init>(r1)
                r0.replacedId = r2
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline cloneWithNewTimeline(com.mbridge.msdk.playercommon.exoplayer2.Timeline r5) {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline
                java.lang.Object r1 = r4.replacedId
                if (r1 != 0) goto L17
                int r1 = r5.getPeriodCount()
                if (r1 <= 0) goto L17
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r2 = com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline.period
                r3 = 1
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = r5.getPeriod(r1, r2, r3)
                java.lang.Object r1 = r1.uid
                goto L19
            L17:
                java.lang.Object r1 = r4.replacedId
            L19:
                r0.<init>(r5, r1)
                return r0
        }

        @Override
        public final int getIndexOfPeriod(java.lang.Object r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r2.timeline
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline.DUMMY_ID
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto Lc
                java.lang.Object r3 = r2.replacedId
            Lc:
                int r3 = r0.getIndexOfPeriod(r3)
                return r3
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r3, boolean r4) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
                r0.getPeriod(r2, r3, r4)
                java.lang.Object r2 = r3.uid
                java.lang.Object r4 = r1.replacedId
                boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r4)
                if (r2 == 0) goto L13
                java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline.DUMMY_ID
                r3.uid = r2
            L13:
                return r3
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline getTimeline() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r1.timeline
                return r0
        }
    }

    private static final class DummyTimeline extends com.mbridge.msdk.playercommon.exoplayer2.Timeline {
        private DummyTimeline() {
                r0 = this;
                r0.<init>()
                return
        }

        DummyTimeline(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final int getIndexOfPeriod(java.lang.Object r1) {
                r0 = this;
                if (r1 != 0) goto L4
                r1 = 0
                goto L5
            L4:
                r1 = -1
            L5:
                return r1
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period getPeriod(int r9, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period r10, boolean r11) {
                r8 = this;
                r1 = 0
                r2 = 0
                r3 = 0
                r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r6 = 0
                r0 = r10
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r9 = r0.set(r1, r2, r3, r4, r6)
                return r9
        }

        @Override
        public final int getPeriodCount() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window getWindow(int r19, com.mbridge.msdk.playercommon.exoplayer2.Timeline.Window r20, boolean r21, long r22) {
                r18 = this;
                r0 = 0
                int r2 = (r22 > r0 ? 1 : (r22 == r0 ? 0 : -1))
                if (r2 <= 0) goto Lb
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            Lb:
                r10 = r0
                r12 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r14 = 0
                r15 = 0
                r16 = 0
                r3 = 0
                r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r8 = 0
                r9 = 1
                r2 = r20
                com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r2.set(r3, r4, r6, r8, r9, r10, r12, r14, r15, r16)
                return r0
        }

        @Override
        public final int getWindowCount() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    private static final class EventDispatcher {
        public final android.os.Handler eventHandler;
        public final java.lang.Runnable runnable;

        public EventDispatcher(java.lang.Runnable r2) {
                r1 = this;
                r1.<init>()
                r1.runnable = r2
                android.os.Handler r2 = new android.os.Handler
                android.os.Looper r0 = android.os.Looper.myLooper()
                if (r0 == 0) goto L12
                android.os.Looper r0 = android.os.Looper.myLooper()
                goto L16
            L12:
                android.os.Looper r0 = android.os.Looper.getMainLooper()
            L16:
                r2.<init>(r0)
                r1.eventHandler = r2
                return
        }

        public final void dispatchEvent() {
                r2 = this;
                android.os.Handler r0 = r2.eventHandler
                java.lang.Runnable r1 = r2.runnable
                r0.post(r1)
                return
        }
    }

    static final class MediaSourceHolder implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder> {
        public java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> activeMediaPeriods;
        public int childIndex;
        public int firstPeriodIndexInChild;
        public int firstWindowIndexInChild;
        public boolean isPrepared;
        public boolean isRemoved;
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
        public com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.DeferredTimeline timeline;
        public final java.lang.Object uid;

        public MediaSourceHolder(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1) {
                r0 = this;
                r0.<init>()
                r0.mediaSource = r1
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline
                r1.<init>()
                r0.timeline = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.activeMediaPeriods = r1
                java.lang.Object r1 = new java.lang.Object
                r1.<init>()
                r0.uid = r1
                return
        }

        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r2) {
                r1 = this;
                int r0 = r1.firstPeriodIndexInChild
                int r2 = r2.firstPeriodIndexInChild
                int r0 = r0 - r2
                return r0
        }

        @Override
        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r1
                int r1 = r0.compareTo(r1)
                return r1
        }

        public final void reset(int r1, int r2, int r3) {
                r0 = this;
                r0.childIndex = r1
                r0.firstWindowIndexInChild = r2
                r0.firstPeriodIndexInChild = r3
                r1 = 0
                r0.isPrepared = r1
                r0.isRemoved = r1
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r1 = r0.activeMediaPeriods
                r1.clear()
                return
        }
    }

    private static final class MessageData<T> {
        public final com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.EventDispatcher actionOnCompletion;
        public final T customData;
        public final int index;

        public MessageData(int r1, T r2, java.lang.Runnable r3) {
                r0 = this;
                r0.<init>()
                r0.index = r1
                if (r3 == 0) goto Ld
                com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher
                r1.<init>(r3)
                goto Le
            Ld:
                r1 = 0
            Le:
                r0.actionOnCompletion = r1
                r0.customData = r2
                return
        }
    }

    public ConcatenatingMediaSource() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder
            r1 = 0
            r0.<init>(r1)
            r2.<init>(r1, r0)
            return
    }

    public ConcatenatingMediaSource(boolean r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder
            r1 = 0
            r0.<init>(r1)
            r2.<init>(r3, r0)
            return
    }

    public ConcatenatingMediaSource(boolean r2, com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3) {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[r0]
            r1.<init>(r2, r3, r0)
            return
    }

    public ConcatenatingMediaSource(boolean r4, com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r5, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource... r6) {
            r3 = this;
            r3.<init>()
            int r0 = r6.length
            r1 = 0
        L5:
            if (r1 >= r0) goto Lf
            r2 = r6[r1]
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            int r1 = r1 + 1
            goto L5
        Lf:
            int r0 = r5.getLength()
            if (r0 <= 0) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r5 = r5.cloneAndClear()
        L19:
            r3.shuffleOrder = r5
            java.util.IdentityHashMap r5 = new java.util.IdentityHashMap
            r5.<init>()
            r3.mediaSourceByMediaPeriod = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r3.mediaSourcesPublic = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r3.mediaSourceHolders = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r3.pendingOnCompletionActions = r5
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r5 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder
            r0 = 0
            r5.<init>(r0)
            r3.query = r5
            r3.isAtomic = r4
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r4 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window
            r4.<init>()
            r3.window = r4
            java.util.List r4 = java.util.Arrays.asList(r6)
            r3.addMediaSources(r4)
            return
    }

    public ConcatenatingMediaSource(boolean r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource... r4) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder
            r1 = 0
            r0.<init>(r1)
            r2.<init>(r3, r0, r4)
            return
    }

    public ConcatenatingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource... r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    private void addMediaSourceInternal(int r4, com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r5) {
            r3 = this;
            if (r4 <= 0) goto L22
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r3.mediaSourceHolders
            int r1 = r4 + (-1)
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            int r1 = r0.firstWindowIndexInChild
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r2 = r0.timeline
            int r2 = r2.getWindowCount()
            int r1 = r1 + r2
            int r2 = r0.firstPeriodIndexInChild
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r0 = r0.timeline
            int r0 = r0.getPeriodCount()
            int r2 = r2 + r0
            r5.reset(r4, r1, r2)
            goto L26
        L22:
            r0 = 0
            r5.reset(r4, r0, r0)
        L26:
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r0 = r5.timeline
            int r0 = r0.getWindowCount()
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r1 = r5.timeline
            int r1 = r1.getPeriodCount()
            r2 = 1
            r3.correctOffsets(r4, r2, r0, r1)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r3.mediaSourceHolders
            r0.add(r4, r5)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r4 = r5.mediaSource
            r3.prepareChildSource(r5, r4)
            return
    }

    private void addMediaSourcesInternal(int r3, java.util.Collection<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder> r4) {
            r2 = this;
            java.util.Iterator r4 = r4.iterator()
        L4:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L17
            java.lang.Object r0 = r4.next()
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            int r1 = r3 + 1
            r2.addMediaSourceInternal(r3, r0)
            r3 = r1
            goto L4
        L17:
            return
    }

    private void clearInternal() {
            r1 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r1.mediaSourceHolders
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L10
            r1.removeMediaSourceInternal(r0)
            int r0 = r0 + (-1)
            goto L8
        L10:
            return
    }

    private void correctOffsets(int r3, int r4, int r5, int r6) {
            r2 = this;
            int r0 = r2.windowCount
            int r0 = r0 + r5
            r2.windowCount = r0
            int r0 = r2.periodCount
            int r0 = r0 + r6
            r2.periodCount = r0
        La:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourceHolders
            int r0 = r0.size()
            if (r3 >= r0) goto L3c
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourceHolders
            java.lang.Object r0 = r0.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            int r1 = r0.childIndex
            int r1 = r1 + r4
            r0.childIndex = r1
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourceHolders
            java.lang.Object r0 = r0.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            int r1 = r0.firstWindowIndexInChild
            int r1 = r1 + r5
            r0.firstWindowIndexInChild = r1
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourceHolders
            java.lang.Object r0 = r0.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            int r1 = r0.firstPeriodIndexInChild
            int r1 = r1 + r6
            r0.firstPeriodIndexInChild = r1
            int r3 = r3 + 1
            goto La
        L3c:
            return
    }

    private int findMediaSourceHolderByPeriodIndex(int r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = r3.query
            r0.firstPeriodIndexInChild = r4
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r3.mediaSourceHolders
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r1 = r3.query
            int r0 = java.util.Collections.binarySearch(r0, r1)
            if (r0 >= 0) goto L12
            int r4 = -r0
            int r4 = r4 + (-2)
            return r4
        L12:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r1 = r3.mediaSourceHolders
            int r1 = r1.size()
            int r1 = r1 + (-1)
            if (r0 >= r1) goto L2c
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r1 = r3.mediaSourceHolders
            int r2 = r0 + 1
            java.lang.Object r1 = r1.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r1
            int r1 = r1.firstPeriodIndexInChild
            if (r1 != r4) goto L2c
            r0 = r2
            goto L12
        L2c:
            return r0
    }

    private void moveMediaSourceInternal(int r6, int r7) {
            r5 = this;
            int r0 = java.lang.Math.min(r6, r7)
            int r1 = java.lang.Math.max(r6, r7)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r2 = r5.mediaSourceHolders
            java.lang.Object r2 = r2.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r2 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r2
            int r2 = r2.firstWindowIndexInChild
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r3 = r5.mediaSourceHolders
            java.lang.Object r3 = r3.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r3
            int r3 = r3.firstPeriodIndexInChild
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r4 = r5.mediaSourceHolders
            java.lang.Object r6 = r4.remove(r6)
            r4.add(r7, r6)
        L25:
            if (r0 > r1) goto L44
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r6 = r5.mediaSourceHolders
            java.lang.Object r6 = r6.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r6 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r6
            r6.firstWindowIndexInChild = r2
            r6.firstPeriodIndexInChild = r3
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r7 = r6.timeline
            int r7 = r7.getWindowCount()
            int r2 = r2 + r7
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r6 = r6.timeline
            int r6 = r6.getPeriodCount()
            int r3 = r3 + r6
            int r0 = r0 + 1
            goto L25
        L44:
            return
    }

    private void notifyListener() {
            r8 = this;
            r0 = 0
            r8.listenerNotificationScheduled = r0
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher> r0 = r8.pendingOnCompletionActions
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L10
            java.util.List r0 = java.util.Collections.emptyList()
            goto L17
        L10:
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher> r1 = r8.pendingOnCompletionActions
            r0.<init>(r1)
        L17:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher> r1 = r8.pendingOnCompletionActions
            r1.clear()
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$ConcatenatedTimeline r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$ConcatenatedTimeline
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r3 = r8.mediaSourceHolders
            int r4 = r8.windowCount
            int r5 = r8.periodCount
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r6 = r8.shuffleOrder
            boolean r7 = r8.isAtomic
            r2 = r1
            r2.<init>(r3, r4, r5, r6, r7)
            r2 = 0
            r8.refreshSourceInfo(r1, r2)
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L48
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1 = r8.player
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1 = r1.createMessage(r8)
            r2 = 6
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1 = r1.setType(r2)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r1.setPayload(r0)
            r0.send()
        L48:
            return
    }

    private void removeMediaSourceInternal(int r5) {
            r4 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r4.mediaSourceHolders
            java.lang.Object r0 = r0.remove(r5)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r1 = r0.timeline
            int r2 = r1.getWindowCount()
            int r2 = -r2
            int r1 = r1.getPeriodCount()
            int r1 = -r1
            r3 = -1
            r4.correctOffsets(r5, r3, r2, r1)
            r5 = 1
            r0.isRemoved = r5
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r5 = r0.activeMediaPeriods
            boolean r5 = r5.isEmpty()
            if (r5 == 0) goto L26
            r4.releaseChildSource(r0)
        L26:
            return
    }

    private void scheduleListenerNotification(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.EventDispatcher r3) {
            r2 = this;
            boolean r0 = r2.listenerNotificationScheduled
            if (r0 != 0) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.createMessage(r2)
            r1 = 5
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.setType(r1)
            r0.send()
            r0 = 1
            r2.listenerNotificationScheduled = r0
        L15:
            if (r3 == 0) goto L1c
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher> r0 = r2.pendingOnCompletionActions
            r0.add(r3)
        L1c:
            return
    }

    private void updateMediaSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r8, com.mbridge.msdk.playercommon.exoplayer2.Timeline r9) {
            r7 = this;
            if (r8 == 0) goto L6b
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r0 = r8.timeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r0.getTimeline()
            if (r1 != r9) goto Lb
            return
        Lb:
            int r1 = r9.getWindowCount()
            int r2 = r0.getWindowCount()
            int r1 = r1 - r2
            int r2 = r9.getPeriodCount()
            int r3 = r0.getPeriodCount()
            int r2 = r2 - r3
            r3 = 0
            r4 = 1
            if (r1 != 0) goto L23
            if (r2 == 0) goto L29
        L23:
            int r5 = r8.childIndex
            int r5 = r5 + r4
            r7.correctOffsets(r5, r3, r1, r2)
        L29:
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$DeferredTimeline r0 = r0.cloneWithNewTimeline(r9)
            r8.timeline = r0
            boolean r0 = r8.isPrepared
            if (r0 != 0) goto L66
            boolean r0 = r9.isEmpty()
            if (r0 != 0) goto L66
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r0 = r7.window
            r9.getWindow(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r9 = r7.window
            long r0 = r9.getPositionInFirstPeriodUs()
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Window r9 = r7.window
            long r5 = r9.getDefaultPositionUs()
            long r0 = r0 + r5
        L4b:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r9 = r8.activeMediaPeriods
            int r9 = r9.size()
            if (r3 >= r9) goto L64
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r9 = r8.activeMediaPeriods
            java.lang.Object r9 = r9.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r9 = (com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod) r9
            r9.setDefaultPreparePositionUs(r0)
            r9.createPeriod()
            int r3 = r3 + 1
            goto L4b
        L64:
            r8.isPrepared = r4
        L66:
            r8 = 0
            r7.scheduleListenerNotification(r8)
            return
        L6b:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            r8.<init>()
            throw r8
    }

    public final synchronized void addMediaSource(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.addMediaSource(r2, r3, r0)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void addMediaSource(int r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r4, java.lang.Runnable r5) {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder     // Catch: java.lang.Throwable -> L31
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L31
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r4 = r2.mediaSourcesPublic     // Catch: java.lang.Throwable -> L31
            r4.add(r3, r0)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r4 = r2.player     // Catch: java.lang.Throwable -> L31
            if (r4 == 0) goto L2a
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r4 = r2.player     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r4 = r4.createMessage(r2)     // Catch: java.lang.Throwable -> L31
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r4 = r4.setType(r1)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData     // Catch: java.lang.Throwable -> L31
            r1.<init>(r3, r0, r5)     // Catch: java.lang.Throwable -> L31
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r4.setPayload(r1)     // Catch: java.lang.Throwable -> L31
            r3.send()     // Catch: java.lang.Throwable -> L31
            goto L2f
        L2a:
            if (r5 == 0) goto L2f
            r5.run()     // Catch: java.lang.Throwable -> L31
        L2f:
            monitor-exit(r2)
            return
        L31:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void addMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourcesPublic     // Catch: java.lang.Throwable -> Ld
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Ld
            r1 = 0
            r2.addMediaSource(r0, r3, r1)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r2)
            return
        Ld:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void addMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, java.lang.Runnable r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r1.mediaSourcesPublic     // Catch: java.lang.Throwable -> Lc
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Lc
            r1.addMediaSource(r0, r2, r3)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)
            return
        Lc:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void addMediaSources(int r2, java.util.Collection<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r3) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.addMediaSources(r2, r3, r0)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void addMediaSources(int r5, java.util.Collection<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r6, java.lang.Runnable r7) {
            r4 = this;
            monitor-enter(r4)
            java.util.Iterator r0 = r6.iterator()     // Catch: java.lang.Throwable -> L65
        L5:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L15
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource) r1     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)     // Catch: java.lang.Throwable -> L65
            goto L5
        L15:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L65
            int r1 = r6.size()     // Catch: java.lang.Throwable -> L65
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L65
            java.util.Iterator r1 = r6.iterator()     // Catch: java.lang.Throwable -> L65
        L22:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L65
            if (r2 == 0) goto L37
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource) r2     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder     // Catch: java.lang.Throwable -> L65
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L65
            r0.add(r3)     // Catch: java.lang.Throwable -> L65
            goto L22
        L37:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r1 = r4.mediaSourcesPublic     // Catch: java.lang.Throwable -> L65
            r1.addAll(r5, r0)     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1 = r4.player     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L5e
            boolean r6 = r6.isEmpty()     // Catch: java.lang.Throwable -> L65
            if (r6 != 0) goto L5e
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r6 = r4.player     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r6 = r6.createMessage(r4)     // Catch: java.lang.Throwable -> L65
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r6 = r6.setType(r1)     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData     // Catch: java.lang.Throwable -> L65
            r1.<init>(r5, r0, r7)     // Catch: java.lang.Throwable -> L65
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r6.setPayload(r1)     // Catch: java.lang.Throwable -> L65
            r5.send()     // Catch: java.lang.Throwable -> L65
            goto L63
        L5e:
            if (r7 == 0) goto L63
            r7.run()     // Catch: java.lang.Throwable -> L65
        L63:
            monitor-exit(r4)
            return
        L65:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final synchronized void addMediaSources(java.util.Collection<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourcesPublic     // Catch: java.lang.Throwable -> Ld
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Ld
            r1 = 0
            r2.addMediaSources(r0, r3, r1)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r2)
            return
        Ld:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void addMediaSources(java.util.Collection<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r2, java.lang.Runnable r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r1.mediaSourcesPublic     // Catch: java.lang.Throwable -> Lc
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Lc
            r1.addMediaSources(r0, r2, r3)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)
            return
        Lc:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void clear() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.clear(r0)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void clear(java.lang.Runnable r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourcesPublic     // Catch: java.lang.Throwable -> L2d
            r0.clear()     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.createMessage(r2)     // Catch: java.lang.Throwable -> L2d
            r1 = 4
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.setType(r1)     // Catch: java.lang.Throwable -> L2d
            if (r3 == 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher     // Catch: java.lang.Throwable -> L2d
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L2d
            goto L1e
        L1d:
            r1 = 0
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r0.setPayload(r1)     // Catch: java.lang.Throwable -> L2d
            r3.send()     // Catch: java.lang.Throwable -> L2d
            goto L2b
        L26:
            if (r3 == 0) goto L2b
            r3.run()     // Catch: java.lang.Throwable -> L2d
        L2b:
            monitor-exit(r2)
            return
        L2d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r4, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r5) {
            r3 = this;
            int r0 = r4.periodIndex
            int r0 = r3.findMediaSourceHolderByPeriodIndex(r0)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r1 = r3.mediaSourceHolders
            java.lang.Object r0 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            int r1 = r4.periodIndex
            int r2 = r0.firstPeriodIndexInChild
            int r1 = r1 - r2
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r4 = r4.copyWithPeriodIndex(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r0.mediaSource
            r1.<init>(r2, r4, r5)
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod, com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r4 = r3.mediaSourceByMediaPeriod
            r4.put(r1, r0)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r4 = r0.activeMediaPeriods
            r4.add(r1)
            boolean r4 = r0.isPrepared
            if (r4 == 0) goto L2f
            r1.createPeriod()
        L2f:
            return r1
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId getMediaPeriodIdForChildMediaPeriodId(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r6, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r7) {
            r5 = this;
            r0 = 0
        L1:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r1 = r6.activeMediaPeriods
            int r1 = r1.size()
            if (r0 >= r1) goto L28
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r1 = r6.activeMediaPeriods
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod) r1
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r1.id
            long r1 = r1.windowSequenceNumber
            long r3 = r7.windowSequenceNumber
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L25
            int r0 = r7.periodIndex
            int r6 = r6.firstPeriodIndexInChild
            int r0 = r0 + r6
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r6 = r7.copyWithPeriodIndex(r0)
            return r6
        L25:
            int r0 = r0 + 1
            goto L1
        L28:
            r6 = 0
            return r6
    }

    @Override
    protected com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId getMediaPeriodIdForChildMediaPeriodId(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r1
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r0.getMediaPeriodIdForChildMediaPeriodId(r1, r2)
            return r1
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource getMediaSource(int r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r1.mediaSourcesPublic     // Catch: java.lang.Throwable -> Ld
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Ld
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r2 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r2     // Catch: java.lang.Throwable -> Ld
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r2.mediaSource     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return r2
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized int getSize() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r1.mediaSourcesPublic     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    protected int getWindowIndexForChildWindowIndex(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r1, int r2) {
            r0 = this;
            int r1 = r1.firstWindowIndexInChild
            int r2 = r2 + r1
            return r2
    }

    @Override
    protected int getWindowIndexForChildWindowIndex(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r1, int r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r1
            int r1 = r0.getWindowIndexForChildWindowIndex(r1, r2)
            return r1
    }

    @Override
    public final void handleMessage(int r3, java.lang.Object r4) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            r0 = 1
            switch(r3) {
                case 0: goto L95;
                case 1: goto L72;
                case 2: goto L5b;
                case 3: goto L2e;
                case 4: goto L24;
                case 5: goto L1f;
                case 6: goto La;
                default: goto L4;
            }
        L4:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
        La:
            java.util.List r4 = (java.util.List) r4
            r3 = 0
        Ld:
            int r0 = r4.size()
            if (r3 >= r0) goto Laf
            java.lang.Object r0 = r4.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.EventDispatcher) r0
            r0.dispatchEvent()
            int r3 = r3 + 1
            goto Ld
        L1f:
            r2.notifyListener()
            goto Laf
        L24:
            r2.clearInternal()
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.EventDispatcher) r4
            r2.scheduleListenerNotification(r4)
            goto Laf
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MessageData) r4
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r2.shuffleOrder
            int r1 = r4.index
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r3.cloneAndRemove(r1)
            r2.shuffleOrder = r3
            T r1 = r4.customData
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r3.cloneAndInsert(r1, r0)
            r2.shuffleOrder = r3
            int r3 = r4.index
            T r0 = r4.customData
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            r2.moveMediaSourceInternal(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r3 = r4.actionOnCompletion
            r2.scheduleListenerNotification(r3)
            goto Laf
        L5b:
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MessageData) r4
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r2.shuffleOrder
            int r0 = r4.index
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r3.cloneAndRemove(r0)
            r2.shuffleOrder = r3
            int r3 = r4.index
            r2.removeMediaSourceInternal(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r3 = r4.actionOnCompletion
            r2.scheduleListenerNotification(r3)
            goto Laf
        L72:
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MessageData) r4
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r2.shuffleOrder
            int r0 = r4.index
            T r1 = r4.customData
            java.util.Collection r1 = (java.util.Collection) r1
            int r1 = r1.size()
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r3.cloneAndInsert(r0, r1)
            r2.shuffleOrder = r3
            int r3 = r4.index
            T r0 = r4.customData
            java.util.Collection r0 = (java.util.Collection) r0
            r2.addMediaSourcesInternal(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r3 = r4.actionOnCompletion
            r2.scheduleListenerNotification(r3)
            goto Laf
        L95:
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MessageData) r4
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r2.shuffleOrder
            int r1 = r4.index
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r3 = r3.cloneAndInsert(r1, r0)
            r2.shuffleOrder = r3
            int r3 = r4.index
            T r0 = r4.customData
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            r2.addMediaSourceInternal(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$EventDispatcher r3 = r4.actionOnCompletion
            r2.scheduleListenerNotification(r3)
        Laf:
            return
    }

    public final synchronized void moveMediaSource(int r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.moveMediaSource(r2, r3, r0)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void moveMediaSource(int r3, int r4, java.lang.Runnable r5) {
            r2 = this;
            monitor-enter(r2)
            if (r3 != r4) goto L5
            monitor-exit(r2)
            return
        L5:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourcesPublic     // Catch: java.lang.Throwable -> L37
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r1 = r2.mediaSourcesPublic     // Catch: java.lang.Throwable -> L37
            java.lang.Object r1 = r1.remove(r3)     // Catch: java.lang.Throwable -> L37
            r0.add(r4, r1)     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player     // Catch: java.lang.Throwable -> L37
            if (r0 == 0) goto L30
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.createMessage(r2)     // Catch: java.lang.Throwable -> L37
            r1 = 3
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.setType(r1)     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData     // Catch: java.lang.Throwable -> L37
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L37
            r1.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r0.setPayload(r1)     // Catch: java.lang.Throwable -> L37
            r3.send()     // Catch: java.lang.Throwable -> L37
            goto L35
        L30:
            if (r5 == 0) goto L35
            r5.run()     // Catch: java.lang.Throwable -> L37
        L35:
            monitor-exit(r2)
            return
        L37:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    protected final void onChildSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4) {
            r0 = this;
            r0.updateMediaSourceInternal(r1, r3)
            return
    }

    @Override
    protected void onChildSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r1
            r0.onChildSourceInfoRefreshed(r1, r2, r3, r4)
            return
    }

    @Override
    public final synchronized void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r2, boolean r3) {
            r1 = this;
            monitor-enter(r1)
            super.prepareSourceInternal(r2, r3)     // Catch: java.lang.Throwable -> L2c
            r1.player = r2     // Catch: java.lang.Throwable -> L2c
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r2 = r1.mediaSourcesPublic     // Catch: java.lang.Throwable -> L2c
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L2c
            if (r2 == 0) goto L12
            r1.notifyListener()     // Catch: java.lang.Throwable -> L2c
            goto L2a
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r2 = r1.shuffleOrder     // Catch: java.lang.Throwable -> L2c
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r3 = r1.mediaSourcesPublic     // Catch: java.lang.Throwable -> L2c
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L2c
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r2 = r2.cloneAndInsert(r0, r3)     // Catch: java.lang.Throwable -> L2c
            r1.shuffleOrder = r2     // Catch: java.lang.Throwable -> L2c
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r2 = r1.mediaSourcesPublic     // Catch: java.lang.Throwable -> L2c
            r1.addMediaSourcesInternal(r0, r2)     // Catch: java.lang.Throwable -> L2c
            r2 = 0
            r1.scheduleListenerNotification(r2)     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r1)
            return
        L2c:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r3) {
            r2 = this;
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod, com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r2.mediaSourceByMediaPeriod
            java.lang.Object r0 = r0.remove(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource.MediaSourceHolder) r0
            r1 = r3
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod) r1
            r1.releasePeriod()
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r1 = r0.activeMediaPeriods
            r1.remove(r3)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod> r3 = r0.activeMediaPeriods
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L22
            boolean r3 = r0.isRemoved
            if (r3 == 0) goto L22
            r2.releaseChildSource(r0)
        L22:
            return
    }

    @Override
    public final void releaseSourceInternal() {
            r1 = this;
            super.releaseSourceInternal()
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r1.mediaSourceHolders
            r0.clear()
            r0 = 0
            r1.player = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r0 = r1.shuffleOrder
            com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder r0 = r0.cloneAndClear()
            r1.shuffleOrder = r0
            r0 = 0
            r1.windowCount = r0
            r1.periodCount = r0
            return
    }

    public final synchronized void removeMediaSource(int r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.removeMediaSource(r2, r0)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void removeMediaSource(int r4, java.lang.Runnable r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MediaSourceHolder> r0 = r3.mediaSourcesPublic     // Catch: java.lang.Throwable -> L2a
            r0.remove(r4)     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r3.player     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r3.player     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.createMessage(r3)     // Catch: java.lang.Throwable -> L2a
            r1 = 2
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r0 = r0.setType(r1)     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ConcatenatingMediaSource$MessageData     // Catch: java.lang.Throwable -> L2a
            r2 = 0
            r1.<init>(r4, r2, r5)     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r4 = r0.setPayload(r1)     // Catch: java.lang.Throwable -> L2a
            r4.send()     // Catch: java.lang.Throwable -> L2a
            goto L28
        L23:
            if (r5 == 0) goto L28
            r5.run()     // Catch: java.lang.Throwable -> L2a
        L28:
            monitor-exit(r3)
            return
        L2a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
