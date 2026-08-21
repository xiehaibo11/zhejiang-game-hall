package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

public final class ChunkExtractorWrapper implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput {
    private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper.BindingTrackOutput> bindingTrackOutputs;
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor extractor;
    private boolean extractorInitialized;
    private final com.mbridge.msdk.playercommon.exoplayer2.Format primaryTrackManifestFormat;
    private final int primaryTrackType;
    private com.mbridge.msdk.playercommon.exoplayer2.Format[] sampleFormats;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap seekMap;
    private com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper.TrackOutputProvider trackOutputProvider;

    private static final class BindingTrackOutput implements com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput {
        private final int id;
        private final com.mbridge.msdk.playercommon.exoplayer2.Format manifestFormat;
        public com.mbridge.msdk.playercommon.exoplayer2.Format sampleFormat;
        private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput trackOutput;
        private final int type;

        public BindingTrackOutput(int r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.type = r2
                r0.manifestFormat = r3
                return
        }

        public final void bind(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper.TrackOutputProvider r3) {
                r2 = this;
                if (r3 != 0) goto La
                com.mbridge.msdk.playercommon.exoplayer2.extractor.DummyTrackOutput r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.DummyTrackOutput
                r3.<init>()
                r2.trackOutput = r3
                return
            La:
                int r0 = r2.id
                int r1 = r2.type
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r3 = r3.track(r0, r1)
                r2.trackOutput = r3
                com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r2.sampleFormat
                if (r0 == 0) goto L1b
                r3.format(r0)
            L1b:
                return
        }

        @Override
        public final void format(com.mbridge.msdk.playercommon.exoplayer2.Format r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r1.manifestFormat
                if (r0 == 0) goto L8
                com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r2.copyWithManifestFormatInfo(r0)
            L8:
                r1.sampleFormat = r2
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r1.trackOutput
                r0.format(r2)
                return
        }

        @Override
        public final int sampleData(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r2, int r3, boolean r4) throws java.io.IOException, java.lang.InterruptedException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r1.trackOutput
                int r2 = r0.sampleData(r2, r3, r4)
                return r2
        }

        @Override
        public final void sampleData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, int r3) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r1.trackOutput
                r0.sampleData(r2, r3)
                return
        }

        @Override
        public final void sampleMetadata(long r8, int r10, int r11, int r12, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput.CryptoData r13) {
                r7 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r7.trackOutput
                r1 = r8
                r3 = r10
                r4 = r11
                r5 = r12
                r6 = r13
                r0.sampleMetadata(r1, r3, r4, r5, r6)
                return
        }
    }

    public interface TrackOutputProvider {
        com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput track(int r1, int r2);
    }

    public ChunkExtractorWrapper(com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r1, int r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
            r0 = this;
            r0.<init>()
            r0.extractor = r1
            r0.primaryTrackType = r2
            r0.primaryTrackManifestFormat = r3
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            r0.bindingTrackOutputs = r1
            return
    }

    @Override
    public final void endTracks() {
            r3 = this;
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput> r0 = r3.bindingTrackOutputs
            int r0 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r0]
            r1 = 0
        L9:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput> r2 = r3.bindingTrackOutputs
            int r2 = r2.size()
            if (r1 >= r2) goto L20
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput> r2 = r3.bindingTrackOutputs
            java.lang.Object r2 = r2.valueAt(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput r2 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper.BindingTrackOutput) r2
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r2.sampleFormat
            r0[r1] = r2
            int r1 = r1 + 1
            goto L9
        L20:
            r3.sampleFormats = r0
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format[] getSampleFormats() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r1.sampleFormats
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap getSeekMap() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r1.seekMap
            return r0
    }

    public final void init(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper.TrackOutputProvider r6, long r7) {
            r5 = this;
            r5.trackOutputProvider = r6
            boolean r0 = r5.extractorInitialized
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3 = 0
            if (r0 != 0) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r6 = r5.extractor
            r6.init(r5)
            int r6 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r6 == 0) goto L1b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r6 = r5.extractor
            r6.seek(r3, r7)
        L1b:
            r6 = 1
            r5.extractorInitialized = r6
            goto L40
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r0 = r5.extractor
            int r1 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r1 != 0) goto L26
            r7 = r3
        L26:
            r0.seek(r3, r7)
            r7 = 0
        L2a:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput> r8 = r5.bindingTrackOutputs
            int r8 = r8.size()
            if (r7 >= r8) goto L40
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput> r8 = r5.bindingTrackOutputs
            java.lang.Object r8 = r8.valueAt(r7)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput r8 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper.BindingTrackOutput) r8
            r8.bind(r6)
            int r7 = r7 + 1
            goto L2a
        L40:
            return
    }

    @Override
    public final void seekMap(com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r1) {
            r0 = this;
            r0.seekMap = r1
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput track(int r3, int r4) {
            r2 = this;
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput> r0 = r2.bindingTrackOutputs
            java.lang.Object r0 = r0.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper.BindingTrackOutput) r0
            if (r0 != 0) goto L2b
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r2.sampleFormats
            if (r0 != 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput
            int r1 = r2.primaryTrackType
            if (r4 != r1) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r2.primaryTrackManifestFormat
            goto L1e
        L1d:
            r1 = 0
        L1e:
            r0.<init>(r3, r4, r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$TrackOutputProvider r4 = r2.trackOutputProvider
            r0.bind(r4)
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkExtractorWrapper$BindingTrackOutput> r4 = r2.bindingTrackOutputs
            r4.put(r3, r0)
        L2b:
            return r0
    }
}
