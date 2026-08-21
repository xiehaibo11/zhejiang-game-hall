package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public interface SectionPayloadReader {
    void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1);

    void init(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3);
}
