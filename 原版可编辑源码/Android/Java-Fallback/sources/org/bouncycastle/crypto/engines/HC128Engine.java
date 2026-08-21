package org.bouncycastle.crypto.engines;

public class HC128Engine implements org.bouncycastle.crypto.StreamCipher {
    private byte[] buf;
    private int cnt;
    private int idx;
    private boolean initialised;
    private byte[] iv;
    private byte[] key;
    private int[] p;
    private int[] q;

    public HC128Engine() {
            r2 = this;
            r2.<init>()
            r0 = 512(0x200, float:7.17E-43)
            int[] r1 = new int[r0]
            r2.p = r1
            int[] r0 = new int[r0]
            r2.q = r0
            r0 = 0
            r2.cnt = r0
            r1 = 4
            byte[] r1 = new byte[r1]
            r2.buf = r1
            r2.idx = r0
            return
    }

    private static int dim(int r0, int r1) {
            int r0 = r0 - r1
            int r0 = mod512(r0)
            return r0
    }

    private static int f1(int r2) {
            r0 = 7
            int r0 = rotateRight(r2, r0)
            r1 = 18
            int r1 = rotateRight(r2, r1)
            r0 = r0 ^ r1
            int r2 = r2 >>> 3
            r2 = r2 ^ r0
            return r2
    }

    private static int f2(int r2) {
            r0 = 17
            int r0 = rotateRight(r2, r0)
            r1 = 19
            int r1 = rotateRight(r2, r1)
            r0 = r0 ^ r1
            int r2 = r2 >>> 10
            r2 = r2 ^ r0
            return r2
    }

    private int g1(int r2, int r3, int r4) {
            r1 = this;
            r0 = 10
            int r2 = rotateRight(r2, r0)
            r0 = 23
            int r4 = rotateRight(r4, r0)
            r2 = r2 ^ r4
            r4 = 8
            int r3 = rotateRight(r3, r4)
            int r2 = r2 + r3
            return r2
    }

    private int g2(int r2, int r3, int r4) {
            r1 = this;
            r0 = 10
            int r2 = rotateLeft(r2, r0)
            r0 = 23
            int r4 = rotateLeft(r4, r0)
            r2 = r2 ^ r4
            r4 = 8
            int r3 = rotateLeft(r3, r4)
            int r2 = r2 + r3
            return r2
    }

    private byte getByte() {
            r6 = this;
            int r0 = r6.idx
            r1 = 3
            r2 = 1
            if (r0 != 0) goto L28
            int r0 = r6.step()
            byte[] r3 = r6.buf
            r4 = r0 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r3[r1] = r4
            int r0 = r0 >> 8
            r4 = 2
            r5 = r0 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r5
            r3[r4] = r5
            int r0 = r0 >> 8
            r4 = r0 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r3[r2] = r4
            int r0 = r0 >> 8
            r4 = 0
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r3[r4] = r0
        L28:
            byte[] r0 = r6.buf
            int r3 = r6.idx
            r0 = r0[r3]
            int r3 = r3 + r2
            r1 = r1 & r3
            r6.idx = r1
            return r0
    }

    private int h1(int r3) {
            r2 = this;
            int[] r0 = r2.q
            r1 = r3 & 255(0xff, float:3.57E-43)
            r1 = r0[r1]
            int r3 = r3 >> 16
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 256
            r3 = r0[r3]
            int r1 = r1 + r3
            return r1
    }

    private int h2(int r3) {
            r2 = this;
            int[] r0 = r2.p
            r1 = r3 & 255(0xff, float:3.57E-43)
            r1 = r0[r1]
            int r3 = r3 >> 16
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 256
            r3 = r0[r3]
            int r1 = r1 + r3
            return r1
    }

    private void init() {
            r10 = this;
            byte[] r0 = r10.key
            int r0 = r0.length
            r1 = 16
            if (r0 != r1) goto L97
            r0 = 0
            r10.cnt = r0
            r2 = 1280(0x500, float:1.794E-42)
            int[] r3 = new int[r2]
            r4 = 0
        Lf:
            if (r4 >= r1) goto L22
            int r5 = r4 >> 3
            r6 = r3[r5]
            byte[] r7 = r10.key
            r7 = r7[r4]
            r8 = r4 & 7
            int r7 = r7 << r8
            r6 = r6 | r7
            r3[r5] = r6
            int r4 = r4 + 1
            goto Lf
        L22:
            r4 = 4
            java.lang.System.arraycopy(r3, r0, r3, r4, r4)
            r5 = 0
        L27:
            byte[] r6 = r10.iv
            int r7 = r6.length
            r8 = 8
            if (r5 >= r7) goto L40
            if (r5 >= r1) goto L40
            int r7 = r5 >> 3
            int r7 = r7 + r8
            r8 = r3[r7]
            r6 = r6[r5]
            r9 = r5 & 7
            int r6 = r6 << r9
            r6 = r6 | r8
            r3[r7] = r6
            int r5 = r5 + 1
            goto L27
        L40:
            r5 = 12
            java.lang.System.arraycopy(r3, r8, r3, r5, r4)
        L45:
            if (r1 >= r2) goto L68
            int r4 = r1 + (-2)
            r4 = r3[r4]
            int r4 = f2(r4)
            int r5 = r1 + (-7)
            r5 = r3[r5]
            int r4 = r4 + r5
            int r5 = r1 + (-15)
            r5 = r3[r5]
            int r5 = f1(r5)
            int r4 = r4 + r5
            int r5 = r1 + (-16)
            r5 = r3[r5]
            int r4 = r4 + r5
            int r4 = r4 + r1
            r3[r1] = r4
            int r1 = r1 + 1
            goto L45
        L68:
            r1 = 256(0x100, float:3.59E-43)
            int[] r2 = r10.p
            r4 = 512(0x200, float:7.17E-43)
            java.lang.System.arraycopy(r3, r1, r2, r0, r4)
            r1 = 768(0x300, float:1.076E-42)
            int[] r2 = r10.q
            java.lang.System.arraycopy(r3, r1, r2, r0, r4)
            r1 = 0
        L79:
            if (r1 >= r4) goto L86
            int[] r2 = r10.p
            int r3 = r10.step()
            r2[r1] = r3
            int r1 = r1 + 1
            goto L79
        L86:
            r1 = 0
        L87:
            if (r1 >= r4) goto L94
            int[] r2 = r10.q
            int r3 = r10.step()
            r2[r1] = r3
            int r1 = r1 + 1
            goto L87
        L94:
            r10.cnt = r0
            return
        L97:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "The key must be 128 bit long"
            r0.<init>(r1)
            throw r0
    }

