package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public interface SeekMap {

    public static final class SeekPoints {
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint first;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint second;

        public SeekPoints(com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1) {
                r0 = this;
                r0.<init>(r1, r1)
                return
        }

        public SeekPoints(com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r2) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint) r1
                r0.first = r1
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint) r1
                r0.second = r1
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L2b
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L2b
            L12:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r5 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints) r5
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r2 = r4.first
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r3 = r5.first
                boolean r2 = r2.equals(r3)
                if (r2 == 0) goto L29
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r2 = r4.second
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r5 = r5.second
                boolean r5 = r2.equals(r5)
                if (r5 == 0) goto L29
                goto L2a
            L29:
                r0 = r1
            L2a:
                return r0
            L2b:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = r2.first
                int r0 = r0.hashCode()
                int r0 = r0 * 31
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1 = r2.second
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                return r0
        }

        public final java.lang.String toString() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "["
                r0.append(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1 = r3.first
                r0.append(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1 = r3.first
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r2 = r3.second
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L1c
                java.lang.String r1 = ""
                goto L2f
            L1c:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = ", "
                r1.append(r2)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r2 = r3.second
                r1.append(r2)
                java.lang.String r1 = r1.toString()
            L2f:
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public static final class Unseekable implements com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap {
        private final long durationUs;
        private final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints startSeekPoints;

        public Unseekable(long r3) {
                r2 = this;
                r0 = 0
                r2.<init>(r3, r0)
                return
        }

        public Unseekable(long r3, long r5) {
                r2 = this;
                r2.<init>()
                r2.durationUs = r3
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
                r0 = 0
                int r4 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r4 != 0) goto L10
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint.START
                goto L15
            L10:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
                r4.<init>(r0, r5)
            L15:
                r3.<init>(r4)
                r2.startSeekPoints = r3
                return
        }

        @Override
        public final long getDurationUs() {
                r2 = this;
                long r0 = r2.durationUs
                return r0
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r1 = r0.startSeekPoints
                return r1
        }

        @Override
        public final boolean isSeekable() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    long getDurationUs();

    com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r1);

    boolean isSeekable();
}
