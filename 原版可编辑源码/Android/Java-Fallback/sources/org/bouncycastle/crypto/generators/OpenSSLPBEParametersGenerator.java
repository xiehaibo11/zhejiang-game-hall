package org.bouncycastle.crypto.generators;

public class OpenSSLPBEParametersGenerator extends org.bouncycastle.crypto.PBEParametersGenerator {
    private org.bouncycastle.crypto.Digest digest;

    public OpenSSLPBEParametersGenerator() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.digests.MD5Digest r0 = new org.bouncycastle.crypto.digests.MD5Digest
            r0.<init>()
            r1.digest = r0
            return
    }

    private byte[] generateDerivedKey(int r9) {
            r8 = this;
            org.bouncycastle.crypto.Digest r0 = r8.digest
            int r0 = r0.getDigestSize()
            byte[] r1 = new byte[r0]
            byte[] r2 = new byte[r9]
            r3 = 0
            r4 = 0
        Lc:
            org.bouncycastle.crypto.Digest r5 = r8.digest
            byte[] r6 = r8.password
            byte[] r7 = r8.password
            int r7 = r7.length
            r5.update(r6, r3, r7)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            byte[] r6 = r8.salt
            byte[] r7 = r8.salt
            int r7 = r7.length
            r5.update(r6, r3, r7)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            r5.doFinal(r1, r3)
            if (r9 <= r0) goto L29
            r5 = r0
            goto L2a
        L29:
            r5 = r9
        L2a:
            java.lang.System.arraycopy(r1, r3, r2, r4, r5)
            int r4 = r4 + r5
            int r9 = r9 - r5
            if (r9 != 0) goto L32
            return r2
        L32:
            org.bouncycastle.crypto.Digest r5 = r8.digest
            r5.reset()
            org.bouncycastle.crypto.Digest r5 = r8.digest
            r5.update(r1, r3, r0)
            goto Lc
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedMacParameters(int r1) {
            r0 = this;
            org.bouncycastle.crypto.CipherParameters r1 = r0.generateDerivedParameters(r1)
            return r1
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r4) {
            r3 = this;
            int r4 = r4 / 8
            byte[] r0 = r3.generateDerivedKey(r4)
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r2 = 0
            r1.<init>(r0, r2, r4)
            return r1
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r5, int r6) {
            r4 = this;
            int r5 = r5 / 8
            int r6 = r6 / 8
            int r0 = r5 + r6
            byte[] r0 = r4.generateDerivedKey(r0)
            org.bouncycastle.crypto.params.ParametersWithIV r1 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r2 = new org.bouncycastle.crypto.params.KeyParameter
            r3 = 0
            r2.<init>(r0, r3, r5)
            r1.<init>(r2, r0, r5, r6)
            return r1
    }

    public void init(byte[] r2, byte[] r3) {
            r1 = this;
            r0 = 1
            super.init(r2, r3, r0)
            return
    }
}
