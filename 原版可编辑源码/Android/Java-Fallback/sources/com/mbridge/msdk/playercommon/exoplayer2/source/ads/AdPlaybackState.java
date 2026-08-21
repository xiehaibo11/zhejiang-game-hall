package com.mbridge.msdk.playercommon.exoplayer2.source.ads;

public final class AdPlaybackState {
    public static final int AD_STATE_AVAILABLE = 1;
    public static final int AD_STATE_ERROR = 4;
    public static final int AD_STATE_PLAYED = 3;
    public static final int AD_STATE_SKIPPED = 2;
    public static final int AD_STATE_UNAVAILABLE = 0;
    public static final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState NONE = null;
    public final int adGroupCount;
    public final long[] adGroupTimesUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[] adGroups;
    public final long adResumePositionUs;
    public final long contentDurationUs;

    public static final class AdGroup {
        public final int count;
        public final long[] durationsUs;
        public final int[] states;
        public final android.net.Uri[] uris;

        public AdGroup() {
                r4 = this;
                r0 = 0
                int[] r1 = new int[r0]
                android.net.Uri[] r2 = new android.net.Uri[r0]
                long[] r0 = new long[r0]
                r3 = -1
                r4.<init>(r3, r1, r2, r0)
                return
        }

        private AdGroup(int r3, int[] r4, android.net.Uri[] r5, long[] r6) {
                r2 = this;
                r2.<init>()
                int r0 = r4.length
                int r1 = r5.length
                if (r0 != r1) goto L9
                r0 = 1
                goto La
            L9:
                r0 = 0
            La:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                r2.count = r3
                r2.states = r4
                r2.uris = r5
                r2.durationsUs = r6
                return
        }

        private static long[] copyDurationsUsWithSpaceForAdCount(long[] r3, int r4) {
                int r0 = r3.length
                int r4 = java.lang.Math.max(r4, r0)
                long[] r3 = java.util.Arrays.copyOf(r3, r4)
                r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                java.util.Arrays.fill(r3, r0, r4, r1)
                return r3
        }

        private static int[] copyStatesWithSpaceForAdCount(int[] r2, int r3) {
                int r0 = r2.length
                int r3 = java.lang.Math.max(r3, r0)
                int[] r2 = java.util.Arrays.copyOf(r2, r3)
                r1 = 0
                java.util.Arrays.fill(r2, r0, r3, r1)
                return r2
        }

        public final int getFirstAdIndexToPlay() {
                r1 = this;
                r0 = -1
                int r0 = r1.getNextAdIndexToPlay(r0)
                return r0
        }

        public final int getNextAdIndexToPlay(int r4) {
                r3 = this;
                r0 = 1
                int r4 = r4 + r0
            L2:
                int[] r1 = r3.states
                int r2 = r1.length
                if (r4 >= r2) goto L13
                r2 = r1[r4]
                if (r2 == 0) goto L13
                r1 = r1[r4]
                if (r1 != r0) goto L10
                goto L13
            L10:
                int r4 = r4 + 1
                goto L2
            L13:
                return r4
        }

