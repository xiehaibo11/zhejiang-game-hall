package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3;

public final class Mp3Extractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    public static final int FLAG_DISABLE_ID3_METADATA = 2;
    public static final int FLAG_ENABLE_CONSTANT_BITRATE_SEEKING = 1;
    private static final int MAX_SNIFF_BYTES = 16384;
    private static final int MAX_SYNC_BYTES = 131072;
    private static final int MPEG_AUDIO_HEADER_MASK = -128000;
    private static final int SCRATCH_LENGTH = 10;
    private static final int SEEK_HEADER_INFO = 0;
    private static final int SEEK_HEADER_UNSET = 0;
    private static final int SEEK_HEADER_VBRI = 0;
    private static final int SEEK_HEADER_XING = 0;
    private long basisTimeUs;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
    private final int flags;
    private final long forcedFirstSampleTimestampUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder gaplessInfoHolder;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.Id3Peeker id3Peeker;
    private com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata metadata;
    private int sampleBytesRemaining;
    private long samplesRead;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray scratch;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.Seeker seeker;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader synchronizedHeader;
    private int synchronizedHeaderData;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput trackOutput;


    public @interface Flags {
    }

    interface Seeker extends com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap {
        long getTimeUs(long r1);
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.FACTORY = r0
            java.lang.String r0 = "Xing"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_XING = r0
            java.lang.String r0 = "Info"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_INFO = r0
            java.lang.String r0 = "VBRI"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_VBRI = r0
            return
    }

    public Mp3Extractor() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public Mp3Extractor(int r3) {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.<init>(r3, r0)
            return
    }

    public Mp3Extractor(int r1, long r2) {
            r0 = this;
            r0.<init>()
            r0.flags = r1
            r0.forcedFirstSampleTimestampUs = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2 = 10
            r1.<init>(r2)
            r0.scratch = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader
            r1.<init>()
            r0.synchronizedHeader = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder
            r1.<init>()
            r0.gaplessInfoHolder = r1
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.basisTimeUs = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Id3Peeker r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.Id3Peeker
            r1.<init>()
            r0.id3Peeker = r1
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.Seeker getConstantBitrateSeeker(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r9) throws java.io.IOException, java.lang.InterruptedException {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.scratch
            byte[] r0 = r0.data
            r1 = 0
            r2 = 4
            r9.peekFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.scratch
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r8.scratch
            int r0 = r0.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r8.synchronizedHeader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.populateHeader(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.ConstantBitrateSeeker r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.ConstantBitrateSeeker
            long r3 = r9.getLength()
            long r5 = r9.getPosition()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r7 = r8.synchronizedHeader
            r2 = r0
            r2.<init>(r3, r5, r7)
            return r0
    }

    private static int getSeekFrameHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, int r3) {
            int r0 = r2.limit()
            int r1 = r3 + 4
            if (r0 < r1) goto L18
            r2.setPosition(r3)
            int r3 = r2.readInt()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_XING
            if (r3 == r0) goto L17
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_INFO
            if (r3 != r0) goto L18
        L17:
            return r3
        L18:
            int r3 = r2.limit()
            r0 = 40
            if (r3 < r0) goto L2e
            r3 = 36
            r2.setPosition(r3)
            int r2 = r2.readInt()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_VBRI
            if (r2 != r3) goto L2e
            return r3
        L2e:
            r2 = 0
            return r2
    }

    private static boolean headersMatch(int r4, long r5) {
            r0 = -128000(0xfffffffffffe0c00, float:NaN)
            r4 = r4 & r0
            long r0 = (long) r4
            r2 = -128000(0xfffffffffffe0c00, double:NaN)
            long r4 = r5 & r2
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 != 0) goto L10
            r4 = 1
            goto L11
        L10:
            r4 = 0
        L11:
            return r4
    }

    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.Seeker maybeReadSeekFrame(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r10) throws java.io.IOException, java.lang.InterruptedException {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r0 = r9.synchronizedHeader
            int r0 = r0.frameSize
            r5.<init>(r0)
            byte[] r0 = r5.data
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r9.synchronizedHeader
            int r1 = r1.frameSize
            r6 = 0
            r10.peekFully(r0, r6, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r0 = r9.synchronizedHeader
            int r0 = r0.version
            r1 = 1
            r0 = r0 & r1
            r2 = 21
            if (r0 == 0) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r0 = r9.synchronizedHeader
            int r0 = r0.channels
            if (r0 == r1) goto L2f
            r2 = 36
            goto L2f
        L26:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r0 = r9.synchronizedHeader
            int r0 = r0.channels
            if (r0 == r1) goto L2d
            goto L2f
        L2d:
            r2 = 13
        L2f:
            r7 = r2
            int r8 = getSeekFrameHeader(r5, r7)
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_XING
            if (r8 == r0) goto L5c
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_INFO
            if (r8 != r0) goto L3d
            goto L5c
        L3d:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_VBRI
            if (r8 != r0) goto L57
            long r0 = r10.getLength()
            long r2 = r10.getPosition()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r4 = r9.synchronizedHeader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.VbriSeeker r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.VbriSeeker.create(r0, r2, r4, r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r9.synchronizedHeader
            int r1 = r1.frameSize
            r10.skipFully(r1)
            goto Lac
        L57:
            r0 = 0
            r10.resetPeekPosition()
            goto Lac
        L5c:
            long r0 = r10.getLength()
            long r2 = r10.getPosition()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r4 = r9.synchronizedHeader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.XingSeeker r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.XingSeeker.create(r0, r2, r4, r5)
            if (r0 == 0) goto L94
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r1 = r9.gaplessInfoHolder
            boolean r1 = r1.hasGaplessInfo()
            if (r1 != 0) goto L94
            r10.resetPeekPosition()
            int r7 = r7 + 141
            r10.advancePeekPosition(r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r9.scratch
            byte[] r1 = r1.data
            r2 = 3
            r10.peekFully(r1, r6, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r9.scratch
            r1.setPosition(r6)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r1 = r9.gaplessInfoHolder
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r9.scratch
            int r2 = r2.readUnsignedInt24()
            r1.setFromXingHeaderValue(r2)
        L94:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r1 = r9.synchronizedHeader
            int r1 = r1.frameSize
            r10.skipFully(r1)
            if (r0 == 0) goto Lac
            boolean r1 = r0.isSeekable()
            if (r1 != 0) goto Lac
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.SEEK_HEADER_INFO
            if (r8 != r1) goto Lac
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$Seeker r10 = r9.getConstantBitrateSeeker(r10)
            return r10
        Lac:
            return r0
    }

    private int readSample(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r14) throws java.io.IOException, java.lang.InterruptedException {
            r13 = this;
            int r0 = r13.sampleBytesRemaining
            r1 = 1
            r2 = -1
            r3 = 0
            if (r0 != 0) goto L70
            r14.resetPeekPosition()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r13.scratch
            byte[] r0 = r0.data
            r4 = 4
            boolean r0 = r14.peekFully(r0, r3, r4, r1)
            if (r0 != 0) goto L16
            return r2
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r13.scratch
            r0.setPosition(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r13.scratch
            int r0 = r0.readInt()
            int r4 = r13.synchronizedHeaderData
            long r4 = (long) r4
            boolean r4 = headersMatch(r0, r4)
            if (r4 == 0) goto L6a
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.getFrameSize(r0)
            if (r4 != r2) goto L31
            goto L6a
        L31:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r4 = r13.synchronizedHeader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.populateHeader(r0, r4)
            long r4 = r13.basisTimeUs
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L63
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$Seeker r0 = r13.seeker
            long r4 = r14.getPosition()
            long r4 = r0.getTimeUs(r4)
            r13.basisTimeUs = r4
            long r4 = r13.forcedFirstSampleTimestampUs
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 == 0) goto L63
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$Seeker r0 = r13.seeker
            r4 = 0
            long r4 = r0.getTimeUs(r4)
            long r6 = r13.basisTimeUs
            long r8 = r13.forcedFirstSampleTimestampUs
            long r8 = r8 - r4
            long r6 = r6 + r8
            r13.basisTimeUs = r6
        L63:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r0 = r13.synchronizedHeader
            int r0 = r0.frameSize
            r13.sampleBytesRemaining = r0
            goto L70
        L6a:
            r14.skipFully(r1)
            r13.synchronizedHeaderData = r3
            return r3
        L70:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r13.trackOutput
            int r4 = r13.sampleBytesRemaining
            int r14 = r0.sampleData(r14, r4, r1)
            if (r14 != r2) goto L7b
            return r2
        L7b:
            int r0 = r13.sampleBytesRemaining
            int r0 = r0 - r14
            r13.sampleBytesRemaining = r0
            if (r0 <= 0) goto L83
            return r3
        L83:
            long r0 = r13.basisTimeUs
            long r4 = r13.samplesRead
            r6 = 1000000(0xf4240, double:4.940656E-318)
            long r4 = r4 * r6
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r14 = r13.synchronizedHeader
            int r14 = r14.sampleRate
            long r6 = (long) r14
            long r4 = r4 / r6
            long r7 = r0 + r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r6 = r13.trackOutput
            r9 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r14 = r13.synchronizedHeader
            int r10 = r14.frameSize
            r11 = 0
            r12 = 0
            r6.sampleMetadata(r7, r9, r10, r11, r12)
            long r0 = r13.samplesRead
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r14 = r13.synchronizedHeader
            int r14 = r14.samplesPerFrame
            long r4 = (long) r14
            long r0 = r0 + r4
            r13.samplesRead = r0
            r13.sampleBytesRemaining = r3
            return r3
    }

    private boolean synchronize(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r13, boolean r14) throws java.io.IOException, java.lang.InterruptedException {
            r12 = this;
            if (r14 == 0) goto L5
            r0 = 16384(0x4000, float:2.2959E-41)
            goto L7
        L5:
            r0 = 131072(0x20000, float:1.83671E-40)
        L7:
            r13.resetPeekPosition()
            long r1 = r13.getPosition()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L40
            int r1 = r12.flags
            r1 = r1 & 2
            if (r1 == 0) goto L1e
            r1 = r2
            goto L1f
        L1e:
            r1 = r3
        L1f:
            if (r1 == 0) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.metadata.id3.Id3Decoder$FramePredicate r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder.GAPLESS_INFO_ID3_FRAME_PREDICATE
            goto L25
        L24:
            r1 = 0
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Id3Peeker r4 = r12.id3Peeker
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r4.peekId3Data(r13, r1)
            r12.metadata = r1
            if (r1 == 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r4 = r12.gaplessInfoHolder
            r4.setFromMetadata(r1)
        L34:
            long r4 = r13.getPeekPosition()
            int r1 = (int) r4
            if (r14 != 0) goto L3e
            r13.skipFully(r1)
        L3e:
            r4 = r3
            goto L42
        L40:
            r1 = r3
            r4 = r1
        L42:
            r5 = r4
            r6 = r5
        L44:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r12.scratch
            byte[] r7 = r7.data
            if (r4 <= 0) goto L4c
            r8 = r2
            goto L4d
        L4c:
            r8 = r3
        L4d:
            r9 = 4
            boolean r7 = r13.peekFully(r7, r3, r9, r8)
            if (r7 != 0) goto L55
            goto L9e
        L55:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r12.scratch
            r7.setPosition(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r12.scratch
            int r7 = r7.readInt()
            if (r5 == 0) goto L69
            long r10 = (long) r5
            boolean r8 = headersMatch(r7, r10)
            if (r8 == 0) goto L70
        L69:
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.getFrameSize(r7)
            r10 = -1
            if (r8 != r10) goto L91
        L70:
            int r4 = r6 + 1
            if (r6 != r0) goto L7f
            if (r14 == 0) goto L77
            return r3
        L77:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r13 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r14 = "Searched too many bytes."
            r13.<init>(r14)
            throw r13
        L7f:
            if (r14 == 0) goto L8a
            r13.resetPeekPosition()
            int r5 = r1 + r4
            r13.advancePeekPosition(r5)
            goto L8d
        L8a:
            r13.skipFully(r2)
        L8d:
            r5 = r3
            r6 = r4
            r4 = r5
            goto L44
        L91:
            int r4 = r4 + 1
            if (r4 != r2) goto L9c
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r5 = r12.synchronizedHeader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader.populateHeader(r7, r5)
            r5 = r7
            goto Lab
        L9c:
            if (r4 != r9) goto Lab
        L9e:
            if (r14 == 0) goto La5
            int r1 = r1 + r6
            r13.skipFully(r1)
            goto La8
        La5:
            r13.resetPeekPosition()
        La8:
            r12.synchronizedHeaderData = r5
            return r2
        Lab:
            int r8 = r8 + (-4)
            r13.advancePeekPosition(r8)
            goto L44
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3) {
            r2 = this;
            r2.extractorOutput = r3
            r0 = 0
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r3.track(r0, r1)
            r2.trackOutput = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3 = r2.extractorOutput
            r3.endTracks()
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r19, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r20) throws java.io.IOException, java.lang.InterruptedException {
            r18 = this;
            r0 = r18
            int r1 = r0.synchronizedHeaderData
            if (r1 != 0) goto Lf
            r1 = 0
            r2 = r19
            r0.synchronize(r2, r1)     // Catch: java.io.EOFException -> Ld
            goto L11
        Ld:
            r1 = -1
            return r1
        Lf:
            r2 = r19
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$Seeker r1 = r0.seeker
            if (r1 != 0) goto L6a
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$Seeker r1 = r18.maybeReadSeekFrame(r19)
            r0.seeker = r1
            if (r1 == 0) goto L29
            boolean r1 = r1.isSeekable()
            if (r1 != 0) goto L2f
            int r1 = r0.flags
            r1 = r1 & 1
            if (r1 == 0) goto L2f
        L29:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$Seeker r1 = r18.getConstantBitrateSeeker(r19)
            r0.seeker = r1
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1 = r0.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor$Seeker r3 = r0.seeker
            r1.seekMap(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r0.trackOutput
            r3 = 0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r4 = r0.synchronizedHeader
            java.lang.String r4 = r4.mimeType
            r5 = 0
            r6 = -1
            r7 = 4096(0x1000, float:5.74E-42)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r8 = r0.synchronizedHeader
            int r8 = r8.channels
            com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r9 = r0.synchronizedHeader
            int r9 = r9.sampleRate
            r10 = -1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r11 = r0.gaplessInfoHolder
            int r11 = r11.encoderDelay
            com.mbridge.msdk.playercommon.exoplayer2.extractor.GaplessInfoHolder r12 = r0.gaplessInfoHolder
            int r12 = r12.encoderPadding
            r13 = 0
            r14 = 0
            r16 = 0
            int r15 = r0.flags
            r15 = r15 & 2
            if (r15 == 0) goto L5e
            r15 = 0
            goto L60
        L5e:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r15 = r0.metadata
        L60:
            r17 = r15
            r15 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
            r1.format(r3)
        L6a:
            int r1 = r18.readSample(r19)
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
            r1 = 0
            r0.synchronizedHeaderData = r1
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.basisTimeUs = r2
            r2 = 0
            r0.samplesRead = r2
            r0.sampleBytesRemaining = r1
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r2) throws java.io.IOException, java.lang.InterruptedException {
            r1 = this;
            r0 = 1
            boolean r2 = r1.synchronize(r2, r0)
            return r2
    }
}
