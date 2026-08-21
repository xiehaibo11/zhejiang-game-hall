package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

interface OggSeeker {
    com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap createSeekMap();

    long read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException;

    long startSeek(long r1);
}
