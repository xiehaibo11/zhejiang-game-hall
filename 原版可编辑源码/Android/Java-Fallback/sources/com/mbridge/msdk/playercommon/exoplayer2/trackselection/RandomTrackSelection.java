package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public final class RandomTrackSelection extends com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection {
    private final java.util.Random random;
    private int selectedIndex;

    public static final class Factory implements com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory {
        private final java.util.Random random;

        public Factory() {
                r1 = this;
                r1.<init>()
                java.util.Random r0 = new java.util.Random
                r0.<init>()
                r1.random = r0
                return
        }

        public Factory(int r4) {
                r3 = this;
                r3.<init>()
                java.util.Random r0 = new java.util.Random
                long r1 = (long) r4
                r0.<init>(r1)
                r3.random = r0
                return
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.RandomTrackSelection createTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r3, int... r4) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.RandomTrackSelection r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.RandomTrackSelection
                java.util.Random r1 = r2.random
                r0.<init>(r3, r4, r1)
                return r0
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection createTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1, int[] r2) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.RandomTrackSelection r1 = r0.createTrackSelection(r1, r2)
                return r1
        }
    }

    public RandomTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1, int... r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            r0.random = r1
            int r2 = r0.length
            int r1 = r1.nextInt(r2)
            r0.selectedIndex = r1
            return
    }

    public RandomTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r2, int[] r3, long r4) {
            r1 = this;
            java.util.Random r0 = new java.util.Random
            r0.<init>(r4)
            r1.<init>(r2, r3, r0)
            return
    }

    public RandomTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1, int[] r2, java.util.Random r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.random = r3
            int r1 = r0.length
            int r1 = r3.nextInt(r1)
            r0.selectedIndex = r1
            return
    }

    @Override
    public final int getSelectedIndex() {
            r1 = this;
            int r0 = r1.selectedIndex
            return r0
    }

    @Override
    public final java.lang.Object getSelectionData() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final int getSelectionReason() {
            r1 = this;
            r0 = 3
            return r0
    }

    @Override
    public final void updateSelectedTrack(long r1, long r3, long r5) {
            r0 = this;
            long r1 = android.os.SystemClock.elapsedRealtime()
            r3 = 0
            r4 = r3
            r5 = r4
        L7:
            int r6 = r0.length
            if (r4 >= r6) goto L16
            boolean r6 = r0.isBlacklisted(r4, r1)
            if (r6 != 0) goto L13
            int r5 = r5 + 1
        L13:
            int r4 = r4 + 1
            goto L7
        L16:
            java.util.Random r4 = r0.random
            int r4 = r4.nextInt(r5)
            r0.selectedIndex = r4
            int r4 = r0.length
            if (r5 == r4) goto L3a
            r4 = r3
        L23:
            int r5 = r0.length
            if (r3 >= r5) goto L3a
            boolean r5 = r0.isBlacklisted(r3, r1)
            if (r5 != 0) goto L37
            int r5 = r0.selectedIndex
            int r6 = r4 + 1
            if (r5 != r4) goto L36
            r0.selectedIndex = r3
            return
        L36:
            r4 = r6
        L37:
            int r3 = r3 + 1
            goto L23
        L3a:
            return
    }
}
