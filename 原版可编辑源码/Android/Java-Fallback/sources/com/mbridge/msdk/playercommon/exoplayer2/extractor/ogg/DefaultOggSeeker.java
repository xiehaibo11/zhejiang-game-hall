package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

final class DefaultOggSeeker implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker {
    private static final int DEFAULT_OFFSET = 30000;
    public static final int MATCH_BYTE_RANGE = 100000;
    public static final int MATCH_RANGE = 72000;
    private static final int STATE_IDLE = 3;
    private static final int STATE_READ_LAST_PAGE = 1;
    private static final int STATE_SEEK = 2;
    private static final int STATE_SEEK_TO_END = 0;
    private long end;
    private long endGranule;
    private final long endPosition;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader pageHeader;
    private long positionBeforeSeekToEnd;
    private long start;
    private long startGranule;
    private final long startPosition;
    private int state;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader streamReader;
    private long targetGranule;
    private long totalGranules;

    static class 1 {
    }

    private class OggSeekMap implements com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap {
        final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker this$0;

        private OggSeekMap(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        OggSeekMap(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public long getDurationUs() {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r0 = r3.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.access$200(r0)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r1 = r3.this$0
                long r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.access$400(r1)
                long r0 = r0.convertGranuleToTime(r1)
                return r0
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r9) {
                r8 = this;
                r0 = 0
                int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r2 != 0) goto L17
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r10 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r2 = r8.this$0
                long r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.access$100(r2)
                r10.<init>(r0, r2)
                r9.<init>(r10)
                return r9
            L17:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.access$200(r0)
                long r4 = r0.convertTimeToGranule(r9)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r1 = r8.this$0
                long r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.access$100(r1)
                r6 = 30000(0x7530, double:1.4822E-319)
                long r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.access$300(r1, r2, r4, r6)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
                r3.<init>(r9, r0)
                r2.<init>(r3)
                return r2
        }

        @Override
        public boolean isSeekable() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    public DefaultOggSeeker(long r3, long r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r7, int r8, long r9) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader
            r0.<init>()
            r2.pageHeader = r0
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r1 = 0
            if (r0 < 0) goto L17
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 <= 0) goto L17
            r0 = 1
            goto L18
        L17:
            r0 = r1
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            r2.streamReader = r7
            r2.startPosition = r3
            r2.endPosition = r5
            long r7 = (long) r8
            long r5 = r5 - r3
            int r3 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r3 != 0) goto L2d
            r2.totalGranules = r9
            r3 = 3
            r2.state = r3
            goto L2f
        L2d:
            r2.state = r1
        L2f:
            return
    }

    static long access$100(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r2) {
            long r0 = r2.startPosition
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader access$200(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r0) {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r0 = r0.streamReader
            return r0
    }

    static long access$300(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r0, long r1, long r3, long r5) {
            long r0 = r0.getEstimatedPosition(r1, r3, r5)
            return r0
    }

    static long access$400(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r2) {
            long r0 = r2.totalGranules
            return r0
    }

    private long getEstimatedPosition(long r5, long r7, long r9) {
            r4 = this;
            long r0 = r4.endPosition
            long r2 = r4.startPosition
            long r0 = r0 - r2
            long r7 = r7 * r0
            long r0 = r4.totalGranules
            long r7 = r7 / r0
            long r7 = r7 - r9
            long r5 = r5 + r7
            int r7 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r7 >= 0) goto L10
            goto L11
        L10:
            r2 = r5
        L11:
            long r5 = r4.endPosition
            int r7 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r7 < 0) goto L1b
            r7 = 1
            long r2 = r5 - r7
        L1b:
            return r2
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap createSeekMap() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker$OggSeekMap r0 = r1.createSeekMap()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker.OggSeekMap createSeekMap() {
            r4 = this;
            long r0 = r4.totalGranules
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker$OggSeekMap r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker$OggSeekMap
            r0.<init>(r4, r1)
            r1 = r0
        Lf:
            return r1
    }

    public final long getNextSeekPosition(long r13, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r15) throws java.io.IOException, java.lang.InterruptedException {
            r12 = this;
            long r0 = r12.start
            long r2 = r12.end
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 2
            if (r0 != 0) goto Lf
            long r13 = r12.startGranule
            long r13 = r13 + r1
            long r13 = -r13
            return r13
        Lf:
            long r3 = r15.getPosition()
            long r5 = r12.end
            boolean r0 = r12.skipToNextPage(r15, r5)
            if (r0 != 0) goto L2a
            long r13 = r12.start
            int r15 = (r13 > r3 ? 1 : (r13 == r3 ? 0 : -1))
            if (r15 == 0) goto L22
            return r13
        L22:
            java.io.IOException r13 = new java.io.IOException
            java.lang.String r14 = "No ogg page can be found."
            r13.<init>(r14)
            throw r13
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r12.pageHeader
            r5 = 0
            r0.populate(r15, r5)
            r15.resetPeekPosition()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r12.pageHeader
            long r5 = r0.granulePosition
            long r13 = r13 - r5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r12.pageHeader
            int r0 = r0.headerSize
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r5 = r12.pageHeader
            int r5 = r5.bodySize
            int r0 = r0 + r5
            r5 = 0
            int r5 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            if (r5 < 0) goto L59
            r6 = 72000(0x11940, double:3.55727E-319)
            int r6 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r6 <= 0) goto L4f
            goto L59
        L4f:
            r15.skipFully(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r13 = r12.pageHeader
            long r13 = r13.granulePosition
            long r13 = r13 + r1
            long r13 = -r13
            return r13
        L59:
            r6 = 100000(0x186a0, double:4.94066E-319)
            if (r5 >= 0) goto L67
            r12.end = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r3 = r12.pageHeader
            long r3 = r3.granulePosition
            r12.endGranule = r3
            goto L87
        L67:
            long r3 = r15.getPosition()
            long r8 = (long) r0
            long r3 = r3 + r8
            r12.start = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r3 = r12.pageHeader
            long r3 = r3.granulePosition
            r12.startGranule = r3
            long r3 = r12.end
            long r10 = r12.start
            long r3 = r3 - r10
            long r3 = r3 + r8
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 >= 0) goto L87
            r15.skipFully(r0)
            long r13 = r12.startGranule
            long r13 = r13 + r1
            long r13 = -r13
            return r13
        L87:
            long r3 = r12.end
            long r8 = r12.start
            long r3 = r3 - r8
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 >= 0) goto L93
            r12.end = r8
            return r8
        L93:
            long r3 = (long) r0
            r6 = 1
            if (r5 > 0) goto L99
            goto L9a
        L99:
            r1 = r6
        L9a:
            long r3 = r3 * r1
            long r0 = r15.getPosition()
            long r0 = r0 - r3
            long r2 = r12.end
            long r4 = r12.start
            long r2 = r2 - r4
            long r13 = r13 * r2
            long r2 = r12.endGranule
            long r8 = r12.startGranule
            long r2 = r2 - r8
            long r13 = r13 / r2
            long r0 = r0 + r13
            long r13 = java.lang.Math.max(r0, r4)
            long r0 = r12.end
            long r0 = r0 - r6
            long r13 = java.lang.Math.min(r13, r0)
            return r13
    }

    @Override
    public final long read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r15) throws java.io.IOException, java.lang.InterruptedException {
            r14 = this;
            int r0 = r14.state
            r1 = 1
            r2 = 3
            if (r0 == 0) goto L39
            if (r0 == r1) goto L4c
            r1 = 2
            if (r0 == r1) goto L16
            if (r0 != r2) goto L10
            r0 = -1
            return r0
        L10:
            java.lang.IllegalStateException r15 = new java.lang.IllegalStateException
            r15.<init>()
            throw r15
        L16:
            long r0 = r14.targetGranule
            r3 = 0
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            r6 = 2
            if (r5 != 0) goto L21
            goto L34
        L21:
            long r0 = r14.getNextSeekPosition(r0, r15)
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 < 0) goto L2a
            return r0
        L2a:
            long r10 = r14.targetGranule
            long r0 = r0 + r6
            long r12 = -r0
            r8 = r14
            r9 = r15
            long r3 = r8.skipToPageOfGranule(r9, r10, r12)
        L34:
            r14.state = r2
            long r3 = r3 + r6
            long r0 = -r3
            return r0
        L39:
            long r3 = r15.getPosition()
            r14.positionBeforeSeekToEnd = r3
            r14.state = r1
            long r0 = r14.endPosition
            r5 = 65307(0xff1b, double:3.2266E-319)
            long r0 = r0 - r5
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 <= 0) goto L4c
            return r0
        L4c:
            long r0 = r14.readGranuleOfLastPage(r15)
            r14.totalGranules = r0
            r14.state = r2
            long r0 = r14.positionBeforeSeekToEnd
            return r0
    }

    final long readGranuleOfLastPage(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            r4.skipToNextPage(r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r4.pageHeader
            r0.reset()
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r4.pageHeader
            int r0 = r0.type
            r1 = 4
            r0 = r0 & r1
            if (r0 == r1) goto L2d
            long r0 = r5.getPosition()
            long r2 = r4.endPosition
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r4.pageHeader
            r1 = 0
            r0.populate(r5, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r4.pageHeader
            int r0 = r0.headerSize
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r1 = r4.pageHeader
            int r1 = r1.bodySize
            int r0 = r0 + r1
            r5.skipFully(r0)
            goto L8
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r5 = r4.pageHeader
            long r0 = r5.granulePosition
            return r0
    }

    public final void resetSeeking() {
            r2 = this;
            long r0 = r2.startPosition
            r2.start = r0
            long r0 = r2.endPosition
            r2.end = r0
            r0 = 0
            r2.startGranule = r0
            long r0 = r2.totalGranules
            r2.endGranule = r0
            return
    }

    final void skipToNextPage(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3) throws java.io.IOException, java.lang.InterruptedException {
            r2 = this;
            long r0 = r2.endPosition
            boolean r3 = r2.skipToNextPage(r3, r0)
            if (r3 == 0) goto L9
            return
        L9:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
    }

    final boolean skipToNextPage(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7, long r8) throws java.io.IOException, java.lang.InterruptedException {
            r6 = this;
            r0 = 3
            long r8 = r8 + r0
            long r0 = r6.endPosition
            long r8 = java.lang.Math.min(r8, r0)
            r0 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r0]
        Ld:
            long r2 = r7.getPosition()
            long r4 = (long) r0
            long r2 = r2 + r4
            int r2 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            r3 = 0
            if (r2 <= 0) goto L23
            long r4 = r7.getPosition()
            long r4 = r8 - r4
            int r0 = (int) r4
            r2 = 4
            if (r0 >= r2) goto L23
            return r3
        L23:
            r7.peekFully(r1, r3, r0, r3)
        L26:
            int r2 = r0 + (-3)
            if (r3 >= r2) goto L4e
            r2 = r1[r3]
            r4 = 79
            if (r2 != r4) goto L4b
            int r2 = r3 + 1
            r2 = r1[r2]
            r4 = 103(0x67, float:1.44E-43)
            if (r2 != r4) goto L4b
            int r2 = r3 + 2
            r2 = r1[r2]
            if (r2 != r4) goto L4b
            int r2 = r3 + 3
            r2 = r1[r2]
            r4 = 83
            if (r2 != r4) goto L4b
            r7.skipFully(r3)
            r7 = 1
            return r7
        L4b:
            int r3 = r3 + 1
            goto L26
        L4e:
            r7.skipFully(r2)
            goto Ld
    }

    final long skipToPageOfGranule(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5, long r6, long r8) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r4.pageHeader
            r1 = 0
            r0.populate(r5, r1)
        L6:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r4.pageHeader
            long r2 = r0.granulePosition
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 >= 0) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r8 = r4.pageHeader
            int r8 = r8.headerSize
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r9 = r4.pageHeader
            int r9 = r9.bodySize
            int r8 = r8 + r9
            r5.skipFully(r8)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r8 = r4.pageHeader
            long r8 = r8.granulePosition
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r4.pageHeader
            r0.populate(r5, r1)
            goto L6
        L24:
            r5.resetPeekPosition()
            return r8
    }

    @Override
    public final long startSeek(long r5) {
            r4 = this;
            int r0 = r4.state
            r1 = 2
            r2 = 3
            if (r0 == r2) goto Lb
            if (r0 != r1) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            r2 = 0
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 != 0) goto L16
            goto L1c
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r0 = r4.streamReader
            long r2 = r0.convertTimeToGranule(r5)
        L1c:
            r4.targetGranule = r2
            r4.state = r1
            r4.resetSeeking()
            long r5 = r4.targetGranule
            return r5
    }
}
