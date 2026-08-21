package com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv;

interface EbmlReader {
    void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r1);

    boolean read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException;

    void reset();
}
