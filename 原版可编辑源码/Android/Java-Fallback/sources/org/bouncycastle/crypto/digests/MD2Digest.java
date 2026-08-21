package org.bouncycastle.crypto.digests;

public class MD2Digest implements org.bouncycastle.crypto.ExtendedDigest {
    private static final int DIGEST_LENGTH = 16;
    private static final byte[] S = null;
    private byte[] C;
    private int COff;
    private byte[] M;
    private byte[] X;
    private int mOff;
    private int xOff;

    static {
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [41, 46, 67, -55, -94, -40, 124, 1, 61, 54, 84, -95, -20, -16, 6, 19, 98, -89, 5, -13, -64, -57, 115, -116, -104, -109, 43, -39, -68, 76, -126, -54, 30, -101, 87, 60, -3, -44, -32, 22, 103, 66, 111, 24, -118, 23, -27, 18, -66, 78, -60, -42, -38, -98, -34, 73, -96, -5, -11, -114, -69, 47, -18, 122, -87, 104, 121, -111, 21, -78, 7, 63, -108, -62, 16, -119, 11, 34, 95, 33, -128, 127, 93, -102, 90, -112, 50, 39, 53, 62, -52, -25, -65, -9, -105, 3, -1, 25, 48, -77, 72, -91, -75, -47, -41, 94, -110, 42, -84, 86, -86, -58, 79, -72, 56, -46, -106, -92, 125, -74, 118, -4, 107, -30, -100, 116, 4, -15, 69, -99, 112, 89, 100, 113, -121, 32, -122, 91, -49, 101, -26, 45, -88, 2, 27, 96, 37, -83, -82, -80, -71, -10, 28, 70, 97, 105, 52, 64, 126, 15, 85, 71, -93, 35, -35, 81, -81, 58, -61, 92, -7, -50, -70, -59, -22, 38, 44, 83, 13, 110, -123, 40, -124, 9, -45, -33, -51, -12, 65, -127, 77, 82, 106, -36, 55, -56, 108, -63, -85, -6, 36, -31, 123, 8, 12, -67, -79, 74, 120, -120, -107, -117, -29, 99, -24, 109, -23, -53, -43, -2, 59, 0, 29, 57, -14, -17, -73, 14, 102, 88, -48, -28, -90, 119, 114, -8, -21, 117, 75, 10, 49, 68, 80, -76, -113, -19, 31, 26, -37, -103, -115, 51, -97, 17, -125, 20} // fill-array
            org.bouncycastle.crypto.digests.MD2Digest.S = r0
            return
    }

    public MD2Digest() {
            r2 = this;
            r2.<init>()
            r0 = 48
            byte[] r0 = new byte[r0]
            r2.X = r0
            r0 = 16
            byte[] r1 = new byte[r0]
            r2.M = r1
            byte[] r0 = new byte[r0]
            r2.C = r0
            r2.reset()
            return
    }

    public MD2Digest(org.bouncycastle.crypto.digests.MD2Digest r5) {
            r4 = this;
            r4.<init>()
            r0 = 48
            byte[] r0 = new byte[r0]
            r4.X = r0
            r1 = 16
            byte[] r2 = new byte[r1]
            r4.M = r2
            byte[] r1 = new byte[r1]
            r4.C = r1
            byte[] r1 = r5.X
            int r2 = r1.length
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            int r0 = r5.xOff
            r4.xOff = r0
            byte[] r0 = r5.M
            byte[] r1 = r4.M
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            int r0 = r5.mOff
            r4.mOff = r0
            byte[] r0 = r5.C
            byte[] r1 = r4.C
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            int r5 = r5.COff
            r4.COff = r5
            return
    }

    @Override
    public int doFinal(byte[] r5, int r6) {
            r4 = this;
            byte[] r0 = r4.M
            int r0 = r0.length
            int r1 = r4.mOff
            int r0 = r0 - r1
            byte r0 = (byte) r0
        L7:
            byte[] r2 = r4.M
            int r3 = r2.length
            if (r1 >= r3) goto L11
            r2[r1] = r0
            int r1 = r1 + 1
            goto L7
        L11:
            r4.processCheckSum(r2)
            byte[] r0 = r4.M
            r4.processBlock(r0)
            byte[] r0 = r4.C
            r4.processBlock(r0)
            byte[] r0 = r4.X
            int r1 = r4.xOff
            r2 = 16
            java.lang.System.arraycopy(r0, r1, r5, r6, r2)
            r4.reset()
            return r2
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "MD2"
            return r0
    }

