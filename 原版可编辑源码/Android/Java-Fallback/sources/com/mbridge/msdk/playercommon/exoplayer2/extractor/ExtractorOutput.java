package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public interface ExtractorOutput {
    void endTracks();

    void seekMap(com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r1);

    com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput track(int r1, int r2);
}
