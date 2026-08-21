package com.mbridge.msdk.playercommon.exoplayer2.metadata;

public final class MetadataRenderer extends com.mbridge.msdk.playercommon.exoplayer2.BaseRenderer implements android.os.Handler.Callback {
    private static final int MAX_PENDING_METADATA_COUNT = 5;
    private static final int MSG_INVOKE_RENDERER = 0;
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer buffer;
    private com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder decoder;
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory decoderFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.FormatHolder formatHolder;
    private boolean inputStreamEnded;
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput output;
    private final android.os.Handler outputHandler;
    private final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata[] pendingMetadata;
    private int pendingMetadataCount;
    private int pendingMetadataIndex;
    private final long[] pendingMetadataTimestamps;

    public interface Output extends com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput {
    }

    public MetadataRenderer(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r2, android.os.Looper r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory r0 = com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory.DEFAULT
            r1.<init>(r2, r3, r0)
            return
    }

    public MetadataRenderer(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r2, android.os.Looper r3, com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory r4) {
            r1 = this;
            r0 = 4
            r1.<init>(r0)
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r2 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput) r2
            r1.output = r2
            if (r3 != 0) goto L10
            r2 = 0
            goto L15
        L10:
            android.os.Handler r2 = new android.os.Handler
            r2.<init>(r3, r1)
        L15:
            r1.outputHandler = r2
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory r2 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory) r2
            r1.decoderFactory = r2
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r2 = new com.mbridge.msdk.playercommon.exoplayer2.FormatHolder
            r2.<init>()
            r1.formatHolder = r2
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r2 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer
            r2.<init>()
            r1.buffer = r2
            r2 = 5
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata[] r3 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata[r2]
            r1.pendingMetadata = r3
            long[] r2 = new long[r2]
            r1.pendingMetadataTimestamps = r2
            return
    }

    private void flushPendingMetadata() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata[] r0 = r2.pendingMetadata
            r1 = 0
            java.util.Arrays.fill(r0, r1)
            r0 = 0
            r2.pendingMetadataIndex = r0
            r2.pendingMetadataCount = r0
            return
    }

    private void invokeRenderer(com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r3) {
            r2 = this;
            android.os.Handler r0 = r2.outputHandler
            if (r0 == 0) goto Ld
            r1 = 0
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            goto L10
        Ld:
            r2.invokeRendererInternal(r3)
        L10:
            return
    }

    private void invokeRendererInternal(com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r0 = r1.output
            r0.onMetadata(r2)
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r2) {
            r1 = this;
            int r0 = r2.what
            if (r0 != 0) goto Ld
            java.lang.Object r2 = r2.obj
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata) r2
            r1.invokeRendererInternal(r2)
            r2 = 1
            return r2
        Ld:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r2.<init>()
            throw r2
    }

    @Override
    public final boolean isEnded() {
            r1 = this;
            boolean r0 = r1.inputStreamEnded
            return r0
    }

    @Override
    public final boolean isReady() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected final void onDisabled() {
            r1 = this;
            r1.flushPendingMetadata()
            r0 = 0
            r1.decoder = r0
            return
    }

    @Override
    protected final void onPositionReset(long r1, boolean r3) {
            r0 = this;
            r0.flushPendingMetadata()
            r1 = 0
            r0.inputStreamEnded = r1
            return
    }

    @Override
    protected final void onStreamChanged(com.mbridge.msdk.playercommon.exoplayer2.Format[] r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory r2 = r0.decoderFactory
            r3 = 0
            r1 = r1[r3]
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder r1 = r2.createDecoder(r1)
            r0.decoder = r1
            return
    }

    @Override
    public final void render(long r5, long r7) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            boolean r7 = r4.inputStreamEnded
            r8 = 5
            r0 = 1
            if (r7 != 0) goto L68
            int r7 = r4.pendingMetadataCount
            if (r7 >= r8) goto L68
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r7 = r4.buffer
            r7.clear()
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r7 = r4.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r1 = r4.buffer
            r2 = 0
            int r7 = r4.readSource(r7, r1, r2)
            r1 = -4
            if (r7 != r1) goto L68
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r7 = r4.buffer
            boolean r7 = r7.isEndOfStream()
            if (r7 == 0) goto L26
            r4.inputStreamEnded = r0
            goto L68
        L26:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r7 = r4.buffer
            boolean r7 = r7.isDecodeOnly()
            if (r7 == 0) goto L2f
            goto L68
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r7 = r4.buffer
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r1 = r4.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r1.format
            long r1 = r1.subsampleOffsetUs
            r7.subsampleOffsetUs = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r7 = r4.buffer
            r7.flip()
            int r7 = r4.pendingMetadataIndex     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            int r1 = r4.pendingMetadataCount     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            int r7 = r7 + r1
            int r7 = r7 % r8
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata[] r1 = r4.pendingMetadata     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder r2 = r4.decoder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r3 = r4.buffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2 = r2.decode(r3)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            r1[r7] = r2     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            long[] r1 = r4.pendingMetadataTimestamps     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r2 = r4.buffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            long r2 = r2.timeUs     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            r1[r7] = r2     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            int r7 = r4.pendingMetadataCount     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            int r7 = r7 + r0
            r4.pendingMetadataCount = r7     // Catch: com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException -> L5e
            goto L68
        L5e:
            r5 = move-exception
            int r6 = r4.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r5 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r5, r6)
            throw r5
        L68:
            int r7 = r4.pendingMetadataCount
            if (r7 <= 0) goto L8d
            long[] r7 = r4.pendingMetadataTimestamps
            int r1 = r4.pendingMetadataIndex
            r2 = r7[r1]
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 > 0) goto L8d
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata[] r5 = r4.pendingMetadata
            r5 = r5[r1]
            r4.invokeRenderer(r5)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata[] r5 = r4.pendingMetadata
            int r6 = r4.pendingMetadataIndex
            r7 = 0
            r5[r6] = r7
            int r6 = r6 + r0
            int r6 = r6 % r8
            r4.pendingMetadataIndex = r6
            int r5 = r4.pendingMetadataCount
            int r5 = r5 - r0
            r4.pendingMetadataCount = r5
        L8d:
            return
    }

    @Override
    public final int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderFactory r0 = r1.decoderFactory
            boolean r0 = r0.supportsFormat(r2)
            if (r0 == 0) goto L15
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2 = r2.drmInitData
            boolean r2 = supportsFormatDrm(r0, r2)
            if (r2 == 0) goto L13
            r2 = 4
            goto L14
        L13:
            r2 = 2
        L14:
            return r2
        L15:
            r2 = 0
            return r2
    }
}
