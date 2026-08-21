package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class ParsableByteArray {
    public byte[] data;
    private int limit;
    private int position;

    public ParsableByteArray() {
            r0 = this;
            r0.<init>()
            return
    }

    public ParsableByteArray(int r2) {
            r1 = this;
            r1.<init>()
            byte[] r0 = new byte[r2]
            r1.data = r0
            r1.limit = r2
            return
    }

    public ParsableByteArray(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.data = r1
            int r1 = r1.length
            r0.limit = r1
            return
    }

    public ParsableByteArray(byte[] r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.data = r1
            r0.limit = r2
            return
    }

    public final int bytesLeft() {
            r2 = this;
            int r0 = r2.limit
            int r1 = r2.position
            int r0 = r0 - r1
            return r0
    }

    public final int capacity() {
            r1 = this;
            byte[] r0 = r1.data
            if (r0 != 0) goto L6
            r0 = 0
            goto L7
        L6:
            int r0 = r0.length
        L7:
            return r0
    }

    public final int getPosition() {
            r1 = this;
            int r0 = r1.position
            return r0
    }

    public final int limit() {
            r1 = this;
            int r0 = r1.limit
            return r0
    }

    public final char peekChar() {
            r3 = this;
            byte[] r0 = r3.data
            int r1 = r3.position
            r2 = r0[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            int r1 = r1 + 1
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r2
            char r0 = (char) r0
            return r0
    }

    public final int peekUnsignedByte() {
            r2 = this;
            byte[] r0 = r2.data
            int r1 = r2.position
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    public final void readBytes(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3, int r4) {
            r2 = this;
            byte[] r0 = r3.data
            r1 = 0
            r2.readBytes(r0, r1, r4)
            r3.setPosition(r1)
            return
    }

    public final void readBytes(java.nio.ByteBuffer r3, int r4) {
            r2 = this;
            byte[] r0 = r2.data
            int r1 = r2.position
            r3.put(r0, r1, r4)
            int r3 = r2.position
            int r3 = r3 + r4
            r2.position = r3
            return
    }

    public final void readBytes(byte[] r3, int r4, int r5) {
            r2 = this;
            byte[] r0 = r2.data
            int r1 = r2.position
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.position
            int r3 = r3 + r5
            r2.position = r3
            return
    }

    public final double readDouble() {
            r2 = this;
            long r0 = r2.readLong()
            double r0 = java.lang.Double.longBitsToDouble(r0)
            return r0
    }

    public final float readFloat() {
            r1 = this;
            int r0 = r1.readInt()
            float r0 = java.lang.Float.intBitsToFloat(r0)
            return r0
    }

    public final int readInt() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 16
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.position = r2
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 8
            r1 = r1 | r3
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    public final int readInt24() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r1 = r1 >> 8
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.position = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    public final java.lang.String readLine() {
            r6 = this;
            int r0 = r6.bytesLeft()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r6.position
        La:
            int r1 = r6.limit
            if (r0 >= r1) goto L1b
            byte[] r1 = r6.data
            r1 = r1[r0]
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.isLinebreak(r1)
            if (r1 != 0) goto L1b
            int r0 = r0 + 1
            goto La
        L1b:
            int r1 = r6.position
            int r2 = r0 - r1
            r3 = 3
            if (r2 < r3) goto L3d
            byte[] r2 = r6.data
            r4 = r2[r1]
            r5 = -17
            if (r4 != r5) goto L3d
            int r4 = r1 + 1
            r4 = r2[r4]
            r5 = -69
            if (r4 != r5) goto L3d
            int r4 = r1 + 2
            r2 = r2[r4]
            r4 = -65
            if (r2 != r4) goto L3d
            int r1 = r1 + r3
            r6.position = r1
        L3d:
            byte[] r1 = r6.data
            int r2 = r6.position
            int r3 = r0 - r2
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r1, r2, r3)
            r6.position = r0
            int r2 = r6.limit
            if (r0 != r2) goto L4e
            return r1
        L4e:
            byte[] r3 = r6.data
            r3 = r3[r0]
            r4 = 13
            if (r3 != r4) goto L5d
            int r0 = r0 + 1
            r6.position = r0
            if (r0 != r2) goto L5d
            return r1
        L5d:
            byte[] r0 = r6.data
            int r2 = r6.position
            r0 = r0[r2]
            r3 = 10
            if (r0 != r3) goto L6b
            int r2 = r2 + 1
            r6.position = r2
        L6b:
            return r1
    }

    public final int readLittleEndianInt() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.position = r2
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r1 = r1 | r3
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            r0 = r0 | r1
            return r0
    }

    public final int readLittleEndianInt24() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.position = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 16
            r0 = r0 | r1
            return r0
    }

    public final long readLittleEndianLong() {
            r9 = this;
            byte[] r0 = r9.data
            int r1 = r9.position
            int r2 = r1 + 1
            r9.position = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            int r1 = r2 + 1
            r9.position = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 8
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.position = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 16
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.position = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 24
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.position = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 32
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.position = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 40
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.position = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 48
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.position = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            r0 = 56
            long r3 = r3 << r0
            long r0 = r1 | r3
            return r0
    }

    public final short readLittleEndianShort() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
    }

    public final long readLittleEndianUnsignedInt() {
            r9 = this;
            byte[] r0 = r9.data
            int r1 = r9.position
            int r2 = r1 + 1
            r9.position = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            int r1 = r2 + 1
            r9.position = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 8
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.position = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 16
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.position = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            r0 = 24
            long r3 = r3 << r0
            long r0 = r1 | r3
            return r0
    }

    public final int readLittleEndianUnsignedInt24() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.position = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 16
            r0 = r0 | r1
            return r0
    }

    public final int readLittleEndianUnsignedIntToInt() {
            r4 = this;
            int r0 = r4.readLittleEndianInt()
            if (r0 < 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Top bit not zero: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    public final int readLittleEndianUnsignedShort() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            r0 = r0 | r1
            return r0
    }

    public final long readLong() {
            r9 = this;
            byte[] r0 = r9.data
            int r1 = r9.position
            int r2 = r1 + 1
            r9.position = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            r1 = 56
            long r3 = r3 << r1
            int r1 = r2 + 1
            r9.position = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 48
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.position = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 40
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.position = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 32
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.position = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 24
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.position = r3
            r4 = r0[r4]
            long r7 = (long) r4
            long r7 = r7 & r5
            r4 = 16
            long r7 = r7 << r4
            long r1 = r1 | r7
            int r4 = r3 + 1
            r9.position = r4
            r3 = r0[r3]
            long r7 = (long) r3
            long r7 = r7 & r5
            r3 = 8
            long r7 = r7 << r3
            long r1 = r1 | r7
            int r3 = r4 + 1
            r9.position = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            long r0 = r1 | r3
            return r0
    }

    public final java.lang.String readNullTerminatedString() {
            r4 = this;
            int r0 = r4.bytesLeft()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r4.position
        La:
            int r1 = r4.limit
            if (r0 >= r1) goto L17
            byte[] r1 = r4.data
            r1 = r1[r0]
            if (r1 == 0) goto L17
            int r0 = r0 + 1
            goto La
        L17:
            byte[] r1 = r4.data
            int r2 = r4.position
            int r3 = r0 - r2
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r1, r2, r3)
            r4.position = r0
            int r2 = r4.limit
            if (r0 >= r2) goto L2b
            int r0 = r0 + 1
            r4.position = r0
        L2b:
            return r1
    }

    public final java.lang.String readNullTerminatedString(int r4) {
            r3 = this;
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            int r0 = r3.position
            int r0 = r0 + r4
            int r0 = r0 + (-1)
            int r1 = r3.limit
            if (r0 >= r1) goto L17
            byte[] r1 = r3.data
            r0 = r1[r0]
            if (r0 != 0) goto L17
            int r0 = r4 + (-1)
            goto L18
        L17:
            r0 = r4
        L18:
            byte[] r1 = r3.data
            int r2 = r3.position
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r1, r2, r0)
            int r1 = r3.position
            int r1 = r1 + r4
            r3.position = r1
            return r0
    }

    public final short readShort() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            short r0 = (short) r0
            return r0
    }

    public final java.lang.String readString(int r2) {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            java.lang.String r2 = r1.readString(r2, r0)
            return r2
    }

    public final java.lang.String readString(int r4, java.nio.charset.Charset r5) {
            r3 = this;
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r3.data
            int r2 = r3.position
            r0.<init>(r1, r2, r4, r5)
            int r5 = r3.position
            int r5 = r5 + r4
            r3.position = r5
            return r0
    }

    public final int readSynchSafeInt() {
            r4 = this;
            int r0 = r4.readUnsignedByte()
            int r1 = r4.readUnsignedByte()
            int r2 = r4.readUnsignedByte()
            int r3 = r4.readUnsignedByte()
            int r0 = r0 << 21
            int r1 = r1 << 14
            r0 = r0 | r1
            int r1 = r2 << 7
            r0 = r0 | r1
            r0 = r0 | r3
            return r0
    }

    public final int readUnsignedByte() {
            r3 = this;
            byte[] r0 = r3.data
            int r1 = r3.position
            int r2 = r1 + 1
            r3.position = r2
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    public final int readUnsignedFixedPoint1616() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            int r3 = r3 + 2
            r4.position = r3
            return r0
    }

    public final long readUnsignedInt() {
            r9 = this;
            byte[] r0 = r9.data
            int r1 = r9.position
            int r2 = r1 + 1
            r9.position = r2
            r1 = r0[r1]
            long r3 = (long) r1
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            r1 = 24
            long r3 = r3 << r1
            int r1 = r2 + 1
            r9.position = r1
            r2 = r0[r2]
            long r7 = (long) r2
            long r7 = r7 & r5
            r2 = 16
            long r7 = r7 << r2
            long r2 = r3 | r7
            int r4 = r1 + 1
            r9.position = r4
            r1 = r0[r1]
            long r7 = (long) r1
            long r7 = r7 & r5
            r1 = 8
            long r7 = r7 << r1
            long r1 = r2 | r7
            int r3 = r4 + 1
            r9.position = r3
            r0 = r0[r4]
            long r3 = (long) r0
            long r3 = r3 & r5
            long r0 = r1 | r3
            return r0
    }

    public final int readUnsignedInt24() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            int r3 = r2 + 1
            r4.position = r3
            r2 = r0[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 8
            r1 = r1 | r2
            int r2 = r3 + 1
            r4.position = r2
            r0 = r0[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    public final int readUnsignedIntToInt() {
            r4 = this;
            int r0 = r4.readInt()
            if (r0 < 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Top bit not zero: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    public final long readUnsignedLongToLong() {
            r5 = this;
            long r0 = r5.readLong()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto Lb
            return r0
        Lb:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Top bit not zero: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
    }

    public final int readUnsignedShort() {
            r4 = this;
            byte[] r0 = r4.data
            int r1 = r4.position
            int r2 = r1 + 1
            r4.position = r2
            r1 = r0[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r3 = r2 + 1
            r4.position = r3
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    public final long readUtf8EncodedLong() {
            r11 = this;
            byte[] r0 = r11.data
            int r1 = r11.position
            r0 = r0[r1]
            long r0 = (long) r0
            r2 = 7
            r3 = r2
        L9:
            r4 = 6
            r5 = 1
            if (r3 < 0) goto L25
            int r6 = r5 << r3
            long r7 = (long) r6
            long r7 = r7 & r0
            r9 = 0
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 != 0) goto L22
            if (r3 >= r4) goto L1e
            int r6 = r6 - r5
            long r6 = (long) r6
            long r0 = r0 & r6
            int r2 = r2 - r3
            goto L26
        L1e:
            if (r3 != r2) goto L25
            r2 = r5
            goto L26
        L22:
            int r3 = r3 + (-1)
            goto L9
        L25:
            r2 = 0
        L26:
            if (r2 == 0) goto L5c
        L28:
            if (r5 >= r2) goto L56
            byte[] r3 = r11.data
            int r6 = r11.position
            int r6 = r6 + r5
            r3 = r3[r6]
            r6 = r3 & 192(0xc0, float:2.69E-43)
            r7 = 128(0x80, float:1.8E-43)
            if (r6 != r7) goto L3f
            long r0 = r0 << r4
            r3 = r3 & 63
            long r6 = (long) r3
            long r0 = r0 | r6
            int r5 = r5 + 1
            goto L28
        L3f:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Invalid UTF-8 sequence continuation byte: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
        L56:
            int r3 = r11.position
            int r3 = r3 + r2
            r11.position = r3
            return r0
        L5c:
            java.lang.NumberFormatException r2 = new java.lang.NumberFormatException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Invalid UTF-8 sequence first byte: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
    }

    public final void reset() {
            r1 = this;
            r0 = 0
            r1.position = r0
            r1.limit = r0
            return
    }

    public final void reset(int r2) {
            r1 = this;
            int r0 = r1.capacity()
            if (r0 >= r2) goto L9
            byte[] r0 = new byte[r2]
            goto Lb
        L9:
            byte[] r0 = r1.data
        Lb:
            r1.reset(r0, r2)
            return
    }

    public final void reset(byte[] r1, int r2) {
            r0 = this;
            r0.data = r1
            r0.limit = r2
            r1 = 0
            r0.position = r1
            return
    }

    public final void setLimit(int r2) {
            r1 = this;
            if (r2 < 0) goto L9
            byte[] r0 = r1.data
            int r0 = r0.length
            if (r2 > r0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            r1.limit = r2
            return
    }

    public final void setPosition(int r2) {
            r1 = this;
            if (r2 < 0) goto L8
            int r0 = r1.limit
            if (r2 > r0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            r1.position = r2
            return
    }

    public final void skipBytes(int r2) {
            r1 = this;
            int r0 = r1.position
            int r0 = r0 + r2
            r1.setPosition(r0)
            return
    }
}
