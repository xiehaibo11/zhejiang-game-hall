package com.mbridge.msdk.playercommon.exoplayer2.metadata;

public interface MetadataDecoderFactory {
    public static final com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory DEFAULT = null;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory.DEFAULT = r0
            return
    }

    com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder createDecoder(com.mbridge.msdk.playercommon.exoplayer2.Format r1);

    boolean supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r1);
}
