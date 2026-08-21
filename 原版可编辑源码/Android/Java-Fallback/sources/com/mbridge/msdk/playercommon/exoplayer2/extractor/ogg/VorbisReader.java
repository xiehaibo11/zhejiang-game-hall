package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

final class VorbisReader extends com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader {
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.CommentHeader commentHeader;
    private int previousPacketBlockSize;
    private boolean seenFirstAudioPacket;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.VorbisIdHeader vorbisIdHeader;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader.VorbisSetup vorbisSetup;

    static final class VorbisSetup {
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.CommentHeader commentHeader;
        public final int iLogModes;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.VorbisIdHeader idHeader;
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.Mode[] modes;
        public final byte[] setupHeaderData;

        public VorbisSetup(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.VorbisIdHeader r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.CommentHeader r2, byte[] r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.Mode[] r4, int r5) {
                r0 = this;
                r0.<init>()
                r0.idHeader = r1
                r0.commentHeader = r2
                r0.setupHeaderData = r3
                r0.modes = r4
                r0.iLogModes = r5
                return
        }
    }

    VorbisReader() {
            r0 = this;
            r0.<init>()
            return
    }

    static void appendNumberOfSamples(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6, long r7) {
            int r0 = r6.limit()
            int r0 = r0 + 4
            r6.setLimit(r0)
            byte[] r0 = r6.data
            int r1 = r6.limit()
            int r1 = r1 + (-4)
            r2 = 255(0xff, double:1.26E-321)
            long r4 = r7 & r2
            int r4 = (int) r4
            byte r4 = (byte) r4
            r0[r1] = r4
            byte[] r0 = r6.data
            int r1 = r6.limit()
            int r1 = r1 + (-3)
            r4 = 8
            long r4 = r7 >>> r4
            long r4 = r4 & r2
            int r4 = (int) r4
            byte r4 = (byte) r4
            r0[r1] = r4
            byte[] r0 = r6.data
            int r1 = r6.limit()
            int r1 = r1 + (-2)
            r4 = 16
            long r4 = r7 >>> r4
            long r4 = r4 & r2
            int r4 = (int) r4
            byte r4 = (byte) r4
            r0[r1] = r4
            byte[] r0 = r6.data
            int r6 = r6.limit()
            int r6 = r6 + (-1)
            r1 = 24
            long r7 = r7 >>> r1
            long r7 = r7 & r2
            int r7 = (int) r7
            byte r7 = (byte) r7
            r0[r6] = r7
            return
    }

