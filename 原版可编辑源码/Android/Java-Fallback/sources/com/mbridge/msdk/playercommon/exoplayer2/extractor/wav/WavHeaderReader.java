package com.mbridge.msdk.playercommon.exoplayer2.extractor.wav;

final class WavHeaderReader {
    private static final java.lang.String TAG = "WavHeaderReader";
    private static final int TYPE_FLOAT = 3;
    private static final int TYPE_PCM = 1;
    private static final int TYPE_WAVE_FORMAT_EXTENSIBLE = 65534;

    private static final class ChunkHeader {
        public static final int SIZE_IN_BYTES = 8;
        public final int id;
        public final long size;

        private ChunkHeader(int r1, long r2) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.size = r2
                return
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.ChunkHeader peek(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) throws java.io.IOException, java.lang.InterruptedException {
                byte[] r0 = r4.data
                r1 = 0
                r2 = 8
                r3.peekFully(r0, r1, r2)
                r4.setPosition(r1)
                int r3 = r4.readInt()
                long r0 = r4.readLittleEndianUnsignedInt()
                com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader$ChunkHeader r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader$ChunkHeader
                r4.<init>(r3, r0)
                return r4
        }
    }

    private WavHeaderReader() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader peek(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r17) throws java.io.IOException, java.lang.InterruptedException {
            r0 = r17
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r17)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2 = 16
            r1.<init>(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader$ChunkHeader r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.ChunkHeader.peek(r0, r1)
            int r3 = r3.id
            java.lang.String r4 = "RIFF"
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r4)
            r5 = 0
            if (r3 == r4) goto L1c
            return r5
        L1c:
            byte[] r3 = r1.data
            r4 = 4
            r6 = 0
            r0.peekFully(r3, r6, r4)
            r1.setPosition(r6)
            int r3 = r1.readInt()
            java.lang.String r7 = "WAVE"
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r7)
            java.lang.String r8 = "WavHeaderReader"
            if (r3 == r7) goto L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported RIFF format: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            android.util.Log.e(r8, r0)
            return r5
        L49:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader$ChunkHeader r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.ChunkHeader.peek(r0, r1)
            int r7 = r3.id
            java.lang.String r9 = "fmt "
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r9)
            if (r7 == r9) goto L5e
            long r9 = r3.size
            int r3 = (int) r9
            r0.advancePeekPosition(r3)
            goto L49
        L5e:
            long r9 = r3.size
            r11 = 16
            int r7 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            r9 = 1
            if (r7 < 0) goto L69
            r7 = r9
            goto L6a
        L69:
            r7 = r6
        L6a:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r7)
            byte[] r7 = r1.data
            r0.peekFully(r7, r6, r2)
            r1.setPosition(r6)
            int r7 = r1.readLittleEndianUnsignedShort()
            int r11 = r1.readLittleEndianUnsignedShort()
            int r12 = r1.readLittleEndianUnsignedIntToInt()
            int r13 = r1.readLittleEndianUnsignedIntToInt()
            int r14 = r1.readLittleEndianUnsignedShort()
            int r15 = r1.readLittleEndianUnsignedShort()
            int r1 = r11 * r15
            int r1 = r1 / 8
            if (r14 != r1) goto Lee
            if (r7 == r9) goto Lbb
            r1 = 3
            if (r7 == r1) goto Lb2
            r1 = 65534(0xfffe, float:9.1833E-41)
            if (r7 == r1) goto Lbb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported WAV format type: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.e(r8, r0)
            return r5
        Lb2:
            r1 = 32
            if (r15 != r1) goto Lb7
            goto Lb8
        Lb7:
            r4 = r6
        Lb8:
            r16 = r4
            goto Lc1
        Lbb:
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPcmEncoding(r15)
            r16 = r1
        Lc1:
            if (r16 != 0) goto Le0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported WAV bit depth "
            r0.append(r1)
            r0.append(r15)
            java.lang.String r1 = " for type "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            android.util.Log.e(r8, r0)
            return r5
        Le0:
            long r3 = r3.size
            int r1 = (int) r3
            int r1 = r1 - r2
            r0.advancePeekPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader
            r10 = r0
            r10.<init>(r11, r12, r13, r14, r15, r16)
            return r0
        Lee:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected block alignment: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = "; got: "
            r2.append(r1)
            r2.append(r14)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
    }

    public static void skipToData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7, com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeader r8) throws java.io.IOException, java.lang.InterruptedException {
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r8)
            r7.resetPeekPosition()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 8
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader$ChunkHeader r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.ChunkHeader.peek(r7, r0)
        L14:
            int r3 = r2.id
            java.lang.String r4 = "data"
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r4)
            if (r3 == r4) goto L70
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Ignoring unknown WAV chunk: "
            r3.append(r4)
            int r4 = r2.id
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "WavHeaderReader"
            android.util.Log.w(r4, r3)
            r3 = 8
            long r5 = r2.size
            long r5 = r5 + r3
            int r3 = r2.id
            java.lang.String r4 = "RIFF"
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r4)
            if (r3 != r4) goto L47
            r5 = 12
        L47:
            r3 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r3 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r3 > 0) goto L57
            int r2 = (int) r5
            r7.skipFully(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader$ChunkHeader r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavHeaderReader.ChunkHeader.peek(r7, r0)
            goto L14
        L57:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r7 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Chunk is too large (~2GB+) to skip; id: "
            r8.append(r0)
            int r0 = r2.id
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L70:
            r7.skipFully(r1)
            long r0 = r7.getPosition()
            long r2 = r2.size
            r8.setDataBounds(r0, r2)
            return
    }
}
