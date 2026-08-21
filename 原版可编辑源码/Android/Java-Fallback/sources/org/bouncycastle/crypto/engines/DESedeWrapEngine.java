package org.bouncycastle.crypto.engines;

public class DESedeWrapEngine implements org.bouncycastle.crypto.Wrapper {
    private static final byte[] IV2 = null;
    byte[] digest;
    private org.bouncycastle.crypto.modes.CBCBlockCipher engine;
    private boolean forWrapping;
    private byte[] iv;
    private org.bouncycastle.crypto.params.KeyParameter param;
    private org.bouncycastle.crypto.params.ParametersWithIV paramPlusIV;
    org.bouncycastle.crypto.Digest sha1;

    static {
            r0 = 8
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [74, -35, -94, 44, 121, -24, 33, 5} // fill-array
            org.bouncycastle.crypto.engines.DESedeWrapEngine.IV2 = r0
            return
    }

    public DESedeWrapEngine() {
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
            java.lang.String r0 = "DESede"
            return r0
    }

    @Override
    public void init(boolean r4, org.bouncycastle.crypto.CipherParameters r5) {
            r3 = this;
            r3.forWrapping = r4
            org.bouncycastle.crypto.modes.CBCBlockCipher r4 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.DESedeEngine r0 = new org.bouncycastle.crypto.engines.DESedeEngine
            r0.<init>()
            r4.<init>(r0)
            r3.engine = r4
            boolean r4 = r5 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r4 == 0) goto L20
            org.bouncycastle.crypto.params.ParametersWithRandom r5 = (org.bouncycastle.crypto.params.ParametersWithRandom) r5
            org.bouncycastle.crypto.CipherParameters r4 = r5.getParameters()
            java.security.SecureRandom r5 = r5.getRandom()
            r2 = r5
            r5 = r4
            r4 = r2
            goto L25
        L20:
            java.security.SecureRandom r4 = new java.security.SecureRandom
            r4.<init>()
        L25:
            boolean r0 = r5 instanceof org.bouncycastle.crypto.params.KeyParameter
            r1 = 8
            if (r0 == 0) goto L46
            org.bouncycastle.crypto.params.KeyParameter r5 = (org.bouncycastle.crypto.params.KeyParameter) r5
            r3.param = r5
            boolean r5 = r3.forWrapping
            if (r5 == 0) goto L7a
            byte[] r5 = new byte[r1]
            r3.iv = r5
            r4.nextBytes(r5)
            org.bouncycastle.crypto.params.ParametersWithIV r4 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r5 = r3.param
            byte[] r0 = r3.iv
            r4.<init>(r5, r0)
            r3.paramPlusIV = r4
            goto L7a
        L46:
            boolean r4 = r5 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r4 == 0) goto L7a
            org.bouncycastle.crypto.params.ParametersWithIV r5 = (org.bouncycastle.crypto.params.ParametersWithIV) r5
            r3.paramPlusIV = r5
            byte[] r4 = r5.getIV()
            r3.iv = r4
            org.bouncycastle.crypto.params.ParametersWithIV r4 = r3.paramPlusIV
            org.bouncycastle.crypto.CipherParameters r4 = r4.getParameters()
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            r3.param = r4
            boolean r4 = r3.forWrapping
            if (r4 == 0) goto L72
            byte[] r4 = r3.iv
            if (r4 == 0) goto L6a
            int r4 = r4.length
            if (r4 != r1) goto L6a
            goto L7a
        L6a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "IV is not 8 octets"
            r4.<init>(r5)
            throw r4
        L72:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "You should not supply an IV for unwrapping"
            r4.<init>(r5)
            throw r4
        L7a:
            return
    }

    @Override
    public byte[] unwrap(byte[] r5, int r6, int r7) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r4 = this;
            boolean r0 = r4.forWrapping
            if (r0 != 0) goto Lcc
            if (r5 == 0) goto Lc4
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r4.engine
            int r0 = r0.getBlockSize()
            int r0 = r7 % r0
            if (r0 != 0) goto La7
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r1 = r4.param
            byte[] r2 = org.bouncycastle.crypto.engines.DESedeWrapEngine.IV2
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
            org.bouncycastle.crypto.params.KeyParameter r0 = r4.param
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
            if (r5 == 0) goto L9f
            return r0
        L9f:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "Checksum inside ciphertext is corrupted"
            r5.<init>(r6)
            throw r5
        La7:
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
        Lc4:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "Null pointer as ciphertext"
            r5.<init>(r6)
            throw r5
        Lcc:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "Not set for unwrapping"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public byte[] wrap(byte[] r7, int r8, int r9) {
            r6 = this;
            boolean r0 = r6.forWrapping
            if (r0 == 0) goto L95
            byte[] r0 = new byte[r9]
            r1 = 0
            java.lang.System.arraycopy(r7, r8, r0, r1, r9)
            byte[] r7 = r6.calculateCMSKeyChecksum(r0)
            int r8 = r7.length
            int r8 = r8 + r9
            byte[] r2 = new byte[r8]
            java.lang.System.arraycopy(r0, r1, r2, r1, r9)
            int r0 = r7.length
            java.lang.System.arraycopy(r7, r1, r2, r9, r0)
            byte[] r7 = new byte[r8]
            java.lang.System.arraycopy(r2, r1, r7, r1, r8)
            org.bouncycastle.crypto.modes.CBCBlockCipher r9 = r6.engine
            int r9 = r9.getBlockSize()
            int r9 = r8 / r9
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            int r0 = r0.getBlockSize()
            int r0 = r8 % r0
            if (r0 != 0) goto L8d
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            org.bouncycastle.crypto.params.ParametersWithIV r2 = r6.paramPlusIV
            r3 = 1
            r0.init(r3, r2)
            r0 = 0
        L39:
            if (r0 >= r9) goto L4b
            org.bouncycastle.crypto.modes.CBCBlockCipher r2 = r6.engine
            int r2 = r2.getBlockSize()
            int r2 = r2 * r0
            org.bouncycastle.crypto.modes.CBCBlockCipher r4 = r6.engine
            r4.processBlock(r7, r2, r7, r2)
            int r0 = r0 + 1
            goto L39
        L4b:
            byte[] r0 = r6.iv
            int r2 = r0.length
            int r2 = r2 + r8
            byte[] r4 = new byte[r2]
            int r5 = r0.length
            java.lang.System.arraycopy(r0, r1, r4, r1, r5)
            byte[] r0 = r6.iv
            int r0 = r0.length
            java.lang.System.arraycopy(r7, r1, r4, r0, r8)
            byte[] r7 = new byte[r2]
            r8 = 0
        L5e:
            if (r8 >= r2) goto L6a
            int r0 = r8 + 1
            int r5 = r2 - r0
            r5 = r4[r5]
            r7[r8] = r5
            r8 = r0
            goto L5e
        L6a:
            org.bouncycastle.crypto.params.ParametersWithIV r8 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r0 = r6.param
            byte[] r2 = org.bouncycastle.crypto.engines.DESedeWrapEngine.IV2
            r8.<init>(r0, r2)
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            r0.init(r3, r8)
        L78:
            int r8 = r9 + 1
            if (r1 >= r8) goto L8c
            org.bouncycastle.crypto.modes.CBCBlockCipher r8 = r6.engine
            int r8 = r8.getBlockSize()
            int r8 = r8 * r1
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = r6.engine
            r0.processBlock(r7, r8, r7, r8)
            int r1 = r1 + 1
            goto L78
        L8c:
            return r7
        L8d:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "Not multiple of block length"
            r7.<init>(r8)
            throw r7
        L95:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "Not initialized for wrapping"
            r7.<init>(r8)
            throw r7
    }
}
