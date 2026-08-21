package com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv;

final class DefaultEbmlReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReader {
    private static final int ELEMENT_STATE_READ_CONTENT = 2;
    private static final int ELEMENT_STATE_READ_CONTENT_SIZE = 1;
    private static final int ELEMENT_STATE_READ_ID = 0;
    private static final int MAX_ID_BYTES = 4;
    private static final int MAX_INTEGER_ELEMENT_SIZE_BYTES = 8;
    private static final int MAX_LENGTH_BYTES = 8;
    private static final int VALID_FLOAT32_ELEMENT_SIZE_BYTES = 4;
    private static final int VALID_FLOAT64_ELEMENT_SIZE_BYTES = 8;
    private long elementContentSize;
    private int elementId;
    private int elementState;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.MasterElement> masterElementsStack;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput output;
    private final byte[] scratch;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader varintReader;

    static class 1 {
    }

    private @interface ElementState {
    }

    private static final class MasterElement {
        private final long elementEndPosition;
        private final int elementId;

        private MasterElement(int r1, long r2) {
                r0 = this;
                r0.<init>()
                r0.elementId = r1
                r0.elementEndPosition = r2
                return
        }

        MasterElement(int r1, long r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.1 r4) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static long access$000(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.MasterElement r2) {
                long r0 = r2.elementEndPosition
                return r0
        }

        static int access$100(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.MasterElement r0) {
                int r0 = r0.elementId
                return r0
        }
    }

    public DefaultEbmlReader() {
            r1 = this;
            r1.<init>()
            r0 = 8
            byte[] r0 = new byte[r0]
            r1.scratch = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r1.masterElementsStack = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader
            r0.<init>()
            r1.varintReader = r0
            return
    }

    private long maybeResyncToNextLevel1Element(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            r5.resetPeekPosition()
        L3:
            byte[] r0 = r4.scratch
            r1 = 4
            r2 = 0
            r5.peekFully(r0, r2, r1)
            byte[] r0 = r4.scratch
            r0 = r0[r2]
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader.parseUnsignedVarintLength(r0)
            r3 = -1
            if (r0 == r3) goto L2b
            if (r0 > r1) goto L2b
            byte[] r1 = r4.scratch
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader.assembleVarint(r1, r0, r2)
            int r1 = (int) r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r2 = r4.output
            boolean r2 = r2.isLevel1Element(r1)
            if (r2 == 0) goto L2b
            r5.skipFully(r0)
            long r0 = (long) r1
            return r0
        L2b:
            r0 = 1
            r5.skipFully(r0)
            goto L3
    }

    private double readFloat(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3, int r4) throws java.io.IOException, java.lang.InterruptedException {
            r2 = this;
            long r0 = r2.readInteger(r3, r4)
            r3 = 4
            if (r4 != r3) goto Le
            int r3 = (int) r0
            float r3 = java.lang.Float.intBitsToFloat(r3)
            double r3 = (double) r3
            goto L12
        Le:
            double r3 = java.lang.Double.longBitsToDouble(r0)
        L12:
            return r3
    }

    private long readInteger(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7, int r8) throws java.io.IOException, java.lang.InterruptedException {
            r6 = this;
            byte[] r0 = r6.scratch
            r1 = 0
            r7.readFully(r0, r1, r8)
            r2 = 0
        L8:
            if (r1 >= r8) goto L18
            r7 = 8
            long r2 = r2 << r7
            byte[] r7 = r6.scratch
            r7 = r7[r1]
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r4 = (long) r7
            long r2 = r2 | r4
            int r1 = r1 + 1
            goto L8
        L18:
            return r2
    }

    private java.lang.String readString(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3, int r4) throws java.io.IOException, java.lang.InterruptedException {
            r2 = this;
            if (r4 != 0) goto L5
            java.lang.String r3 = ""
            return r3
        L5:
            byte[] r0 = new byte[r4]
            r1 = 0
            r3.readFully(r0, r1, r4)
        Lb:
            if (r4 <= 0) goto L16
            int r3 = r4 + (-1)
            r3 = r0[r3]
            if (r3 != 0) goto L16
            int r4 = r4 + (-1)
            goto Lb
        L16:
            java.lang.String r3 = new java.lang.String
            r3.<init>(r0, r1, r4)
            return r3
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r1) {
            r0 = this;
            r0.output = r1
            return
    }

