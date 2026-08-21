package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class SampleQueue implements com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput {
    public static final int ADVANCE_FAILED = -1;
    private static final int INITIAL_SCRATCH_SIZE = 32;
    private final int allocationLength;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator allocator;
    private com.mbridge.msdk.playercommon.exoplayer2.Format downstreamFormat;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue.SampleExtrasHolder extrasHolder;
    private com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.AllocationNode firstAllocationNode;
    private com.mbridge.msdk.playercommon.exoplayer2.Format lastUnadjustedFormat;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue metadataQueue;
    private boolean pendingFormatAdjustment;
    private boolean pendingSplice;
    private com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.AllocationNode readAllocationNode;
    private long sampleOffsetUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray scratch;
    private long totalBytesWritten;
    private com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.UpstreamFormatChangedListener upstreamFormatChangeListener;
    private com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.AllocationNode writeAllocationNode;

    private static final class AllocationNode {
        public com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation allocation;
        public final long endPosition;
        public com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.AllocationNode next;
        public final long startPosition;
        public boolean wasInitialized;

        public AllocationNode(long r3, int r5) {
                r2 = this;
                r2.<init>()
                r2.startPosition = r3
                long r0 = (long) r5
                long r3 = r3 + r0
                r2.endPosition = r3
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.AllocationNode clear() {
                r2 = this;
                r0 = 0
                r2.allocation = r0
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r2.next
                r2.next = r0
                return r1
        }

        public final void initialize(com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r1, com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.AllocationNode r2) {
                r0 = this;
                r0.allocation = r1
                r0.next = r2
                r1 = 1
                r0.wasInitialized = r1
                return
        }

        public final int translateOffset(long r3) {
                r2 = this;
                long r0 = r2.startPosition
                long r3 = r3 - r0
                int r3 = (int) r3
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r4 = r2.allocation
                int r4 = r4.offset
                int r3 = r3 + r4
                return r3
        }
    }

    public interface UpstreamFormatChangedListener {
        void onUpstreamFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r1);
    }

    public SampleQueue(com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r4) {
            r3 = this;
            r3.<init>()
            r3.allocator = r4
            int r4 = r4.getIndividualAllocationLength()
            r3.allocationLength = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue
            r4.<init>()
            r3.metadataQueue = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue$SampleExtrasHolder r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue$SampleExtrasHolder
            r4.<init>()
            r3.extrasHolder = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0 = 32
            r4.<init>(r0)
            r3.scratch = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode
            int r0 = r3.allocationLength
            r1 = 0
            r4.<init>(r1, r0)
            r3.firstAllocationNode = r4
            r3.readAllocationNode = r4
            r3.writeAllocationNode = r4
            return
    }

    private void advanceReadTo(long r3) {
            r2 = this;
        L0:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r2.readAllocationNode
            long r0 = r0.endPosition
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r2.readAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r0.next
            r2.readAllocationNode = r0
            goto L0
        Lf:
            return
    }

    private void clearAllocationNodes(com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.AllocationNode r6) {
            r5 = this;
            boolean r0 = r6.wasInitialized
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r5.writeAllocationNode
            boolean r0 = r0.wasInitialized
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r5.writeAllocationNode
            long r1 = r1.startPosition
            long r3 = r6.startPosition
            long r1 = r1 - r3
            int r1 = (int) r1
            int r2 = r5.allocationLength
            int r1 = r1 / r2
            int r0 = r0 + r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation[r0]
            r2 = 0
        L18:
            if (r2 >= r0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r3 = r6.allocation
            r1[r2] = r3
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r6 = r6.clear()
            int r2 = r2 + 1
            goto L18
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r6 = r5.allocator
            r6.release(r1)
            return
    }

    private void discardDownstreamTo(long r3) {
            r2 = this;
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r2.firstAllocationNode
            long r0 = r0.endPosition
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r0 = r2.allocator
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r2.firstAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r1 = r1.allocation
            r0.release(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r2.firstAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r0.clear()
            r2.firstAllocationNode = r0
            goto L7
        L21:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r3 = r2.readAllocationNode
            long r3 = r3.startPosition
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r2.firstAllocationNode
            long r0 = r0.startPosition
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 >= 0) goto L31
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r3 = r2.firstAllocationNode
            r2.readAllocationNode = r3
        L31:
            return
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.Format getAdjustedSampleFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r4, long r5) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L1c
            long r0 = r4.subsampleOffsetUs
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1c
            long r0 = r4.subsampleOffsetUs
            long r0 = r0 + r5
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r4.copyWithSubsampleOffsetUs(r0)
        L1c:
            return r4
    }

    private void postAppend(int r5) {
            r4 = this;
            long r0 = r4.totalBytesWritten
            long r2 = (long) r5
            long r0 = r0 + r2
            r4.totalBytesWritten = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r5 = r4.writeAllocationNode
            long r2 = r5.endPosition
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r5 = r4.writeAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r5 = r5.next
            r4.writeAllocationNode = r5
        L14:
            return
    }

    private int preAppend(int r7) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r6.writeAllocationNode
            boolean r0 = r0.wasInitialized
            if (r0 != 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r6.writeAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r1 = r6.allocator
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r1 = r1.allocate()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r3 = r6.writeAllocationNode
            long r3 = r3.endPosition
            int r5 = r6.allocationLength
            r2.<init>(r3, r5)
            r0.initialize(r1, r2)
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r6.writeAllocationNode
            long r0 = r0.endPosition
            long r2 = r6.totalBytesWritten
            long r0 = r0 - r2
            int r0 = (int) r0
            int r7 = java.lang.Math.min(r7, r0)
            return r7
    }

    private void readData(long r4, java.nio.ByteBuffer r6, int r7) {
            r3 = this;
            r3.advanceReadTo(r4)
        L3:
            if (r7 <= 0) goto L30
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r3.readAllocationNode
            long r0 = r0.endPosition
            long r0 = r0 - r4
            int r0 = (int) r0
            int r0 = java.lang.Math.min(r7, r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r3.readAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r1 = r1.allocation
            byte[] r1 = r1.data
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r2 = r3.readAllocationNode
            int r2 = r2.translateOffset(r4)
            r6.put(r1, r2, r0)
            int r7 = r7 - r0
            long r0 = (long) r0
            long r4 = r4 + r0
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r3.readAllocationNode
            long r0 = r0.endPosition
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto L3
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r3.readAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r0.next
            r3.readAllocationNode = r0
            goto L3
        L30:
            return
    }

    private void readData(long r6, byte[] r8, int r9) {
            r5 = this;
            r5.advanceReadTo(r6)
            r0 = r9
        L4:
            if (r0 <= 0) goto L33
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r5.readAllocationNode
            long r1 = r1.endPosition
            long r1 = r1 - r6
            int r1 = (int) r1
            int r1 = java.lang.Math.min(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r2 = r5.readAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r2 = r2.allocation
            byte[] r2 = r2.data
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r3 = r5.readAllocationNode
            int r3 = r3.translateOffset(r6)
            int r4 = r9 - r0
            java.lang.System.arraycopy(r2, r3, r8, r4, r1)
            int r0 = r0 - r1
            long r1 = (long) r1
            long r6 = r6 + r1
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r5.readAllocationNode
            long r1 = r1.endPosition
            int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r1 != 0) goto L4
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r5.readAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r1.next
            r5.readAllocationNode = r1
            goto L4
        L33:
            return
    }

    private void readEncryptionData(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r19, com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue.SampleExtrasHolder r20) {
            r18 = this;
            r0 = r18
            r1 = r19
            r2 = r20
            long r3 = r2.offset
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            r6 = 1
            r5.reset(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            byte[] r5 = r5.data
            r0.readData(r3, r5, r6)
            r7 = 1
            long r3 = r3 + r7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            byte[] r5 = r5.data
            r7 = 0
            r5 = r5[r7]
            r8 = r5 & 128(0x80, float:1.8E-43)
            if (r8 == 0) goto L25
            r8 = r6
            goto L26
        L25:
            r8 = r7
        L26:
            r5 = r5 & 127(0x7f, float:1.78E-43)
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r9 = r1.cryptoInfo
            byte[] r9 = r9.iv
            if (r9 != 0) goto L36
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r9 = r1.cryptoInfo
            r10 = 16
            byte[] r10 = new byte[r10]
            r9.iv = r10
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r9 = r1.cryptoInfo
            byte[] r9 = r9.iv
            r0.readData(r3, r9, r5)
            long r9 = (long) r5
            long r3 = r3 + r9
            if (r8 == 0) goto L57
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            r6 = 2
            r5.reset(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            byte[] r5 = r5.data
            r0.readData(r3, r5, r6)
            r5 = 2
            long r3 = r3 + r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            int r6 = r5.readUnsignedShort()
        L57:
            r10 = r6
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r5 = r1.cryptoInfo
            int[] r5 = r5.numBytesOfClearData
            if (r5 == 0) goto L61
            int r6 = r5.length
            if (r6 >= r10) goto L63
        L61:
            int[] r5 = new int[r10]
        L63:
            r11 = r5
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r5 = r1.cryptoInfo
            int[] r5 = r5.numBytesOfEncryptedData
            if (r5 == 0) goto L6d
            int r6 = r5.length
            if (r6 >= r10) goto L6f
        L6d:
            int[] r5 = new int[r10]
        L6f:
            r12 = r5
            if (r8 == 0) goto L9c
            int r5 = r10 * 6
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r0.scratch
            r6.reset(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r0.scratch
            byte[] r6 = r6.data
            r0.readData(r3, r6, r5)
            long r5 = (long) r5
            long r3 = r3 + r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            r5.setPosition(r7)
        L87:
            if (r7 >= r10) goto La8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            int r5 = r5.readUnsignedShort()
            r11[r7] = r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r0.scratch
            int r5 = r5.readUnsignedIntToInt()
            r12[r7] = r5
            int r7 = r7 + 1
            goto L87
        L9c:
            r11[r7] = r7
            int r5 = r2.size
            long r8 = r2.offset
            long r8 = r3 - r8
            int r6 = (int) r8
            int r5 = r5 - r6
            r12[r7] = r5
        La8:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput$CryptoData r5 = r2.cryptoData
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r9 = r1.cryptoInfo
            byte[] r13 = r5.encryptionKey
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r1 = r1.cryptoInfo
            byte[] r14 = r1.iv
            int r15 = r5.cryptoMode
            int r1 = r5.encryptedBlocks
            int r5 = r5.clearBlocks
            r16 = r1
            r17 = r5
            r9.set(r10, r11, r12, r13, r14, r15, r16, r17)
            long r5 = r2.offset
            long r3 = r3 - r5
            int r1 = (int) r3
            long r3 = r2.offset
            long r5 = (long) r1
            long r3 = r3 + r5
            r2.offset = r3
            int r3 = r2.size
            int r3 = r3 - r1
            r2.size = r3
            return
    }

    public final int advanceTo(long r2, boolean r4, boolean r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            int r2 = r0.advanceTo(r2, r4, r5)
            return r2
    }

    public final int advanceToEnd() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            int r0 = r0.advanceToEnd()
            return r0
    }

    public final void discardTo(long r2, boolean r4, boolean r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            long r2 = r0.discardTo(r2, r4, r5)
            r1.discardDownstreamTo(r2)
            return
    }

    public final void discardToEnd() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r2.metadataQueue
            long r0 = r0.discardToEnd()
            r2.discardDownstreamTo(r0)
            return
    }

    public final void discardToRead() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r2.metadataQueue
            long r0 = r0.discardToRead()
            r2.discardDownstreamTo(r0)
            return
    }

    public final void discardUpstreamSamples(int r6) {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r5.metadataQueue
            long r0 = r0.discardUpstreamSamples(r6)
            r5.totalBytesWritten = r0
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 == 0) goto L4b
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r6 = r5.firstAllocationNode
            long r2 = r6.startPosition
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 != 0) goto L17
            goto L4b
        L17:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r6 = r5.firstAllocationNode
        L19:
            long r0 = r5.totalBytesWritten
            long r2 = r6.endPosition
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L24
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r6 = r6.next
            goto L19
        L24:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r6.next
            r5.clearAllocationNodes(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode
            long r2 = r6.endPosition
            int r4 = r5.allocationLength
            r1.<init>(r2, r4)
            r6.next = r1
            long r1 = r5.totalBytesWritten
            long r3 = r6.endPosition
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L3f
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r6.next
            goto L40
        L3f:
            r1 = r6
        L40:
            r5.writeAllocationNode = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r5.readAllocationNode
            if (r1 != r0) goto L5f
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r6 = r6.next
            r5.readAllocationNode = r6
            goto L5f
        L4b:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r6 = r5.firstAllocationNode
            r5.clearAllocationNodes(r6)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode
            long r0 = r5.totalBytesWritten
            int r2 = r5.allocationLength
            r6.<init>(r0, r2)
            r5.firstAllocationNode = r6
            r5.readAllocationNode = r6
            r5.writeAllocationNode = r6
        L5f:
            return
    }

    @Override
    public final void format(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
            r2 = this;
            long r0 = r2.sampleOffsetUs
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = getAdjustedSampleFormat(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r1 = r2.metadataQueue
            boolean r1 = r1.format(r0)
            r2.lastUnadjustedFormat = r3
            r3 = 0
            r2.pendingFormatAdjustment = r3
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$UpstreamFormatChangedListener r3 = r2.upstreamFormatChangeListener
            if (r3 == 0) goto L1a
            if (r1 == 0) goto L1a
            r3.onUpstreamFormatChanged(r0)
        L1a:
            return
    }

    public final int getFirstIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            int r0 = r0.getFirstIndex()
            return r0
    }

    public final long getFirstTimestampUs() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r2.metadataQueue
            long r0 = r0.getFirstTimestampUs()
            return r0
    }

    public final long getLargestQueuedTimestampUs() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r2.metadataQueue
            long r0 = r0.getLargestQueuedTimestampUs()
            return r0
    }

    public final int getReadIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            int r0 = r0.getReadIndex()
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format getUpstreamFormat() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r0.getUpstreamFormat()
            return r0
    }

    public final int getWriteIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            int r0 = r0.getWriteIndex()
            return r0
    }

    public final boolean hasNextSample() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            boolean r0 = r0.hasNextSample()
            return r0
    }

    public final int peekSourceId() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            int r0 = r0.peekSourceId()
            return r0
    }

    public final int read(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r8, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r9, boolean r10, boolean r11, long r12) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r7.metadataQueue
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r7.downstreamFormat
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue$SampleExtrasHolder r6 = r7.extrasHolder
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            int r10 = r0.read(r1, r2, r3, r4, r5, r6)
            r11 = -5
            if (r10 == r11) goto L4f
            r8 = -4
            if (r10 == r8) goto L1e
            r8 = -3
            if (r10 != r8) goto L18
            return r8
        L18:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            r8.<init>()
            throw r8
        L1e:
            boolean r10 = r9.isEndOfStream()
            if (r10 != 0) goto L4e
            long r10 = r9.timeUs
            int r10 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r10 >= 0) goto L2f
            r10 = -2147483648(0xffffffff80000000, float:-0.0)
            r9.addFlag(r10)
        L2f:
            boolean r10 = r9.isEncrypted()
            if (r10 == 0) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue$SampleExtrasHolder r10 = r7.extrasHolder
            r7.readEncryptionData(r9, r10)
        L3a:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue$SampleExtrasHolder r10 = r7.extrasHolder
            int r10 = r10.size
            r9.ensureSpaceForWrite(r10)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue$SampleExtrasHolder r10 = r7.extrasHolder
            long r10 = r10.offset
            java.nio.ByteBuffer r9 = r9.data
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue$SampleExtrasHolder r12 = r7.extrasHolder
            int r12 = r12.size
            r7.readData(r10, r9, r12)
        L4e:
            return r8
        L4f:
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = r8.format
            r7.downstreamFormat = r8
            return r11
    }

    public final void reset() {
            r1 = this;
            r0 = 0
            r1.reset(r0)
            return
    }

    public final void reset(boolean r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r3.metadataQueue
            r0.reset(r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r4 = r3.firstAllocationNode
            r3.clearAllocationNodes(r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode
            int r0 = r3.allocationLength
            r1 = 0
            r4.<init>(r1, r0)
            r3.firstAllocationNode = r4
            r3.readAllocationNode = r4
            r3.writeAllocationNode = r4
            r3.totalBytesWritten = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r4 = r3.allocator
            r4.trim()
            return
    }

    public final void rewind() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            r0.rewind()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r1.firstAllocationNode
            r1.readAllocationNode = r0
            return
    }

    @Override
    public final int sampleData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5, int r6, boolean r7) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            int r6 = r4.preAppend(r6)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r0 = r4.writeAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r0 = r0.allocation
            byte[] r0 = r0.data
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r4.writeAllocationNode
            long r2 = r4.totalBytesWritten
            int r1 = r1.translateOffset(r2)
            int r5 = r5.read(r0, r1, r6)
            r6 = -1
            if (r5 != r6) goto L22
            if (r7 == 0) goto L1c
            return r6
        L1c:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L22:
            r4.postAppend(r5)
            return r5
    }

    @Override
    public final void sampleData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6, int r7) {
            r5 = this;
        L0:
            if (r7 <= 0) goto L1c
            int r0 = r5.preAppend(r7)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r1 = r5.writeAllocationNode
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocation r1 = r1.allocation
            byte[] r1 = r1.data
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue$AllocationNode r2 = r5.writeAllocationNode
            long r3 = r5.totalBytesWritten
            int r2 = r2.translateOffset(r3)
            r6.readBytes(r1, r2, r0)
            int r7 = r7 - r0
            r5.postAppend(r0)
            goto L0
        L1c:
            return
    }

    @Override
    public final void sampleMetadata(long r13, int r15, int r16, int r17, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData r18) {
            r12 = this;
            r0 = r12
            r1 = r13
            boolean r3 = r0.pendingFormatAdjustment
            if (r3 == 0) goto Lb
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r0.lastUnadjustedFormat
            r12.format(r3)
        Lb:
            boolean r3 = r0.pendingSplice
            if (r3 == 0) goto L21
            r3 = r15 & 1
            if (r3 == 0) goto L20
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r3 = r0.metadataQueue
            boolean r3 = r3.attemptSplice(r13)
            if (r3 != 0) goto L1c
            goto L20
        L1c:
            r3 = 0
            r0.pendingSplice = r3
            goto L21
        L20:
            return
        L21:
            long r3 = r0.sampleOffsetUs
            long r5 = r1 + r3
            long r1 = r0.totalBytesWritten
            r3 = r16
            long r7 = (long) r3
            long r1 = r1 - r7
            r4 = r17
            long r7 = (long) r4
            long r8 = r1 - r7
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r4 = r0.metadataQueue
            r7 = r15
            r10 = r16
            r11 = r18
            r4.commitSample(r5, r7, r8, r10, r11)
            return
    }

    public final boolean setReadPosition(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            boolean r2 = r0.setReadPosition(r2)
            return r2
    }

    public final void setSampleOffsetUs(long r3) {
            r2 = this;
            long r0 = r2.sampleOffsetUs
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto Lb
            r2.sampleOffsetUs = r3
            r3 = 1
            r2.pendingFormatAdjustment = r3
        Lb:
            return
    }

    public final void setUpstreamFormatChangeListener(com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.UpstreamFormatChangedListener r1) {
            r0 = this;
            r0.upstreamFormatChangeListener = r1
            return
    }

    public final void sourceId(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleMetadataQueue r0 = r1.metadataQueue
            r0.sourceId(r2)
            return
    }

    public final void splice() {
            r1 = this;
            r0 = 1
            r1.pendingSplice = r0
            return
    }
}
