package com.mbridge.msdk.playercommon.exoplayer2.text;

public abstract class SimpleSubtitleDecoder extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer, com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer, com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException> implements com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder {
    private final java.lang.String name;

    protected SimpleSubtitleDecoder(java.lang.String r3) {
            r2 = this;
            r0 = 2
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer[r0]
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer[r0]
            r2.<init>(r1, r0)
            r2.name = r3
            r3 = 1024(0x400, float:1.435E-42)
            r2.setInitialInputBufferSize(r3)
            return
    }

    @Override
    protected com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer createInputBuffer() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r0 = r1.createInputBuffer()
            return r0
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer createInputBuffer() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer
            r0.<init>()
            return r0
    }

    @Override
    protected com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer createOutputBuffer() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r0 = r1.createOutputBuffer()
            return r0
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer createOutputBuffer() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleOutputBuffer r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleOutputBuffer
            r0.<init>(r1)
            return r0
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException createUnexpectedDecodeException(java.lang.Throwable r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.String r1 = "Unexpected decode error"
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    protected java.lang.Exception createUnexpectedDecodeException(java.lang.Throwable r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r1 = r0.createUnexpectedDecodeException(r1)
            return r1
    }

    protected abstract com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException;

    protected final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException decode(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r9, com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r10, boolean r11) {
            r8 = this;
            java.nio.ByteBuffer r0 = r9.data     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            byte[] r1 = r0.array()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            int r0 = r0.limit()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle r5 = r8.decode(r1, r0, r11)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            long r3 = r9.timeUs     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            long r6 = r9.subsampleOffsetUs     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            r2 = r10
            r2.setContent(r3, r5, r6)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            r10.clearFlag(r9)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L1d
            r9 = 0
            return r9
        L1d:
            r9 = move-exception
            return r9
    }

    @Override
    protected java.lang.Exception decode(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1, com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer r2, boolean r3) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer) r1
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer) r2
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public final java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    @Override
    protected void releaseOutputBuffer(com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer) r1
            r0.releaseOutputBuffer(r1)
            return
    }

    protected final void releaseOutputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r1) {
            r0 = this;
            super.releaseOutputBuffer(r1)
            return
    }

    @Override
    public void setPositionUs(long r1) {
            r0 = this;
            return
    }
}