    private static int decodeBlockSize(byte r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader.VorbisSetup r3) {
            int r0 = r3.iLogModes
            r1 = 1
            int r2 = readBits(r2, r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$Mode[] r0 = r3.modes
            r2 = r0[r2]
            boolean r2 = r2.blockFlag
            if (r2 != 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r2 = r3.idHeader
            int r2 = r2.blockSize0
            goto L18
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r2 = r3.idHeader
            int r2 = r2.blockSize1
        L18:
            return r2
    }

    static int readBits(byte r0, int r1, int r2) {
            int r0 = r0 >> r2
            int r1 = 8 - r1
            r2 = 255(0xff, float:3.57E-43)
            int r1 = r2 >>> r1
            r0 = r0 & r1
            return r0
    }

    public static boolean verifyBitstreamType(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) {
            r0 = 1
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.verifyVorbisHeaderCapturePattern(r0, r1, r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.ParserException -> L6
            return r1
        L6:
            r1 = 0
            return r1
    }

    @Override
    protected final void onSeekEnd(long r3) {
            r2 = this;
            super.onSeekEnd(r3)
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r4 = 0
            if (r3 == 0) goto Lc
            r3 = 1
            goto Ld
        Lc:
            r3 = r4
        Ld:
            r2.seenFirstAudioPacket = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r3 = r2.vorbisIdHeader
            if (r3 == 0) goto L15
            int r4 = r3.blockSize0
        L15:
            r2.previousPacketBlockSize = r4
            return
    }

    @Override
    protected final long preparePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6) {
            r5 = this;
            byte[] r0 = r6.data
            r1 = 0
            r0 = r0[r1]
            r2 = 1
            r0 = r0 & r2
            if (r0 != r2) goto Lc
            r0 = -1
            return r0
        Lc:
            byte[] r0 = r6.data
            r0 = r0[r1]
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r3 = r5.vorbisSetup
            int r0 = decodeBlockSize(r0, r3)
            boolean r3 = r5.seenFirstAudioPacket
            if (r3 == 0) goto L1f
            int r1 = r5.previousPacketBlockSize
            int r1 = r1 + r0
            int r1 = r1 / 4
        L1f:
            long r3 = (long) r1
            appendNumberOfSamples(r6, r3)
            r5.seenFirstAudioPacket = r2
            r5.previousPacketBlockSize = r0
            return r3
    }

    @Override
    protected final boolean readHeaders(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12, long r13, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader.SetupData r15) throws java.io.IOException, java.lang.InterruptedException {
            r11 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r13 = r11.vorbisSetup
            if (r13 == 0) goto L6
            r12 = 0
            return r12
        L6:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r12 = r11.readSetupHeaders(r12)
            r11.vorbisSetup = r12
            r13 = 1
            if (r12 != 0) goto L10
            return r13
        L10:
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r12 = r11.vorbisSetup
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r12 = r12.idHeader
            byte[] r12 = r12.data
            r7.add(r12)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r12 = r11.vorbisSetup
            byte[] r12 = r12.setupHeaderData
            r7.add(r12)
            r0 = 0
            r2 = 0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r12 = r11.vorbisSetup
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r12 = r12.idHeader
            int r3 = r12.bitrateNominal
            r4 = -1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r12 = r11.vorbisSetup
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r12 = r12.idHeader
            int r5 = r12.channels
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r12 = r11.vorbisSetup
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r12 = r12.idHeader
            long r8 = r12.sampleRate
            int r6 = (int) r8
            r8 = 0
            r9 = 0
            r10 = 0
            java.lang.String r1 = "audio/vorbis"
            com.mbridge.msdk.playercommon.exoplayer2.Format r12 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r15.format = r12
            return r13
    }

    final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader.VorbisSetup readSetupHeaders(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) throws java.io.IOException {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r0 = r7.vorbisIdHeader
            r1 = 0
            if (r0 != 0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.readVorbisIdentificationHeader(r8)
            r7.vorbisIdHeader = r8
            return r1
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$CommentHeader r0 = r7.commentHeader
            if (r0 != 0) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$CommentHeader r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.readVorbisCommentHeader(r8)
            r7.commentHeader = r8
            return r1
        L17:
            int r0 = r8.limit()
            byte[] r4 = new byte[r0]
            byte[] r0 = r8.data
            int r1 = r8.limit()
            r2 = 0
            java.lang.System.arraycopy(r0, r2, r4, r2, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r0 = r7.vorbisIdHeader
            int r0 = r0.channels
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$Mode[] r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.readVorbisModes(r8, r0)
            int r8 = r5.length
            int r8 = r8 + (-1)
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil.iLog(r8)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup r8 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader$VorbisSetup
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$VorbisIdHeader r2 = r7.vorbisIdHeader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisUtil$CommentHeader r3 = r7.commentHeader
            r1 = r8
            r1.<init>(r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    protected final void reset(boolean r1) {
            r0 = this;
            super.reset(r1)
            if (r1 == 0) goto Lc
            r1 = 0
            r0.vorbisSetup = r1
            r0.vorbisIdHeader = r1
            r0.commentHeader = r1
        Lc:
            r1 = 0
            r0.previousPacketBlockSize = r1
            r0.seenFirstAudioPacket = r1
            return
    }
}
