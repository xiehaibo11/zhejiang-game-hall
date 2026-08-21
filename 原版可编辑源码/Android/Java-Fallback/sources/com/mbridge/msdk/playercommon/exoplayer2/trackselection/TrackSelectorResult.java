package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public final class TrackSelectorResult {
    public final java.lang.Object info;
    public final int length;
    public final com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] rendererConfigurations;
    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray selections;

    public TrackSelectorResult(com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r3, java.lang.Object r4) {
            r1 = this;
            r1.<init>()
            r1.rendererConfigurations = r2
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray
            r0.<init>(r3)
            r1.selections = r0
            r1.info = r4
            int r2 = r2.length
            r1.length = r2
            return
    }

    public final boolean isEquivalent(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r1 = r4.selections
            int r1 = r1.length
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r2 = r3.selections
            int r2 = r2.length
            if (r1 == r2) goto Le
            goto L21
        Le:
            r1 = r0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r2 = r3.selections
            int r2 = r2.length
            if (r1 >= r2) goto L1f
            boolean r2 = r3.isEquivalent(r4, r1)
            if (r2 != 0) goto L1c
            return r0
        L1c:
            int r1 = r1 + 1
            goto Lf
        L1f:
            r4 = 1
            return r4
        L21:
            return r0
    }

    public final boolean isEquivalent(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r4, int r5) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r1 = r3.rendererConfigurations
            r1 = r1[r5]
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r2 = r4.rendererConfigurations
            r2 = r2[r5]
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r1, r2)
            if (r1 == 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r1 = r3.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r1 = r1.get(r5)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r4 = r4.selections
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection r4 = r4.get(r5)
            boolean r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r1, r4)
            if (r4 == 0) goto L25
            r0 = 1
        L25:
            return r0
    }

    public final boolean isRendererEnabled(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r0 = r1.rendererConfigurations
            r2 = r0[r2]
            if (r2 == 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }
}
