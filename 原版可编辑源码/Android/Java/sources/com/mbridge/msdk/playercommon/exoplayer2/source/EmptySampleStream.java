package com.mbridge.msdk.playercommon.exoplayer2.source;

import com.mbridge.msdk.playercommon.exoplayer2.FormatHolder;
import com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer;
import java.io.IOException;

public final class EmptySampleStream implements SampleStream {
    @Override
    public final boolean isReady() {
        return true;
    }

    @Override
    public final void maybeThrowError() throws IOException {
    }

    @Override
    public final int skipData(long j) {
        return 0;
    }

    @Override
    public final int readData(FormatHolder formatHolder, DecoderInputBuffer decoderInputBuffer, boolean z) {
        decoderInputBuffer.setFlags(4);
        return -4;
    }
}
