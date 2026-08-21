package org.bouncycastle.crypto.engines;

public class RC2WrapEngine implements org.bouncycastle.crypto.Wrapper {
    private static final byte[] IV2 = null;
    byte[] digest;
    private org.bouncycastle.crypto.modes.CBCBlockCipher engine;
    private boolean forWrapping;
    private byte[] iv;
    private org.bouncycastle.crypto.CipherParameters param;
    private org.bouncycastle.crypto.params.ParametersWithIV paramPlusIV;
    org.bouncycastle.crypto.Digest sha1;
    private java.security.SecureRandom sr;

    static {
            r0 = 8
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [74, -35, -94, 44, 121, -24, 33, 5} // fill-array
            org.bouncycastle.crypto.engines.RC2WrapEngine.IV2 = r0
            return
    }

    public RC2WrapEngine() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
            r0.<init>()
            r1.sha1 = r0
            r0 = 20
            byte[] r0 = new byte[r0]
            r1.digest = r0
            return
    }

    private byte[] calculateCMSKeyChecksum(byte[] r6) {
            r5 = this;
            r0 = 8
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.Digest r2 = r5.sha1
            int r3 = r6.length
            r4 = 0
            r2.update(r6, r4, r3)
            org.bouncycastle.crypto.Digest r6 = r5.sha1
            byte[] r2 = r5.digest
            r6.doFinal(r2, r4)
            byte[] r6 = r5.digest
            java.lang.System.arraycopy(r6, r4, r1, r4, r0)
            return r1
    }

    private boolean checkCMSKeyChecksum(byte[] r5, byte[] r6) {
            r4 = this;
            byte[] r5 = r4.calculateCMSKeyChecksum(r5)
            int r0 = r6.length
            int r1 = r5.length
            r2 = 0
            if (r0 == r1) goto La
            return r2
        La:
            r0 = 0
        Lb:
            int r1 = r6.length
            if (r0 == r1) goto L18
            r1 = r6[r0]
            r3 = r5[r0]
            if (r1 == r3) goto L15
            return r2
        L15:
            int r0 = r0 + 1
            goto Lb
        L18:
            r5 = 1
            return r5
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "RC2"
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            r1.forWrapping = r2
            org.bouncycastle.crypto.modes.CBCBlockCipher r2 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.RC2Engine r0 = new org.bouncycastle.crypto.engines.RC2Engine
            r0.<init>()
            r2.<init>(r0)
            r1.engine = r2
            boolean r2 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r2 == 0) goto L1f
            org.bouncycastle.crypto.params.ParametersWithRandom r3 = (org.bouncycastle.crypto.params.ParametersWithRandom) r3
            java.security.SecureRandom r2 = r3.getRandom()
            r1.sr = r2
            org.bouncycastle.crypto.CipherParameters r3 = r3.getParameters()
            goto L26
        L1f:
            java.security.SecureRandom r2 = new java.security.SecureRandom
            r2.<init>()
            r1.sr = r2
        L26:
            boolean r2 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            r0 = 8
            if (r2 == 0) goto L5a
            org.bouncycastle.crypto.params.ParametersWithIV r3 = (org.bouncycastle.crypto.params.ParametersWithIV) r3
            r1.paramPlusIV = r3
            byte[] r2 = r3.getIV()
            r1.iv = r2
            org.bouncycastle.crypto.params.ParametersWithIV r2 = r1.paramPlusIV
            org.bouncycastle.crypto.CipherParameters r2 = r2.getParameters()
            r1.param = r2
            boolean r2 = r1.forWrapping
            if (r2 == 0) goto L52
            byte[] r2 = r1.iv
            if (r2 == 0) goto L4a
            int r2 = r2.length
            if (r2 != r0) goto L4a
            goto L74
        L4a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "IV is not 8 octets"
            r2.<init>(r3)
            throw r2
        L52:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "You should not supply an IV for unwrapping"
            r2.<init>(r3)
            throw r2
        L5a:
            r1.param = r3
            boolean r2 = r1.forWrapping
            if (r2 == 0) goto L74
            byte[] r2 = new byte[r0]
            r1.iv = r2
            java.security.SecureRandom r3 = r1.sr
            r3.nextBytes(r2)
            org.bouncycastle.crypto.params.ParametersWithIV r2 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.CipherParameters r3 = r1.param
            byte[] r0 = r1.iv
            r2.<init>(r3, r0)
            r1.paramPlusIV = r2
        L74:
            return
    }

    @Override
    public byte[] unwrap(byte[] r5, int r6, int r7) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r4 = this;
            boolean r0 = r4.forWrapping
            if (r0 != 0) goto L100
            if (r5 == 0) goto Lf8
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r4.engine
            int r0 = r0.getBlockSize()
            int r0 = r7 % r0
            if (r0 != 0) goto Ldb
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.CipherParameters r1 = r4.param
            byte[] r2 = org.bouncycastle.crypto.engines.RC2WrapEngine.IV2
            r0.<init>(r1, r2)
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = r4.engine
            r2 = 0
            r1.init(r2, r0)
            byte[] r0 = new byte[r7]
            java.lang.System.arraycopy(r5, r6, r0, r2, r7)
            r5 = 0
        L25:
            org.bouncycastle.crypto.modes.CBCBlockCipher r6 = r4.engine
            int r6 = r6.getBlockSize()
            int r6 = r7 / r6
            if (r5 >= r6) goto L3f
            org.bouncycastle.crypto.modes.CBCBlockCipher r6 = r4.engine
            int r6 = r6.getBlockSize()
            int r6 = r6 * r5
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = r4.engine
            r1.processBlock(r0, r6, r0, r6)
            int r5 = r5 + 1
            goto L25
        L3f:
            byte[] r5 = new byte[r7]
            r6 = 0
        L42:
            if (r6 >= r7) goto L4e
            int r1 = r6 + 1
            int r3 = r7 - r1
            r3 = r0[r3]
            r5[r6] = r3
            r6 = r1
            goto L42
        L4e:
            r6 = 8
            byte[] r0 = new byte[r6]
            r4.iv = r0
            int r7 = r7 - r6
            byte[] r1 = new byte[r7]
            java.lang.System.arraycopy(r5, r2, r0, r2, r6)
            java.lang.System.arraycopy(r5, r6, r1, r2, r7)
            org.bouncycastle.crypto.params.ParametersWithIV r5 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.CipherParameters r0 = r4.param
            byte[] r3 = r4.iv
            r5.<init>(r0, r3)
            r4.paramPlusIV = r5
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r4.engine
            r0.init(r2, r5)
            byte[] r5 = new byte[r7]
            java.lang.System.arraycopy(r1, r2, r5, r2, r7)
            r0 = 0
        L73:
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = r4.engine
            int r1 = r1.getBlockSize()
            int r1 = r7 / r1
            if (r0 >= r1) goto L8d
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = r4.engine
            int r1 = r1.getBlockSize()
            int r1 = r1 * r0
            org.bouncycastle.crypto.modes.CBCBlockCipher r3 = r4.engine
            r3.processBlock(r5, r1, r5, r1)
            int r0 = r0 + 1
            goto L73
        L8d:
            int r7 = r7 - r6
            byte[] r0 = new byte[r7]
            byte[] r1 = new byte[r6]
            java.lang.System.arraycopy(r5, r2, r0, r2, r7)
            java.lang.System.arraycopy(r5, r7, r1, r2, r6)
            boolean r5 = r4.checkCMSKeyChecksum(r0, r1)
            if (r5 == 0) goto Ld3
            r5 = r0[r2]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = 1
            int r5 = r5 + r6
            int r5 = r7 - r5
            r1 = 7
            if (r5 > r1) goto Lb1
            r5 = r0[r2]
            byte[] r7 = new byte[r5]
            java.lang.System.arraycopy(r0, r6, r7, r2, r5)
            return r7
        Lb1:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "too many pad bytes ("
            r1.append(r3)
            r0 = r0[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r6
            int r7 = r7 - r0
            r1.append(r7)
            java.lang.String r6 = ")"
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r5.<init>(r6)
            throw r5
        Ld3:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "Checksum inside ciphertext is corrupted"
            r5.<init>(r6)
            throw r5
        Ldb:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Ciphertext not multiple of "
            r6.append(r7)
            org.bouncycastle.crypto.modes.CBCBlockCipher r7 = r4.engine
            int r7 = r7.getBlockSize()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
        Lf8:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "Null pointer as ciphertext"
            r5.<init>(r6)
            throw r5
        L100:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "Not set for unwrapping"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public byte[] wrap(byte[] r7, int r8, int r9) {
            r6 = this;
            boolean r0 = r6.forWrapping
            if (r0 == 0) goto Lb2
            int r0 = r9 + 1
            int r1 = r0 % 8
            if (r1 == 0) goto Le
            int r1 = 8 - r1
            int r1 = r1 + r0
            goto Lf
        Le:
            r1 = r0
        Lf:
            byte[] r2 = new byte[r1]
            byte r3 = (byte) r9
            r4 = 0
            r2[r4] = r3
            r3 = 1
            java.lang.System.arraycopy(r7, r8, r2, r3, r9)
            int r7 = r1 - r9
            int r7 = r7 - r3
            byte[] r8 = new byte[r7]
            if (r7 <= 0) goto L28
            java.security.SecureRandom r9 = r6.sr
            r9.nextBytes(r8)
            java.lang.System.arraycopy(r8, r4, r2, r0, r7)
        L28:
            byte[] r7 = r6.calculateCMSKeyChecksum(r2)
            int r8 = r7.length
            int r8 = r8 + r1
            byte[] r9 = new byte[r8]
            java.lang.System.arraycopy(r2, r4, r9, r4, r1)
            int r0 = r7.length
            java.lang.System.arraycopy(r7, r4, r9, r1, r0)
            byte[] r7 = new byte[r8]
            java.lang.System.arraycopy(r9, r4, r7, r4, r8)
            org.bouncycastle.crypto.modes.CBCBlockCipher r9 = r6.engine
            int r9 = r9.getBlockSize()
            int r9 = r8 / r9
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            int r0 = r0.getBlockSize()
            int r0 = r8 % r0
            if (r0 != 0) goto Laa
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            org.bouncycastle.crypto.params.ParametersWithIV r1 = r6.paramPlusIV
            r0.init(r3, r1)
            r0 = 0
        L56:
            if (r0 >= r9) goto L68
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = r6.engine
            int r1 = r1.getBlockSize()
            int r1 = r1 * r0
            org.bouncycastle.crypto.modes.CBCBlockCipher r2 = r6.engine
            r2.processBlock(r7, r1, r7, r1)
            int r0 = r0 + 1
            goto L56
        L68:
            byte[] r0 = r6.iv
            int r1 = r0.length
            int r1 = r1 + r8
            byte[] r2 = new byte[r1]
            int r5 = r0.length
            java.lang.System.arraycopy(r0, r4, r2, r4, r5)
            byte[] r0 = r6.iv
            int r0 = r0.length
            java.lang.System.arraycopy(r7, r4, r2, r0, r8)
            byte[] r7 = new byte[r1]
            r8 = 0
        L7b:
            if (r8 >= r1) goto L87
            int r0 = r8 + 1
            int r5 = r1 - r0
            r5 = r2[r5]
            r7[r8] = r5
            r8 = r0
            goto L7b
        L87:
            org.bouncycastle.crypto.params.ParametersWithIV r8 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.CipherParameters r0 = r6.param
            byte[] r1 = org.bouncycastle.crypto.engines.RC2WrapEngine.IV2
            r8.<init>(r0, r1)
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            r0.init(r3, r8)
        L95:
            int r8 = r9 + 1
            if (r4 >= r8) goto La9
            org.bouncycastle.crypto.modes.CBCBlockCipher r8 = r6.engine
            int r8 = r8.getBlockSize()
            int r8 = r8 * r4
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            r0.processBlock(r7, r8, r7, r8)
            int r4 = r4 + 1
            goto L95
        La9:
            return r7
        Laa:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "Not multiple of block length"
            r7.<init>(r8)
            throw r7
        Lb2:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "Not initialized for wrapping"
            r7.<init>(r8)
            throw r7
    }
}
