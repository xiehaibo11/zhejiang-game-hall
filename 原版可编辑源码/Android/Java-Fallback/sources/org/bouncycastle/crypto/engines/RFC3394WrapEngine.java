package org.bouncycastle.crypto.engines;

public class RFC3394WrapEngine implements org.bouncycastle.crypto.Wrapper {
    private org.bouncycastle.crypto.BlockCipher engine;
    private boolean forWrapping;
    private byte[] iv;
    private org.bouncycastle.crypto.params.KeyParameter param;

    public RFC3394WrapEngine(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            r1.<init>()
            r0 = 8
            byte[] r0 = new byte[r0]
            r0 = {x0010: FILL_ARRAY_DATA , data: [-90, -90, -90, -90, -90, -90, -90, -90} // fill-array
            r1.iv = r0
            r1.engine = r2
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.engine
            java.lang.String r0 = r0.getAlgorithmName()
            return r0
    }

    @Override
    public void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) {
            r0 = this;
            r0.forWrapping = r1
            boolean r1 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r1 == 0) goto Lc
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = (org.bouncycastle.crypto.params.ParametersWithRandom) r2
            org.bouncycastle.crypto.CipherParameters r2 = r2.getParameters()
        Lc:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r1 == 0) goto L15
            org.bouncycastle.crypto.params.KeyParameter r2 = (org.bouncycastle.crypto.params.KeyParameter) r2
            r0.param = r2
            goto L39
        L15:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r1 == 0) goto L39
            org.bouncycastle.crypto.params.ParametersWithIV r2 = (org.bouncycastle.crypto.params.ParametersWithIV) r2
            byte[] r1 = r2.getIV()
            r0.iv = r1
            org.bouncycastle.crypto.CipherParameters r1 = r2.getParameters()
            org.bouncycastle.crypto.params.KeyParameter r1 = (org.bouncycastle.crypto.params.KeyParameter) r1
            r0.param = r1
            byte[] r1 = r0.iv
            int r1 = r1.length
            r2 = 8
            if (r1 != r2) goto L31
            goto L39
        L31:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "IV not equal to 8"
            r1.<init>(r2)
            throw r1
        L39:
            return
    }

    @Override
    public byte[] unwrap(byte[] r13, int r14, int r15) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r12 = this;
            boolean r14 = r12.forWrapping
            if (r14 != 0) goto L8b
            int r14 = r15 / 8
            int r0 = r14 * 8
            if (r0 != r15) goto L83
            byte[] r0 = r12.iv
            int r1 = r0.length
            int r1 = r15 - r1
            byte[] r1 = new byte[r1]
            int r2 = r0.length
            byte[] r2 = new byte[r2]
            int r3 = r0.length
            r4 = 8
            int r3 = r3 + r4
            byte[] r3 = new byte[r3]
            int r0 = r0.length
            r5 = 0
            java.lang.System.arraycopy(r13, r5, r2, r5, r0)
            byte[] r0 = r12.iv
            int r6 = r0.length
            int r0 = r0.length
            int r15 = r15 - r0
            java.lang.System.arraycopy(r13, r6, r1, r5, r15)
            org.bouncycastle.crypto.BlockCipher r13 = r12.engine
            org.bouncycastle.crypto.params.KeyParameter r15 = r12.param
            r13.init(r5, r15)
            r13 = 1
            int r14 = r14 - r13
            r15 = 5
        L31:
            if (r15 < 0) goto L6c
            r0 = r14
        L34:
            if (r0 < r13) goto L69
            byte[] r6 = r12.iv
            int r6 = r6.length
            java.lang.System.arraycopy(r2, r5, r3, r5, r6)
            int r6 = r0 + (-1)
            int r6 = r6 * 8
            byte[] r7 = r12.iv
            int r7 = r7.length
            java.lang.System.arraycopy(r1, r6, r3, r7, r4)
            int r7 = r14 * r15
            int r7 = r7 + r0
            r8 = 1
        L4a:
            if (r7 == 0) goto L5b
            byte r9 = (byte) r7
            byte[] r10 = r12.iv
            int r10 = r10.length
            int r10 = r10 - r8
            r11 = r3[r10]
            r9 = r9 ^ r11
            byte r9 = (byte) r9
            r3[r10] = r9
            int r7 = r7 >>> 8
            int r8 = r8 + r13
            goto L4a
        L5b:
            org.bouncycastle.crypto.BlockCipher r7 = r12.engine
            r7.processBlock(r3, r5, r3, r5)
            java.lang.System.arraycopy(r3, r5, r2, r5, r4)
            java.lang.System.arraycopy(r3, r4, r1, r6, r4)
            int r0 = r0 + (-1)
            goto L34
        L69:
            int r15 = r15 + (-1)
            goto L31
        L6c:
            byte[] r13 = r12.iv
            int r14 = r13.length
            if (r5 == r14) goto L82
            r14 = r2[r5]
            r13 = r13[r5]
            if (r14 != r13) goto L7a
            int r5 = r5 + 1
            goto L6c
        L7a:
            org.bouncycastle.crypto.InvalidCipherTextException r13 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r14 = "checksum failed"
            r13.<init>(r14)
            throw r13
        L82:
            return r1
        L83:
            org.bouncycastle.crypto.InvalidCipherTextException r13 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r14 = "unwrap data must be a multiple of 8 bytes"
            r13.<init>(r14)
            throw r13
        L8b:
            java.lang.IllegalStateException r13 = new java.lang.IllegalStateException
            java.lang.String r14 = "not set for unwrapping"
            r13.<init>(r14)
            throw r13
    }

    @Override
    public byte[] wrap(byte[] r12, int r13, int r14) {
            r11 = this;
            boolean r13 = r11.forWrapping
            if (r13 == 0) goto L6d
            int r13 = r14 / 8
            int r0 = r13 * 8
            if (r0 != r14) goto L65
            byte[] r0 = r11.iv
            int r1 = r0.length
            int r1 = r1 + r14
            byte[] r1 = new byte[r1]
            int r2 = r0.length
            r3 = 8
            int r2 = r2 + r3
            byte[] r2 = new byte[r2]
            int r4 = r0.length
            r5 = 0
            java.lang.System.arraycopy(r0, r5, r1, r5, r4)
            byte[] r0 = r11.iv
            int r0 = r0.length
            java.lang.System.arraycopy(r12, r5, r1, r0, r14)
            org.bouncycastle.crypto.BlockCipher r12 = r11.engine
            org.bouncycastle.crypto.params.KeyParameter r14 = r11.param
            r0 = 1
            r12.init(r0, r14)
            r12 = 0
        L2a:
            r14 = 6
            if (r12 == r14) goto L64
            r14 = 1
        L2e:
            if (r14 > r13) goto L61
            byte[] r4 = r11.iv
            int r4 = r4.length
            java.lang.System.arraycopy(r1, r5, r2, r5, r4)
            int r4 = r14 * 8
            byte[] r6 = r11.iv
            int r6 = r6.length
            java.lang.System.arraycopy(r1, r4, r2, r6, r3)
            org.bouncycastle.crypto.BlockCipher r6 = r11.engine
            r6.processBlock(r2, r5, r2, r5)
            int r6 = r13 * r12
            int r6 = r6 + r14
            r7 = 1
        L47:
            if (r6 == 0) goto L58
            byte r8 = (byte) r6
            byte[] r9 = r11.iv
            int r9 = r9.length
            int r9 = r9 - r7
            r10 = r2[r9]
            r8 = r8 ^ r10
            byte r8 = (byte) r8
            r2[r9] = r8
            int r6 = r6 >>> 8
            int r7 = r7 + r0
            goto L47
        L58:
            java.lang.System.arraycopy(r2, r5, r1, r5, r3)
            java.lang.System.arraycopy(r2, r3, r1, r4, r3)
            int r14 = r14 + 1
            goto L2e
        L61:
            int r12 = r12 + 1
            goto L2a
        L64:
            return r1
        L65:
            org.bouncycastle.crypto.DataLengthException r12 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r13 = "wrap data must be a multiple of 8 bytes"
            r12.<init>(r13)
            throw r12
        L6d:
            java.lang.IllegalStateException r12 = new java.lang.IllegalStateException
            java.lang.String r13 = "not set for wrapping"
            r12.<init>(r13)
            throw r12
    }
}
