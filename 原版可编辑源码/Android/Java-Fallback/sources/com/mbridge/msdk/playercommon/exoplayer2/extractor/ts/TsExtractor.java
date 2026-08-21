package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class TsExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    private static final long AC3_FORMAT_IDENTIFIER = 0;
    private static final int BUFFER_SIZE = 9400;
    private static final long E_AC3_FORMAT_IDENTIFIER = 0;
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final long HEVC_FORMAT_IDENTIFIER = 0;
    private static final int MAX_PID_PLUS_ONE = 8192;
    public static final int MODE_HLS = 2;
    public static final int MODE_MULTI_PMT = 0;
    public static final int MODE_SINGLE_PMT = 1;
    private static final int SNIFF_TS_PACKET_COUNT = 5;
    private static final int TS_PACKET_SIZE = 188;
    private static final int TS_PAT_PID = 0;
    public static final int TS_STREAM_TYPE_AAC_ADTS = 15;
    public static final int TS_STREAM_TYPE_AAC_LATM = 17;
    public static final int TS_STREAM_TYPE_AC3 = 129;
    public static final int TS_STREAM_TYPE_DTS = 138;
    public static final int TS_STREAM_TYPE_DVBSUBS = 89;
    public static final int TS_STREAM_TYPE_E_AC3 = 135;
    public static final int TS_STREAM_TYPE_H262 = 2;
    public static final int TS_STREAM_TYPE_H264 = 27;
    public static final int TS_STREAM_TYPE_H265 = 36;
    public static final int TS_STREAM_TYPE_HDMV_DTS = 130;
    public static final int TS_STREAM_TYPE_ID3 = 21;
    public static final int TS_STREAM_TYPE_MPA = 3;
    public static final int TS_STREAM_TYPE_MPA_LSF = 4;
    public static final int TS_STREAM_TYPE_SPLICE_INFO = 134;
    private static final int TS_SYNC_BYTE = 71;
    private int bytesSinceLastSync;
    private final android.util.SparseIntArray continuityCounters;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader id3Reader;
    private final int mode;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput output;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.Factory payloadReaderFactory;
    private int remainingPmts;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster> timestampAdjusters;
    private final android.util.SparseBooleanArray trackIds;
    private boolean tracksEnded;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray tsPacketBuffer;
    private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> tsPayloadReaders;


    public @interface Mode {
    }

    private class PatReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionPayloadReader {
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray patScratch;
        final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor this$0;

        public PatReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
                r0 = 4
                byte[] r0 = new byte[r0]
                r2.<init>(r0)
                r1.patScratch = r2
                return
        }

        @Override
        public void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10) {
                r9 = this;
                int r0 = r10.readUnsignedByte()
                if (r0 == 0) goto L7
                return
            L7:
                r0 = 7
                r10.skipBytes(r0)
                int r0 = r10.bytesLeft()
                r1 = 4
                int r0 = r0 / r1
                r2 = 0
                r3 = r2
            L13:
                if (r3 >= r0) goto L55
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r9.patScratch
                r10.readBytes(r4, r1)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r9.patScratch
                r5 = 16
                int r4 = r4.readBits(r5)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r9.patScratch
                r6 = 3
                r5.skipBits(r6)
                r5 = 13
                if (r4 != 0) goto L32
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r9.patScratch
                r4.skipBits(r5)
                goto L52
            L32:
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r9.patScratch
                int r4 = r4.readBits(r5)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r5 = r9.this$0
                android.util.SparseArray r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$000(r5)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionReader r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionReader
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor$PmtReader r7 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor$PmtReader
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r8 = r9.this$0
                r7.<init>(r8, r4)
                r6.<init>(r7)
                r5.put(r4, r6)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r4 = r9.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$108(r4)
            L52:
                int r3 = r3 + 1
                goto L13
            L55:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r10 = r9.this$0
                int r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r10)
                r0 = 2
                if (r10 == r0) goto L67
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r10 = r9.this$0
                android.util.SparseArray r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$000(r10)
                r10.remove(r2)
            L67:
                return
        }

        @Override
        public void init(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3) {
                r0 = this;
                return
        }
    }

    private class PmtReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionPayloadReader {
        private static final int TS_PMT_DESC_AC3 = 106;
        private static final int TS_PMT_DESC_DTS = 123;
        private static final int TS_PMT_DESC_DVBSUBS = 89;
        private static final int TS_PMT_DESC_EAC3 = 122;
        private static final int TS_PMT_DESC_ISO639_LANG = 10;
        private static final int TS_PMT_DESC_REGISTRATION = 5;
        private final int pid;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray pmtScratch;
        final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor this$0;
        private final android.util.SparseIntArray trackIdToPidScratch;
        private final android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> trackIdToReaderScratch;

        public PmtReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2, int r3) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
                r0 = 5
                byte[] r0 = new byte[r0]
                r2.<init>(r0)
                r1.pmtScratch = r2
                android.util.SparseArray r2 = new android.util.SparseArray
                r2.<init>()
                r1.trackIdToReaderScratch = r2
                android.util.SparseIntArray r2 = new android.util.SparseIntArray
                r2.<init>()
                r1.trackIdToPidScratch = r2
                r1.pid = r3
                return
        }

        private com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.EsInfo readEsInfo(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r13, int r14) {
                r12 = this;
                int r0 = r13.getPosition()
                int r14 = r14 + r0
                r1 = 0
                r2 = -1
                r3 = r2
                r2 = r1
            L9:
                int r4 = r13.getPosition()
                if (r4 >= r14) goto L9b
                int r4 = r13.readUnsignedByte()
                int r5 = r13.readUnsignedByte()
                int r6 = r13.getPosition()
                int r6 = r6 + r5
                r5 = 5
                r7 = 89
                r8 = 135(0x87, float:1.89E-43)
                r9 = 129(0x81, float:1.81E-43)
                if (r4 != r5) goto L46
                long r4 = r13.readUnsignedInt()
                long r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$900()
                int r7 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
                if (r7 != 0) goto L32
                goto L4a
            L32:
                long r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$1000()
                int r7 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
                if (r7 != 0) goto L3b
                goto L50
            L3b:
                long r7 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$1100()
                int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
                if (r4 != 0) goto L91
                r3 = 36
                goto L91
            L46:
                r5 = 106(0x6a, float:1.49E-43)
                if (r4 != r5) goto L4c
            L4a:
                r3 = r9
                goto L91
            L4c:
                r5 = 122(0x7a, float:1.71E-43)
                if (r4 != r5) goto L52
            L50:
                r3 = r8
                goto L91
            L52:
                r5 = 123(0x7b, float:1.72E-43)
                if (r4 != r5) goto L59
                r3 = 138(0x8a, float:1.93E-43)
                goto L91
            L59:
                r5 = 10
                r8 = 3
                if (r4 != r5) goto L67
                java.lang.String r1 = r13.readString(r8)
                java.lang.String r1 = r1.trim()
                goto L91
            L67:
                if (r4 != r7) goto L91
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
            L6e:
                int r3 = r13.getPosition()
                if (r3 >= r6) goto L90
                java.lang.String r3 = r13.readString(r8)
                java.lang.String r3 = r3.trim()
                int r4 = r13.readUnsignedByte()
                r5 = 4
                byte[] r9 = new byte[r5]
                r10 = 0
                r13.readBytes(r9, r10, r5)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$DvbSubtitleInfo r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$DvbSubtitleInfo
                r5.<init>(r3, r4, r9)
                r2.add(r5)
                goto L6e
            L90:
                r3 = r7
            L91:
                int r4 = r13.getPosition()
                int r6 = r6 - r4
                r13.skipBytes(r6)
                goto L9
            L9b:
                r13.setPosition(r14)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$EsInfo r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$EsInfo
                byte[] r13 = r13.data
                byte[] r13 = java.util.Arrays.copyOfRange(r13, r0, r14)
                r4.<init>(r3, r1, r2, r13)
                return r4
        }

        @Override
        public void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r17) {
                r16 = this;
                r0 = r16
                r1 = r17
                int r2 = r17.readUnsignedByte()
                r3 = 2
                if (r2 == r3) goto Lc
                return
            Lc:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2 = r0.this$0
                int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r2)
                r4 = 0
                r5 = 1
                if (r2 == r5) goto L46
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2 = r0.this$0
                int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r2)
                if (r2 == r3) goto L46
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2 = r0.this$0
                int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$100(r2)
                if (r2 != r5) goto L27
                goto L46
            L27:
                com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r6 = r0.this$0
                java.util.List r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$300(r6)
                java.lang.Object r6 = r6.get(r4)
                com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r6 = (com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster) r6
                long r6 = r6.getFirstSampleTimestampUs()
                r2.<init>(r6)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r6 = r0.this$0
                java.util.List r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$300(r6)
                r6.add(r2)
                goto L52
            L46:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2 = r0.this$0
                java.util.List r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$300(r2)
                java.lang.Object r2 = r2.get(r4)
                com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2 = (com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster) r2
            L52:
                r1.skipBytes(r3)
                int r6 = r17.readUnsignedShort()
                r7 = 5
                r1.skipBytes(r7)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r0.pmtScratch
                r1.readBytes(r8, r3)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r0.pmtScratch
                r9 = 4
                r8.skipBits(r9)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r0.pmtScratch
                r10 = 12
                int r8 = r8.readBits(r10)
                r1.skipBytes(r8)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r8 = r0.this$0
                int r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r8)
                r11 = 8192(0x2000, float:1.148E-41)
                r12 = 21
                if (r8 != r3) goto Lb0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r8 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$400(r8)
                if (r8 != 0) goto Lb0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$EsInfo r8 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$EsInfo
                byte[] r13 = new byte[r4]
                r14 = 0
                r8.<init>(r12, r14, r14, r13)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r13 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$Factory r14 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$500(r13)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r8 = r14.createPayloadReader(r12, r8)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$402(r13, r8)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r8 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$400(r8)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r13 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r13 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$600(r13)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator r14 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator
                r14.<init>(r6, r12, r11)
                r8.init(r2, r13, r14)
            Lb0:
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r8 = r0.trackIdToReaderScratch
                r8.clear()
                android.util.SparseIntArray r8 = r0.trackIdToPidScratch
                r8.clear()
                int r8 = r17.bytesLeft()
            Lbe:
                if (r8 <= 0) goto L143
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r13 = r0.pmtScratch
                r1.readBytes(r13, r7)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r13 = r0.pmtScratch
                r14 = 8
                int r13 = r13.readBits(r14)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r14 = r0.pmtScratch
                r15 = 3
                r14.skipBits(r15)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r14 = r0.pmtScratch
                r15 = 13
                int r14 = r14.readBits(r15)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r15 = r0.pmtScratch
                r15.skipBits(r9)
                com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r15 = r0.pmtScratch
                int r15 = r15.readBits(r10)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$EsInfo r7 = r0.readEsInfo(r1, r15)
                r9 = 6
                if (r13 != r9) goto Lef
                int r13 = r7.streamType
            Lef:
                int r15 = r15 + 5
                int r8 = r8 - r15
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r9 = r0.this$0
                int r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r9)
                if (r9 != r3) goto Lfc
                r9 = r13
                goto Lfd
            Lfc:
                r9 = r14
            Lfd:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r15 = r0.this$0
                android.util.SparseBooleanArray r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$700(r15)
                boolean r15 = r15.get(r9)
                if (r15 == 0) goto L10a
                goto L13f
            L10a:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r15 = r0.this$0
                int r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r15)
                if (r15 != r3) goto L11b
                if (r13 != r12) goto L11b
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r7 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r7 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$400(r7)
                goto L125
            L11b:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r15 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$Factory r15 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$500(r15)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r7 = r15.createPayloadReader(r13, r7)
            L125:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r13 = r0.this$0
                int r13 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r13)
                if (r13 != r3) goto L135
                android.util.SparseIntArray r13 = r0.trackIdToPidScratch
                int r13 = r13.get(r9, r11)
                if (r14 >= r13) goto L13f
            L135:
                android.util.SparseIntArray r13 = r0.trackIdToPidScratch
                r13.put(r9, r14)
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r13 = r0.trackIdToReaderScratch
                r13.put(r9, r7)
            L13f:
                r7 = 5
                r9 = 4
                goto Lbe
            L143:
                android.util.SparseIntArray r1 = r0.trackIdToPidScratch
                int r1 = r1.size()
                r7 = r4
            L14a:
                if (r7 >= r1) goto L18d
                android.util.SparseIntArray r8 = r0.trackIdToPidScratch
                int r8 = r8.keyAt(r7)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r9 = r0.this$0
                android.util.SparseBooleanArray r9 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$700(r9)
                r9.put(r8, r5)
                android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r9 = r0.trackIdToReaderScratch
                java.lang.Object r9 = r9.valueAt(r7)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r9 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader) r9
                if (r9 == 0) goto L18a
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r10 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$400(r10)
                if (r9 == r10) goto L17b
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r10 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r10 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$600(r10)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator r12 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$TrackIdGenerator
                r12.<init>(r6, r8, r11)
                r9.init(r2, r10, r12)
            L17b:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r8 = r0.this$0
                android.util.SparseArray r8 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$000(r8)
                android.util.SparseIntArray r10 = r0.trackIdToPidScratch
                int r10 = r10.valueAt(r7)
                r8.put(r10, r9)
            L18a:
                int r7 = r7 + 1
                goto L14a
            L18d:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r1)
                if (r1 != r3) goto L1b1
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$800(r1)
                if (r1 != 0) goto L1e6
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$600(r1)
                r1.endTracks()
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$102(r1, r4)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$802(r1, r5)
                goto L1e6
            L1b1:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                android.util.SparseArray r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$000(r1)
                int r2 = r0.pid
                r1.remove(r2)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$200(r1)
                if (r2 != r5) goto L1c5
                goto L1cd
            L1c5:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2 = r0.this$0
                int r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$100(r2)
                int r4 = r2 + (-1)
            L1cd:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$102(r1, r4)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                int r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$100(r1)
                if (r1 != 0) goto L1e6
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$600(r1)
                r1.endTracks()
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.access$802(r1, r5)
            L1e6:
                return
        }

        @Override
        public void init(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3) {
                r0 = this;
                return
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.FACTORY = r0
            java.lang.String r0 = "AC-3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            long r0 = (long) r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.AC3_FORMAT_IDENTIFIER = r0
            java.lang.String r0 = "EAC3"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            long r0 = (long) r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.E_AC3_FORMAT_IDENTIFIER = r0
            java.lang.String r0 = "HEVC"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            long r0 = (long) r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.HEVC_FORMAT_IDENTIFIER = r0
            return
    }

    public TsExtractor() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public TsExtractor(int r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r2)
            return
    }

    public TsExtractor(int r4, int r5) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster
            r1 = 0
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.DefaultTsPayloadReaderFactory r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.DefaultTsPayloadReaderFactory
            r1.<init>(r5)
            r3.<init>(r4, r0, r1)
            return
    }

    public TsExtractor(int r1, com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.Factory r3) {
            r0 = this;
            r0.<init>()
            java.lang.Object r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$Factory r3 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.Factory) r3
            r0.payloadReaderFactory = r3
            r0.mode = r1
            r3 = 1
            if (r1 == r3) goto L1f
            r3 = 2
            if (r1 != r3) goto L14
            goto L1f
        L14:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.timestampAdjusters = r1
            r1.add(r2)
            goto L25
        L1f:
            java.util.List r1 = java.util.Collections.singletonList(r2)
            r0.timestampAdjusters = r1
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2 = 9400(0x24b8, float:1.3172E-41)
            byte[] r2 = new byte[r2]
            r3 = 0
            r1.<init>(r2, r3)
            r0.tsPacketBuffer = r1
            android.util.SparseBooleanArray r1 = new android.util.SparseBooleanArray
            r1.<init>()
            r0.trackIds = r1
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            r0.tsPayloadReaders = r1
            android.util.SparseIntArray r1 = new android.util.SparseIntArray
            r1.<init>()
            r0.continuityCounters = r1
            r0.resetPayloadReaders()
            return
    }

    static android.util.SparseArray access$000(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r0 = r0.tsPayloadReaders
            return r0
    }

    static int access$100(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            int r0 = r0.remainingPmts
            return r0
    }

    static long access$1000() {
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.E_AC3_FORMAT_IDENTIFIER
            return r0
    }

    static int access$102(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0, int r1) {
            r0.remainingPmts = r1
            return r1
    }

    static int access$108(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r2) {
            int r0 = r2.remainingPmts
            int r1 = r0 + 1
            r2.remainingPmts = r1
            return r0
    }

    static long access$1100() {
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.HEVC_FORMAT_IDENTIFIER
            return r0
    }

    static int access$200(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            int r0 = r0.mode
            return r0
    }

    static java.util.List access$300(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster> r0 = r0.timestampAdjusters
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader access$400(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r0 = r0.id3Reader
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader access$402(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r1) {
            r0.id3Reader = r1
            return r1
    }

    static com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.Factory access$500(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$Factory r0 = r0.payloadReaderFactory
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput access$600(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r0 = r0.output
            return r0
    }

    static android.util.SparseBooleanArray access$700(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            android.util.SparseBooleanArray r0 = r0.trackIds
            return r0
    }

    static boolean access$800(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0) {
            boolean r0 = r0.tracksEnded
            return r0
    }

    static boolean access$802(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r0, boolean r1) {
            r0.tracksEnded = r1
            return r1
    }

    static long access$900() {
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor.AC3_FORMAT_IDENTIFIER
            return r0
    }

    private void resetPayloadReaders() {
            r7 = this;
            android.util.SparseBooleanArray r0 = r7.trackIds
            r0.clear()
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r0 = r7.tsPayloadReaders
            r0.clear()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$Factory r0 = r7.payloadReaderFactory
            android.util.SparseArray r0 = r0.createInitialPayloadReaders()
            int r1 = r0.size()
            r2 = 0
            r3 = r2
        L16:
            if (r3 >= r1) goto L28
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r4 = r7.tsPayloadReaders
            int r5 = r0.keyAt(r3)
            java.lang.Object r6 = r0.valueAt(r3)
            r4.put(r5, r6)
            int r3 = r3 + 1
            goto L16
        L28:
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r0 = r7.tsPayloadReaders
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionReader r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.SectionReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor$PatReader r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor$PatReader
            r3.<init>(r7)
            r1.<init>(r3)
            r0.put(r2, r1)
            r0 = 0
            r7.id3Reader = r0
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4) {
            r3 = this;
            r3.output = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.<init>(r1)
            r4.seekMap(r0)
            return
    }

    @Override
    public final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r10, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r11) throws java.io.IOException, java.lang.InterruptedException {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.tsPacketBuffer
            byte[] r11 = r11.data
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            int r0 = r0.getPosition()
            int r0 = 9400 - r0
            r1 = 188(0xbc, float:2.63E-43)
            r2 = 0
            if (r0 >= r1) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            int r0 = r0.bytesLeft()
            if (r0 <= 0) goto L22
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r9.tsPacketBuffer
            int r3 = r3.getPosition()
            java.lang.System.arraycopy(r11, r3, r11, r2, r0)
        L22:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r9.tsPacketBuffer
            r3.reset(r11, r0)
        L27:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            int r0 = r0.bytesLeft()
            if (r0 >= r1) goto L46
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            int r0 = r0.limit()
            int r3 = 9400 - r0
            int r3 = r10.read(r11, r0, r3)
            r4 = -1
            if (r3 != r4) goto L3f
            return r4
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r9.tsPacketBuffer
            int r0 = r0 + r3
            r4.setLimit(r0)
            goto L27
        L46:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.tsPacketBuffer
            int r10 = r10.limit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            int r0 = r0.getPosition()
            r1 = r0
        L53:
            if (r1 >= r10) goto L5e
            r3 = r11[r1]
            r4 = 71
            if (r3 == r4) goto L5e
            int r1 = r1 + 1
            goto L53
        L5e:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11 = r9.tsPacketBuffer
            r11.setPosition(r1)
            int r11 = r1 + 188
            r3 = 2
            if (r11 <= r10) goto L80
            int r10 = r9.bytesSinceLastSync
            int r1 = r1 - r0
            int r10 = r10 + r1
            r9.bytesSinceLastSync = r10
            int r11 = r9.mode
            if (r11 != r3) goto L7f
            r11 = 376(0x178, float:5.27E-43)
            if (r10 > r11) goto L77
            goto L7f
        L77:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r10 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r11 = "Cannot find sync byte. Most likely not a Transport Stream."
            r10.<init>(r11)
            throw r10
        L7f:
            return r2
        L80:
            r9.bytesSinceLastSync = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            int r0 = r0.readInt()
            r1 = 8388608(0x800000, float:1.1754944E-38)
            r1 = r1 & r0
            if (r1 == 0) goto L93
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.tsPacketBuffer
            r10.setPosition(r11)
            return r2
        L93:
            r1 = 4194304(0x400000, float:5.877472E-39)
            r1 = r1 & r0
            r4 = 1
            if (r1 == 0) goto L9b
            r1 = r4
            goto L9c
        L9b:
            r1 = r2
        L9c:
            r5 = 2096896(0x1fff00, float:2.938377E-39)
            r5 = r5 & r0
            int r5 = r5 >> 8
            r6 = r0 & 32
            if (r6 == 0) goto La8
            r6 = r4
            goto La9
        La8:
            r6 = r2
        La9:
            r7 = r0 & 16
            if (r7 == 0) goto Laf
            r7 = r4
            goto Lb0
        Laf:
            r7 = r2
        Lb0:
            if (r7 == 0) goto Lbb
            android.util.SparseArray<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader> r7 = r9.tsPayloadReaders
            java.lang.Object r7 = r7.get(r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader r7 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader) r7
            goto Lbc
        Lbb:
            r7 = 0
        Lbc:
            if (r7 != 0) goto Lc4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.tsPacketBuffer
            r10.setPosition(r11)
            return r2
        Lc4:
            int r8 = r9.mode
            if (r8 == r3) goto Le7
            r0 = r0 & 15
            android.util.SparseIntArray r3 = r9.continuityCounters
            int r8 = r0 + (-1)
            int r3 = r3.get(r5, r8)
            android.util.SparseIntArray r8 = r9.continuityCounters
            r8.put(r5, r0)
            if (r3 != r0) goto Ldf
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.tsPacketBuffer
            r10.setPosition(r11)
            return r2
        Ldf:
            int r3 = r3 + r4
            r3 = r3 & 15
            if (r0 == r3) goto Le7
            r7.seek()
        Le7:
            if (r6 == 0) goto Lf4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            int r0 = r0.readUnsignedByte()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r9.tsPacketBuffer
            r3.skipBytes(r0)
        Lf4:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            r0.setLimit(r11)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            r7.consume(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.tsPacketBuffer
            r0.setLimit(r10)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.tsPacketBuffer
            r10.setPosition(r11)
            return r2
    }

    @Override
    public final void release() {
            r0 = this;
            return
    }

    @Override
    public final void seek(long r1, long r3) {
            r0 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster> r1 = r0.timestampAdjusters
            int r1 = r1.size()
            r2 = 0
            r3 = r2
        L8:
            if (r3 >= r1) goto L18
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster> r4 = r0.timestampAdjusters
            java.lang.Object r4 = r4.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r4 = (com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster) r4
            r4.reset()
            int r3 = r3 + 1
            goto L8
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r0.tsPacketBuffer
            r1.reset()
            android.util.SparseIntArray r1 = r0.continuityCounters
            r1.clear()
            r0.resetPayloadReaders()
            r0.bytesSinceLastSync = r2
            return
    }

    @Override
    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7) throws java.io.IOException, java.lang.InterruptedException {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r6.tsPacketBuffer
            byte[] r0 = r0.data
            r1 = 0
            r2 = 940(0x3ac, float:1.317E-42)
            r7.peekFully(r0, r1, r2)
            r2 = r1
        Lb:
            r3 = 188(0xbc, float:2.63E-43)
            if (r2 >= r3) goto L27
            r3 = r1
        L10:
            r4 = 5
            if (r3 != r4) goto L18
            r7.skipFully(r2)
            r7 = 1
            return r7
        L18:
            int r4 = r3 * 188
            int r4 = r4 + r2
            r4 = r0[r4]
            r5 = 71
            if (r4 == r5) goto L24
            int r2 = r2 + 1
            goto Lb
        L24:
            int r3 = r3 + 1
            goto L10
        L27:
            return r1
    }
}
