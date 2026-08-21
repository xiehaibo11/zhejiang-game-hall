package com.mbridge.msdk.playercommon.exoplayer2.source;

public interface SequenceableLoader {

    public interface Callback<T extends com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader> {
        void onContinueLoadingRequested(T r1);
    }

    boolean continueLoading(long r1);

    long getBufferedPositionUs();

    long getNextLoadPositionUs();

    void reevaluateBuffer(long r1);
}
