package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class SpliceInfoSectionReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionPayloadReader {
    private boolean formatDeclared;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster timestampAdjuster;

    public SpliceInfoSectionReader() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r9) {
            r8 = this;
            boolean r0 = r8.formatDeclared
            if (r0 != 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r0 = r8.timestampAdjuster
            long r0 = r0.getTimestampOffsetUs()
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L14
            return
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r8.output
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2 = r8.timestampAdjuster
            long r2 = r2.getTimestampOffsetUs()
            java.lang.String r4 = "application/x-scte35"
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createSampleFormat(r1, r4, r2)
            r0.format(r1)
            r0 = 1
            r8.formatDeclared = r0
        L29:
            int r5 = r9.bytesLeft()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r8.output
            r0.sampleData(r9, r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r8.output
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r9 = r8.timestampAdjuster
            long r2 = r9.getLastAdjustedTimestampUs()
            r4 = 1
            r6 = 0
            r7 = 0
            r1.sampleMetadata(r2, r4, r5, r6, r7)
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r3, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r5) {
            r2 = this;
            r2.timestampAdjuster = r3
            r5.generateNewId()
            int r3 = r5.getTrackId()
            r0 = 4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r4.track(r3, r0)
            r2.output = r3
            java.lang.String r4 = r5.getFormatId()
            r5 = 0
            java.lang.String r0 = "application/x-scte35"
            r1 = -1
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = com.mbridge.msdk.playercommon.exoplayer2.Format.createSampleFormat(r4, r0, r5, r1, r5)
            r3.format(r4)
            return
    }
}