    private static int mod1024(int r0) {
            r0 = r0 & 1023(0x3ff, float:1.434E-42)
            return r0
    }

    private static int mod512(int r0) {
            r0 = r0 & 511(0x1ff, float:7.16E-43)
            return r0
    }

    private static int rotateLeft(int r1, int r2) {
            int r0 = r1 << r2
            int r2 = -r2
            int r1 = r1 >>> r2
            r1 = r1 | r0
            return r1
    }

    private static int rotateRight(int r1, int r2) {
            int r0 = r1 >>> r2
            int r2 = -r2
            int r1 = r1 << r2
            r1 = r1 | r0
            return r1
    }

    private int step() {
            r8 = this;
            int r0 = r8.cnt
            int r0 = mod512(r0)
            int r1 = r8.cnt
            r2 = 12
            r3 = 511(0x1ff, float:7.16E-43)
            r4 = 10
            r5 = 3
            r6 = 512(0x200, float:7.17E-43)
            if (r1 >= r6) goto L45
            int[] r1 = r8.p
            r6 = r1[r0]
            int r5 = dim(r0, r5)
            r5 = r1[r5]
            int[] r7 = r8.p
            int r4 = dim(r0, r4)
            r4 = r7[r4]
            int[] r7 = r8.p
            int r3 = dim(r0, r3)
            r3 = r7[r3]
            int r3 = r8.g1(r5, r4, r3)
            int r6 = r6 + r3
            r1[r0] = r6
            int[] r1 = r8.p
            int r2 = dim(r0, r2)
            r1 = r1[r2]
            int r1 = r8.h1(r1)
            int[] r2 = r8.p
            r0 = r2[r0]
            goto L76
        L45:
            int[] r1 = r8.q
            r6 = r1[r0]
            int r5 = dim(r0, r5)
            r5 = r1[r5]
            int[] r7 = r8.q
            int r4 = dim(r0, r4)
            r4 = r7[r4]
            int[] r7 = r8.q
            int r3 = dim(r0, r3)
            r3 = r7[r3]
            int r3 = r8.g2(r5, r4, r3)
            int r6 = r6 + r3
            r1[r0] = r6
            int[] r1 = r8.q
            int r2 = dim(r0, r2)
            r1 = r1[r2]
            int r1 = r8.h2(r1)
            int[] r2 = r8.q
            r0 = r2[r0]
        L76:
            r0 = r0 ^ r1
            int r1 = r8.cnt
            int r1 = r1 + 1
            int r1 = mod1024(r1)
            r8.cnt = r1
            return r0
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "HC-128"
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) throws java.lang.IllegalArgumentException {
            r2 = this;
            boolean r3 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r3 == 0) goto L12
            r3 = r4
            org.bouncycastle.crypto.params.ParametersWithIV r3 = (org.bouncycastle.crypto.params.ParametersWithIV) r3
            byte[] r0 = r3.getIV()
            r2.iv = r0
            org.bouncycastle.crypto.CipherParameters r3 = r3.getParameters()
            goto L18
        L12:
            r3 = 0
            byte[] r3 = new byte[r3]
            r2.iv = r3
            r3 = r4
        L18:
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L2b
            org.bouncycastle.crypto.params.KeyParameter r3 = (org.bouncycastle.crypto.params.KeyParameter) r3
            byte[] r3 = r3.getKey()
            r2.key = r3
            r2.init()
            r3 = 1
            r2.initialised = r3
            return
        L2b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid parameter passed to HC128 init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void processBytes(byte[] r5, int r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException {
            r4 = this;
            boolean r0 = r4.initialised
            if (r0 == 0) goto L33
            int r0 = r6 + r7
            int r1 = r5.length
            if (r0 > r1) goto L2b
            int r0 = r9 + r7
            int r1 = r8.length
            if (r0 > r1) goto L23
            r0 = 0
        Lf:
            if (r0 >= r7) goto L22
            int r1 = r9 + r0
            int r2 = r6 + r0
            r2 = r5[r2]
            byte r3 = r4.getByte()
            r2 = r2 ^ r3
            byte r2 = (byte) r2
            r8[r1] = r2
            int r0 = r0 + 1
            goto Lf
        L22:
            return
        L23:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "output buffer too short"
            r5.<init>(r6)
            throw r5
        L2b:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r6 = "input buffer too short"
            r5.<init>(r6)
            throw r5
        L33:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = r4.getAlgorithmName()
            r6.append(r7)
            java.lang.String r7 = " not initialised"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
    }

    @Override
    public void reset() {
            r1 = this;
            r0 = 0
            r1.idx = r0
            r1.init()
            return
    }

    @Override
    public byte returnByte(byte r2) {
            r1 = this;
            byte r0 = r1.getByte()
            r2 = r2 ^ r0
            byte r2 = (byte) r2
            return r2
    }
}
