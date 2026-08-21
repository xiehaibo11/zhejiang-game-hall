package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public interface TransferListener<S> {
    void onBytesTransferred(S r1, int r2);

    void onTransferEnd(S r1);

    void onTransferStart(S r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2);
}
