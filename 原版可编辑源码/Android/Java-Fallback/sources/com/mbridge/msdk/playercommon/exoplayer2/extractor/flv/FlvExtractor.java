package com.mbridge.msdk.playercommon.exoplayer2.extractor.flv;

public final class FlvExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final int FLV_HEADER_SIZE = 9;
    private static final int FLV_TAG = 0;
    private static final int FLV_TAG_HEADER_SIZE = 11;
    private static final int STATE_READING_FLV_HEADER = 1;
    private static final int STATE_READING_TAG_DATA = 4;
    private static final int STATE_READING_TAG_HEADER = 3;
    private static final int STATE_SKIPPING_TO_TAG_HEADER = 2;
    private static final int TAG_TYPE_AUDIO = 8;
    private static final int TAG_TYPE_SCRIPT_DATA = 18;
    private static final int TAG_TYPE_VIDEO = 9;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader audioReader;
    private int bytesToNextTagHeader;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray headerBuffer;
    private long mediaTagTimestampOffsetUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.ScriptTagPayloadReader metadataReader;
    private boolean outputSeekMap;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray scratch;
    private int state;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray tagData;
    private int tagDataSize;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray tagHeaderBuffer;
    private long tagTimestampUs;
    private int tagType;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.VideoTagPayloadReader videoReader;


    private @interface States {
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.FlvExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.FlvExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.FlvExtractor.FACTORY = r0
            java.lang.String r0 = "FLV"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.FlvExtractor.FLV_TAG = r0
            return
    }

    public FlvExtractor() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 4
            r0.<init>(r1)
            r2.scratch = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 9
            r0.<init>(r1)
            r2.headerBuffer = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 11
            r0.<init>(r1)
            r2.tagHeaderBuffer = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r2.tagData = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.ScriptTagPayloadReader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.ScriptTagPayloadReader
            r0.<init>()
            r2.metadataReader = r0
            r0 = 1
            r2.state = r0
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.mediaTagTimestampOffsetUs = r0
            return
    }

    private void ensureReadyForMediaOutput() {
            r5 = this;
            boolean r0 = r5.outputSeekMap
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r0 != 0) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r0 = r5.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            r3.<init>(r1)
            r0.seekMap(r3)
            r0 = 1
            r5.outputSeekMap = r0
        L16:
            long r3 = r5.mediaTagTimestampOffsetUs
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L2e
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.ScriptTagPayloadReader r0 = r5.metadataReader
            long r3 = r0.getDurationUs()
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L2a
            long r0 = r5.tagTimestampUs
            long r0 = -r0
            goto L2c
        L2a:
            r0 = 0
        L2c:
            r5.mediaTagTimestampOffsetUs = r0
        L2e:
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray prepareTagData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            int r0 = r4.tagDataSize
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r4.tagData
            int r1 = r1.capacity()
            r2 = 0
            if (r0 <= r1) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.tagData
            int r1 = r0.capacity()
            int r1 = r1 * 2
            int r3 = r4.tagDataSize
            int r1 = java.lang.Math.max(r1, r3)
            byte[] r1 = new byte[r1]
            r0.reset(r1, r2)
            goto L24
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.tagData
            r0.setPosition(r2)
        L24:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.tagData
            int r1 = r4.tagDataSize
            r0.setLimit(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r4.tagData
            byte[] r0 = r0.data
            int r1 = r4.tagDataSize
            r5.readFully(r0, r2, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r4.tagData
            return r5
    }

    private boolean readFlvHeader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7) throws java.io.IOException, java.lang.InterruptedException {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r6.headerBuffer
            byte[] r0 = r0.data
            r1 = 9
            r2 = 0
            r3 = 1
            boolean r7 = r7.readFully(r0, r2, r1, r3)
            if (r7 != 0) goto Lf
            return r2
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.headerBuffer
            r7.setPosition(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.headerBuffer
            r0 = 4
            r7.skipBytes(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.headerBuffer
            int r7 = r7.readUnsignedByte()
            r4 = r7 & 4
            if (r4 == 0) goto L26
            r4 = r3
            goto L27
        L26:
            r4 = r2
        L27:
            r7 = r7 & r3
            if (r7 == 0) goto L2b
            r2 = r3
        L2b:
            if (r4 == 0) goto L40
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader r7 = r6.audioReader
            if (r7 != 0) goto L40
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader r7 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4 = r6.extractorOutput
            r5 = 8
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r4.track(r5, r3)
            r7.<init>(r4)
            r6.audioReader = r7
        L40:
            r7 = 2
            if (r2 == 0) goto L54
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.VideoTagPayloadReader r2 = r6.videoReader
            if (r2 != 0) goto L54
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.VideoTagPayloadReader r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.VideoTagPayloadReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4 = r6.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r4.track(r1, r7)
            r2.<init>(r4)
            r6.videoReader = r2
        L54:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2 = r6.extractorOutput
            r2.endTracks()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r6.headerBuffer
            int r2 = r2.readInt()
            int r2 = r2 - r1
            int r2 = r2 + r0
            r6.bytesToNextTagHeader = r2
            r6.state = r7
            return r3
    }

    private boolean readTagData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7) throws java.io.IOException, java.lang.InterruptedException {
            r6 = this;
            int r0 = r6.tagType
            r1 = 1
            r2 = 8
            if (r0 != r2) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader r0 = r6.audioReader
            if (r0 == 0) goto L1d
            r6.ensureReadyForMediaOutput()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.AudioTagPayloadReader r0 = r6.audioReader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.prepareTagData(r7)
            long r2 = r6.mediaTagTimestampOffsetUs
            long r4 = r6.tagTimestampUs
            long r2 = r2 + r4
            r0.consume(r7, r2)
            goto L70
        L1d:
            int r0 = r6.tagType
            r2 = 9
            if (r0 != r2) goto L39
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.VideoTagPayloadReader r0 = r6.videoReader
            if (r0 == 0) goto L39
            r6.ensureReadyForMediaOutput()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.VideoTagPayloadReader r0 = r6.videoReader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.prepareTagData(r7)
            long r2 = r6.mediaTagTimestampOffsetUs
            long r4 = r6.tagTimestampUs
            long r2 = r2 + r4
            r0.consume(r7, r2)
            goto L70
        L39:
            int r0 = r6.tagType
            r2 = 18
            if (r0 != r2) goto L6a
            boolean r0 = r6.outputSeekMap
            if (r0 != 0) goto L6a
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.ScriptTagPayloadReader r0 = r6.metadataReader
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.prepareTagData(r7)
            long r2 = r6.tagTimestampUs
            r0.consume(r7, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.ScriptTagPayloadReader r7 = r6.metadataReader
            long r2 = r7.getDurationUs()
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 == 0) goto L70
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r7 = r6.extractorOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            r0.<init>(r2)
            r7.seekMap(r0)
            r6.outputSeekMap = r1
            goto L70
        L6a:
            int r0 = r6.tagDataSize
            r7.skipFully(r0)
            r1 = 0
        L70:
            r7 = 4
            r6.bytesToNextTagHeader = r7
            r7 = 2
            r6.state = r7
            return r1
    }

    private boolean readTagHeader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7) throws java.io.IOException, java.lang.InterruptedException {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r6.tagHeaderBuffer
            byte[] r0 = r0.data
            r1 = 1
            r2 = 0
            r3 = 11
            boolean r7 = r7.readFully(r0, r2, r3, r1)
            if (r7 != 0) goto Lf
            return r2
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.tagHeaderBuffer
            r7.setPosition(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.tagHeaderBuffer
            int r7 = r7.readUnsignedByte()
            r6.tagType = r7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.tagHeaderBuffer
            int r7 = r7.readUnsignedInt24()
            r6.tagDataSize = r7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.tagHeaderBuffer
            int r7 = r7.readUnsignedInt24()
            long r2 = (long) r7
            r6.tagTimestampUs = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.tagHeaderBuffer
            int r7 = r7.readUnsignedByte()
            int r7 = r7 << 24
            long r2 = (long) r7
            long r4 = r6.tagTimestampUs
            long r2 = r2 | r4
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r6.tagTimestampUs = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.tagHeaderBuffer
            r0 = 3
            r7.skipBytes(r0)
            r7 = 4
            r6.state = r7
            return r1
    }

    private void skipToTagHeader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r2) throws java.io.IOException, java.lang.InterruptedException {
            r1 = this;
            int r0 = r1.bytesToNextTagHeader
            r2.skipFully(r0)
            r2 = 0
            r1.bytesToNextTagHeader = r2
            r2 = 3
            r1.state = r2
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1) {
            r0 = this;
            r0.extractorOutput = r1
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r4) throws java.io.IOException, java.lang.InterruptedException {
            r2 = this;
        L0:
            int r4 = r2.state
            r0 = 1
            r1 = -1
            if (r4 == r0) goto L28
            r0 = 2
            if (r4 == r0) goto L24
            r0 = 3
            if (r4 == r0) goto L1d
            r0 = 4
            if (r4 != r0) goto L17
            boolean r4 = r2.readTagData(r3)
            if (r4 == 0) goto L0
            r3 = 0
            return r3
        L17:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
        L1d:
            boolean r4 = r2.readTagHeader(r3)
            if (r4 != 0) goto L0
            return r1
        L24:
            r2.skipToTagHeader(r3)
            goto L0
        L28:
            boolean r4 = r2.readFlvHeader(r3)
            if (r4 != 0) goto L0
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
            r1 = 1
            r0.state = r1
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.mediaTagTimestampOffsetUs = r1
            r1 = 0
            r0.bytesToNextTagHeader = r1
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            byte[] r0 = r0.data
            r1 = 0
            r2 = 3
            r4.peekFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            int r0 = r0.readUnsignedInt24()
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.FlvExtractor.FLV_TAG
            if (r0 == r2) goto L19
            return r1
        L19:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            byte[] r0 = r0.data
            r2 = 2
            r4.peekFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            int r0 = r0.readUnsignedShort()
            r0 = r0 & 250(0xfa, float:3.5E-43)
            if (r0 == 0) goto L31
            return r1
        L31:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            byte[] r0 = r0.data
            r2 = 4
            r4.peekFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            int r0 = r0.readInt()
            r4.resetPeekPosition()
            r4.advancePeekPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r3.scratch
            byte[] r0 = r0.data
            r4.peekFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.scratch
            r4.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r3.scratch
            int r4 = r4.readInt()
            if (r4 != 0) goto L5f
            r1 = 1
        L5f:
            return r1
    }
}
