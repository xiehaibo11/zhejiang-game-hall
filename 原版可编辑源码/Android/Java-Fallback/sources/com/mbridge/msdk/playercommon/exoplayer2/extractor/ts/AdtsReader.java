package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class AdtsReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int CRC_SIZE = 2;
    private static final int HEADER_SIZE = 5;
    private static final int ID3_HEADER_SIZE = 10;
    private static final byte[] ID3_IDENTIFIER = null;
    private static final int ID3_SIZE_OFFSET = 6;
    private static final int MATCH_STATE_FF = 512;
    private static final int MATCH_STATE_I = 768;
    private static final int MATCH_STATE_ID = 1024;
    private static final int MATCH_STATE_START = 256;
    private static final int MATCH_STATE_VALUE_SHIFT = 8;
    private static final int STATE_FINDING_SAMPLE = 0;
    private static final int STATE_READING_ADTS_HEADER = 2;
    private static final int STATE_READING_ID3_HEADER = 1;
    private static final int STATE_READING_SAMPLE = 3;
    private static final java.lang.String TAG = "AdtsReader";
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray adtsScratch;
    private int bytesRead;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput currentOutput;
    private long currentSampleDuration;
    private final boolean exposeId3;
    private java.lang.String formatId;
    private boolean hasCrc;
    private boolean hasOutputFormat;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray id3HeaderBuffer;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput id3Output;
    private final java.lang.String language;
    private int matchState;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private long sampleDurationUs;
    private int sampleSize;
    private int state;
    private long timeUs;

    static {
            r0 = 3
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [73, 68, 51} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader.ID3_IDENTIFIER = r0
            return
    }

    public AdtsReader(boolean r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AdtsReader(boolean r4, java.lang.String r5) {
            r3 = this;
            r3.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r1 = 7
            byte[] r1 = new byte[r1]
            r0.<init>(r1)
            r3.adtsScratch = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader.ID3_IDENTIFIER
            r2 = 10
            byte[] r1 = java.util.Arrays.copyOf(r1, r2)
            r0.<init>(r1)
            r3.id3HeaderBuffer = r0
            r3.setFindingSampleState()
            r3.exposeId3 = r4
            r3.language = r5
            return
    }

    private boolean continueRead(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r3.bytesLeft()
            int r1 = r2.bytesRead
            int r1 = r5 - r1
            int r0 = java.lang.Math.min(r0, r1)
            int r1 = r2.bytesRead
            r3.readBytes(r4, r1, r0)
            int r3 = r2.bytesRead
            int r3 = r3 + r0
            r2.bytesRead = r3
            if (r3 != r5) goto L1a
            r3 = 1
            goto L1b
        L1a:
            r3 = 0
        L1b:
            return r3
    }

    private void findNextSample(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) {
            r7 = this;
            byte[] r0 = r8.data
            int r1 = r8.getPosition()
            int r2 = r8.limit()
        La:
            if (r1 >= r2) goto L5f
            int r3 = r1 + 1
            r1 = r0[r1]
            r4 = 255(0xff, float:3.57E-43)
            r1 = r1 & r4
            int r5 = r7.matchState
            r6 = 512(0x200, float:7.17E-43)
            if (r5 != r6) goto L2e
            r5 = 240(0xf0, float:3.36E-43)
            if (r1 < r5) goto L2e
            if (r1 == r4) goto L2e
            r0 = 1
            r1 = r1 & r0
            if (r1 != 0) goto L24
            goto L25
        L24:
            r0 = 0
        L25:
            r7.hasCrc = r0
            r7.setReadingAdtsHeaderState()
            r8.setPosition(r3)
            return
        L2e:
            int r4 = r7.matchState
            r1 = r1 | r4
            r5 = 329(0x149, float:4.61E-43)
            if (r1 == r5) goto L59
            r5 = 511(0x1ff, float:7.16E-43)
            if (r1 == r5) goto L56
            r5 = 836(0x344, float:1.171E-42)
            if (r1 == r5) goto L51
            r5 = 1075(0x433, float:1.506E-42)
            if (r1 == r5) goto L4a
            r1 = 256(0x100, float:3.59E-43)
            if (r4 == r1) goto L5d
            r7.matchState = r1
            int r3 = r3 + (-1)
            goto L5d
        L4a:
            r7.setReadingId3HeaderState()
            r8.setPosition(r3)
            return
        L51:
            r1 = 1024(0x400, float:1.435E-42)
            r7.matchState = r1
            goto L5d
        L56:
            r7.matchState = r6
            goto L5d
        L59:
            r1 = 768(0x300, float:1.076E-42)
            r7.matchState = r1
        L5d:
            r1 = r3
            goto La
        L5f:
            r8.setPosition(r1)
            return
    }

    private void parseAdtsHeader() throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r18 = this;
            r6 = r18
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.adtsScratch
            r1 = 0
            r0.setPosition(r1)
            boolean r0 = r6.hasOutputFormat
            r1 = 4
            r2 = 2
            if (r0 != 0) goto L85
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.adtsScratch
            int r0 = r0.readBits(r2)
            r3 = 1
            int r0 = r0 + r3
            if (r0 == r2) goto L34
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Detected audio object type: "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r0 = ", but assuming AAC LC."
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            java.lang.String r4 = "AdtsReader"
            android.util.Log.w(r4, r0)
            r0 = r2
        L34:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.adtsScratch
            int r4 = r4.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r6.adtsScratch
            r5.skipBits(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r6.adtsScratch
            r7 = 3
            int r5 = r5.readBits(r7)
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.buildAacAudioSpecificConfig(r0, r4, r5)
            android.util.Pair r4 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.parseAacAudioSpecificConfig(r0)
            java.lang.String r7 = r6.formatId
            r9 = 0
            r10 = -1
            r11 = -1
            java.lang.Object r5 = r4.second
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r12 = r5.intValue()
            java.lang.Object r4 = r4.first
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r13 = r4.intValue()
            java.util.List r14 = java.util.Collections.singletonList(r0)
            r15 = 0
            r16 = 0
            java.lang.String r0 = r6.language
            java.lang.String r8 = "audio/mp4a-latm"
            r17 = r0
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
            r4 = 1024000000(0x3d090000, double:5.059232213E-315)
            int r7 = r0.sampleRate
            long r7 = (long) r7
            long r4 = r4 / r7
            r6.sampleDurationUs = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r6.output
            r4.format(r0)
            r6.hasOutputFormat = r3
            goto L8c
        L85:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.adtsScratch
            r3 = 10
            r0.skipBits(r3)
        L8c:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.adtsScratch
            r0.skipBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.adtsScratch
            r1 = 13
            int r0 = r0.readBits(r1)
            int r0 = r0 - r2
            int r0 = r0 + (-5)
            boolean r1 = r6.hasCrc
            if (r1 == 0) goto La2
            int r0 = r0 + (-2)
        La2:
            r5 = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r6.output
            long r2 = r6.sampleDurationUs
            r4 = 0
            r0 = r18
            r0.setReadingSampleState(r1, r2, r4, r5)
            return
    }

    private void parseId3Header() {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r9.id3Output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r9.id3HeaderBuffer
            r2 = 10
            r0.sampleData(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.id3HeaderBuffer
            r1 = 6
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r9.id3Output
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.id3HeaderBuffer
            int r0 = r0.readSynchSafeInt()
            int r8 = r0 + 10
            r5 = 0
            r7 = 10
            r3 = r9
            r3.setReadingSampleState(r4, r5, r7, r8)
            return
    }

    private void readSample(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) {
            r7 = this;
            int r0 = r8.bytesLeft()
            int r1 = r7.sampleSize
            int r2 = r7.bytesRead
            int r1 = r1 - r2
            int r0 = java.lang.Math.min(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r7.currentOutput
            r1.sampleData(r8, r0)
            int r8 = r7.bytesRead
            int r8 = r8 + r0
            r7.bytesRead = r8
            int r4 = r7.sampleSize
            if (r8 != r4) goto L2f
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r7.currentOutput
            long r1 = r7.timeUs
            r3 = 1
            r5 = 0
            r6 = 0
            r0.sampleMetadata(r1, r3, r4, r5, r6)
            long r0 = r7.timeUs
            long r2 = r7.currentSampleDuration
            long r0 = r0 + r2
            r7.timeUs = r0
            r7.setFindingSampleState()
        L2f:
            return
    }

    private void setFindingSampleState() {
            r1 = this;
            r0 = 0
            r1.state = r0
            r1.bytesRead = r0
            r0 = 256(0x100, float:3.59E-43)
            r1.matchState = r0
            return
    }

    private void setReadingAdtsHeaderState() {
            r1 = this;
            r0 = 2
            r1.state = r0
            r0 = 0
            r1.bytesRead = r0
            return
    }

    private void setReadingId3HeaderState() {
            r2 = this;
            r0 = 1
            r2.state = r0
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsReader.ID3_IDENTIFIER
            int r0 = r0.length
            r2.bytesRead = r0
            r0 = 0
            r2.sampleSize = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r2.id3HeaderBuffer
            r1.setPosition(r0)
            return
    }

    private void setReadingSampleState(com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2, long r3, int r5, int r6) {
            r1 = this;
            r0 = 3
            r1.state = r0
            r1.bytesRead = r5
            r1.currentOutput = r2
            r1.currentSampleDuration = r3
            r1.sampleSize = r6
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r2 = this;
        L0:
            int r0 = r3.bytesLeft()
            if (r0 <= 0) goto L41
            int r0 = r2.state
            if (r0 == 0) goto L3d
            r1 = 1
            if (r0 == r1) goto L2d
            r1 = 2
            if (r0 == r1) goto L18
            r1 = 3
            if (r0 == r1) goto L14
            goto L0
        L14:
            r2.readSample(r3)
            goto L0
        L18:
            boolean r0 = r2.hasCrc
            if (r0 == 0) goto L1e
            r0 = 7
            goto L1f
        L1e:
            r0 = 5
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r2.adtsScratch
            byte[] r1 = r1.data
            boolean r0 = r2.continueRead(r3, r1, r0)
            if (r0 == 0) goto L0
            r2.parseAdtsHeader()
            goto L0
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r2.id3HeaderBuffer
            byte[] r0 = r0.data
            r1 = 10
            boolean r0 = r2.continueRead(r3, r0, r1)
            if (r0 == 0) goto L0
            r2.parseId3Header()
            goto L0
        L3d:
            r2.findNextSample(r3)
            goto L0
        L41:
            return
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r5) {
            r3 = this;
            r5.generateNewId()
            java.lang.String r0 = r5.getFormatId()
            r3.formatId = r0
            int r0 = r5.getTrackId()
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r4.track(r0, r1)
            r3.output = r0
            boolean r0 = r3.exposeId3
            if (r0 == 0) goto L36
            r5.generateNewId()
            int r0 = r5.getTrackId()
            r1 = 4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r4.track(r0, r1)
            r3.id3Output = r4
            java.lang.String r5 = r5.getFormatId()
            r0 = -1
            r1 = 0
            java.lang.String r2 = "application/id3"
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = com.mbridge.msdk.playercommon.exoplayer2.Format.createSampleFormat(r5, r2, r1, r0, r1)
            r4.format(r5)
            goto L3d
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.DummyTrackOutput r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.DummyTrackOutput
            r4.<init>()
            r3.id3Output = r4
        L3d:
            return
    }

    @Override
    public final void packetFinished() {
            r0 = this;
            return
    }

    @Override
    public final void packetStarted(long r1, boolean r3) {
            r0 = this;
            r0.timeUs = r1
            return
    }

    @Override
    public final void seek() {
            r0 = this;
            r0.setFindingSampleState()
            return
    }
}
