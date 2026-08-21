package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public abstract class BaseMediaChunk extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk {
    private int[] firstSampleIndices;
    private com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput output;
    public final long seekTimeUs;

    public BaseMediaChunk(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r13, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r14, com.mbridge.msdk.playercommon.exoplayer2.Format r15, int r16, java.lang.Object r17, long r18, long r20, long r22, long r24) {
            r12 = this;
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r8 = r20
            r10 = r24
            r0.<init>(r1, r2, r3, r4, r5, r6, r8, r10)
            r1 = r22
            r0.seekTimeUs = r1
            return
    }

    public final int getFirstSampleIndex(int r2) {
            r1 = this;
            int[] r0 = r1.firstSampleIndices
            r2 = r0[r2]
            return r2
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput getOutput() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput r0 = r1.output
            return r0
    }

    public void init(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput r1) {
            r0 = this;
            r0.output = r1
            int[] r1 = r1.getWriteIndices()
            r0.firstSampleIndices = r1
            return
    }
}
