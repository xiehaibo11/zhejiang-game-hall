package org.bouncycastle.crypto.engines;

public class IESEngine {
    org.bouncycastle.crypto.BasicAgreement agree;
    org.bouncycastle.crypto.BufferedBlockCipher cipher;
    boolean forEncryption;
    org.bouncycastle.crypto.DerivationFunction kdf;
    org.bouncycastle.crypto.Mac mac;
    byte[] macBuf;
    org.bouncycastle.crypto.params.IESParameters param;
    org.bouncycastle.crypto.CipherParameters privParam;
    org.bouncycastle.crypto.CipherParameters pubParam;

    public IESEngine(org.bouncycastle.crypto.BasicAgreement r1, org.bouncycastle.crypto.DerivationFunction r2, org.bouncycastle.crypto.Mac r3) {
            r0 = this;
            r0.<init>()
            r0.agree = r1
            r0.kdf = r2
            r0.mac = r3
            int r1 = r3.getMacSize()
            byte[] r1 = new byte[r1]
            r0.macBuf = r1
            r1 = 0
            r0.cipher = r1
            return
    }

    public IESEngine(org.bouncycastle.crypto.BasicAgreement r1, org.bouncycastle.crypto.DerivationFunction r2, org.bouncycastle.crypto.Mac r3, org.bouncycastle.crypto.BufferedBlockCipher r4) {
            r0 = this;
            r0.<init>()
            r0.agree = r1
            r0.kdf = r2
            r0.mac = r3
            int r1 = r3.getMacSize()
            byte[] r1 = new byte[r1]
            r0.macBuf = r1
            r0.cipher = r4
            return
    }

