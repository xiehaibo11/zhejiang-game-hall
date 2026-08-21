package org.bouncycastle.math.ec;

class IntArray {
    private int[] m_ints;

    public IntArray(int r1) {
            r0 = this;
            r0.<init>()
            int[] r1 = new int[r1]
            r0.m_ints = r1
            return
    }

    public IntArray(java.math.BigInteger r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public IntArray(java.math.BigInteger r7, int r8) {
            r6 = this;
            r6.<init>()
            int r0 = r7.signum()
            r1 = -1
            if (r0 == r1) goto L70
            java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r0 = r7.equals(r0)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1b
            int[] r7 = new int[r1]
            r7[r2] = r2
            r6.m_ints = r7
            return
        L1b:
            byte[] r7 = r7.toByteArray()
            int r0 = r7.length
            r3 = r7[r2]
            if (r3 != 0) goto L28
            int r0 = r0 + (-1)
            r3 = 1
            goto L29
        L28:
            r3 = 0
        L29:
            int r4 = r0 + 3
            r5 = 4
            int r4 = r4 / r5
            if (r4 >= r8) goto L34
            int[] r8 = new int[r8]
            r6.m_ints = r8
            goto L38
        L34:
            int[] r8 = new int[r4]
            r6.m_ints = r8
        L38:
            int r4 = r4 - r1
            int r0 = r0 % r5
            int r0 = r0 + r3
            if (r3 >= r0) goto L53
            r8 = 0
        L3e:
            if (r3 >= r0) goto L4c
            int r8 = r8 << 8
            r1 = r7[r3]
            if (r1 >= 0) goto L48
            int r1 = r1 + 256
        L48:
            r8 = r8 | r1
            int r3 = r3 + 1
            goto L3e
        L4c:
            int[] r0 = r6.m_ints
            int r1 = r4 + (-1)
            r0[r4] = r8
            r4 = r1
        L53:
            if (r4 < 0) goto L6f
            r8 = 0
            r0 = 0
        L57:
            if (r8 >= r5) goto L68
            int r0 = r0 << 8
            int r1 = r3 + 1
            r3 = r7[r3]
            if (r3 >= 0) goto L63
            int r3 = r3 + 256
        L63:
            r0 = r0 | r3
            int r8 = r8 + 1
            r3 = r1
            goto L57
        L68:
            int[] r8 = r6.m_ints
            r8[r4] = r0
            int r4 = r4 + (-1)
            goto L53
        L6f:
            return
        L70:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Only positive Integers allowed"
            r7.<init>(r8)
            throw r7
    }

    public IntArray(int[] r1) {
            r0 = this;
            r0.<init>()
            r0.m_ints = r1
            return
    }

    private int[] resizedInts(int r4) {
            r3 = this;
            int[] r0 = new int[r4]
            int[] r1 = r3.m_ints
            int r1 = r1.length
            if (r1 >= r4) goto L8
            r4 = r1
        L8:
            int[] r1 = r3.m_ints
            r2 = 0
            java.lang.System.arraycopy(r1, r2, r0, r2, r4)
            return r0
    }

    public void addShifted(org.bouncycastle.math.ec.IntArray r7, int r8) {
            r6 = this;
            int r0 = r7.getUsedLength()
            int r1 = r0 + r8
            int[] r2 = r6.m_ints
            int r2 = r2.length
            if (r1 <= r2) goto L11
            int[] r1 = r6.resizedInts(r1)
            r6.m_ints = r1
        L11:
            r1 = 0
        L12:
            if (r1 >= r0) goto L24
            int[] r2 = r6.m_ints
            int r3 = r1 + r8
            r4 = r2[r3]
            int[] r5 = r7.m_ints
            r5 = r5[r1]
            r4 = r4 ^ r5
            r2[r3] = r4
            int r1 = r1 + 1
            goto L12
        L24:
            return
    }

    public int bitLength() {
            r4 = this;
            int r0 = r4.getUsedLength()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            r1 = 1
            int r0 = r0 - r1
            int[] r2 = r4.m_ints
            r2 = r2[r0]
            int r0 = r0 << 5
            int r0 = r0 + r1
            r3 = -65536(0xffffffffffff0000, float:NaN)
            r3 = r3 & r2
            if (r3 == 0) goto L25
            r3 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r3 = r3 & r2
            if (r3 == 0) goto L20
            int r0 = r0 + 24
            int r2 = r2 >>> 24
            goto L2d
        L20:
            int r0 = r0 + 16
            int r2 = r2 >>> 16
            goto L2d
        L25:
            r3 = 255(0xff, float:3.57E-43)
            if (r2 <= r3) goto L2d
            int r0 = r0 + 8
            int r2 = r2 >>> 8
        L2d:
            if (r2 == r1) goto L34
            int r0 = r0 + 1
            int r2 = r2 >>> 1
            goto L2d
        L34:
            return r0
    }

    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.math.ec.IntArray r0 = new org.bouncycastle.math.ec.IntArray
            int[] r1 = r2.m_ints
            int[] r1 = org.bouncycastle.util.Arrays.clone(r1)
            r0.<init>(r1)
            return r0
    }

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            boolean r0 = r6 instanceof org.bouncycastle.math.ec.IntArray
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.math.ec.IntArray r6 = (org.bouncycastle.math.ec.IntArray) r6
            int r0 = r5.getUsedLength()
            int r2 = r6.getUsedLength()
            if (r2 == r0) goto L13
            return r1
        L13:
            r2 = 0
        L14:
            if (r2 >= r0) goto L24
            int[] r3 = r5.m_ints
            r3 = r3[r2]
            int[] r4 = r6.m_ints
            r4 = r4[r2]
            if (r3 == r4) goto L21
            return r1
        L21:
            int r2 = r2 + 1
            goto L14
        L24:
            r6 = 1
            return r6
    }

    public void flipBit(int r4) {
            r3 = this;
            int r0 = r4 >> 5
            r4 = r4 & 31
            r1 = 1
            int r4 = r1 << r4
            int[] r1 = r3.m_ints
            r2 = r1[r0]
            r4 = r4 ^ r2
            r1[r0] = r4
            return
    }

    public int getLength() {
            r1 = this;
            int[] r0 = r1.m_ints
            int r0 = r0.length
            return r0
    }

    public int getUsedLength() {
            r4 = this;
            int[] r0 = r4.m_ints
            int r1 = r0.length
            r2 = 0
            r3 = 1
            if (r1 >= r3) goto L8
            return r2
        L8:
            r0 = r0[r2]
            if (r0 == 0) goto L17
        Lc:
            int[] r0 = r4.m_ints
            int r1 = r1 + (-1)
            r0 = r0[r1]
            if (r0 != 0) goto L15
            goto Lc
        L15:
            int r1 = r1 + r3
            return r1
        L17:
            int[] r0 = r4.m_ints
            int r1 = r1 + (-1)
            r0 = r0[r1]
            if (r0 == 0) goto L21
            int r1 = r1 + r3
            return r1
        L21:
            if (r1 > 0) goto L17
            return r2
    }

    public int hashCode() {
            r4 = this;
            int r0 = r4.getUsedLength()
            r1 = 0
            r2 = 0
        L6:
            if (r1 >= r0) goto L10
            int[] r3 = r4.m_ints
            r3 = r3[r1]
            r2 = r2 ^ r3
            int r1 = r1 + 1
            goto L6
        L10:
            return r2
    }

    public boolean isZero() {
            r3 = this;
            int[] r0 = r3.m_ints
            int r1 = r0.length
            r2 = 0
            if (r1 == 0) goto L10
            r0 = r0[r2]
            if (r0 != 0) goto L11
            int r0 = r3.getUsedLength()
            if (r0 != 0) goto L11
        L10:
            r2 = 1
        L11:
            return r2
    }

    public org.bouncycastle.math.ec.IntArray multiply(org.bouncycastle.math.ec.IntArray r7, int r8) {
            r6 = this;
            int r0 = r8 + 31
            int r0 = r0 >> 5
            int[] r1 = r6.m_ints
            int r1 = r1.length
            if (r1 >= r0) goto Lf
            int[] r1 = r6.resizedInts(r0)
            r6.m_ints = r1
        Lf:
            org.bouncycastle.math.ec.IntArray r1 = new org.bouncycastle.math.ec.IntArray
            int r2 = r7.getLength()
            r3 = 1
            int r2 = r2 + r3
            int[] r7 = r7.resizedInts(r2)
            r1.<init>(r7)
            org.bouncycastle.math.ec.IntArray r7 = new org.bouncycastle.math.ec.IntArray
            int r8 = r8 + r8
            int r8 = r8 + 31
            int r8 = r8 >> 5
            r7.<init>(r8)
            r8 = 0
            r2 = 0
        L2a:
            r4 = 32
            if (r2 >= r4) goto L46
            r4 = 0
        L2f:
            if (r4 >= r0) goto L3e
            int[] r5 = r6.m_ints
            r5 = r5[r4]
            r5 = r5 & r3
            if (r5 == 0) goto L3b
            r7.addShifted(r1, r4)
        L3b:
            int r4 = r4 + 1
            goto L2f
        L3e:
            int r3 = r3 << 1
            r1.shiftLeft()
            int r2 = r2 + 1
            goto L2a
        L46:
            return r7
    }

    public void reduce(int r5, int[] r6) {
            r4 = this;
            int r0 = r5 + r5
            int r0 = r0 + (-2)
        L4:
            if (r0 < r5) goto L23
            boolean r1 = r4.testBit(r0)
            if (r1 == 0) goto L20
            int r1 = r0 - r5
            r4.flipBit(r1)
            r4.flipBit(r0)
            int r2 = r6.length
        L15:
            int r2 = r2 + (-1)
            if (r2 < 0) goto L20
            r3 = r6[r2]
            int r3 = r3 + r1
            r4.flipBit(r3)
            goto L15
        L20:
            int r0 = r0 + (-1)
            goto L4
        L23:
            int r5 = r5 + 31
            int r5 = r5 >> 5
            int[] r5 = r4.resizedInts(r5)
            r4.m_ints = r5
            return
    }

    public void setBit(int r4) {
            r3 = this;
            int r0 = r4 >> 5
            r4 = r4 & 31
            r1 = 1
            int r4 = r1 << r4
            int[] r1 = r3.m_ints
            r2 = r1[r0]
            r4 = r4 | r2
            r1[r0] = r4
            return
    }

    public org.bouncycastle.math.ec.IntArray shiftLeft(int r8) {
            r7 = this;
            int r0 = r7.getUsedLength()
            if (r0 != 0) goto L7
            return r7
        L7:
            if (r8 != 0) goto La
            return r7
        La:
            r1 = 31
            if (r8 > r1) goto L3e
            int r1 = r0 + 1
            int[] r1 = new int[r1]
            int r2 = 32 - r8
            int[] r3 = r7.m_ints
            r4 = 0
            r3 = r3[r4]
            int r3 = r3 << r8
            r1[r4] = r3
            r3 = 1
        L1d:
            if (r3 >= r0) goto L2f
            int[] r4 = r7.m_ints
            r5 = r4[r3]
            int r5 = r5 << r8
            int r6 = r3 + (-1)
            r4 = r4[r6]
            int r4 = r4 >>> r2
            r4 = r4 | r5
            r1[r3] = r4
            int r3 = r3 + 1
            goto L1d
        L2f:
            int[] r8 = r7.m_ints
            int r3 = r0 + (-1)
            r8 = r8[r3]
            int r8 = r8 >>> r2
            r1[r0] = r8
            org.bouncycastle.math.ec.IntArray r8 = new org.bouncycastle.math.ec.IntArray
            r8.<init>(r1)
            return r8
        L3e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "shiftLeft() for max 31 bits , "
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = "bit shift is not possible"
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
    }

    public void shiftLeft() {
            r8 = this;
            int r0 = r8.getUsedLength()
            if (r0 != 0) goto L7
            return
        L7:
            int[] r1 = r8.m_ints
            int r2 = r0 + (-1)
            r2 = r1[r2]
            r3 = 1
            if (r2 >= 0) goto L1d
            int r0 = r0 + 1
            int r2 = r1.length
            if (r0 <= r2) goto L1d
            int r1 = r1.length
            int r1 = r1 + r3
            int[] r1 = r8.resizedInts(r1)
            r8.m_ints = r1
        L1d:
            r1 = 0
            r2 = 0
            r4 = 0
        L20:
            if (r2 >= r0) goto L3d
            int[] r5 = r8.m_ints
            r5 = r5[r2]
            if (r5 >= 0) goto L2a
            r5 = 1
            goto L2b
        L2a:
            r5 = 0
        L2b:
            int[] r6 = r8.m_ints
            r7 = r6[r2]
            int r7 = r7 << r3
            r6[r2] = r7
            if (r4 == 0) goto L39
            r4 = r6[r2]
            r4 = r4 | r3
            r6[r2] = r4
        L39:
            int r2 = r2 + 1
            r4 = r5
            goto L20
        L3d:
            return
    }

    public org.bouncycastle.math.ec.IntArray square(int r12) {
            r11 = this;
            r0 = 16
            int[] r1 = new int[r0]
            r1 = {x0062: FILL_ARRAY_DATA , data: [0, 1, 4, 5, 16, 17, 20, 21, 64, 65, 68, 69, 80, 81, 84, 85} // fill-array
            int r12 = r12 + 31
            int r12 = r12 >> 5
            int[] r2 = r11.m_ints
            int r2 = r2.length
            if (r2 >= r12) goto L16
            int[] r2 = r11.resizedInts(r12)
            r11.m_ints = r2
        L16:
            org.bouncycastle.math.ec.IntArray r2 = new org.bouncycastle.math.ec.IntArray
            int r3 = r12 + r12
            r2.<init>(r3)
            r3 = 0
            r4 = 0
        L1f:
            if (r4 >= r12) goto L61
            r5 = 0
            r6 = 0
        L23:
            r7 = 4
            if (r5 >= r7) goto L39
            int r6 = r6 >>> 8
            int[] r7 = r11.m_ints
            r7 = r7[r4]
            int r8 = r5 * 4
            int r7 = r7 >>> r8
            r7 = r7 & 15
            r7 = r1[r7]
            int r7 = r7 << 24
            r6 = r6 | r7
            int r5 = r5 + 1
            goto L23
        L39:
            int[] r5 = r2.m_ints
            int r8 = r4 + r4
            r5[r8] = r6
            int[] r5 = r11.m_ints
            r5 = r5[r4]
            int r5 = r5 >>> r0
            r6 = 0
            r9 = 0
        L46:
            if (r6 >= r7) goto L58
            int r9 = r9 >>> 8
            int r10 = r6 * 4
            int r10 = r5 >>> r10
            r10 = r10 & 15
            r10 = r1[r10]
            int r10 = r10 << 24
            r9 = r9 | r10
            int r6 = r6 + 1
            goto L46
        L58:
            int[] r5 = r2.m_ints
            int r8 = r8 + 1
            r5[r8] = r9
            int r4 = r4 + 1
            goto L1f
        L61:
            return r2
    }

    public boolean testBit(int r4) {
            r3 = this;
            int r0 = r4 >> 5
            r4 = r4 & 31
            r1 = 1
            int r4 = r1 << r4
            int[] r2 = r3.m_ints
            r0 = r2[r0]
            r4 = r4 & r0
            if (r4 == 0) goto Lf
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    public java.math.BigInteger toBigInteger() {
            r12 = this;
            int r0 = r12.getUsedLength()
            if (r0 != 0) goto L9
            java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.ZERO
            return r0
        L9:
            int[] r1 = r12.m_ints
            int r2 = r0 + (-1)
            r1 = r1[r2]
            r3 = 4
            byte[] r4 = new byte[r3]
            r5 = 3
            r6 = 0
            r7 = 3
            r8 = 0
            r9 = 0
        L17:
            r10 = 1
            if (r7 < 0) goto L2c
            int r11 = r7 * 8
            int r11 = r1 >>> r11
            byte r11 = (byte) r11
            if (r9 != 0) goto L23
            if (r11 == 0) goto L29
        L23:
            int r9 = r8 + 1
            r4[r8] = r11
            r8 = r9
            r9 = 1
        L29:
            int r7 = r7 + (-1)
            goto L17
        L2c:
            int r2 = r2 * 4
            int r2 = r2 + r8
            byte[] r1 = new byte[r2]
        L31:
            if (r6 >= r8) goto L3a
            r2 = r4[r6]
            r1[r6] = r2
            int r6 = r6 + 1
            goto L31
        L3a:
            int r0 = r0 + (-2)
        L3c:
            if (r0 < 0) goto L54
            r2 = 3
        L3f:
            if (r2 < 0) goto L51
            int r3 = r8 + 1
            int[] r4 = r12.m_ints
            r4 = r4[r0]
            int r6 = r2 * 8
            int r4 = r4 >>> r6
            byte r4 = (byte) r4
            r1[r8] = r4
            int r2 = r2 + (-1)
            r8 = r3
            goto L3f
        L51:
            int r0 = r0 + (-1)
            goto L3c
        L54:
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r10, r1)
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            int r0 = r6.getUsedLength()
            java.lang.String r1 = "0"
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            int[] r3 = r6.m_ints
            int r4 = r0 + (-1)
            r3 = r3[r4]
            java.lang.String r3 = java.lang.Integer.toBinaryString(r3)
            r2.<init>(r3)
            int r0 = r0 + (-2)
        L1a:
            if (r0 < 0) goto L44
            int[] r3 = r6.m_ints
            r3 = r3[r0]
            java.lang.String r3 = java.lang.Integer.toBinaryString(r3)
            int r4 = r3.length()
        L28:
            r5 = 8
            if (r4 >= r5) goto L3e
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            int r4 = r4 + 1
            goto L28
        L3e:
            r2.append(r3)
            int r0 = r0 + (-1)
            goto L1a
        L44:
            java.lang.String r0 = r2.toString()
            return r0
    }
}
