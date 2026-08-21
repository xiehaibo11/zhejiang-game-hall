package org.bouncycastle.crypto.macs;

public class VMPCMac implements org.bouncycastle.crypto.Mac {
    private byte[] P;
    private byte[] T;
    private byte g;
    private byte n;
    private byte s;
    private byte[] workingIV;
    private byte[] workingKey;
    private byte x1;
    private byte x2;
    private byte x3;
    private byte x4;

    public VMPCMac() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.n = r0
            r1 = 0
            r2.P = r1
            r2.s = r0
            return
    }

    private void initKey(byte[] r8, byte[] r9) {
            r7 = this;
            r0 = 0
            r7.s = r0
            r1 = 256(0x100, float:3.59E-43)
            byte[] r2 = new byte[r1]
            r7.P = r2
            r2 = 0
        La:
            if (r2 >= r1) goto L14
            byte[] r3 = r7.P
            byte r4 = (byte) r2
            r3[r2] = r4
            int r2 = r2 + 1
            goto La
        L14:
            r1 = 0
        L15:
            r2 = 768(0x300, float:1.076E-42)
            if (r1 >= r2) goto L3d
            byte[] r2 = r7.P
            byte r3 = r7.s
            r4 = r1 & 255(0xff, float:3.57E-43)
            r5 = r2[r4]
            int r3 = r3 + r5
            int r5 = r8.length
            int r5 = r1 % r5
            r5 = r8[r5]
            int r3 = r3 + r5
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r2[r3]
            r7.s = r3
            r5 = r2[r4]
            r6 = r3 & 255(0xff, float:3.57E-43)
            r6 = r2[r6]
            r2[r4] = r6
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2[r3] = r5
            int r1 = r1 + 1
            goto L15
        L3d:
            r8 = 0
        L3e:
            if (r8 >= r2) goto L64
            byte[] r1 = r7.P
            byte r3 = r7.s
            r4 = r8 & 255(0xff, float:3.57E-43)
            r5 = r1[r4]
            int r3 = r3 + r5
            int r5 = r9.length
            int r5 = r8 % r5
            r5 = r9[r5]
            int r3 = r3 + r5
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r1[r3]
            r7.s = r3
            r5 = r1[r4]
            r6 = r3 & 255(0xff, float:3.57E-43)
            r6 = r1[r6]
            r1[r4] = r6
            r3 = r3 & 255(0xff, float:3.57E-43)
            r1[r3] = r5
            int r8 = r8 + 1
            goto L3e
        L64:
            r7.n = r0
            return
    }

    @Override
    public int doFinal(byte[] r14, int r15) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r13 = this;
            r0 = 1
            r1 = 1
        L2:
            r2 = 25
            if (r1 >= r2) goto L98
            byte[] r2 = r13.P
            byte r3 = r13.s
            byte r4 = r13.n
            r5 = r4 & 255(0xff, float:3.57E-43)
            r5 = r2[r5]
            int r3 = r3 + r5
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r2[r3]
            r13.s = r3
            byte r5 = r13.x4
            byte r6 = r13.x3
            int r5 = r5 + r6
            int r5 = r5 + r1
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r2[r5]
            r13.x4 = r5
            byte r7 = r13.x2
            int r6 = r6 + r7
            int r6 = r6 + r1
            r6 = r6 & 255(0xff, float:3.57E-43)
            r6 = r2[r6]
            r13.x3 = r6
            byte r8 = r13.x1
            int r7 = r7 + r8
            int r7 = r7 + r1
            r7 = r7 & 255(0xff, float:3.57E-43)
            r7 = r2[r7]
            r13.x2 = r7
            int r8 = r8 + r3
            int r8 = r8 + r1
            r8 = r8 & 255(0xff, float:3.57E-43)
            r8 = r2[r8]
            r13.x1 = r8
            byte[] r9 = r13.T
            byte r10 = r13.g
            r11 = r10 & 31
            r12 = r10 & 31
            r12 = r9[r12]
            r8 = r8 ^ r12
            byte r8 = (byte) r8
            r9[r11] = r8
            int r8 = r10 + 1
            r8 = r8 & 31
            int r11 = r10 + 1
            r11 = r11 & 31
            r11 = r9[r11]
            r7 = r7 ^ r11
            byte r7 = (byte) r7
            r9[r8] = r7
            int r7 = r10 + 2
            r7 = r7 & 31
            int r8 = r10 + 2
            r8 = r8 & 31
            r8 = r9[r8]
            r6 = r6 ^ r8
            byte r6 = (byte) r6
            r9[r7] = r6
            int r6 = r10 + 3
            r6 = r6 & 31
            int r7 = r10 + 3
            r7 = r7 & 31
            r7 = r9[r7]
            r5 = r5 ^ r7
            byte r5 = (byte) r5
            r9[r6] = r5
            int r10 = r10 + 4
            r5 = r10 & 31
            byte r5 = (byte) r5
            r13.g = r5
            r5 = r4 & 255(0xff, float:3.57E-43)
            r5 = r2[r5]
            r6 = r4 & 255(0xff, float:3.57E-43)
            r7 = r3 & 255(0xff, float:3.57E-43)
            r7 = r2[r7]
            r2[r6] = r7
            r3 = r3 & 255(0xff, float:3.57E-43)
            r2[r3] = r5
            int r4 = r4 + r0
            r2 = r4 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r13.n = r2
            int r1 = r1 + 1
            goto L2
        L98:
            r1 = 0
            r2 = 0
        L9a:
            r3 = 768(0x300, float:1.076E-42)
            if (r2 >= r3) goto Lc3
            byte[] r3 = r13.P
            byte r4 = r13.s
            r5 = r2 & 255(0xff, float:3.57E-43)
            r6 = r3[r5]
            int r4 = r4 + r6
            byte[] r6 = r13.T
            r7 = r2 & 31
            r6 = r6[r7]
            int r4 = r4 + r6
            r4 = r4 & 255(0xff, float:3.57E-43)
            r4 = r3[r4]
            r13.s = r4
            r6 = r3[r5]
            r7 = r4 & 255(0xff, float:3.57E-43)
            r7 = r3[r7]
            r3[r5] = r7
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3[r4] = r6
            int r2 = r2 + 1
            goto L9a
        Lc3:
            r2 = 20
            byte[] r3 = new byte[r2]
            r4 = 0
        Lc8:
            if (r4 >= r2) goto Lf7
            byte[] r5 = r13.P
            byte r6 = r13.s
            r7 = r4 & 255(0xff, float:3.57E-43)
            r8 = r5[r7]
            int r6 = r6 + r8
            r6 = r6 & 255(0xff, float:3.57E-43)
            r6 = r5[r6]
            r13.s = r6
            r8 = r6 & 255(0xff, float:3.57E-43)
            r8 = r5[r8]
            r8 = r8 & 255(0xff, float:3.57E-43)
            r8 = r5[r8]
            int r8 = r8 + r0
            r8 = r8 & 255(0xff, float:3.57E-43)
            r8 = r5[r8]
            r3[r4] = r8
            r8 = r5[r7]
            r9 = r6 & 255(0xff, float:3.57E-43)
            r9 = r5[r9]
            r5[r7] = r9
            r6 = r6 & 255(0xff, float:3.57E-43)
            r5[r6] = r8
            int r4 = r4 + 1
            goto Lc8
        Lf7:
            java.lang.System.arraycopy(r3, r1, r14, r15, r2)
            r13.reset()
            return r2
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "VMPC-MAC"
            return r0
    }

    @Override
    public int getMacSize() {
            r1 = this;
            r0 = 20
            return r0
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r4) throws java.lang.IllegalArgumentException {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r0 == 0) goto L3f
            org.bouncycastle.crypto.params.ParametersWithIV r4 = (org.bouncycastle.crypto.params.ParametersWithIV) r4
            org.bouncycastle.crypto.CipherParameters r0 = r4.getParameters()
            org.bouncycastle.crypto.params.KeyParameter r0 = (org.bouncycastle.crypto.params.KeyParameter) r0
            org.bouncycastle.crypto.CipherParameters r1 = r4.getParameters()
            boolean r1 = r1 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r1 == 0) goto L37
            byte[] r4 = r4.getIV()
            r3.workingIV = r4
            if (r4 == 0) goto L2f
            int r1 = r4.length
            r2 = 1
            if (r1 < r2) goto L2f
            int r4 = r4.length
            r1 = 768(0x300, float:1.076E-42)
            if (r4 > r1) goto L2f
            byte[] r4 = r0.getKey()
            r3.workingKey = r4
            r3.reset()
            return
        L2f:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "VMPC-MAC requires 1 to 768 bytes of IV"
            r4.<init>(r0)
            throw r4
        L37:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "VMPC-MAC Init parameters must include a key"
            r4.<init>(r0)
            throw r4
        L3f:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "VMPC-MAC Init parameters must include an IV"
            r4.<init>(r0)
            throw r4
    }

    @Override
    public void reset() {
            r4 = this;
            byte[] r0 = r4.workingKey
            byte[] r1 = r4.workingIV
            r4.initKey(r0, r1)
            r0 = 0
            r4.n = r0
            r4.x4 = r0
            r4.x3 = r0
            r4.x2 = r0
            r4.x1 = r0
            r4.g = r0
            r1 = 32
            byte[] r2 = new byte[r1]
            r4.T = r2
            r2 = 0
        L1b:
            if (r2 >= r1) goto L24
            byte[] r3 = r4.T
            r3[r2] = r0
            int r2 = r2 + 1
            goto L1b
        L24:
            return
    }

    @Override
    public void update(byte r11) throws java.lang.IllegalStateException {
            r10 = this;
            byte[] r0 = r10.P
            byte r1 = r10.s
            byte r2 = r10.n
            r3 = r2 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            int r1 = r1 + r3
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r0[r1]
            r10.s = r1
            r3 = r1 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            int r3 = r3 + 1
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            r11 = r11 ^ r3
            byte r11 = (byte) r11
            byte r3 = r10.x4
            byte r4 = r10.x3
            int r3 = r3 + r4
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            r10.x4 = r3
            byte r5 = r10.x2
            int r4 = r4 + r5
            r4 = r4 & 255(0xff, float:3.57E-43)
            r4 = r0[r4]
            r10.x3 = r4
            byte r6 = r10.x1
            int r5 = r5 + r6
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r0[r5]
            r10.x2 = r5
            int r6 = r6 + r1
            int r6 = r6 + r11
            r11 = r6 & 255(0xff, float:3.57E-43)
            r11 = r0[r11]
            r10.x1 = r11
            byte[] r6 = r10.T
            byte r7 = r10.g
            r8 = r7 & 31
            r9 = r7 & 31
            r9 = r6[r9]
            r11 = r11 ^ r9
            byte r11 = (byte) r11
            r6[r8] = r11
            int r11 = r7 + 1
            r11 = r11 & 31
            int r8 = r7 + 1
            r8 = r8 & 31
            r8 = r6[r8]
            r5 = r5 ^ r8
            byte r5 = (byte) r5
            r6[r11] = r5
            int r11 = r7 + 2
            r11 = r11 & 31
            int r5 = r7 + 2
            r5 = r5 & 31
            r5 = r6[r5]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r6[r11] = r4
            int r11 = r7 + 3
            r11 = r11 & 31
            int r4 = r7 + 3
            r4 = r4 & 31
            r4 = r6[r4]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r6[r11] = r3
            int r7 = r7 + 4
            r11 = r7 & 31
            byte r11 = (byte) r11
            r10.g = r11
            r11 = r2 & 255(0xff, float:3.57E-43)
            r11 = r0[r11]
            r3 = r2 & 255(0xff, float:3.57E-43)
            r4 = r1 & 255(0xff, float:3.57E-43)
            r4 = r0[r4]
            r0[r3] = r4
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0[r1] = r11
            int r2 = r2 + 1
            r11 = r2 & 255(0xff, float:3.57E-43)
            byte r11 = (byte) r11
            r10.n = r11
            return
    }

    @Override
    public void update(byte[] r2, int r3, int r4) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r1 = this;
            int r3 = r3 + r4
            int r0 = r2.length
            if (r3 > r0) goto L10
            r3 = 0
        L5:
            if (r3 >= r4) goto Lf
            r0 = r2[r3]
            r1.update(r0)
            int r3 = r3 + 1
            goto L5
        Lf:
            return
        L10:
            org.bouncycastle.crypto.DataLengthException r2 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r3 = "input buffer too short"
            r2.<init>(r3)
            throw r2
    }
}
