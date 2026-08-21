package com.mbridge.msdk.playercommon.exoplayer2.source;

public interface SampleStream {
    boolean isReady();

    void maybeThrowError() throws java.io.IOException;

    int readData(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r1, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r2, boolean r3);

    int skipData(long r1);
}
