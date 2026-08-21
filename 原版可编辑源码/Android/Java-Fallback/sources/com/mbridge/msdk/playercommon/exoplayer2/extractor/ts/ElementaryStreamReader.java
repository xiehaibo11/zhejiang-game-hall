package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public interface ElementaryStreamReader {
    void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r2);

    void packetFinished();

    void packetStarted(long r1, boolean r3);

    void seek();
}
