package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class EmptySampleStream implements com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream {
    public EmptySampleStream() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean isReady() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void maybeThrowError() throws java.io.IOException {
            r0 = this;
            return
    }

    @Override
    public final int readData(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r1, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r2, boolean r3) {
            r0 = this;
            r1 = 4
            r2.setFlags(r1)
            r1 = -4
            return r1
    }

    @Override
    public final int skipData(long r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
