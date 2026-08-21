package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public interface Allocator {
    com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation allocate();

    int getIndividualAllocationLength();

    int getTotalBytesAllocated();

    void release(com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r1);

    void release(com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r1);

    void trim();
}
