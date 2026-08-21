package org.bouncycastle.crypto.engines;

public class HC256Engine implements org.bouncycastle.crypto.StreamCipher {
    private byte[] buf;
    private int cnt;
    private int idx;
    private boolean initialised;
    private byte[] iv;
    private byte[] key;
    private int[] p;
    private int[] q;

    public HC256Engine() {
            r2 = this;
            r2.<init>()
            r0 = 1024(0x400, float:1.435E-42)
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

    private void init() {
            r9 = this;
            byte[] r0 = r9.key
            int r0 = r0.length
            r1 = 32
            if (r0 != r1) goto L95
            r0 = 0
            r9.cnt = r0
            r2 = 2560(0xa00, float:3.587E-42)
            int[] r3 = new int[r2]
            r4 = 0
        Lf:
            if (r4 >= r1) goto L22
            int r5 = r4 >> 3
            r6 = r3[r5]
            byte[] r7 = r9.key
            r7 = r7[r4]
            r8 = r4 & 7
            int r7 = r7 << r8
            r6 = r6 | r7
            r3[r5] = r6
            int r4 = r4 + 1
            goto Lf
        L22:
            r4 = 0
        L23:
            byte[] r5 = r9.iv
            int r6 = r5.length
            if (r4 >= r6) goto L3b
            if (r4 >= r1) goto L3b
            int r6 = r4 >> 3
            int r6 = r6 + 8
            r7 = r3[r6]
            r5 = r5[r4]
            r8 = r4 & 7
            int r5 = r5 << r8
            r5 = r5 | r7
            r3[r6] = r5
            int r4 = r4 + 1
            goto L23
        L3b:
            r1 = 16
        L3d:
            if (r1 >= r2) goto L77
            int r4 = r1 + (-2)
            r4 = r3[r4]
            int r5 = r1 + (-15)
            r5 = r3[r5]
            r6 = 17
            int r6 = rotateRight(r4, r6)
            r7 = 19
            int r7 = rotateRight(r4, r7)
            r6 = r6 ^ r7
            int r4 = r4 >>> 10
            r4 = r4 ^ r6
            int r6 = r1 + (-7)
            r6 = r3[r6]
            int r4 = r4 + r6
            r6 = 7
            int r6 = rotateRight(r5, r6)
            r7 = 18
            int r7 = rotateRight(r5, r7)
            r6 = r6 ^ r7
            int r5 = r5 >>> 3
            r5 = r5 ^ r6
            int r4 = r4 + r5
            int r5 = r1 + (-16)
            r5 = r3[r5]
            int r4 = r4 + r5
            int r4 = r4 + r1
            r3[r1] = r4
            int r1 = r1 + 1
            goto L3d
        L77:
            r1 = 512(0x200, float:7.17E-43)
            int[] r2 = r9.p
            r4 = 1024(0x400, float:1.435E-42)
            java.lang.System.arraycopy(r3, r1, r2, r0, r4)
            r1 = 1536(0x600, float:2.152E-42)
            int[] r2 = r9.q
            java.lang.System.arraycopy(r3, r1, r2, r0, r4)
            r1 = 0
        L88:
            r2 = 4096(0x1000, float:5.74E-42)
            if (r1 >= r2) goto L92
            r9.step()
            int r1 = r1 + 1
            goto L88
        L92:
            r9.cnt = r0
            return
        L95:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "The key must be 256 bit long"
            r0.<init>(r1)
            throw r0
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
            r1 = r0 & 1023(0x3ff, float:1.434E-42)
            r2 = 23
            r3 = 10
            r4 = 1024(0x400, float:1.435E-42)
            if (r0 >= r4) goto L62
            int[] r0 = r8.p
            int r4 = r1 + (-3)
            r4 = r4 & 1023(0x3ff, float:1.434E-42)
            r4 = r0[r4]
            int r5 = r1 + (-1023)
            r5 = r5 & 1023(0x3ff, float:1.434E-42)
            r5 = r0[r5]
            r6 = r0[r1]
            int r7 = r1 + (-10)
            r7 = r7 & 1023(0x3ff, float:1.434E-42)
            r7 = r0[r7]
            int r3 = rotateRight(r4, r3)
            int r2 = rotateRight(r5, r2)
            r2 = r2 ^ r3
            int r7 = r7 + r2
            int[] r2 = r8.q
            r3 = r4 ^ r5
            r3 = r3 & 1023(0x3ff, float:1.434E-42)
            r3 = r2[r3]
            int r7 = r7 + r3
            int r6 = r6 + r7
            r0[r1] = r6
            int[] r0 = r8.p
            int r3 = r1 + (-12)
            r3 = r3 & 1023(0x3ff, float:1.434E-42)
            r3 = r0[r3]
            r4 = r3 & 255(0xff, float:3.57E-43)
            r4 = r2[r4]
            int r5 = r3 >> 8
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 + 256
            r5 = r2[r5]
            int r4 = r4 + r5
            int r5 = r3 >> 16
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 + 512
            r5 = r2[r5]
            int r4 = r4 + r5
            int r3 = r3 >> 24
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 768
            r2 = r2[r3]
            int r4 = r4 + r2
            r0 = r0[r1]
            goto Lb7
        L62:
            int[] r0 = r8.q
            int r4 = r1 + (-3)
            r4 = r4 & 1023(0x3ff, float:1.434E-42)
            r4 = r0[r4]
            int r5 = r1 + (-1023)
            r5 = r5 & 1023(0x3ff, float:1.434E-42)
            r5 = r0[r5]
            r6 = r0[r1]
            int r7 = r1 + (-10)
            r7 = r7 & 1023(0x3ff, float:1.434E-42)
            r7 = r0[r7]
            int r3 = rotateRight(r4, r3)
            int r2 = rotateRight(r5, r2)
            r2 = r2 ^ r3
            int r7 = r7 + r2
            int[] r2 = r8.p
            r3 = r4 ^ r5
            r3 = r3 & 1023(0x3ff, float:1.434E-42)
            r3 = r2[r3]
            int r7 = r7 + r3
            int r6 = r6 + r7
            r0[r1] = r6
            int[] r0 = r8.q
            int r3 = r1 + (-12)
            r3 = r3 & 1023(0x3ff, float:1.434E-42)
            r3 = r0[r3]
            r4 = r3 & 255(0xff, float:3.57E-43)
            r4 = r2[r4]
            int r5 = r3 >> 8
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 + 256
            r5 = r2[r5]
            int r4 = r4 + r5
            int r5 = r3 >> 16
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 + 512
            r5 = r2[r5]
            int r4 = r4 + r5
            int r3 = r3 >> 24
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 768
            r2 = r2[r3]
            int r4 = r4 + r2
            r0 = r0[r1]
        Lb7:
            r0 = r0 ^ r4
            int r1 = r8.cnt
            int r1 = r1 + 1
            r1 = r1 & 2047(0x7ff, float:2.868E-42)
            r8.cnt = r1
            return r0
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "HC-256"
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
            java.lang.String r1 = "Invalid parameter passed to HC256 init - "
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
