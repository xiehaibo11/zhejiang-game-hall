package com.mbridge.msdk.playercommon.exoplayer2.text;

final class SimpleSubtitleOutputBuffer extends com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer {
    private final com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder owner;

    public SimpleSubtitleOutputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder r1) {
            r0 = this;
            r0.<init>()
            r0.owner = r1
            return
    }

    @Override
    public final void release() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder r0 = r1.owner
            r0.releaseOutputBuffer(r1)
            return
    }
}
