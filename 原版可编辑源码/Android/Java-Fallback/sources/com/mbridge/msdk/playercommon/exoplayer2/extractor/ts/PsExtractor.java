package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class PsExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    public static final int AUDIO_STREAM = 192;
    public static final int AUDIO_STREAM_MASK = 224;
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final long MAX_SEARCH_LENGTH = 1048576;
    private static final long MAX_SEARCH_LENGTH_AFTER_AUDIO_AND_VIDEO_FOUND = 8192;
    private static final int MAX_STREAM_ID_PLUS_ONE = 256;
    private static final int MPEG_PROGRAM_END_CODE = 441;
    private static final int PACKET_START_CODE_PREFIX = 1;
    private static final int PACK_START_CODE = 442;
    public static final int PRIVATE_STREAM_1 = 189;
    private static final int SYSTEM_HEADER_START_CODE = 443;
    public static final int VIDEO_STREAM = 224;
    public static final int VIDEO_STREAM_MASK = 240;
    private boolean foundAllTracks;
    private boolean foundAudioTrack;
    private boolean foundVideoTrack;
    private long lastTrackPosition;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput output;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray psPacketBuffer;
    private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor.PesReader> psPayloadReaders;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster timestampAdjuster;


    private static final class PesReader {
        private static final int PES_SCRATCH_SIZE = 64;
        private boolean dtsFlag;
        private int extendedHeaderLength;
        private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader pesPayloadReader;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray pesScratch;
        private boolean ptsFlag;
        private boolean seenFirstDts;
        private long timeUs;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster timestampAdjuster;

        public PesReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r1, com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2) {
                r0 = this;
                r0.<init>()
                r0.pesPayloadReader = r1
                r0.timestampAdjuster = r2
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
                r2 = 64
                byte[] r2 = new byte[r2]
                r1.<init>(r2)
                r0.pesScratch = r1
                return
        }

        private void parseHeader() {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r3.pesScratch
                r1 = 8
                r0.skipBits(r1)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r3.pesScratch
                boolean r0 = r0.readBit()
                r3.ptsFlag = r0
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r3.pesScratch
                boolean r0 = r0.readBit()
                r3.dtsFlag = r0
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r3.pesScratch
                r2 = 6
                r0.skipBits(r2)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r3.pesScratch
                int r0 = r0.readBits(r1)
                r3.extendedHeaderLength = r0
                return
        }

        private void parseHeaderExtension() {
                r10 = this;
                r0 = 0
                r10.timeUs = r0
                boolean r0 = r10.ptsFlag
                if (r0 == 0) goto L81
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.pesScratch
                r1 = 4
                r0.skipBits(r1)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.pesScratch
                r2 = 3
                int r0 = r0.readBits(r2)
                long r3 = (long) r0
                r0 = 30
                long r3 = r3 << r0
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
                r6 = 1
                r5.skipBits(r6)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
                r7 = 15
                int r5 = r5.readBits(r7)
                int r5 = r5 << r7
                long r8 = (long) r5
                long r3 = r3 | r8
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
                r5.skipBits(r6)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
                int r5 = r5.readBits(r7)
                long r8 = (long) r5
                long r3 = r3 | r8
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
                r5.skipBits(r6)
                boolean r5 = r10.seenFirstDts
                if (r5 != 0) goto L79
                boolean r5 = r10.dtsFlag
                if (r5 == 0) goto L79
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
                r5.skipBits(r1)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r10.pesScratch
                int r1 = r1.readBits(r2)
                long r1 = (long) r1
                long r0 = r1 << r0
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
                r2.skipBits(r6)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
                int r2 = r2.readBits(r7)
                int r2 = r2 << r7
                long r8 = (long) r2
                long r0 = r0 | r8
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
                r2.skipBits(r6)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
                int r2 = r2.readBits(r7)
                long r7 = (long) r2
                long r0 = r0 | r7
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
                r2.skipBits(r6)
                com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2 = r10.timestampAdjuster
                r2.adjustTsTimestamp(r0)
                r10.seenFirstDts = r6
            L79:
                com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r0 = r10.timestampAdjuster
                long r0 = r0.adjustTsTimestamp(r3)
                r10.timeUs = r0
            L81:
                return
        }

        public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r4.pesScratch
                byte[] r0 = r0.data
                r1 = 0
                r2 = 3
                r5.readBytes(r0, r1, r2)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r4.pesScratch
                r0.setPosition(r1)
                r4.parseHeader()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r4.pesScratch
                byte[] r0 = r0.data
                int r2 = r4.extendedHeaderLength
                r5.readBytes(r0, r1, r2)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r4.pesScratch
                r0.setPosition(r1)
                r4.parseHeaderExtension()
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r0 = r4.pesPayloadReader
                long r1 = r4.timeUs
                r3 = 1
                r0.packetStarted(r1, r3)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r0 = r4.pesPayloadReader
                r0.consume(r5)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r5 = r4.pesPayloadReader
                r5.packetFinished()
                return
        }

        public final void seek() {
                r1 = this;
                r0 = 0
                r1.seenFirstDts = r0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r0 = r1.pesPayloadReader
                r0.seek()
                return
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor.FACTORY = r0
            return
    }

    public PsExtractor() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster
            r1 = 0
            r0.<init>(r1)
            r3.<init>(r0)
            return
    }

    public PsExtractor(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2) {
            r1 = this;
            r1.<init>()
            r1.timestampAdjuster = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 4096(0x1000, float:5.74E-42)
            r2.<init>(r0)
            r1.psPacketBuffer = r2
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>()
            r1.psPayloadReaders = r2
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4) {
            r3 = this;
            r3.output = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.<init>(r1)
            r4.seekMap(r0)
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r10, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r11) throws java.io.IOException, java.lang.InterruptedException {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            byte[] r11 = r11.data
            r0 = 1
            r1 = 0
            r2 = 4
            boolean r11 = r10.peekFully(r11, r1, r2, r0)
            r2 = -1
            if (r11 != 0) goto Lf
            return r2
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            r11.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            int r11 = r11.readInt()
            r3 = 441(0x1b9, float:6.18E-43)
            if (r11 != r3) goto L1f
            return r2
        L1f:
            r2 = 442(0x1ba, float:6.2E-43)
            if (r11 != r2) goto L41
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            byte[] r11 = r11.data
            r0 = 10
            r10.peekFully(r11, r1, r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            r0 = 9
            r11.setPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            int r11 = r11.readUnsignedByte()
            r11 = r11 & 7
            int r11 = r11 + 14
            r10.skipFully(r11)
            return r1
        L41:
            r2 = 443(0x1bb, float:6.21E-43)
            r3 = 2
            r4 = 6
            if (r11 != r2) goto L5e
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            byte[] r11 = r11.data
            r10.peekFully(r11, r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            r11.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            int r11 = r11.readUnsignedShort()
            int r11 = r11 + r4
            r10.skipFully(r11)
            return r1
        L5e:
            r2 = r11 & (-256(0xffffffffffffff00, float:NaN))
            int r2 = r2 >> 8
            if (r2 == r0) goto L68
            r10.skipFully(r0)
            return r1
        L68:
            r11 = r11 & 255(0xff, float:3.57E-43)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader> r2 = r9.psPayloadReaders
            java.lang.Object r2 = r2.get(r11)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor.PesReader) r2
            boolean r5 = r9.foundAllTracks
            if (r5 != 0) goto Lec
            if (r2 != 0) goto Lcc
            r5 = 0
            r6 = 189(0xbd, float:2.65E-43)
            if (r11 != r6) goto L8b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Reader
            r5.<init>()
            r9.foundAudioTrack = r0
            long r6 = r10.getPosition()
            r9.lastTrackPosition = r6
            goto Lb2
        L8b:
            r6 = r11 & 224(0xe0, float:3.14E-43)
            r7 = 192(0xc0, float:2.69E-43)
            if (r6 != r7) goto L9f
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.MpegAudioReader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.MpegAudioReader
            r5.<init>()
            r9.foundAudioTrack = r0
            long r6 = r10.getPosition()
            r9.lastTrackPosition = r6
            goto Lb2
        L9f:
            r6 = r11 & 240(0xf0, float:3.36E-43)
            r7 = 224(0xe0, float:3.14E-43)
            if (r6 != r7) goto Lb2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.H262Reader
            r5.<init>()
            r9.foundVideoTrack = r0
            long r6 = r10.getPosition()
            r9.lastTrackPosition = r6
        Lb2:
            if (r5 == 0) goto Lcc
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator
            r6 = 256(0x100, float:3.59E-43)
            r2.<init>(r11, r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r6 = r9.output
            r5.createTracks(r6, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r6 = r9.timestampAdjuster
            r2.<init>(r5, r6)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader> r5 = r9.psPayloadReaders
            r5.put(r11, r2)
        Lcc:
            boolean r11 = r9.foundAudioTrack
            if (r11 == 0) goto Lda
            boolean r11 = r9.foundVideoTrack
            if (r11 == 0) goto Lda
            long r5 = r9.lastTrackPosition
            r7 = 8192(0x2000, double:4.0474E-320)
            long r5 = r5 + r7
            goto Ldd
        Lda:
            r5 = 1048576(0x100000, double:5.180654E-318)
        Ldd:
            long r7 = r10.getPosition()
            int r11 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r11 <= 0) goto Lec
            r9.foundAllTracks = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r11 = r9.output
            r11.endTracks()
        Lec:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            byte[] r11 = r11.data
            r10.peekFully(r11, r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            r11.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.psPacketBuffer
            int r11 = r11.readUnsignedShort()
            int r11 = r11 + r4
            if (r2 != 0) goto L105
            r10.skipFully(r11)
            goto L124
        L105:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.psPacketBuffer
            r0.reset(r11)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.psPacketBuffer
            byte[] r0 = r0.data
            r10.readFully(r0, r1, r11)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.psPacketBuffer
            r10.setPosition(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.psPacketBuffer
            r2.consume(r10)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.psPacketBuffer
            int r11 = r10.capacity()
            r10.setLimit(r11)
        L124:
            return r1
    }

    @Override
    public final void release() {
            r0 = this;
            return
    }

    @Override
    public final void seek(long r1, long r3) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r1 = r0.timestampAdjuster
            r1.reset()
            r1 = 0
        L6:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader> r2 = r0.psPayloadReaders
            int r2 = r2.size()
            if (r1 >= r2) goto L1c
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader> r2 = r0.psPayloadReaders
            java.lang.Object r2 = r2.valueAt(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor$PesReader r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor.PesReader) r2
            r2.seek()
            int r1 = r1 + 1
            goto L6
        L1c:
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r10) throws java.io.IOException, java.lang.InterruptedException {
            r9 = this;
            r0 = 14
            byte[] r1 = new byte[r0]
            r2 = 0
            r10.peekFully(r1, r2, r0)
            r0 = r1[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            r3 = 1
            r4 = r1[r3]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 << 16
            r0 = r0 | r4
            r4 = 2
            r5 = r1[r4]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = 8
            int r5 = r5 << r6
            r0 = r0 | r5
            r5 = 3
            r7 = r1[r5]
            r7 = r7 & 255(0xff, float:3.57E-43)
            r0 = r0 | r7
            r7 = 442(0x1ba, float:6.2E-43)
            if (r7 == r0) goto L2a
            return r2
        L2a:
            r0 = 4
            r7 = r1[r0]
            r7 = r7 & 196(0xc4, float:2.75E-43)
            r8 = 68
            if (r7 == r8) goto L34
            return r2
        L34:
            r7 = 6
            r7 = r1[r7]
            r7 = r7 & r0
            if (r7 == r0) goto L3b
            return r2
        L3b:
            r7 = r1[r6]
            r7 = r7 & r0
            if (r7 == r0) goto L41
            return r2
        L41:
            r0 = 9
            r0 = r1[r0]
            r0 = r0 & r3
            if (r0 == r3) goto L49
            return r2
        L49:
            r0 = 12
            r0 = r1[r0]
            r0 = r0 & r5
            if (r0 == r5) goto L51
            return r2
        L51:
            r0 = 13
            r0 = r1[r0]
            r0 = r0 & 7
            r10.advancePeekPosition(r0)
            r10.peekFully(r1, r2, r5)
            r10 = r1[r2]
            r10 = r10 & 255(0xff, float:3.57E-43)
            int r10 = r10 << 16
            r0 = r1[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << r6
            r10 = r10 | r0
            r0 = r1[r4]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r10 = r10 | r0
            if (r3 != r10) goto L71
            r2 = r3
        L71:
            return r2
    }
}
