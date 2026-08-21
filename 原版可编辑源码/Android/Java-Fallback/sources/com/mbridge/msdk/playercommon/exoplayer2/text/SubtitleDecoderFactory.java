package com.mbridge.msdk.playercommon.exoplayer2.text;

public interface SubtitleDecoderFactory {
    public static final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory DEFAULT = null;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory.DEFAULT = r0
            return
    }

    com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder createDecoder(com.mbridge.msdk.playercommon.exoplayer2.Format r1);

    boolean supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r1);
}