    @Override
    public final boolean read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r10) throws java.io.IOException, java.lang.InterruptedException {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r0 = r9.output
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L8
            r0 = r2
            goto L9
        L8:
            r0 = r1
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
        Lc:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement> r0 = r9.masterElementsStack
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L3a
            long r3 = r10.getPosition()
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement> r0 = r9.masterElementsStack
            java.lang.Object r0 = r0.peek()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.MasterElement) r0
            long r5 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.MasterElement.access$000(r0)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 < 0) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r10 = r9.output
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement> r0 = r9.masterElementsStack
            java.lang.Object r0 = r0.pop()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement r0 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.MasterElement) r0
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader.MasterElement.access$100(r0)
            r10.endMasterElement(r0)
            return r2
        L3a:
            int r0 = r9.elementState
            r3 = 4
            if (r0 != 0) goto L5b
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r0 = r9.varintReader
            long r4 = r0.readUnsignedVarint(r10, r2, r1, r3)
            r6 = -2
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L4f
            long r4 = r9.maybeResyncToNextLevel1Element(r10)
        L4f:
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L56
            return r1
        L56:
            int r0 = (int) r4
            r9.elementId = r0
            r9.elementState = r2
        L5b:
            int r0 = r9.elementState
            r4 = 2
            if (r0 != r2) goto L6c
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r0 = r9.varintReader
            r5 = 8
            long r5 = r0.readUnsignedVarint(r10, r1, r2, r5)
            r9.elementContentSize = r5
            r9.elementState = r4
        L6c:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r0 = r9.output
            int r5 = r9.elementId
            int r0 = r0.getElementType(r5)
            if (r0 == 0) goto L15e
            if (r0 == r2) goto L13e
            r5 = 8
            if (r0 == r4) goto L110
            r4 = 3
            if (r0 == r4) goto Ldf
            if (r0 == r3) goto Ld2
            r3 = 5
            if (r0 != r3) goto Lbb
            long r3 = r9.elementContentSize
            r7 = 4
            int r0 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r0 == 0) goto Laa
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto L91
            goto Laa
        L91:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r10 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid float size: "
            r0.append(r1)
            long r1 = r9.elementContentSize
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        Laa:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r0 = r9.output
            int r3 = r9.elementId
            long r4 = r9.elementContentSize
            int r4 = (int) r4
            double r4 = r9.readFloat(r10, r4)
            r0.floatElement(r3, r4)
            r9.elementState = r1
            return r2
        Lbb:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r10 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid element type "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r10.<init>(r0)
            throw r10
        Ld2:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r0 = r9.output
            int r3 = r9.elementId
            long r4 = r9.elementContentSize
            int r4 = (int) r4
            r0.binaryElement(r3, r4, r10)
            r9.elementState = r1
            return r2
        Ldf:
            long r3 = r9.elementContentSize
            r5 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto Lf7
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r0 = r9.output
            int r5 = r9.elementId
            int r3 = (int) r3
            java.lang.String r10 = r9.readString(r10, r3)
            r0.stringElement(r5, r10)
            r9.elementState = r1
            return r2
        Lf7:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r10 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "String element size: "
            r0.append(r1)
            long r1 = r9.elementContentSize
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        L110:
            long r3 = r9.elementContentSize
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto L125
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r0 = r9.output
            int r5 = r9.elementId
            int r3 = (int) r3
            long r3 = r9.readInteger(r10, r3)
            r0.integerElement(r5, r3)
            r9.elementState = r1
            return r2
        L125:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r10 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid integer size: "
            r0.append(r1)
            long r1 = r9.elementContentSize
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        L13e:
            long r5 = r10.getPosition()
            long r3 = r9.elementContentSize
            long r3 = r3 + r5
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement> r10 = r9.masterElementsStack
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement
            int r7 = r9.elementId
            r8 = 0
            r0.<init>(r7, r3, r8)
            r10.push(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.EbmlReaderOutput r3 = r9.output
            int r4 = r9.elementId
            long r7 = r9.elementContentSize
            r3.startMasterElement(r4, r5, r7)
            r9.elementState = r1
            return r2
        L15e:
            long r3 = r9.elementContentSize
            int r0 = (int) r3
            r10.skipFully(r0)
            r9.elementState = r1
            goto Lc
    }

    @Override
    public final void reset() {
            r1 = this;
            r0 = 0
            r1.elementState = r0
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.DefaultEbmlReader$MasterElement> r0 = r1.masterElementsStack
            r0.clear()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.VarintReader r0 = r1.varintReader
            r0.reset()
            return
    }
}