    @Override
    public int getByteLength() {
            r1 = this;
            r0 = 16
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 16
            return r0
    }

    protected void processBlock(byte[] r7) {
            r6 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 16
            if (r1 >= r2) goto L1b
            byte[] r2 = r6.X
            int r3 = r1 + 16
            r4 = r7[r1]
            r2[r3] = r4
            int r3 = r1 + 32
            r4 = r7[r1]
            r5 = r2[r1]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r2[r3] = r4
            int r1 = r1 + 1
            goto L2
        L1b:
            r7 = 0
            r1 = 0
        L1d:
            r2 = 18
            if (r7 >= r2) goto L3d
            r2 = 0
        L22:
            r3 = 48
            if (r2 >= r3) goto L37
            byte[] r3 = r6.X
            r4 = r3[r2]
            byte[] r5 = org.bouncycastle.crypto.digests.MD2Digest.S
            r1 = r5[r1]
            r1 = r1 ^ r4
            byte r1 = (byte) r1
            r3[r2] = r1
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r2 + 1
            goto L22
        L37:
            int r1 = r1 + r7
            int r1 = r1 % 256
            int r7 = r7 + 1
            goto L1d
        L3d:
            return
    }

    protected void processCheckSum(byte[] r7) {
            r6 = this;
            byte[] r0 = r6.C
            r1 = 15
            r0 = r0[r1]
            r1 = 0
        L7:
            r2 = 16
            if (r1 >= r2) goto L21
            byte[] r2 = r6.C
            r3 = r2[r1]
            byte[] r4 = org.bouncycastle.crypto.digests.MD2Digest.S
            r5 = r7[r1]
            r0 = r0 ^ r5
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r4[r0]
            r0 = r0 ^ r3
            byte r0 = (byte) r0
            r2[r1] = r0
            r0 = r2[r1]
            int r1 = r1 + 1
            goto L7
        L21:
            return
    }

    @Override
    public void reset() {
            r4 = this;
            r0 = 0
            r4.xOff = r0
            r1 = 0
        L4:
            byte[] r2 = r4.X
            int r3 = r2.length
            if (r1 == r3) goto Le
            r2[r1] = r0
            int r1 = r1 + 1
            goto L4
        Le:
            r4.mOff = r0
            r1 = 0
        L11:
            byte[] r2 = r4.M
            int r3 = r2.length
            if (r1 == r3) goto L1b
            r2[r1] = r0
            int r1 = r1 + 1
            goto L11
        L1b:
            r4.COff = r0
            r1 = 0
        L1e:
            byte[] r2 = r4.C
            int r3 = r2.length
            if (r1 == r3) goto L28
            r2[r1] = r0
            int r1 = r1 + 1
            goto L1e
        L28:
            return
    }

    @Override
    public void update(byte r4) {
            r3 = this;
            byte[] r0 = r3.M
            int r1 = r3.mOff
            int r2 = r1 + 1
            r3.mOff = r2
            r0[r1] = r4
            r4 = 16
            if (r2 != r4) goto L19
            r3.processCheckSum(r0)
            byte[] r4 = r3.M
            r3.processBlock(r4)
            r4 = 0
            r3.mOff = r4
        L19:
            return
    }

    @Override
    public void update(byte[] r4, int r5, int r6) {
            r3 = this;
        L0:
            int r0 = r3.mOff
            if (r0 == 0) goto L10
            if (r6 <= 0) goto L10
            r0 = r4[r5]
            r3.update(r0)
            int r5 = r5 + 1
            int r6 = r6 + (-1)
            goto L0
        L10:
            r0 = 16
            if (r6 <= r0) goto L29
            byte[] r1 = r3.M
            r2 = 0
            java.lang.System.arraycopy(r4, r5, r1, r2, r0)
            byte[] r0 = r3.M
            r3.processCheckSum(r0)
            byte[] r0 = r3.M
            r3.processBlock(r0)
            int r6 = r6 + (-16)
            int r5 = r5 + 16
            goto L10
        L29:
            if (r6 <= 0) goto L35
            r0 = r4[r5]
            r3.update(r0)
            int r5 = r5 + 1
            int r6 = r6 + (-1)
            goto L29
        L35:
            return
    }
}
