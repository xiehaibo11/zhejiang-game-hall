package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DefaultAllocator implements com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator {
    private static final int AVAILABLE_EXTRA_CAPACITY = 100;
    private int allocatedCount;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] availableAllocations;
    private int availableCount;
    private final int individualAllocationSize;
    private final byte[] initialAllocationBlock;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] singleAllocationReleaseHolder;
    private int targetBufferSize;
    private final boolean trimOnReset;

    public DefaultAllocator(boolean r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DefaultAllocator(boolean r6, int r7, int r8) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r1 = 1
            if (r7 <= 0) goto L9
            r2 = r1
            goto La
        L9:
            r2 = r0
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            if (r8 < 0) goto L11
            r2 = r1
            goto L12
        L11:
            r2 = r0
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            r5.trimOnReset = r6
            r5.individualAllocationSize = r7
            r5.availableCount = r8
            int r6 = r8 + 100
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r6 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[r6]
            r5.availableAllocations = r6
            if (r8 <= 0) goto L3b
            int r6 = r8 * r7
            byte[] r6 = new byte[r6]
            r5.initialAllocationBlock = r6
        L29:
            if (r0 >= r8) goto L3e
            int r6 = r0 * r7
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r2 = r5.availableAllocations
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation
            byte[] r4 = r5.initialAllocationBlock
            r3.<init>(r4, r6)
            r2[r0] = r3
            int r0 = r0 + 1
            goto L29
        L3b:
            r6 = 0
            r5.initialAllocationBlock = r6
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r6 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[r1]
            r5.singleAllocationReleaseHolder = r6
            return
    }

    @Override
    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation allocate() {
            r4 = this;
            monitor-enter(r4)
            int r0 = r4.allocatedCount     // Catch: java.lang.Throwable -> L27
            int r0 = r0 + 1
            r4.allocatedCount = r0     // Catch: java.lang.Throwable -> L27
            int r0 = r4.availableCount     // Catch: java.lang.Throwable -> L27
            if (r0 <= 0) goto L1b
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r0 = r4.availableAllocations     // Catch: java.lang.Throwable -> L27
            int r1 = r4.availableCount     // Catch: java.lang.Throwable -> L27
            int r1 = r1 + (-1)
            r4.availableCount = r1     // Catch: java.lang.Throwable -> L27
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r2 = r4.availableAllocations     // Catch: java.lang.Throwable -> L27
            r3 = 0
            r2[r1] = r3     // Catch: java.lang.Throwable -> L27
            goto L25
        L1b:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation     // Catch: java.lang.Throwable -> L27
            int r1 = r4.individualAllocationSize     // Catch: java.lang.Throwable -> L27
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L27
            r2 = 0
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L27
        L25:
            monitor-exit(r4)
            return r0
        L27:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public final int getIndividualAllocationLength() {
            r1 = this;
            int r0 = r1.individualAllocationSize
            return r0
    }

    @Override
    public final synchronized int getTotalBytesAllocated() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.allocatedCount     // Catch: java.lang.Throwable -> L8
            int r1 = r2.individualAllocationSize     // Catch: java.lang.Throwable -> L8
            int r0 = r0 * r1
            monitor-exit(r2)
            return r0
        L8:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized void release(com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r3) {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r0 = r2.singleAllocationReleaseHolder     // Catch: java.lang.Throwable -> Ld
            r1 = 0
            r0[r1] = r3     // Catch: java.lang.Throwable -> Ld
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r3 = r2.singleAllocationReleaseHolder     // Catch: java.lang.Throwable -> Ld
            r2.release(r3)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r2)
            return
        Ld:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void release(com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r7) {
            r6 = this;
            monitor-enter(r6)
            int r0 = r6.availableCount     // Catch: java.lang.Throwable -> L8d
            int r1 = r7.length     // Catch: java.lang.Throwable -> L8d
            int r0 = r0 + r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r1 = r6.availableAllocations     // Catch: java.lang.Throwable -> L8d
            int r1 = r1.length     // Catch: java.lang.Throwable -> L8d
            if (r0 < r1) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r0 = r6.availableAllocations     // Catch: java.lang.Throwable -> L8d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r1 = r6.availableAllocations     // Catch: java.lang.Throwable -> L8d
            int r1 = r1.length     // Catch: java.lang.Throwable -> L8d
            int r1 = r1 * 2
            int r2 = r6.availableCount     // Catch: java.lang.Throwable -> L8d
            int r3 = r7.length     // Catch: java.lang.Throwable -> L8d
            int r2 = r2 + r3
            int r1 = java.lang.Math.max(r1, r2)     // Catch: java.lang.Throwable -> L8d
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)     // Catch: java.lang.Throwable -> L8d
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[]) r0     // Catch: java.lang.Throwable -> L8d
            r6.availableAllocations = r0     // Catch: java.lang.Throwable -> L8d
        L21:
            int r0 = r7.length     // Catch: java.lang.Throwable -> L8d
            r1 = 0
        L23:
            if (r1 >= r0) goto L82
            r2 = r7[r1]     // Catch: java.lang.Throwable -> L8d
            byte[] r3 = r2.data     // Catch: java.lang.Throwable -> L8d
            byte[] r4 = r6.initialAllocationBlock     // Catch: java.lang.Throwable -> L8d
            if (r3 == r4) goto L75
            byte[] r3 = r2.data     // Catch: java.lang.Throwable -> L8d
            int r3 = r3.length     // Catch: java.lang.Throwable -> L8d
            int r4 = r6.individualAllocationSize     // Catch: java.lang.Throwable -> L8d
            if (r3 != r4) goto L35
            goto L75
        L35:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L8d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r0.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r1 = "Unexpected allocation: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            byte[] r1 = r2.data     // Catch: java.lang.Throwable -> L8d
            int r1 = java.lang.System.identityHashCode(r1)     // Catch: java.lang.Throwable -> L8d
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r1 = ", "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            byte[] r1 = r6.initialAllocationBlock     // Catch: java.lang.Throwable -> L8d
            int r1 = java.lang.System.identityHashCode(r1)     // Catch: java.lang.Throwable -> L8d
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r1 = ", "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            byte[] r1 = r2.data     // Catch: java.lang.Throwable -> L8d
            int r1 = r1.length     // Catch: java.lang.Throwable -> L8d
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r1 = ", "
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            int r1 = r6.individualAllocationSize     // Catch: java.lang.Throwable -> L8d
            r0.append(r1)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L8d
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L8d
            throw r7     // Catch: java.lang.Throwable -> L8d
        L75:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r3 = r6.availableAllocations     // Catch: java.lang.Throwable -> L8d
            int r4 = r6.availableCount     // Catch: java.lang.Throwable -> L8d
            int r5 = r4 + 1
            r6.availableCount = r5     // Catch: java.lang.Throwable -> L8d
            r3[r4] = r2     // Catch: java.lang.Throwable -> L8d
            int r1 = r1 + 1
            goto L23
        L82:
            int r0 = r6.allocatedCount     // Catch: java.lang.Throwable -> L8d
            int r7 = r7.length     // Catch: java.lang.Throwable -> L8d
            int r0 = r0 - r7
            r6.allocatedCount = r0     // Catch: java.lang.Throwable -> L8d
            r6.notifyAll()     // Catch: java.lang.Throwable -> L8d
            monitor-exit(r6)
            return
        L8d:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void reset() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.trimOnReset     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L9
            r0 = 0
            r1.setTargetBufferSize(r0)     // Catch: java.lang.Throwable -> Lb
        L9:
            monitor-exit(r1)
            return
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void setTargetBufferSize(int r2) {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.targetBufferSize     // Catch: java.lang.Throwable -> L11
            if (r2 >= r0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            r1.targetBufferSize = r2     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto Lf
            r1.trim()     // Catch: java.lang.Throwable -> L11
        Lf:
            monitor-exit(r1)
            return
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized void trim() {
            r7 = this;
            monitor-enter(r7)
            int r0 = r7.targetBufferSize     // Catch: java.lang.Throwable -> L60
            int r1 = r7.individualAllocationSize     // Catch: java.lang.Throwable -> L60
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r0, r1)     // Catch: java.lang.Throwable -> L60
            int r1 = r7.allocatedCount     // Catch: java.lang.Throwable -> L60
            int r0 = r0 - r1
            r1 = 0
            int r0 = java.lang.Math.max(r1, r0)     // Catch: java.lang.Throwable -> L60
            int r2 = r7.availableCount     // Catch: java.lang.Throwable -> L60
            if (r0 < r2) goto L17
            monitor-exit(r7)
            return
        L17:
            byte[] r2 = r7.initialAllocationBlock     // Catch: java.lang.Throwable -> L60
            if (r2 == 0) goto L54
            int r2 = r7.availableCount     // Catch: java.lang.Throwable -> L60
            int r2 = r2 + (-1)
        L1f:
            if (r1 > r2) goto L4a
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r3 = r7.availableAllocations     // Catch: java.lang.Throwable -> L60
            r3 = r3[r1]     // Catch: java.lang.Throwable -> L60
            byte[] r4 = r3.data     // Catch: java.lang.Throwable -> L60
            byte[] r5 = r7.initialAllocationBlock     // Catch: java.lang.Throwable -> L60
            if (r4 != r5) goto L2e
            int r1 = r1 + 1
            goto L1f
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r4 = r7.availableAllocations     // Catch: java.lang.Throwable -> L60
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L60
            byte[] r5 = r4.data     // Catch: java.lang.Throwable -> L60
            byte[] r6 = r7.initialAllocationBlock     // Catch: java.lang.Throwable -> L60
            if (r5 == r6) goto L3b
            int r2 = r2 + (-1)
            goto L1f
        L3b:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r5 = r7.availableAllocations     // Catch: java.lang.Throwable -> L60
            int r6 = r1 + 1
            r5[r1] = r4     // Catch: java.lang.Throwable -> L60
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r1 = r7.availableAllocations     // Catch: java.lang.Throwable -> L60
            int r4 = r2 + (-1)
            r1[r2] = r3     // Catch: java.lang.Throwable -> L60
            r2 = r4
            r1 = r6
            goto L1f
        L4a:
            int r0 = java.lang.Math.max(r0, r1)     // Catch: java.lang.Throwable -> L60
            int r1 = r7.availableCount     // Catch: java.lang.Throwable -> L60
            if (r0 < r1) goto L54
            monitor-exit(r7)
            return
        L54:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r1 = r7.availableAllocations     // Catch: java.lang.Throwable -> L60
            int r2 = r7.availableCount     // Catch: java.lang.Throwable -> L60
            r3 = 0
            java.util.Arrays.fill(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L60
            r7.availableCount = r0     // Catch: java.lang.Throwable -> L60
            monitor-exit(r7)
            return
        L60:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }
}
