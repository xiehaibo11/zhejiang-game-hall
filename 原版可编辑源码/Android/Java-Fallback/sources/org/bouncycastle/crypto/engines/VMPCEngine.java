package org.bouncycastle.crypto.engines;

public class VMPCEngine implements org.bouncycastle.crypto.StreamCipher {
    protected byte[] P;
    protected byte n;
    protected byte s;
    protected byte[] workingIV;
    protected byte[] workingKey;

    public VMPCEngine() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.n = r0
            r1 = 0
            r2.P = r1
            r2.s = r0
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "VMPC"
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r3 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r3 == 0) goto L41
            org.bouncycastle.crypto.params.ParametersWithIV r4 = (org.bouncycastle.crypto.params.ParametersWithIV) r4
            org.bouncycastle.crypto.CipherParameters r3 = r4.getParameters()
            org.bouncycastle.crypto.params.KeyParameter r3 = (org.bouncycastle.crypto.params.KeyParameter) r3
            org.bouncycastle.crypto.CipherParameters r0 = r4.getParameters()
            boolean r0 = r0 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L39
            byte[] r4 = r4.getIV()
            r2.workingIV = r4
            if (r4 == 0) goto L31
            int r0 = r4.length
            r1 = 1
            if (r0 < r1) goto L31
            int r4 = r4.length
            r0 = 768(0x300, float:1.076E-42)
            if (r4 > r0) goto L31
            byte[] r3 = r3.getKey()
            r2.workingKey = r3
            byte[] r4 = r2.workingIV
            r2.initKey(r3, r4)
            return
        L31:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "VMPC requires 1 to 768 bytes of IV"
            r3.<init>(r4)
            throw r3
        L39:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "VMPC init parameters must include a key"
            r3.<init>(r4)
            throw r3
        L41:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "VMPC init parameters must include an IV"
            r3.<init>(r4)
            throw r3
    }

    protected void initKey(byte[] r8, byte[] r9) {
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
    public void processBytes(byte[] r9, int r10, int r11, byte[] r12, int r13) {
            r8 = this;
            int r0 = r10 + r11
            int r1 = r9.length
            if (r0 > r1) goto L59
            int r0 = r13 + r11
            int r1 = r12.length
            if (r0 > r1) goto L51
            r0 = 0
        Lb:
            if (r0 >= r11) goto L50
            byte[] r1 = r8.P
            byte r2 = r8.s
            byte r3 = r8.n
            r4 = r3 & 255(0xff, float:3.57E-43)
            r4 = r1[r4]
            int r2 = r2 + r4
            r2 = r2 & 255(0xff, float:3.57E-43)
            r2 = r1[r2]
            r8.s = r2
            r4 = r2 & 255(0xff, float:3.57E-43)
            r4 = r1[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r4 = r1[r4]
            int r4 = r4 + 1
            r4 = r4 & 255(0xff, float:3.57E-43)
            r4 = r1[r4]
            r5 = r3 & 255(0xff, float:3.57E-43)
            r5 = r1[r5]
            r6 = r3 & 255(0xff, float:3.57E-43)
            r7 = r2 & 255(0xff, float:3.57E-43)
            r7 = r1[r7]
            r1[r6] = r7
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1[r2] = r5
            int r3 = r3 + 1
            r1 = r3 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r8.n = r1
            int r1 = r0 + r13
            int r2 = r0 + r10
            r2 = r9[r2]
            r2 = r2 ^ r4
            byte r2 = (byte) r2
            r12[r1] = r2
            int r0 = r0 + 1
            goto Lb
        L50:
            return
        L51:
            org.bouncycastle.crypto.DataLengthException r9 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r10 = "output buffer too short"
            r9.<init>(r10)
            throw r9
        L59:
            org.bouncycastle.crypto.DataLengthException r9 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r10 = "input buffer too short"
            r9.<init>(r10)
            throw r9
    }

    @Override
    public void reset() {
            r2 = this;
            byte[] r0 = r2.workingKey
            byte[] r1 = r2.workingIV
            r2.initKey(r0, r1)
            return
    }

    @Override
    public byte returnByte(byte r8) {
            r7 = this;
            byte[] r0 = r7.P
            byte r1 = r7.s
            byte r2 = r7.n
            r3 = r2 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            int r1 = r1 + r3
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r0[r1]
            r7.s = r1
            r3 = r1 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            int r3 = r3 + 1
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r0[r3]
            r4 = r2 & 255(0xff, float:3.57E-43)
            r4 = r0[r4]
            r5 = r2 & 255(0xff, float:3.57E-43)
            r6 = r1 & 255(0xff, float:3.57E-43)
            r6 = r0[r6]
            r0[r5] = r6
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0[r1] = r4
            int r2 = r2 + 1
            r0 = r2 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r7.n = r0
            r8 = r8 ^ r3
            byte r8 = (byte) r8
            return r8
    }
}
