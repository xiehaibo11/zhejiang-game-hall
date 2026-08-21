package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public final class FixedTrackSelection extends com.mbridge.msdk.playercommon.exoplayer2.trackselection.BaseTrackSelection {
    private final java.lang.Object data;
    private final int reason;

    public static final class Factory implements com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection.Factory {
        private final java.lang.Object data;
        private final int reason;

        public Factory() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.reason = r0
                r0 = 0
                r1.data = r0
                return
        }

        public Factory(int r1, java.lang.Object r2) {
                r0 = this;
                r0.<init>()
                r0.reason = r1
                r0.data = r2
                return
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection createTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r4, int... r5) {
                r3 = this;
                int r0 = r5.length
                r1 = 0
                r2 = 1
                if (r0 != r2) goto L6
                goto L7
            L6:
                r2 = r1
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection
                r5 = r5[r1]
                int r1 = r3.reason
                java.lang.Object r2 = r3.data
                r0.<init>(r4, r5, r1, r2)
                return r0
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection createTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r1, int[] r2) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.trackselection.FixedTrackSelection r1 = r0.createTrackSelection(r1, r2)
                return r1
        }
    }

    public FixedTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r3, int r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public FixedTrackSelection(com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r3, int r4, int r5, java.lang.Object r6) {
            r2 = this;
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r4
            r2.<init>(r3, r0)
            r2.reason = r5
            r2.data = r6
            return
    }

    @Override
    public final int getSelectedIndex() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.Object getSelectionData() {
            r1 = this;
            java.lang.Object r0 = r1.data
            return r0
    }

    @Override
    public final int getSelectionReason() {
            r1 = this;
            int r0 = r1.reason
            return r0
    }

    @Override
    public final void updateSelectedTrack(long r1, long r3, long r5) {
            r0 = this;
            return
    }
}
