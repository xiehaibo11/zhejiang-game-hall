package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class DefaultCompositeSequenceableLoaderFactory implements com.mbridge.msdk.playercommon.exoplayer2.source.CompositeSequenceableLoaderFactory {
    public DefaultCompositeSequenceableLoaderFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader createCompositeSequenceableLoader(com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader... r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeSequenceableLoader r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.CompositeSequenceableLoader
            r0.<init>(r2)
            return r0
    }
}
