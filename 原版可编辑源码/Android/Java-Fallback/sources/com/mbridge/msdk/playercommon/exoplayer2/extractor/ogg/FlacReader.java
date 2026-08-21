package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

final class FlacReader extends com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader {
    private static final byte AUDIO_PACKET_TYPE = -1;
    private static final int FRAME_HEADER_SAMPLE_NUMBER_OFFSET = 4;
    private static final byte SEEKTABLE_PACKET_TYPE = 3;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader.FlacOggSeeker flacOggSeeker;
    private com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo streamInfo;

    private class FlacOggSeeker implements com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker {
        private static final int METADATA_LENGTH_OFFSET = 1;
        private static final int SEEK_POINT_SIZE = 18;
        private long firstFrameOffset;
        private long pendingSeekGranule;
        private long[] seekPointGranules;
        private long[] seekPointOffsets;
        final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader this$0;

        public FlacOggSeeker(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r3) {
                r2 = this;
                r2.this$0 = r3
                r2.<init>()
                r0 = -1
                r2.firstFrameOffset = r0
                r2.pendingSeekGranule = r0
                return
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap createSeekMap() {
                r0 = this;
                return r0
        }

        @Override
        public long getDurationUs() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader.access$000(r0)
                long r0 = r0.durationUs()
                return r0
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r10) {
                r9 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r0 = r9.this$0
                long r0 = r0.convertTimeToGranule(r10)
                long[] r2 = r9.seekPointGranules
                r3 = 1
                int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r2, r0, r3, r3)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r1 = r9.this$0
                long[] r2 = r9.seekPointGranules
                r4 = r2[r0]
                long r1 = r1.convertGranuleToTime(r4)
                long r4 = r9.firstFrameOffset
                long[] r6 = r9.seekPointOffsets
                r7 = r6[r0]
                long r4 = r4 + r7
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
                r6.<init>(r1, r4)
                int r10 = (r1 > r10 ? 1 : (r1 == r10 ? 0 : -1))
                if (r10 >= 0) goto L49
                long[] r10 = r9.seekPointGranules
                int r11 = r10.length
                int r11 = r11 - r3
                if (r0 != r11) goto L2e
                goto L49
            L2e:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r11 = r9.this$0
                int r0 = r0 + r3
                r1 = r10[r0]
                long r10 = r11.convertGranuleToTime(r1)
                long r1 = r9.firstFrameOffset
                long[] r3 = r9.seekPointOffsets
                r4 = r3[r0]
                long r1 = r1 + r4
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
                r0.<init>(r10, r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r10 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
                r10.<init>(r6, r0)
                return r10
            L49:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r10 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
                r10.<init>(r6)
                return r10
        }

        @Override
        public boolean isSeekable() {
                r1 = this;
                r0 = 1
                return r0
        }

        public void parseSeekTable(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6) {
                r5 = this;
                r0 = 1
                r6.skipBytes(r0)
                int r0 = r6.readUnsignedInt24()
                int r0 = r0 / 18
                long[] r1 = new long[r0]
                r5.seekPointGranules = r1
                long[] r1 = new long[r0]
                r5.seekPointOffsets = r1
                r1 = 0
            L13:
                if (r1 >= r0) goto L2c
                long[] r2 = r5.seekPointGranules
                long r3 = r6.readLong()
                r2[r1] = r3
                long[] r2 = r5.seekPointOffsets
                long r3 = r6.readLong()
                r2[r1] = r3
                r2 = 2
                r6.skipBytes(r2)
                int r1 = r1 + 1
                goto L13
            L2c:
                return
        }

        @Override
        public long read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7) throws java.io.IOException, java.lang.InterruptedException {
                r6 = this;
                long r0 = r6.pendingSeekGranule
                r2 = 0
                int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                r2 = -1
                if (r7 < 0) goto L11
                r4 = 2
                long r0 = r0 + r4
                long r0 = -r0
                r6.pendingSeekGranule = r2
                return r0
            L11:
                return r2
        }

        public void setFirstFrameOffset(long r1) {
                r0 = this;
                r0.firstFrameOffset = r1
                return
        }

