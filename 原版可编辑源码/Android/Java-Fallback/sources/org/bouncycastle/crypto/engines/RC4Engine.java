package org.bouncycastle.crypto.engines;

public class RC4Engine implements org.bouncycastle.crypto.StreamCipher {
    private static final int STATE_LENGTH = 256;
    private byte[] engineState;
    private byte[] workingKey;
    private int x;
    private int y;

    public RC4Engine() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.engineState = r0
            r1 = 0
            r2.x = r1
            r2.y = r1
            r2.workingKey = r0
            return
    }

    private void setKey(byte[] r8) {
            r7 = this;
            r7.workingKey = r8
            r0 = 0
            r7.x = r0
            r7.y = r0
            byte[] r1 = r7.engineState
            r2 = 256(0x100, float:3.59E-43)
            if (r1 != 0) goto L11
            byte[] r1 = new byte[r2]
            r7.engineState = r1
        L11:
            r1 = 0
        L12:
            if (r1 >= r2) goto L1c
            byte[] r3 = r7.engineState
            byte r4 = (byte) r1
            r3[r1] = r4
            int r1 = r1 + 1
            goto L12
        L1c:
            r1 = 0
            r3 = 0
        L1e:
            if (r0 >= r2) goto L3b
            r4 = r8[r1]
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte[] r5 = r7.engineState
            r6 = r5[r0]
            int r4 = r4 + r6
            int r4 = r4 + r3
            r3 = r4 & 255(0xff, float:3.57E-43)
            r4 = r5[r0]
            r6 = r5[r3]
            r5[r0] = r6
            r5[r3] = r4
            int r1 = r1 + 1
            int r4 = r8.length
            int r1 = r1 % r4
            int r0 = r0 + 1
            goto L1e
        L3b:
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "RC4"
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r3 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r3 == 0) goto L10
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r3 = r4.getKey()
            r2.workingKey = r3
            r2.setKey(r3)
            return
        L10:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to RC4 init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void processBytes(byte[] r7, int r8, int r9, byte[] r10, int r11) {
            r6 = this;
            int r0 = r8 + r9
            int r1 = r7.length
            if (r0 > r1) goto L47
            int r0 = r11 + r9
            int r1 = r10.length
            if (r0 > r1) goto L3f
            r0 = 0
        Lb:
            if (r0 >= r9) goto L3e
            int r1 = r6.x
            int r1 = r1 + 1
            r1 = r1 & 255(0xff, float:3.57E-43)
            r6.x = r1
            byte[] r2 = r6.engineState
            r3 = r2[r1]
            int r4 = r6.y
            int r3 = r3 + r4
            r3 = r3 & 255(0xff, float:3.57E-43)
            r6.y = r3
            r4 = r2[r1]
            r5 = r2[r3]
            r2[r1] = r5
            r2[r3] = r4
            int r4 = r0 + r11
            int r5 = r0 + r8
            r5 = r7[r5]
            r1 = r2[r1]
            r3 = r2[r3]
            int r1 = r1 + r3
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r2[r1]
            r1 = r1 ^ r5
            byte r1 = (byte) r1
            r10[r4] = r1
            int r0 = r0 + 1
            goto Lb
        L3e:
            return
        L3f:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "output buffer too short"
            r7.<init>(r8)
            throw r7
        L47:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "input buffer too short"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public void reset() {
            r1 = this;
            byte[] r0 = r1.workingKey
            r1.setKey(r0)
            return
    }

    @Override
    public byte returnByte(byte r6) {
            r5 = this;
            int r0 = r5.x
            int r0 = r0 + 1
            r0 = r0 & 255(0xff, float:3.57E-43)
            r5.x = r0
            byte[] r1 = r5.engineState
            r2 = r1[r0]
            int r3 = r5.y
            int r2 = r2 + r3
            r2 = r2 & 255(0xff, float:3.57E-43)
            r5.y = r2
            r3 = r1[r0]
            r4 = r1[r2]
            r1[r0] = r4
            r1[r2] = r3
            r0 = r1[r0]
            r2 = r1[r2]
            int r0 = r0 + r2
            r0 = r0 & 255(0xff, float:3.57E-43)
            r0 = r1[r0]
            r6 = r6 ^ r0
            byte r6 = (byte) r6
            return r6
    }
}
