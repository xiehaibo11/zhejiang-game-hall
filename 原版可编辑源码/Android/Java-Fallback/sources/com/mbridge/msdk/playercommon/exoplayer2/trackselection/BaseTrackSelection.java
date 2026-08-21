package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public abstract class BaseTrackSelection implements com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection {
    private final long[] blacklistUntilTimes;
    private final com.mbridge.msdk.playercommon.exoplayer2.Format[] formats;
    protected final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup group;
    private int hashCode;
    protected final int length;
    protected final int[] tracks;

    static class 1 {
    }

    private static final class DecreasingBandwidthComparator implements java.util.Comparator<com.mbridge.msdk.playercommon.exoplayer2.Format> {
        private DecreasingBandwidthComparator() {
                r0 = this;
                r0.<init>()
                return
        }

        DecreasingBandwidthComparator(com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final int compare(com.mbridge.msdk.playercommon.exoplayer2.Format r1, com.mbridge.msdk.playercommon.exoplayer2.Format r2) {
                r0 = this;
                int r2 = r2.bitrate
                int r1 = r1.bitrate
                int r2 = r2 - r1
                return r2
        }

        @Override
        public final int compare(com.mbridge.msdk.playercommon.exoplayer2.Format r1, com.mbridge.msdk.playercommon.exoplayer2.Format r2) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Format r1 = (com.mbridge.msdk.playercommon.exoplayer2.Format) r1
                com.mbridge.msdk.playercommon.exoplayer2.Format r2 = (com.mbridge.msdk.playercommon.exoplayer2.Format) r2
                int r1 = r0.compare(r1, r2)
                return r1
        }
    }

    public BaseTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r5, int... r6) {
            r4 = this;
            r4.<init>()
            int r0 = r6.length
            r1 = 0
            if (r0 <= 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = r1
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.lang.Object r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r5)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup) r0
            r4.group = r0
            int r0 = r6.length
            r4.length = r0
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r0]
            r4.formats = r0
            r0 = r1
        L1d:
            int r2 = r6.length
            if (r0 >= r2) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r2 = r4.formats
            r3 = r6[r0]
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r5.getFormat(r3)
            r2[r0] = r3
            int r0 = r0 + 1
            goto L1d
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r6 = r4.formats
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection$DecreasingBandwidthComparator r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection$DecreasingBandwidthComparator
            r2 = 0
            r0.<init>(r2)
            java.util.Arrays.sort(r6, r0)
            int r6 = r4.length
            int[] r6 = new int[r6]
            r4.tracks = r6
        L3e:
            int r6 = r4.length
            if (r1 >= r6) goto L51
            int[] r6 = r4.tracks
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r4.formats
            r0 = r0[r1]
            int r0 = r5.indexOf(r0)
            r6[r1] = r0
            int r1 = r1 + 1
            goto L3e
        L51:
            long[] r5 = new long[r6]
            r4.blacklistUntilTimes = r5
            return
    }

    @Override
    public final boolean blacklist(int r8, long r9) {
            r7 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            boolean r2 = r7.isBlacklisted(r8, r0)
            r3 = 0
            r4 = r3
        La:
            int r5 = r7.length
            r6 = 1
            if (r4 >= r5) goto L1f
            if (r2 != 0) goto L1f
            if (r4 == r8) goto L1b
            boolean r2 = r7.isBlacklisted(r4, r0)
            if (r2 != 0) goto L1b
            r2 = r6
            goto L1c
        L1b:
            r2 = r3
        L1c:
            int r4 = r4 + 1
            goto La
        L1f:
            if (r2 != 0) goto L22
            return r3
        L22:
            long[] r2 = r7.blacklistUntilTimes
            r3 = r2[r8]
            long r0 = r0 + r9
            long r9 = java.lang.Math.max(r3, r0)
            r2[r8] = r9
            return r6
    }

    @Override
    public void disable() {
            r0 = this;
            return
    }

    @Override
    public void enable() {
            r0 = this;
            return
    }

    public boolean equals(java.lang.Object r5) {
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
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection r5 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection) r5
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r2 = r4.group
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r3 = r5.group
            if (r2 != r3) goto L25
            int[] r2 = r4.tracks
            int[] r5 = r5.tracks
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L25
            goto L26
        L25:
            r0 = r1
        L26:
            return r0
        L27:
            return r1
    }

    @Override
    public int evaluateQueueSize(long r1, java.util.List<? extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk> r3) {
            r0 = this;
            int r1 = r3.size()
            return r1
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Format getFormat(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r1.formats
            r2 = r0[r2]
            return r2
    }

    @Override
    public final int getIndexInTrackGroup(int r2) {
            r1 = this;
            int[] r0 = r1.tracks
            r2 = r0[r2]
            return r2
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.Format getSelectedFormat() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r2.formats
            int r1 = r2.getSelectedIndex()
            r0 = r0[r1]
            return r0
    }

    @Override
    public final int getSelectedIndexInTrackGroup() {
            r2 = this;
            int[] r0 = r2.tracks
            int r1 = r2.getSelectedIndex()
            r0 = r0[r1]
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup getTrackGroup() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r0 = r1.group
            return r0
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r0 = r2.group
            int r0 = java.lang.System.identityHashCode(r0)
            int r0 = r0 * 31
            int[] r1 = r2.tracks
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.hashCode = r0
        L15:
            int r0 = r2.hashCode
            return r0
    }

    @Override
    public final int indexOf(int r3) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r2.length
            if (r0 >= r1) goto Lf
            int[] r1 = r2.tracks
            r1 = r1[r0]
            if (r1 != r3) goto Lc
            return r0
        Lc:
            int r0 = r0 + 1
            goto L1
        Lf:
            r3 = -1
            return r3
    }

    @Override
    public final int indexOf(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r2.length
            if (r0 >= r1) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r1 = r2.formats
            r1 = r1[r0]
            if (r1 != r3) goto Lc
            return r0
        Lc:
            int r0 = r0 + 1
            goto L1
        Lf:
            r3 = -1
            return r3
    }

    protected final boolean isBlacklisted(int r4, long r5) {
            r3 = this;
            long[] r0 = r3.blacklistUntilTimes
            r1 = r0[r4]
            int r4 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r4 <= 0) goto La
            r4 = 1
            goto Lb
        La:
            r4 = 0
        Lb:
            return r4
    }

    @Override
    public final int length() {
            r1 = this;
            int[] r0 = r1.tracks
            int r0 = r0.length
            return r0
    }

    @Override
    public void onPlaybackSpeed(float r1) {
            r0 = this;
            return
    }
}