        public final boolean hasUnplayedAds() {
                r2 = this;
                int r0 = r2.count
                r1 = -1
                if (r0 == r1) goto L10
                int r0 = r2.getFirstAdIndexToPlay()
                int r1 = r2.count
                if (r0 >= r1) goto Le
                goto L10
            Le:
                r0 = 0
                goto L11
            L10:
                r0 = 1
            L11:
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup withAdCount(int r5) {
                r4 = this;
                int r0 = r4.count
                r1 = -1
                if (r0 != r1) goto Lc
                int[] r0 = r4.states
                int r0 = r0.length
                if (r0 > r5) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                int[] r0 = r4.states
                int[] r0 = copyStatesWithSpaceForAdCount(r0, r5)
                long[] r1 = r4.durationsUs
                long[] r1 = copyDurationsUsWithSpaceForAdCount(r1, r5)
                android.net.Uri[] r2 = r4.uris
                java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r5)
                android.net.Uri[] r2 = (android.net.Uri[]) r2
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup
                r3.<init>(r5, r0, r2, r1)
                return r3
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup withAdDurationsUs(long[] r5) {
                r4 = this;
                int r0 = r4.count
                r1 = -1
                if (r0 == r1) goto Le
                int r0 = r5.length
                android.net.Uri[] r1 = r4.uris
                int r1 = r1.length
                if (r0 > r1) goto Lc
                goto Le
            Lc:
                r0 = 0
                goto Lf
            Le:
                r0 = 1
            Lf:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                int r0 = r5.length
                android.net.Uri[] r1 = r4.uris
                int r2 = r1.length
                if (r0 >= r2) goto L1d
                int r0 = r1.length
                long[] r5 = copyDurationsUsWithSpaceForAdCount(r5, r0)
            L1d:
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup
                int r1 = r4.count
                int[] r2 = r4.states
                android.net.Uri[] r3 = r4.uris
                r0.<init>(r1, r2, r3, r5)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup withAdState(int r6, int r7) {
                r5 = this;
                int r0 = r5.count
                r1 = 0
                r2 = 1
                r3 = -1
                if (r0 == r3) goto Lc
                if (r7 >= r0) goto La
                goto Lc
            La:
                r0 = r1
                goto Ld
            Lc:
                r0 = r2
            Ld:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                int[] r0 = r5.states
                int r3 = r7 + 1
                int[] r0 = copyStatesWithSpaceForAdCount(r0, r3)
                r3 = r0[r7]
                if (r3 == 0) goto L24
                r3 = r0[r7]
                if (r3 == r2) goto L24
                r3 = r0[r7]
                if (r3 != r6) goto L25
            L24:
                r1 = r2
            L25:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
                long[] r1 = r5.durationsUs
                int r2 = r1.length
                int r3 = r0.length
                if (r2 != r3) goto L2f
                goto L34
            L2f:
                int r2 = r0.length
                long[] r1 = copyDurationsUsWithSpaceForAdCount(r1, r2)
            L34:
                android.net.Uri[] r2 = r5.uris
                int r3 = r2.length
                int r4 = r0.length
                if (r3 != r4) goto L3b
                goto L42
            L3b:
                int r3 = r0.length
                java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r3)
                android.net.Uri[] r2 = (android.net.Uri[]) r2
            L42:
                r0[r7] = r6
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup
                int r7 = r5.count
                r6.<init>(r7, r0, r2, r1)
                return r6
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup withAdUri(android.net.Uri r6, int r7) {
                r5 = this;
                int r0 = r5.count
                r1 = 0
                r2 = 1
                r3 = -1
                if (r0 == r3) goto Lc
                if (r7 >= r0) goto La
                goto Lc
            La:
                r0 = r1
                goto Ld
            Lc:
                r0 = r2
            Ld:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                int[] r0 = r5.states
                int r3 = r7 + 1
                int[] r0 = copyStatesWithSpaceForAdCount(r0, r3)
                r3 = r0[r7]
                if (r3 != 0) goto L1d
                r1 = r2
            L1d:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
                long[] r1 = r5.durationsUs
                int r3 = r1.length
                int r4 = r0.length
                if (r3 != r4) goto L27
                goto L2c
            L27:
                int r3 = r0.length
                long[] r1 = copyDurationsUsWithSpaceForAdCount(r1, r3)
            L2c:
                android.net.Uri[] r3 = r5.uris
                int r4 = r0.length
                java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r4)
                android.net.Uri[] r3 = (android.net.Uri[]) r3
                r3[r7] = r6
                r0[r7] = r2
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup
                int r7 = r5.count
                r6.<init>(r7, r0, r3, r1)
                return r6
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup withAllAdsSkipped() {
                r5 = this;
                int r0 = r5.count
                r1 = 0
                r2 = -1
                if (r0 != r2) goto L12
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup
                int[] r2 = new int[r1]
                android.net.Uri[] r3 = new android.net.Uri[r1]
                long[] r4 = new long[r1]
                r0.<init>(r1, r2, r3, r4)
                return r0
            L12:
                int[] r0 = r5.states
                int r2 = r0.length
                int[] r0 = java.util.Arrays.copyOf(r0, r2)
            L19:
                if (r1 >= r2) goto L2a
                r3 = r0[r1]
                r4 = 1
                if (r3 == r4) goto L24
                r3 = r0[r1]
                if (r3 != 0) goto L27
            L24:
                r3 = 2
                r0[r1] = r3
            L27:
                int r1 = r1 + 1
                goto L19
            L2a:
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup
                android.net.Uri[] r3 = r5.uris
                long[] r4 = r5.durationsUs
                r1.<init>(r2, r0, r3, r4)
                return r1
        }
    }

    public @interface AdState {
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            r1 = 0
            long[] r1 = new long[r1]
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.NONE = r0
            return
    }

    public AdPlaybackState(long... r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.length
            r3.adGroupCount = r0
            long[] r4 = java.util.Arrays.copyOf(r4, r0)
            r3.adGroupTimesUs = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[r0]
            r3.adGroups = r4
            r4 = 0
        L11:
            if (r4 >= r0) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r1 = r3.adGroups
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup
            r2.<init>()
            r1[r4] = r2
            int r4 = r4 + 1
            goto L11
        L1f:
            r0 = 0
            r3.adResumePositionUs = r0
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.contentDurationUs = r0
            return
    }

    private AdPlaybackState(long[] r2, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[] r3, long r4, long r6) {
            r1 = this;
            r1.<init>()
            int r0 = r3.length
            r1.adGroupCount = r0
            r1.adGroupTimesUs = r2
            r1.adGroups = r3
            r1.adResumePositionUs = r4
            r1.contentDurationUs = r6
            return
    }

    public final int getAdGroupIndexAfterPositionUs(long r7) {
            r6 = this;
            r0 = 0
        L1:
            long[] r1 = r6.adGroupTimesUs
            int r2 = r1.length
            if (r0 >= r2) goto L21
            r2 = r1[r0]
            r4 = -9223372036854775808
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L21
            r2 = r1[r0]
            int r1 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r1 >= 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r1 = r6.adGroups
            r1 = r1[r0]
            boolean r1 = r1.hasUnplayedAds()
            if (r1 != 0) goto L21
        L1e:
            int r0 = r0 + 1
            goto L1
        L21:
            long[] r7 = r6.adGroupTimesUs
            int r7 = r7.length
            if (r0 >= r7) goto L27
            goto L28
        L27:
            r0 = -1
        L28:
            return r0
    }

    public final int getAdGroupIndexForPositionUs(long r7) {
            r6 = this;
            long[] r0 = r6.adGroupTimesUs
            int r0 = r0.length
            int r0 = r0 + (-1)
        L5:
            if (r0 < 0) goto L1a
            long[] r1 = r6.adGroupTimesUs
            r2 = r1[r0]
            r4 = -9223372036854775808
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L17
            r2 = r1[r0]
            int r1 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r1 <= 0) goto L1a
        L17:
            int r0 = r0 + (-1)
            goto L5
        L1a:
            if (r0 < 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r7 = r6.adGroups
            r7 = r7[r0]
            boolean r7 = r7.hasUnplayedAds()
            if (r7 == 0) goto L27
            goto L28
        L27:
            r0 = -1
        L28:
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withAdCount(int r9, int r10) {
            r8 = this;
            if (r10 <= 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            r0 = r0[r9]
            int r0 = r0.count
            if (r0 != r10) goto L11
            return r8
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[]) r3
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            r0 = r0[r9]
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r10 = r0.withAdCount(r10)
            r3[r9] = r10
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            long r4 = r8.adResumePositionUs
            long r6 = r8.contentDurationUs
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withAdDurationsUs(long[][] r9) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[]) r3
            r0 = 0
        Lb:
            int r1 = r8.adGroupCount
            if (r0 >= r1) goto L1c
            r1 = r3[r0]
            r2 = r9[r0]
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r1 = r1.withAdDurationsUs(r2)
            r3[r0] = r1
            int r0 = r0 + 1
            goto Lb
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            long r4 = r8.adResumePositionUs
            long r6 = r8.contentDurationUs
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withAdLoadError(int r9, int r10) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[]) r3
            r0 = r3[r9]
            r1 = 4
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r10 = r0.withAdState(r1, r10)
            r3[r9] = r10
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            long r4 = r8.adResumePositionUs
            long r6 = r8.contentDurationUs
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withAdResumePositionUs(long r9) {
            r8 = this;
            long r0 = r8.adResumePositionUs
            int r0 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r0 != 0) goto L7
            return r8
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = r8.adGroups
            long r6 = r8.contentDurationUs
            r1 = r0
            r4 = r9
            r1.<init>(r2, r3, r4, r6)
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withAdUri(int r9, int r10, android.net.Uri r11) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[]) r3
            r0 = r3[r9]
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r10 = r0.withAdUri(r11, r10)
            r3[r9] = r10
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            long r4 = r8.adResumePositionUs
            long r6 = r8.contentDurationUs
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withContentDurationUs(long r9) {
            r8 = this;
            long r0 = r8.contentDurationUs
            int r0 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r0 != 0) goto L7
            return r8
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = r8.adGroups
            long r4 = r8.adResumePositionUs
            r1 = r0
            r6 = r9
            r1.<init>(r2, r3, r4, r6)
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withPlayedAd(int r9, int r10) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[]) r3
            r0 = r3[r9]
            r1 = 3
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r10 = r0.withAdState(r1, r10)
            r3[r9] = r10
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            long r4 = r8.adResumePositionUs
            long r6 = r8.contentDurationUs
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withSkippedAd(int r9, int r10) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[]) r3
            r0 = r3[r9]
            r1 = 2
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r10 = r0.withAdState(r1, r10)
            r3[r9] = r10
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            long r4 = r8.adResumePositionUs
            long r6 = r8.contentDurationUs
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState withSkippedAdGroup(int r9) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r0 = r8.adGroups
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState.AdGroup[]) r3
            r0 = r3[r9]
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup r0 = r0.withAllAdsSkipped()
            r3[r9] = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState
            long[] r2 = r8.adGroupTimesUs
            long r4 = r8.adResumePositionUs
            long r6 = r8.contentDurationUs
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }
}
