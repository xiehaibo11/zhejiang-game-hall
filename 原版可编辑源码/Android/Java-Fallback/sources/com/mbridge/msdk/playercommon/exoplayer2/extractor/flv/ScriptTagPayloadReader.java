package com.mbridge.msdk.playercommon.exoplayer2.extractor.flv;

final class ScriptTagPayloadReader extends com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.TagPayloadReader {
    private static final int AMF_TYPE_BOOLEAN = 1;
    private static final int AMF_TYPE_DATE = 11;
    private static final int AMF_TYPE_ECMA_ARRAY = 8;
    private static final int AMF_TYPE_END_MARKER = 9;
    private static final int AMF_TYPE_NUMBER = 0;
    private static final int AMF_TYPE_OBJECT = 3;
    private static final int AMF_TYPE_STRICT_ARRAY = 10;
    private static final int AMF_TYPE_STRING = 2;
    private static final java.lang.String KEY_DURATION = "duration";
    private static final java.lang.String NAME_METADATA = "onMetaData";
    private long durationUs;

    public ScriptTagPayloadReader() {
            r2 = this;
            r0 = 0
            r2.<init>(r0)
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.durationUs = r0
            return
    }

    private static java.lang.Boolean readAmfBoolean(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) {
            int r1 = r1.readUnsignedByte()
            r0 = 1
            if (r1 != r0) goto L8
            goto L9
        L8:
            r0 = 0
        L9:
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            return r1
    }

    private static java.lang.Object readAmfData(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, int r2) {
            if (r2 == 0) goto L37
            r0 = 1
            if (r2 == r0) goto L32
            r0 = 2
            if (r2 == r0) goto L2d
            r0 = 3
            if (r2 == r0) goto L28
            r0 = 8
            if (r2 == r0) goto L23
            r0 = 10
            if (r2 == r0) goto L1e
            r0 = 11
            if (r2 == r0) goto L19
            r1 = 0
            return r1
        L19:
            java.util.Date r1 = readAmfDate(r1)
            return r1
        L1e:
            java.util.ArrayList r1 = readAmfStrictArray(r1)
            return r1
        L23:
            java.util.HashMap r1 = readAmfEcmaArray(r1)
            return r1
        L28:
            java.util.HashMap r1 = readAmfObject(r1)
            return r1
        L2d:
            java.lang.String r1 = readAmfString(r1)
            return r1
        L32:
            java.lang.Boolean r1 = readAmfBoolean(r1)
            return r1
        L37:
            java.lang.Double r1 = readAmfDouble(r1)
            return r1
    }

    private static java.util.Date readAmfDate(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            java.util.Date r0 = new java.util.Date
            java.lang.Double r1 = readAmfDouble(r3)
            double r1 = r1.doubleValue()
            long r1 = (long) r1
            r0.<init>(r1)
            r1 = 2
            r3.skipBytes(r1)
            return r0
    }

    private static java.lang.Double readAmfDouble(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
            long r0 = r2.readLong()
            double r0 = java.lang.Double.longBitsToDouble(r0)
            java.lang.Double r2 = java.lang.Double.valueOf(r0)
            return r2
    }

    private static java.util.HashMap<java.lang.String, java.lang.Object> readAmfEcmaArray(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) {
            int r0 = r5.readUnsignedIntToInt()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>(r0)
            r2 = 0
        La:
            if (r2 >= r0) goto L1e
            java.lang.String r3 = readAmfString(r5)
            int r4 = readAmfType(r5)
            java.lang.Object r4 = readAmfData(r5, r4)
            r1.put(r3, r4)
            int r2 = r2 + 1
            goto La
        L1e:
            return r1
    }

    private static java.util.HashMap<java.lang.String, java.lang.Object> readAmfObject(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
        L5:
            java.lang.String r1 = readAmfString(r4)
            int r2 = readAmfType(r4)
            r3 = 9
            if (r2 != r3) goto L12
            return r0
        L12:
            java.lang.Object r2 = readAmfData(r4, r2)
            r0.put(r1, r2)
            goto L5
    }

    private static java.util.ArrayList<java.lang.Object> readAmfStrictArray(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            int r0 = r4.readUnsignedIntToInt()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r2 = 0
        La:
            if (r2 >= r0) goto L1a
            int r3 = readAmfType(r4)
            java.lang.Object r3 = readAmfData(r4, r3)
            r1.add(r3)
            int r2 = r2 + 1
            goto La
        L1a:
            return r1
    }

    private static java.lang.String readAmfString(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            int r0 = r3.readUnsignedShort()
            int r1 = r3.getPosition()
            r3.skipBytes(r0)
            java.lang.String r2 = new java.lang.String
            byte[] r3 = r3.data
            r2.<init>(r3, r1, r0)
            return r2
    }

    private static int readAmfType(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0) {
            int r0 = r0.readUnsignedByte()
            return r0
    }

    public final long getDurationUs() {
            r2 = this;
            long r0 = r2.durationUs
            return r0
    }

    @Override
    protected final boolean parseHeader(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    protected final void parsePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, long r4) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r2 = this;
            int r4 = readAmfType(r3)
            r5 = 2
            if (r4 != r5) goto L43
            java.lang.String r4 = readAmfString(r3)
            java.lang.String r5 = "onMetaData"
            boolean r4 = r5.equals(r4)
            if (r4 != 0) goto L14
            return
        L14:
            int r4 = readAmfType(r3)
            r5 = 8
            if (r4 == r5) goto L1d
            return
        L1d:
            java.util.HashMap r3 = readAmfEcmaArray(r3)
            java.lang.String r4 = "duration"
            boolean r5 = r3.containsKey(r4)
            if (r5 == 0) goto L42
            java.lang.Object r3 = r3.get(r4)
            java.lang.Double r3 = (java.lang.Double) r3
            double r3 = r3.doubleValue()
            r0 = 0
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 <= 0) goto L42
            r0 = 4696837146684686336(0x412e848000000000, double:1000000.0)
            double r3 = r3 * r0
            long r3 = (long) r3
            r2.durationUs = r3
        L42:
            return
        L43:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r3 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            r3.<init>()
            throw r3
    }

    @Override
    public final void seek() {
            r0 = this;
            return
    }
}
