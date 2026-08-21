package com.mbridge.msdk.playercommon.exoplayer2.video;

public final class AvcConfig {
    public final int height;
    public final java.util.List<byte[]> initializationData;
    public final int nalUnitLengthFieldLength;
    public final float pixelWidthAspectRatio;
    public final int width;

    private AvcConfig(java.util.List<byte[]> r1, int r2, int r3, int r4, float r5) {
            r0 = this;
            r0.<init>()
            r0.initializationData = r1
            r0.nalUnitLengthFieldLength = r2
            r0.width = r3
            r0.height = r4
            r0.pixelWidthAspectRatio = r5
            return
    }

    private static byte[] buildNalUnitForChild(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
            int r0 = r2.readUnsignedShort()
            int r1 = r2.getPosition()
            r2.skipBytes(r0)
            byte[] r2 = r2.data
            byte[] r2 = com.mbridge.msdk.playercommon.exoplayer2.util.CodecSpecificDataUtil.buildNalUnit(r2, r1, r0)
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig parse(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r0 = 4
            r8.skipBytes(r0)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            int r0 = r8.readUnsignedByte()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r1 = 3
            r0 = r0 & r1
            int r4 = r0 + 1
            if (r4 == r1) goto L62
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r3.<init>()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            int r0 = r8.readUnsignedByte()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r0 = r0 & 31
            r1 = 0
            r2 = r1
        L1b:
            if (r2 >= r0) goto L27
            byte[] r5 = buildNalUnitForChild(r8)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r3.add(r5)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            int r2 = r2 + 1
            goto L1b
        L27:
            int r2 = r8.readUnsignedByte()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r5 = r1
        L2c:
            if (r5 >= r2) goto L38
            byte[] r6 = buildNalUnitForChild(r8)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r3.add(r6)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            int r5 = r5 + 1
            goto L2c
        L38:
            r8 = 1065353216(0x3f800000, float:1.0)
            r2 = -1
            if (r0 <= 0) goto L58
            java.lang.Object r8 = r3.get(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            byte[] r8 = (byte[]) r8     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            java.lang.Object r0 = r3.get(r1)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            byte[] r0 = (byte[]) r0     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            int r8 = r8.length     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil$SpsData r8 = com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.parseSpsNalUnit(r0, r4, r8)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            int r0 = r8.width     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            int r1 = r8.height     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            float r8 = r8.pixelWidthAspectRatio     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r7 = r8
            r5 = r0
            r6 = r1
            goto L5b
        L58:
            r7 = r8
            r5 = r2
            r6 = r5
        L5b:
            com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig r8 = new com.mbridge.msdk.playercommon.exoplayer2.video.AvcConfig     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r2 = r8
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            return r8
        L62:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            r8.<init>()     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
            throw r8     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L68
        L68:
            r8 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r0 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r1 = "Error parsing AVC config"
            r0.<init>(r1, r8)
            throw r0
    }
}
