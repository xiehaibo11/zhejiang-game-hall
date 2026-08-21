package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public interface TsPayloadReader {

    public static final class DvbSubtitleInfo {
        public final byte[] initializationData;
        public final java.lang.String language;
        public final int type;

        public DvbSubtitleInfo(java.lang.String r1, int r2, byte[] r3) {
                r0 = this;
                r0.<init>()
                r0.language = r1
                r0.type = r2
                r0.initializationData = r3
                return
        }
    }

    public static final class EsInfo {
        public final byte[] descriptorBytes;
        public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.DvbSubtitleInfo> dvbSubtitleInfos;
        public final java.lang.String language;
        public final int streamType;

        public EsInfo(int r1, java.lang.String r2, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.DvbSubtitleInfo> r3, byte[] r4) {
                r0 = this;
                r0.<init>()
                r0.streamType = r1
                r0.language = r2
                if (r3 != 0) goto Le
                java.util.List r1 = java.util.Collections.emptyList()
                goto L12
            Le:
                java.util.List r1 = java.util.Collections.unmodifiableList(r3)
            L12:
                r0.dvbSubtitleInfos = r1
                r0.descriptorBytes = r4
                return
        }
    }

    public interface Factory {
        android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> createInitialPayloadReaders();

        com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader createPayloadReader(int r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.EsInfo r2);
    }

    public static final class TrackIdGenerator {
        private static final int ID_UNSET = Integer.MIN_VALUE;
        private final int firstTrackId;
        private java.lang.String formatId;
        private final java.lang.String formatIdPrefix;
        private int trackId;
        private final int trackIdIncrement;

        public TrackIdGenerator(int r2, int r3) {
                r1 = this;
                r0 = -2147483648(0xffffffff80000000, float:-0.0)
                r1.<init>(r0, r2, r3)
                return
        }

        public TrackIdGenerator(int r3, int r4, int r5) {
                r2 = this;
                r2.<init>()
                r0 = -2147483648(0xffffffff80000000, float:-0.0)
                if (r3 == r0) goto L19
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r3 = "/"
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                goto L1b
            L19:
                java.lang.String r3 = ""
            L1b:
                r2.formatIdPrefix = r3
                r2.firstTrackId = r4
                r2.trackIdIncrement = r5
                r2.trackId = r0
                return
        }

        private void maybeThrowUninitializedError() {
                r2 = this;
                int r0 = r2.trackId
                r1 = -2147483648(0xffffffff80000000, float:-0.0)
                if (r0 == r1) goto L7
                return
            L7:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "generateNewId() must be called before retrieving ids."
                r0.<init>(r1)
                throw r0
        }

        public final void generateNewId() {
                r2 = this;
                int r0 = r2.trackId
                r1 = -2147483648(0xffffffff80000000, float:-0.0)
                if (r0 != r1) goto L9
                int r0 = r2.firstTrackId
                goto Lc
            L9:
                int r1 = r2.trackIdIncrement
                int r0 = r0 + r1
            Lc:
                r2.trackId = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r2.formatIdPrefix
                r0.append(r1)
                int r1 = r2.trackId
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r2.formatId = r0
                return
        }

        public final java.lang.String getFormatId() {
                r1 = this;
                r1.maybeThrowUninitializedError()
                java.lang.String r0 = r1.formatId
                return r0
        }

        public final int getTrackId() {
                r1 = this;
                r1.maybeThrowUninitializedError()
                int r0 = r1.trackId
                return r0
        }
    }

    void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, boolean r2) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException;

    void init(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3);

    void seek();
}
