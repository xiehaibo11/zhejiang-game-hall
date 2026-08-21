package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public interface ChunkSource {
    long getAdjustedSeekPositionUs(long r1, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r3);

    void getNextChunk(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk r1, long r2, long r4, com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder r6);

    int getPreferredQueueSize(long r1, java.util.List<? extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.MediaChunk> r3);

    void maybeThrowError() throws java.io.IOException;

    void onChunkLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r1);

    boolean onChunkLoadError(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r1, boolean r2, java.lang.Exception r3);
}