        @Override
        public long startSeek(long r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r0 = r2.this$0
                long r3 = r0.convertTimeToGranule(r3)
                long[] r0 = r2.seekPointGranules
                r1 = 1
                int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r3, r1, r1)
                long[] r1 = r2.seekPointGranules
                r0 = r1[r0]
                r2.pendingSeekGranule = r0
                return r3
        }
    }

    FlacReader() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo access$000(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r0) {
            com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo r0 = r0.streamInfo
            return r0
    }

    private int getFlacFrameBlockSize(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            r3 = this;
            byte[] r0 = r4.data
            r1 = 2
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r2 = 4
            int r0 = r0 >> r2
            switch(r0) {
                case 1: goto L31;
                case 2: goto L2d;
                case 3: goto L2d;
                case 4: goto L2d;
                case 5: goto L2d;
                case 6: goto L14;
                case 7: goto L14;
                case 8: goto Le;
                case 9: goto Le;
                case 10: goto Le;
                case 11: goto Le;
                case 12: goto Le;
                case 13: goto Le;
                case 14: goto Le;
                case 15: goto Le;
                default: goto Lc;
            }
        Lc:
            r4 = -1
            return r4
        Le:
            r4 = 256(0x100, float:3.59E-43)
            int r0 = r0 + (-8)
        L12:
            int r4 = r4 << r0
            return r4
        L14:
            r4.skipBytes(r2)
            r4.readUtf8EncodedLong()
            r1 = 6
            if (r0 != r1) goto L22
            int r0 = r4.readUnsignedByte()
            goto L26
        L22:
            int r0 = r4.readUnsignedShort()
        L26:
            r1 = 0
            r4.setPosition(r1)
            int r0 = r0 + 1
            return r0
        L2d:
            r4 = 576(0x240, float:8.07E-43)
            int r0 = r0 - r1
            goto L12
        L31:
            r4 = 192(0xc0, float:2.69E-43)
            return r4
    }

    private static boolean isAudioPacket(byte[] r2) {
            r0 = 0
            r2 = r2[r0]
            r1 = -1
            if (r2 != r1) goto L7
            r0 = 1
        L7:
            return r0
    }

    public static boolean verifyBitstreamType(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            int r0 = r4.bytesLeft()
            r1 = 5
            if (r0 < r1) goto L1c
            int r0 = r4.readUnsignedByte()
            r1 = 127(0x7f, float:1.78E-43)
            if (r0 != r1) goto L1c
            long r0 = r4.readUnsignedInt()
            r2 = 1179402563(0x464c4143, double:5.82702289E-315)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L1c
            r4 = 1
            goto L1d
        L1c:
            r4 = 0
        L1d:
            return r4
    }

    @Override
    protected final long preparePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            r2 = this;
            byte[] r0 = r3.data
            boolean r0 = isAudioPacket(r0)
            if (r0 != 0) goto Lb
            r0 = -1
            return r0
        Lb:
            int r3 = r2.getFlacFrameBlockSize(r3)
            long r0 = (long) r3
            return r0
    }

    @Override
    protected final boolean readHeaders(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12, long r13, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader.SetupData r15) throws java.io.IOException, java.lang.InterruptedException {
            r11 = this;
            byte[] r0 = r12.data
            com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo r1 = r11.streamInfo
            if (r1 != 0) goto L3f
            com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo r13 = new com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo
            r14 = 17
            r13.<init>(r0, r14)
            r11.streamInfo = r13
            r13 = 9
            int r12 = r12.limit()
            byte[] r12 = java.util.Arrays.copyOfRange(r0, r13, r12)
            r13 = 4
            r14 = -128(0xffffffffffffff80, float:NaN)
            r12[r13] = r14
            java.util.List r7 = java.util.Collections.singletonList(r12)
            r0 = 0
            r2 = 0
            r3 = -1
            com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo r12 = r11.streamInfo
            int r4 = r12.bitRate()
            com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo r12 = r11.streamInfo
            int r5 = r12.channels
            com.mbridge.msdk.playercommon.exoplayer2.util.FlacStreamInfo r12 = r11.streamInfo
            int r6 = r12.sampleRate
            r8 = 0
            r9 = 0
            r10 = 0
            java.lang.String r1 = "audio/flac"
            com.mbridge.msdk.playercommon.exoplayer2.Format r12 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r15.format = r12
            goto L64
        L3f:
            r1 = 0
            r2 = r0[r1]
            r2 = r2 & 127(0x7f, float:1.78E-43)
            r3 = 3
            if (r2 != r3) goto L52
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader$FlacOggSeeker r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader$FlacOggSeeker
            r13.<init>(r11)
            r11.flacOggSeeker = r13
            r13.parseSeekTable(r12)
            goto L64
        L52:
            boolean r12 = isAudioPacket(r0)
            if (r12 == 0) goto L64
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader$FlacOggSeeker r12 = r11.flacOggSeeker
            if (r12 == 0) goto L63
            r12.setFirstFrameOffset(r13)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader$FlacOggSeeker r12 = r11.flacOggSeeker
            r15.oggSeeker = r12
        L63:
            return r1
        L64:
            r12 = 1
            return r12
    }

    @Override
    protected final void reset(boolean r1) {
            r0 = this;
            super.reset(r1)
            if (r1 == 0) goto La
            r1 = 0
            r0.streamInfo = r1
            r0.flacOggSeeker = r1
        La:
            return
    }
}
