package org.bouncycastle.crypto.engines;

public class RFC3211WrapEngine implements org.bouncycastle.crypto.Wrapper {
    private org.bouncycastle.crypto.modes.CBCBlockCipher engine;
    private boolean forWrapping;
    private org.bouncycastle.crypto.params.ParametersWithIV param;
    private java.security.SecureRandom rand;

    public RFC3211WrapEngine(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            r0.<init>(r2)
            r1.engine = r0
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = r2.engine
            org.bouncycastle.crypto.BlockCipher r1 = r1.getUnderlyingCipher()
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/RFC3211Wrap"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            r1.forWrapping = r2
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto L17
            org.bouncycastle.crypto.params.ParametersWithRandom r3 = (org.bouncycastle.crypto.params.ParametersWithRandom) r3
            java.security.SecureRandom r2 = r3.getRandom()
            r1.rand = r2
            org.bouncycastle.crypto.CipherParameters r2 = r3.getParameters()
            org.bouncycastle.crypto.params.ParametersWithIV r2 = (org.bouncycastle.crypto.params.ParametersWithIV) r2
            r1.param = r2
            goto L24
        L17:
            if (r2 == 0) goto L20
            java.security.SecureRandom r2 = new java.security.SecureRandom
            r2.<init>()
            r1.rand = r2
        L20:
            org.bouncycastle.crypto.params.ParametersWithIV r3 = (org.bouncycastle.crypto.params.ParametersWithIV) r3
            r1.param = r3
        L24:
            return
    }

    @Override
    public byte[] unwrap(byte[] r6, int r7, int r8) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r5 = this;
            boolean r0 = r5.forWrapping
            if (r0 != 0) goto L99
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r5.engine
            int r0 = r0.getBlockSize()
            int r1 = r0 * 2
            if (r8 < r1) goto L91
            byte[] r1 = new byte[r8]
            byte[] r2 = new byte[r0]
            r3 = 0
            java.lang.System.arraycopy(r6, r7, r1, r3, r8)
            java.lang.System.arraycopy(r6, r7, r2, r3, r0)
            org.bouncycastle.crypto.modes.CBCBlockCipher r6 = r5.engine
            org.bouncycastle.crypto.params.ParametersWithIV r7 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.ParametersWithIV r4 = r5.param
            org.bouncycastle.crypto.CipherParameters r4 = r4.getParameters()
            r7.<init>(r4, r2)
            r6.init(r3, r7)
            r6 = r0
        L2a:
            if (r6 >= r8) goto L33
            org.bouncycastle.crypto.modes.CBCBlockCipher r7 = r5.engine
            r7.processBlock(r1, r6, r1, r6)
            int r6 = r6 + r0
            goto L2a
        L33:
            int r6 = r8 - r0
            java.lang.System.arraycopy(r1, r6, r2, r3, r0)
            org.bouncycastle.crypto.modes.CBCBlockCipher r6 = r5.engine
            org.bouncycastle.crypto.params.ParametersWithIV r7 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.ParametersWithIV r4 = r5.param
            org.bouncycastle.crypto.CipherParameters r4 = r4.getParameters()
            r7.<init>(r4, r2)
            r6.init(r3, r7)
            org.bouncycastle.crypto.modes.CBCBlockCipher r6 = r5.engine
            r6.processBlock(r1, r3, r1, r3)
            org.bouncycastle.crypto.modes.CBCBlockCipher r6 = r5.engine
            org.bouncycastle.crypto.params.ParametersWithIV r7 = r5.param
            r6.init(r3, r7)
            r6 = 0
        L55:
            if (r6 >= r8) goto L5e
            org.bouncycastle.crypto.modes.CBCBlockCipher r7 = r5.engine
            r7.processBlock(r1, r6, r1, r6)
            int r6 = r6 + r0
            goto L55
        L5e:
            r6 = r1[r3]
            r6 = r6 & 255(0xff, float:3.57E-43)
            r7 = 4
            int r8 = r8 - r7
            if (r6 > r8) goto L89
            r6 = r1[r3]
            r6 = r6 & 255(0xff, float:3.57E-43)
            byte[] r6 = new byte[r6]
            r8 = r1[r3]
            java.lang.System.arraycopy(r1, r7, r6, r3, r8)
        L71:
            r7 = 3
            if (r3 == r7) goto L88
            int r7 = r3 + 1
            r8 = r1[r7]
            int r8 = ~r8
            byte r8 = (byte) r8
            r0 = r6[r3]
            if (r8 != r0) goto L80
            r3 = r7
            goto L71
        L80:
            org.bouncycastle.crypto.InvalidCipherTextException r6 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r7 = "wrapped key fails checksum"
            r6.<init>(r7)
            throw r6
        L88:
            return r6
        L89:
            org.bouncycastle.crypto.InvalidCipherTextException r6 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r7 = "wrapped key corrupted"
            r6.<init>(r7)
            throw r6
        L91:
            org.bouncycastle.crypto.InvalidCipherTextException r6 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r7 = "input too short"
            r6.<init>(r7)
            throw r6
        L99:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "not set for unwrapping"
            r6.<init>(r7)
            throw r6
    }

    @Override
    public byte[] wrap(byte[] r7, int r8, int r9) {
            r6 = this;
            boolean r0 = r6.forWrapping
            if (r0 == 0) goto L6c
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            org.bouncycastle.crypto.params.ParametersWithIV r1 = r6.param
            r2 = 1
            r0.init(r2, r1)
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            int r0 = r0.getBlockSize()
            int r1 = r9 + 4
            int r3 = r0 * 2
            if (r1 >= r3) goto L1b
        L18:
            byte[] r3 = new byte[r3]
            goto L27
        L1b:
            int r3 = r1 % r0
            if (r3 != 0) goto L21
            r3 = r1
            goto L18
        L21:
            int r3 = r1 / r0
            int r3 = r3 + r2
            int r3 = r3 * r0
            goto L18
        L27:
            byte r4 = (byte) r9
            r5 = 0
            r3[r5] = r4
            r4 = r7[r8]
            int r4 = ~r4
            byte r4 = (byte) r4
            r3[r2] = r4
            int r2 = r8 + 1
            r2 = r7[r2]
            int r2 = ~r2
            byte r2 = (byte) r2
            r4 = 2
            r3[r4] = r2
            r2 = 3
            int r4 = r8 + 2
            r4 = r7[r4]
            int r4 = ~r4
            byte r4 = (byte) r4
            r3[r2] = r4
            r2 = 4
            java.lang.System.arraycopy(r7, r8, r3, r2, r9)
        L47:
            int r7 = r3.length
            if (r1 >= r7) goto L56
            java.security.SecureRandom r7 = r6.rand
            int r7 = r7.nextInt()
            byte r7 = (byte) r7
            r3[r1] = r7
            int r1 = r1 + 1
            goto L47
        L56:
            r7 = 0
        L57:
            int r8 = r3.length
            if (r7 >= r8) goto L61
            org.bouncycastle.crypto.modes.CBCBlockCipher r8 = r6.engine
            r8.processBlock(r3, r7, r3, r7)
            int r7 = r7 + r0
            goto L57
        L61:
            int r7 = r3.length
            if (r5 >= r7) goto L6b
            org.bouncycastle.crypto.modes.CBCBlockCipher r7 = r6.engine
            r7.processBlock(r3, r5, r3, r5)
            int r5 = r5 + r0
            goto L61
        L6b:
            return r3
        L6c:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "not set for wrapping"
            r7.<init>(r8)
            throw r7
    }
}
