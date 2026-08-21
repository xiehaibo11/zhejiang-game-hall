package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public interface Extractor {
    public static final int RESULT_CONTINUE = 0;
    public static final int RESULT_END_OF_INPUT = -1;
    public static final int RESULT_SEEK = 1;

    void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1);

    int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r2) throws java.io.IOException, java.lang.InterruptedException;

    void release();

    void seek(long r1, long r3);

    boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException;
}
