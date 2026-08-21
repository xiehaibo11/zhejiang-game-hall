package com.mbridge.msdk.playercommon.exoplayer2.extractor;

import com.mbridge.msdk.playercommon.exoplayer2.Format;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput;
import com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray;
import java.io.EOFException;
import java.io.IOException;

public final class DummyTrackOutput implements TrackOutput {
    @Override
    public final void format(Format format) {
    }

    @Override
    public final void sampleMetadata(long j, int i, int i2, int i3, TrackOutput.CryptoData cryptoData) {
    }

    @Override
    public final int sampleData(ExtractorInput extractorInput, int i, boolean z) throws InterruptedException, IOException {
        int iSkip = extractorInput.skip(i);
        if (iSkip != -1) {
            return iSkip;
        }
        if (z) {
            return -1;
        }
        throw new EOFException();
    }

    @Override
    public final void sampleData(ParsableByteArray parsableByteArray, int i) {
        parsableByteArray.skipBytes(i);
    }
}
