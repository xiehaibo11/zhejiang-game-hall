package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public abstract class MappingTrackSelector extends com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector {
    private com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector.MappedTrackInfo currentMappedTrackInfo;

    public static final class MappedTrackInfo {
        public static final int RENDERER_SUPPORT_EXCEEDS_CAPABILITIES_TRACKS = 2;
        public static final int RENDERER_SUPPORT_NO_TRACKS = 0;
        public static final int RENDERER_SUPPORT_PLAYABLE_TRACKS = 3;
        public static final int RENDERER_SUPPORT_UNSUPPORTED_TRACKS = 1;
        public final int length;
        private final int rendererCount;
        private final int[][][] rendererFormatSupports;
        private final int[] rendererMixedMimeTypeAdaptiveSupports;
        private final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray[] rendererTrackGroups;
        private final int[] rendererTrackTypes;
        private final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray unmappedTrackGroups;

        @interface RendererSupport {
        }

        MappedTrackInfo(int[] r1, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray[] r2, int[] r3, int[][][] r4, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r5) {
                r0 = this;
                r0.<init>()
                r0.rendererTrackTypes = r1
                r0.rendererTrackGroups = r2
                r0.rendererFormatSupports = r4
                r0.rendererMixedMimeTypeAdaptiveSupports = r3
                r0.unmappedTrackGroups = r5
                int r1 = r1.length
                r0.rendererCount = r1
                r0.length = r1
                return
        }

        public final int getAdaptiveSupport(int r7, int r8, boolean r9) {
                r6 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray[] r0 = r6.rendererTrackGroups
                r0 = r0[r7]
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r0 = r0.get(r8)
                int r0 = r0.length
                int[] r1 = new int[r0]
                r2 = 0
                r3 = r2
            Le:
                if (r2 >= r0) goto L24
                int r4 = r6.getTrackSupport(r7, r8, r2)
                r5 = 4
                if (r4 == r5) goto L1c
                if (r9 == 0) goto L21
                r5 = 3
                if (r4 != r5) goto L21
            L1c:
                int r4 = r3 + 1
                r1[r3] = r2
                r3 = r4
            L21:
                int r2 = r2 + 1
                goto Le
            L24:
                int[] r9 = java.util.Arrays.copyOf(r1, r3)
                int r7 = r6.getAdaptiveSupport(r7, r8, r9)
                return r7
        }

        public final int getAdaptiveSupport(int r8, int r9, int[] r10) {
                r7 = this;
                r0 = 0
                r1 = 16
                r2 = 0
                r3 = r1
                r4 = r2
                r1 = r0
                r2 = r1
            L8:
                int r5 = r10.length
                if (r0 >= r5) goto L3a
                r5 = r10[r0]
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray[] r6 = r7.rendererTrackGroups
                r6 = r6[r8]
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r6 = r6.get(r9)
                com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r6.getFormat(r5)
                java.lang.String r5 = r5.sampleMimeType
                int r6 = r2 + 1
                if (r2 != 0) goto L21
                r4 = r5
                goto L28
            L21:
                boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r4, r5)
                r2 = r2 ^ 1
                r1 = r1 | r2
            L28:
                int[][][] r2 = r7.rendererFormatSupports
                r2 = r2[r8]
                r2 = r2[r9]
                r2 = r2[r0]
                r2 = r2 & 24
                int r3 = java.lang.Math.min(r3, r2)
                int r0 = r0 + 1
                r2 = r6
                goto L8
            L3a:
                if (r1 == 0) goto L44
                int[] r9 = r7.rendererMixedMimeTypeAdaptiveSupports
                r8 = r9[r8]
                int r3 = java.lang.Math.min(r3, r8)
            L44:
                return r3
        }

        public final int getRendererCount() {
                r1 = this;
                int r0 = r1.rendererCount
                return r0
        }

        public final int getRendererSupport(int r8) {
                r7 = this;
                int[][][] r0 = r7.rendererFormatSupports
                r8 = r0[r8]
                r0 = 0
                r1 = r0
                r2 = r1
            L7:
                int r3 = r8.length
                if (r1 >= r3) goto L2a
                r3 = r0
            Lb:
                r4 = r8[r1]
                int r4 = r4.length
                if (r3 >= r4) goto L27
                r4 = r8[r1]
                r4 = r4[r3]
                r4 = r4 & 7
                r5 = 3
                if (r4 == r5) goto L1f
                r6 = 4
                if (r4 == r6) goto L1e
                r4 = 1
                goto L20
            L1e:
                return r5
            L1f:
                r4 = 2
            L20:
                int r2 = java.lang.Math.max(r2, r4)
                int r3 = r3 + 1
                goto Lb
            L27:
                int r1 = r1 + 1
                goto L7
            L2a:
                return r2
        }

        public final int getRendererType(int r2) {
                r1 = this;
                int[] r0 = r1.rendererTrackTypes
                r2 = r0[r2]
                return r2
        }

        public final int getTrackFormatSupport(int r1, int r2, int r3) {
                r0 = this;
                int r1 = r0.getTrackSupport(r1, r2, r3)
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray[] r0 = r1.rendererTrackGroups
                r2 = r0[r2]
                return r2
        }

        public final int getTrackSupport(int r2, int r3, int r4) {
                r1 = this;
                int[][][] r0 = r1.rendererFormatSupports
                r2 = r0[r2]
                r2 = r2[r3]
                r2 = r2[r4]
                r2 = r2 & 7
                return r2
        }

        public final int getTrackTypeRendererSupport(int r1) {
                r0 = this;
                int r1 = r0.getTypeSupport(r1)
                return r1
        }

        public final int getTypeSupport(int r4) {
                r3 = this;
                r0 = 0
                r1 = r0
            L2:
                int r2 = r3.rendererCount
                if (r0 >= r2) goto L17
                int[] r2 = r3.rendererTrackTypes
                r2 = r2[r0]
                if (r2 != r4) goto L14
                int r2 = r3.getRendererSupport(r0)
                int r1 = java.lang.Math.max(r1, r2)
            L14:
                int r0 = r0 + 1
                goto L2
            L17:
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getUnassociatedTrackGroups() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r1.getUnmappedTrackGroups()
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getUnmappedTrackGroups() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r1.unmappedTrackGroups
                return r0
        }
    }

    public MappingTrackSelector() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int findRenderer(com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r7, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r8) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            int r0 = r7.length
            r1 = 0
            r2 = r1
            r3 = r2
        L4:
            int r4 = r7.length
            if (r2 >= r4) goto L26
            r4 = r7[r2]
            r5 = r1
        La:
            int r6 = r8.length
            if (r5 >= r6) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r8.getFormat(r5)
            int r6 = r4.supportsFormat(r6)
            r6 = r6 & 7
            if (r6 <= r3) goto L20
            r0 = 4
            if (r6 != r0) goto L1e
            return r2
        L1e:
            r0 = r2
            r3 = r6
        L20:
            int r5 = r5 + 1
            goto La
        L23:
            int r2 = r2 + 1
            goto L4
        L26:
            return r0
    }

    private static int[] getFormatSupport(com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities r3, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r4) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            int r0 = r4.length
            int[] r0 = new int[r0]
            r1 = 0
        L5:
            int r2 = r4.length
            if (r1 >= r2) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r4.getFormat(r1)
            int r2 = r3.supportsFormat(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L5
        L16:
            return r0
    }

    private static int[] getMixedMimeTypeAdaptationSupports(com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r4) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            int r0 = r4.length
            int[] r1 = new int[r0]
            r2 = 0
        L4:
            if (r2 >= r0) goto L11
            r3 = r4[r2]
            int r3 = r3.supportsMixedMimeTypeAdaptation()
            r1[r2] = r3
            int r2 = r2 + 1
            goto L4
        L11:
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector.MappedTrackInfo getCurrentMappedTrackInfo() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo r0 = r1.currentMappedTrackInfo
            return r0
    }

    @Override
    public final void onSelectionActivated(java.lang.Object r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector.MappedTrackInfo) r1
            r0.currentMappedTrackInfo = r1
            return
    }

    protected abstract android.util.Pair<com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[], com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[]> selectTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector.MappedTrackInfo r1, int[][][] r2, int[] r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult selectTracks(com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r12, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r13) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r11 = this;
            int r0 = r12.length
            int r0 = r0 + 1
            int[] r0 = new int[r0]
            int r1 = r12.length
            int r1 = r1 + 1
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[][] r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[r1][]
            int r3 = r12.length
            int r3 = r3 + 1
            int[][][] r3 = new int[r3][][]
            r4 = 0
            r5 = r4
        L11:
            if (r5 >= r1) goto L22
            int r6 = r13.length
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[r6]
            r2[r5] = r6
            int r6 = r13.length
            int[][] r6 = new int[r6][]
            r3[r5] = r6
            int r5 = r5 + 1
            goto L11
        L22:
            int[] r1 = getMixedMimeTypeAdaptationSupports(r12)
            r5 = r4
        L27:
            int r6 = r13.length
            if (r5 >= r6) goto L54
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r6 = r13.get(r5)
            int r7 = findRenderer(r12, r6)
            int r8 = r12.length
            if (r7 != r8) goto L3b
            int r8 = r6.length
            int[] r8 = new int[r8]
            goto L41
        L3b:
            r8 = r12[r7]
            int[] r8 = getFormatSupport(r8, r6)
        L41:
            r9 = r0[r7]
            r10 = r2[r7]
            r10[r9] = r6
            r6 = r3[r7]
            r6[r9] = r8
            r6 = r0[r7]
            int r6 = r6 + 1
            r0[r7] = r6
            int r5 = r5 + 1
            goto L27
        L54:
            int r13 = r12.length
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray[] r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray[r13]
            int r13 = r12.length
            int[] r5 = new int[r13]
        L5a:
            int r13 = r12.length
            if (r4 >= r13) goto L83
            r13 = r0[r4]
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r7 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray
            r8 = r2[r4]
            java.lang.Object[] r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.nullSafeArrayCopy(r8, r13)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r8 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[]) r8
            r7.<init>(r8)
            r6[r4] = r7
            r7 = r3[r4]
            java.lang.Object[] r13 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.nullSafeArrayCopy(r7, r13)
            int[][] r13 = (int[][]) r13
            r3[r4] = r13
            r13 = r12[r4]
            int r13 = r13.getTrackType()
            r5[r4] = r13
            int r4 = r4 + 1
            goto L5a
        L83:
            int r13 = r12.length
            r13 = r0[r13]
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray
            int r12 = r12.length
            r12 = r2[r12]
            java.lang.Object[] r12 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.nullSafeArrayCopy(r12, r13)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r12 = (com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[]) r12
            r9.<init>(r12)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo r12 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo
            r4 = r12
            r7 = r1
            r8 = r3
            r4.<init>(r5, r6, r7, r8, r9)
            android.util.Pair r13 = r11.selectTracks(r12, r3, r1)
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult r0 = new com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult
            java.lang.Object r1 = r13.first
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[] r1 = (com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration[]) r1
            java.lang.Object r13 = r13.second
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r13 = (com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[]) r13
            r0.<init>(r1, r13, r12)
            return r0
    }
}