    private byte[] decryptBlock(byte[] r11, int r12, int r13, byte[] r14) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r10 = this;
            org.bouncycastle.crypto.params.KDFParameters r0 = new org.bouncycastle.crypto.params.KDFParameters
            org.bouncycastle.crypto.params.IESParameters r1 = r10.param
            byte[] r1 = r1.getDerivationV()
            r0.<init>(r14, r1)
            org.bouncycastle.crypto.params.IESParameters r14 = r10.param
            int r14 = r14.getMacKeySize()
            org.bouncycastle.crypto.DerivationFunction r1 = r10.kdf
            r1.init(r0)
            org.bouncycastle.crypto.Mac r1 = r10.mac
            int r1 = r1.getMacSize()
            int r13 = r13 - r1
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r10.cipher
            r8 = 0
            if (r1 != 0) goto L42
            int r14 = r14 / 8
            int r1 = r13 + r14
            byte[] r0 = r10.generateKdfBytes(r0, r1)
            byte[] r1 = new byte[r13]
            r2 = 0
        L2d:
            if (r2 == r13) goto L3c
            int r3 = r12 + r2
            r3 = r11[r3]
            r4 = r0[r2]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L2d
        L3c:
            org.bouncycastle.crypto.params.KeyParameter r2 = new org.bouncycastle.crypto.params.KeyParameter
            r2.<init>(r0, r13, r14)
            goto L83
        L42:
            org.bouncycastle.crypto.params.IESParameters r1 = r10.param
            org.bouncycastle.crypto.params.IESWithCipherParameters r1 = (org.bouncycastle.crypto.params.IESWithCipherParameters) r1
            int r1 = r1.getCipherKeySize()
            int r1 = r1 / 8
            int r14 = r14 / 8
            int r2 = r1 + r14
            byte[] r0 = r10.generateKdfBytes(r0, r2)
            org.bouncycastle.crypto.BufferedBlockCipher r2 = r10.cipher
            org.bouncycastle.crypto.params.KeyParameter r3 = new org.bouncycastle.crypto.params.KeyParameter
            r3.<init>(r0, r8, r1)
            r2.init(r8, r3)
            org.bouncycastle.crypto.BufferedBlockCipher r2 = r10.cipher
            int r2 = r2.getOutputSize(r13)
            byte[] r9 = new byte[r2]
            org.bouncycastle.crypto.BufferedBlockCipher r2 = r10.cipher
            r7 = 0
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r9
            int r2 = r2.processBytes(r3, r4, r5, r6, r7)
            org.bouncycastle.crypto.BufferedBlockCipher r3 = r10.cipher
            int r3 = r3.doFinal(r9, r2)
            int r2 = r2 + r3
            byte[] r3 = new byte[r2]
            java.lang.System.arraycopy(r9, r8, r3, r8, r2)
            org.bouncycastle.crypto.params.KeyParameter r2 = new org.bouncycastle.crypto.params.KeyParameter
            r2.<init>(r0, r1, r14)
            r1 = r3
        L83:
            org.bouncycastle.crypto.params.IESParameters r14 = r10.param
            byte[] r14 = r14.getEncodingV()
            org.bouncycastle.crypto.Mac r0 = r10.mac
            r0.init(r2)
            org.bouncycastle.crypto.Mac r0 = r10.mac
            r0.update(r11, r12, r13)
            org.bouncycastle.crypto.Mac r0 = r10.mac
            int r2 = r14.length
            r0.update(r14, r8, r2)
            org.bouncycastle.crypto.Mac r14 = r10.mac
            byte[] r0 = r10.macBuf
            r14.doFinal(r0, r8)
            int r12 = r12 + r13
        La1:
            byte[] r13 = r10.macBuf
            int r14 = r13.length
            if (r8 >= r14) goto Lb9
            r13 = r13[r8]
            int r14 = r12 + r8
            r14 = r11[r14]
            if (r13 != r14) goto Lb1
            int r8 = r8 + 1
            goto La1
        Lb1:
            org.bouncycastle.crypto.InvalidCipherTextException r11 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r12 = "Mac codes failed to equal."
            r11.<init>(r12)
            throw r11
        Lb9:
            return r1
    }

    private byte[] encryptBlock(byte[] r11, int r12, int r13, byte[] r14) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r10 = this;
            org.bouncycastle.crypto.params.KDFParameters r0 = new org.bouncycastle.crypto.params.KDFParameters
            org.bouncycastle.crypto.params.IESParameters r1 = r10.param
            byte[] r1 = r1.getDerivationV()
            r0.<init>(r14, r1)
            org.bouncycastle.crypto.params.IESParameters r14 = r10.param
            int r14 = r14.getMacKeySize()
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r10.cipher
            r2 = 0
            if (r1 != 0) goto L3d
            int r14 = r14 / 8
            int r1 = r13 + r14
            byte[] r0 = r10.generateKdfBytes(r0, r1)
            org.bouncycastle.crypto.Mac r1 = r10.mac
            int r1 = r1.getMacSize()
            int r1 = r1 + r13
            byte[] r1 = new byte[r1]
            r3 = 0
        L28:
            if (r3 == r13) goto L37
            int r4 = r12 + r3
            r4 = r11[r4]
            r5 = r0[r3]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r3 + 1
            goto L28
        L37:
            org.bouncycastle.crypto.params.KeyParameter r11 = new org.bouncycastle.crypto.params.KeyParameter
            r11.<init>(r0, r13, r14)
            goto L88
        L3d:
            org.bouncycastle.crypto.params.IESParameters r1 = r10.param
            org.bouncycastle.crypto.params.IESWithCipherParameters r1 = (org.bouncycastle.crypto.params.IESWithCipherParameters) r1
            int r1 = r1.getCipherKeySize()
            int r1 = r1 / 8
            int r14 = r14 / 8
            int r3 = r1 + r14
            byte[] r0 = r10.generateKdfBytes(r0, r3)
            org.bouncycastle.crypto.BufferedBlockCipher r3 = r10.cipher
            org.bouncycastle.crypto.params.KeyParameter r4 = new org.bouncycastle.crypto.params.KeyParameter
            r4.<init>(r0, r2, r1)
            r5 = 1
            r3.init(r5, r4)
            org.bouncycastle.crypto.BufferedBlockCipher r3 = r10.cipher
            int r3 = r3.getOutputSize(r13)
            byte[] r3 = new byte[r3]
            org.bouncycastle.crypto.BufferedBlockCipher r4 = r10.cipher
            r9 = 0
            r5 = r11
            r6 = r12
            r7 = r13
            r8 = r3
            int r11 = r4.processBytes(r5, r6, r7, r8, r9)
            org.bouncycastle.crypto.BufferedBlockCipher r12 = r10.cipher
            int r12 = r12.doFinal(r3, r11)
            int r13 = r11 + r12
            org.bouncycastle.crypto.Mac r11 = r10.mac
            int r11 = r11.getMacSize()
            int r11 = r11 + r13
            byte[] r11 = new byte[r11]
            java.lang.System.arraycopy(r3, r2, r11, r2, r13)
            org.bouncycastle.crypto.params.KeyParameter r12 = new org.bouncycastle.crypto.params.KeyParameter
            r12.<init>(r0, r1, r14)
            r1 = r11
            r11 = r12
        L88:
            org.bouncycastle.crypto.params.IESParameters r12 = r10.param
            byte[] r12 = r12.getEncodingV()
            org.bouncycastle.crypto.Mac r14 = r10.mac
            r14.init(r11)
            org.bouncycastle.crypto.Mac r11 = r10.mac
            r11.update(r1, r2, r13)
            org.bouncycastle.crypto.Mac r11 = r10.mac
            int r14 = r12.length
            r11.update(r12, r2, r14)
            org.bouncycastle.crypto.Mac r11 = r10.mac
            r11.doFinal(r1, r13)
            return r1
    }

    private byte[] generateKdfBytes(org.bouncycastle.crypto.params.KDFParameters r3, int r4) {
            r2 = this;
            byte[] r0 = new byte[r4]
            org.bouncycastle.crypto.DerivationFunction r1 = r2.kdf
            r1.init(r3)
            org.bouncycastle.crypto.DerivationFunction r3 = r2.kdf
            r1 = 0
            r3.generateBytes(r0, r1, r4)
            return r0
    }

    public void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2, org.bouncycastle.crypto.CipherParameters r3, org.bouncycastle.crypto.CipherParameters r4) {
            r0 = this;
            r0.forEncryption = r1
            r0.privParam = r2
            r0.pubParam = r3
            org.bouncycastle.crypto.params.IESParameters r4 = (org.bouncycastle.crypto.params.IESParameters) r4
            r0.param = r4
            return
    }

    public byte[] processBlock(byte[] r3, int r4, int r5) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r2 = this;
            org.bouncycastle.crypto.BasicAgreement r0 = r2.agree
            org.bouncycastle.crypto.CipherParameters r1 = r2.privParam
            r0.init(r1)
            org.bouncycastle.crypto.BasicAgreement r0 = r2.agree
            org.bouncycastle.crypto.CipherParameters r1 = r2.pubParam
            java.math.BigInteger r0 = r0.calculateAgreement(r1)
            boolean r1 = r2.forEncryption
            byte[] r0 = r0.toByteArray()
            if (r1 == 0) goto L1c
            byte[] r3 = r2.encryptBlock(r3, r4, r5, r0)
            return r3
        L1c:
            byte[] r3 = r2.decryptBlock(r3, r4, r5, r0)
            return r3
    }
}
