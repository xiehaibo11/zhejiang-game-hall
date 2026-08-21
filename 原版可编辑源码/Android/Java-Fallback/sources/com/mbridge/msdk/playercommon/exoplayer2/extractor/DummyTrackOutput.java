package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public final class DummyTrackOutput implements com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput {
    public DummyTrackOutput() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void format(com.mbridge.msdk.playercommon.exoplayer2.Format r1) {
            r0 = this;
            return
    }

    @Override
    public final int sampleData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1, int r2, boolean r3) throws java.io.IOException, java.lang.InterruptedException {
            r0 = this;
            int r1 = r1.skip(r2)
            r2 = -1
            if (r1 != r2) goto L10
            if (r3 == 0) goto La
            return r2
        La:
            java.io.EOFException r1 = new java.io.EOFException
            r1.<init>()
            throw r1
        L10:
            return r1
    }

    @Override
    public final void sampleData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, int r2) {
            r0 = this;
            r1.skipBytes(r2)
            return
    }

    @Override
    public final void sampleMetadata(long r1, int r3, int r4, int r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData r6) {
            r0 = this;
            return
    }
}
