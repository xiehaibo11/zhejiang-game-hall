package org.bouncycastle.crypto.tls;

public class TlsBlockCipherCipherSuite extends org.bouncycastle.crypto.tls.TlsCipherSuite {
    private int cipherKeySize;
    private org.bouncycastle.crypto.BlockCipher decryptCipher;
    private org.bouncycastle.crypto.BlockCipher encryptCipher;
    private short keyExchange;
    private org.bouncycastle.crypto.Digest readDigest;
    private org.bouncycastle.crypto.tls.TlsMac readMac;
    private org.bouncycastle.crypto.Digest writeDigest;
    private org.bouncycastle.crypto.tls.TlsMac writeMac;

    protected TlsBlockCipherCipherSuite(org.bouncycastle.crypto.BlockCipher r1, org.bouncycastle.crypto.BlockCipher r2, org.bouncycastle.crypto.Digest r3, org.bouncycastle.crypto.Digest r4, int r5, short r6) {
            r0 = this;
            r0.<init>()
            r0.encryptCipher = r1
            r0.decryptCipher = r2
            r0.writeDigest = r3
            r0.readDigest = r4
            r0.cipherKeySize = r5
            r0.keyExchange = r6
            return
    }

    private void initCipher(boolean r2, org.bouncycastle.crypto.BlockCipher r3, byte[] r4, int r5, int r6, int r7) {
            r1 = this;
            org.bouncycastle.crypto.params.KeyParameter r0 = new org.bouncycastle.crypto.params.KeyParameter
            r0.<init>(r4, r6, r5)
            org.bouncycastle.crypto.params.ParametersWithIV r5 = new org.bouncycastle.crypto.params.ParametersWithIV
            int r6 = r3.getBlockSize()
            r5.<init>(r0, r4, r7, r6)
            r3.init(r2, r5)
            return
    }

    @Override
    protected byte[] decodeCiphertext(short r8, byte[] r9, int r10, int r11, org.bouncycastle.crypto.tls.TlsProtocolHandler r12) throws java.io.IOException {
            r7 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r7.decryptCipher
            int r0 = r0.getBlockSize()
            r1 = 0
            r2 = 0
        L8:
            if (r2 >= r11) goto L13
            org.bouncycastle.crypto.BlockCipher r3 = r7.decryptCipher
            int r4 = r2 + r10
            r3.processBlock(r9, r4, r9, r4)
            int r2 = r2 + r0
            goto L8
        L13:
            int r0 = r10 + r11
            r2 = 1
            int r0 = r0 - r2
            r3 = r9[r0]
            int r4 = r0 - r3
            if (r4 >= 0) goto L20
            r3 = 0
            r5 = 1
            goto L2e
        L20:
            r4 = 0
            r5 = 0
        L22:
            if (r4 > r3) goto L2e
            int r6 = r0 - r4
            r6 = r9[r6]
            if (r6 == r3) goto L2b
            r5 = 1
        L2b:
            int r4 = r4 + 1
            goto L22
        L2e:
            org.bouncycastle.crypto.tls.TlsMac r0 = r7.readMac
            int r0 = r0.getSize()
            int r11 = r11 - r0
            int r11 = r11 - r3
            int r11 = r11 - r2
            org.bouncycastle.crypto.tls.TlsMac r0 = r7.readMac
            byte[] r8 = r0.calculateMac(r8, r9, r10, r11)
            r0 = 0
        L3e:
            int r3 = r8.length
            if (r0 >= r3) goto L4e
            int r3 = r10 + r11
            int r3 = r3 + r0
            r3 = r9[r3]
            r4 = r8[r0]
            if (r3 == r4) goto L4b
            r5 = 1
        L4b:
            int r0 = r0 + 1
            goto L3e
        L4e:
            if (r5 == 0) goto L56
            r8 = 2
            r0 = 20
            r12.failWithError(r8, r0)
        L56:
            byte[] r8 = new byte[r11]
            java.lang.System.arraycopy(r9, r10, r8, r1, r11)
            return r8
    }

