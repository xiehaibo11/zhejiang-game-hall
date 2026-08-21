package com.bytedance.pangle.res.a;

public final class i extends java.io.FilterInputStream implements java.io.DataInput {
    public i(com.bytedance.pangle.res.a.e r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private static int a(byte r0, byte r1, byte r2, byte r3) {
            int r0 = r0 << 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            r1 = r2 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            r1 = r3 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            return r0
    }

    private byte b() {
            r2 = this;
            java.io.InputStream r0 = r2.in
            int r0 = r0.read()
            r1 = -1
            if (r1 == r0) goto Lb
            byte r0 = (byte) r0
            return r0
        Lb:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    public final com.bytedance.pangle.res.a.e a() {
            r1 = this;
            java.io.InputStream r0 = r1.in
            com.bytedance.pangle.res.a.e r0 = (com.bytedance.pangle.res.a.e) r0
            return r0
    }

    @Override
    public final boolean readBoolean() {
            r1 = this;
            int r0 = r1.readUnsignedByte()
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public final byte readByte() {
            r1 = this;
            int r0 = r1.readUnsignedByte()
            byte r0 = (byte) r0
            return r0
    }

    @Override
    public final char readChar() {
            r1 = this;
            int r0 = r1.readUnsignedShort()
            char r0 = (char) r0
            return r0
    }

    @Override
    public final double readDouble() {
            r2 = this;
            long r0 = r2.readLong()
            double r0 = java.lang.Double.longBitsToDouble(r0)
            return r0
    }

    @Override
    public final float readFloat() {
            r1 = this;
            int r0 = r1.readInt()
            float r0 = java.lang.Float.intBitsToFloat(r0)
            return r0
    }

    @Override
    public final void readFully(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            com.bytedance.pangle.res.a.d.a(r2, r3, r1, r0)
            return
    }

    @Override
    public final void readFully(byte[] r1, int r2, int r3) {
            r0 = this;
            com.bytedance.pangle.res.a.d.a(r0, r1, r2, r3)
            return
    }

    @Override
    public final int readInt() {
            r4 = this;
            byte r0 = r4.b()
            byte r1 = r4.b()
            byte r2 = r4.b()
            byte r3 = r4.b()
            int r0 = a(r3, r2, r1, r0)
            return r0
    }

    @Override
    public final java.lang.String readLine() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "readLine is not supported"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final long readLong() {
            r13 = this;
            byte r0 = r13.b()
            byte r1 = r13.b()
            byte r2 = r13.b()
            byte r3 = r13.b()
            byte r4 = r13.b()
            byte r5 = r13.b()
            byte r6 = r13.b()
            byte r7 = r13.b()
            long r7 = (long) r7
            r9 = 255(0xff, double:1.26E-321)
            long r7 = r7 & r9
            r11 = 56
            long r7 = r7 << r11
            long r11 = (long) r6
            long r11 = r11 & r9
            r6 = 48
            long r11 = r11 << r6
            long r6 = r7 | r11
            long r11 = (long) r5
            long r11 = r11 & r9
            r5 = 40
            long r11 = r11 << r5
            long r5 = r6 | r11
            long r7 = (long) r4
            long r7 = r7 & r9
            r4 = 32
            long r7 = r7 << r4
            long r4 = r5 | r7
            long r6 = (long) r3
            long r6 = r6 & r9
            r3 = 24
            long r6 = r6 << r3
            long r3 = r4 | r6
            long r5 = (long) r2
            long r5 = r5 & r9
            r2 = 16
            long r5 = r5 << r2
            long r2 = r3 | r5
            long r4 = (long) r1
            long r4 = r4 & r9
            r1 = 8
            long r4 = r4 << r1
            long r1 = r2 | r4
            long r3 = (long) r0
            long r3 = r3 & r9
            long r0 = r1 | r3
            return r0
    }

    @Override
    public final short readShort() {
            r1 = this;
            int r0 = r1.readUnsignedShort()
            short r0 = (short) r0
            return r0
    }

    @Override
    public final java.lang.String readUTF() {
            r2 = this;
            java.io.DataInputStream r0 = new java.io.DataInputStream
            java.io.InputStream r1 = r2.in
            r0.<init>(r1)
            java.lang.String r0 = r0.readUTF()
            return r0
    }

    @Override
    public final int readUnsignedByte() {
            r1 = this;
            java.io.InputStream r0 = r1.in
            int r0 = r0.read()
            if (r0 < 0) goto L9
            return r0
        L9:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    @Override
    public final int readUnsignedShort() {
            r3 = this;
            byte r0 = r3.b()
            byte r1 = r3.b()
            r2 = 0
            int r0 = a(r2, r2, r1, r0)
            return r0
    }

    @Override
    public final int skipBytes(int r4) {
            r3 = this;
            java.io.InputStream r0 = r3.in
            long r1 = (long) r4
            long r0 = r0.skip(r1)
            int r4 = (int) r0
            return r4
    }
}
