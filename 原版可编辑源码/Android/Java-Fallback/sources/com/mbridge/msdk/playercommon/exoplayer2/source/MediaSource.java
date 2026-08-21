package com.mbridge.msdk.playercommon.exoplayer2.source;

public interface MediaSource {

    public static final class MediaPeriodId {
        public final int adGroupIndex;
        public final int adIndexInAdGroup;
        public final int periodIndex;
        public final long windowSequenceNumber;

        public MediaPeriodId(int r3) {
                r2 = this;
                r0 = -1
                r2.<init>(r3, r0)
                return
        }

        public MediaPeriodId(int r1, int r2, int r3, long r4) {
                r0 = this;
                r0.<init>()
                r0.periodIndex = r1
                r0.adGroupIndex = r2
                r0.adIndexInAdGroup = r3
                r0.windowSequenceNumber = r4
                return
        }

        public MediaPeriodId(int r7, long r8) {
                r6 = this;
                r2 = -1
                r3 = -1
                r0 = r6
                r1 = r7
                r4 = r8
                r0.<init>(r1, r2, r3, r4)
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId copyWithPeriodIndex(int r8) {
                r7 = this;
                int r0 = r7.periodIndex
                if (r0 != r8) goto L6
                r0 = r7
                goto L13
            L6:
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
                int r3 = r7.adGroupIndex
                int r4 = r7.adIndexInAdGroup
                long r5 = r7.windowSequenceNumber
                r1 = r0
                r2 = r8
                r1.<init>(r2, r3, r4, r5)
            L13:
                return r0
        }

        public final boolean equals(java.lang.Object r7) {
                r6 = this;
                r0 = 1
                if (r6 != r7) goto L4
                return r0
            L4:
                r1 = 0
                if (r7 == 0) goto L31
                java.lang.Class r2 = r6.getClass()
                java.lang.Class r3 = r7.getClass()
                if (r2 == r3) goto L12
                goto L31
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r7 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId) r7
                int r2 = r6.periodIndex
                int r3 = r7.periodIndex
                if (r2 != r3) goto L2f
                int r2 = r6.adGroupIndex
                int r3 = r7.adGroupIndex
                if (r2 != r3) goto L2f
                int r2 = r6.adIndexInAdGroup
                int r3 = r7.adIndexInAdGroup
                if (r2 != r3) goto L2f
                long r2 = r6.windowSequenceNumber
                long r4 = r7.windowSequenceNumber
                int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r7 != 0) goto L2f
                goto L30
            L2f:
                r0 = r1
            L30:
                return r0
            L31:
                return r1
        }

        public final int hashCode() {
                r4 = this;
                int r0 = r4.periodIndex
                r1 = 527(0x20f, float:7.38E-43)
                int r1 = r1 + r0
                int r1 = r1 * 31
                int r0 = r4.adGroupIndex
                int r1 = r1 + r0
                int r1 = r1 * 31
                int r0 = r4.adIndexInAdGroup
                int r1 = r1 + r0
                int r1 = r1 * 31
                long r2 = r4.windowSequenceNumber
                int r0 = (int) r2
                int r1 = r1 + r0
                return r1
        }

        public final boolean isAd() {
                r2 = this;
                int r0 = r2.adGroupIndex
                r1 = -1
                if (r0 == r1) goto L7
                r0 = 1
                goto L8
            L7:
                r0 = 0
            L8:
                return r0
        }
    }

    public interface SourceInfoRefreshListener {
        void onSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1, com.mbridge.msdk.playercommon.exoplayer2.Timeline r2, java.lang.Object r3);
    }

    void addEventListener(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2);

    com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r2);

    void maybeThrowSourceInfoRefreshError() throws java.io.IOException;

    void prepareSource(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1, boolean r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener r3);

    void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1);

    void releaseSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener r1);

    void removeEventListener(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r1);
}
