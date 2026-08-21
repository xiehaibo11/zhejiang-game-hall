package com.mbridge.msdk.playercommon.exoplayer2.mediacodec;

public interface MediaCodecSelector {
    public static final com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector DEFAULT = null;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector.DEFAULT = r0
            return
    }

    com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo getDecoderInfo(java.lang.String r1, boolean r2) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException;

    com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo getPassthroughDecoderInfo() throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException;
}
