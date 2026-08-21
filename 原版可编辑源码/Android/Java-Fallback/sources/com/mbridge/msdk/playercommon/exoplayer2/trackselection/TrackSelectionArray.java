package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public final class TrackSelectionArray {
    private int hashCode;
    public final int length;
    private final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] trackSelections;

    public TrackSelectionArray(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection... r1) {
            r0 = this;
            r0.<init>()
            r0.trackSelections = r1
            int r1 = r1.length
            r0.length = r1
            return
    }

    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1c
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1c
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r3 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray) r3
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r0 = r2.trackSelections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r3 = r3.trackSelections
            boolean r3 = java.util.Arrays.equals(r0, r3)
            return r3
        L1c:
            r3 = 0
            return r3
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection get(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r0 = r1.trackSelections
            r2 = r0[r2]
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] getAll() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r0 = r1.trackSelections
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r0 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[]) r0
            return r0
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto Lf
            r0 = 527(0x20f, float:7.38E-43)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r1 = r2.trackSelections
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.hashCode = r0
        Lf:
            int r0 = r2.hashCode
            return r0
    }
}