    @Override
    protected byte[] encodePlaintext(short r7, byte[] r8, int r9, int r10) {
            r6 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r6.encryptCipher
            int r0 = r0.getBlockSize()
            org.bouncycastle.crypto.tls.TlsMac r1 = r6.writeMac
            int r1 = r1.getSize()
            int r1 = r1 + r10
            int r1 = r1 + 1
            int r1 = r1 % r0
            int r1 = r0 - r1
            org.bouncycastle.crypto.tls.TlsMac r2 = r6.writeMac
            int r2 = r2.getSize()
            int r2 = r2 + r10
            int r2 = r2 + r1
            int r2 = r2 + 1
            byte[] r3 = new byte[r2]
            r4 = 0
            java.lang.System.arraycopy(r8, r9, r3, r4, r10)
            org.bouncycastle.crypto.tls.TlsMac r5 = r6.writeMac
            byte[] r7 = r5.calculateMac(r7, r8, r9, r10)
            int r8 = r7.length
            java.lang.System.arraycopy(r7, r4, r3, r10, r8)
            int r7 = r7.length
            int r10 = r10 + r7
            r7 = 0
        L2f:
            if (r7 > r1) goto L39
            int r8 = r7 + r10
            byte r9 = (byte) r1
            r3[r8] = r9
            int r7 = r7 + 1
            goto L2f
        L39:
            if (r4 >= r2) goto L42
            org.bouncycastle.crypto.BlockCipher r7 = r6.encryptCipher
            r7.processBlock(r3, r4, r3, r4)
            int r4 = r4 + r0
            goto L39
        L42:
            return r3
    }

    @Override
    protected short getKeyExchangeAlgorithm() {
            r1 = this;
            short r0 = r1.keyExchange
            return r0
    }

    @Override
    protected void init(byte[] r9, byte[] r10, byte[] r11) {
            r8 = this;
            int r0 = r8.cipherKeySize
            int r0 = r0 * 2
            org.bouncycastle.crypto.Digest r1 = r8.writeDigest
            int r1 = r1.getDigestSize()
            int r1 = r1 * 2
            int r0 = r0 + r1
            org.bouncycastle.crypto.BlockCipher r1 = r8.encryptCipher
            int r1 = r1.getBlockSize()
            int r1 = r1 * 2
            int r0 = r0 + r1
            byte[] r0 = new byte[r0]
            int r1 = r10.length
            int r2 = r11.length
            int r1 = r1 + r2
            byte[] r1 = new byte[r1]
            int r2 = r11.length
            int r3 = r10.length
            r4 = 0
            java.lang.System.arraycopy(r10, r4, r1, r2, r3)
            int r10 = r11.length
            java.lang.System.arraycopy(r11, r4, r1, r4, r10)
            java.lang.String r10 = "key expansion"
            byte[] r10 = org.bouncycastle.crypto.tls.TlsUtils.toByteArray(r10)
            org.bouncycastle.crypto.tls.TlsUtils.PRF(r9, r10, r1, r0)
            org.bouncycastle.crypto.tls.TlsMac r9 = new org.bouncycastle.crypto.tls.TlsMac
            org.bouncycastle.crypto.Digest r10 = r8.writeDigest
            int r11 = r10.getDigestSize()
            r9.<init>(r10, r0, r4, r11)
            r8.writeMac = r9
            org.bouncycastle.crypto.Digest r9 = r8.writeDigest
            int r9 = r9.getDigestSize()
            int r9 = r9 + r4
            org.bouncycastle.crypto.tls.TlsMac r10 = new org.bouncycastle.crypto.tls.TlsMac
            org.bouncycastle.crypto.Digest r11 = r8.readDigest
            int r1 = r11.getDigestSize()
            r10.<init>(r11, r0, r9, r1)
            r8.readMac = r10
            org.bouncycastle.crypto.Digest r10 = r8.readDigest
            int r10 = r10.getDigestSize()
            int r9 = r9 + r10
            org.bouncycastle.crypto.BlockCipher r3 = r8.encryptCipher
            int r5 = r8.cipherKeySize
            int r10 = r5 * 2
            int r7 = r9 + r10
            r2 = 1
            r1 = r8
            r4 = r0
            r6 = r9
            r1.initCipher(r2, r3, r4, r5, r6, r7)
            int r5 = r8.cipherKeySize
            int r6 = r9 + r5
            org.bouncycastle.crypto.BlockCipher r3 = r8.decryptCipher
            int r9 = r6 + r5
            int r10 = r3.getBlockSize()
            int r7 = r9 + r10
            r2 = 0
            r1.initCipher(r2, r3, r4, r5, r6, r7)
            return
    }
}
