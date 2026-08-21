package org.bouncycastle.crypto.generators;

public class PKCS5S1ParametersGenerator extends org.bouncycastle.crypto.PBEParametersGenerator {
    private org.bouncycastle.crypto.Digest digest;

    public PKCS5S1ParametersGenerator(org.bouncycastle.crypto.Digest r1) {
            r0 = this;
            r0.<init>()
            r0.digest = r1
            return
    }

    private byte[] generateDerivedKey() {
            r6 = this;
            org.bouncycastle.crypto.Digest r0 = r6.digest
            int r0 = r0.getDigestSize()
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.Digest r2 = r6.digest
            byte[] r3 = r6.password
            byte[] r4 = r6.password
            int r4 = r4.length
            r5 = 0
            r2.update(r3, r5, r4)
            org.bouncycastle.crypto.Digest r2 = r6.digest
            byte[] r3 = r6.salt
            byte[] r4 = r6.salt
            int r4 = r4.length
            r2.update(r3, r5, r4)
            org.bouncycastle.crypto.Digest r2 = r6.digest
            r2.doFinal(r1, r5)
            r2 = 1
        L23:
            int r3 = r6.iterationCount
            if (r2 >= r3) goto L34
            org.bouncycastle.crypto.Digest r3 = r6.digest
            r3.update(r1, r5, r0)
            org.bouncycastle.crypto.Digest r3 = r6.digest
            r3.doFinal(r1, r5)
            int r2 = r2 + 1
            goto L23
        L34:
            return r1
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
            org.bouncycastle.crypto.Digest r0 = r3.digest
            int r0 = r0.getDigestSize()
            if (r4 > r0) goto L15
            byte[] r0 = r3.generateDerivedKey()
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r2 = 0
            r1.<init>(r0, r2, r4)
            return r1
        L15:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't generate a derived key "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " bytes long."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r5, int r6) {
            r4 = this;
            int r5 = r5 / 8
            int r6 = r6 / 8
            int r0 = r5 + r6
            org.bouncycastle.crypto.Digest r1 = r4.digest
            int r1 = r1.getDigestSize()
            if (r0 > r1) goto L1e
            byte[] r0 = r4.generateDerivedKey()
            org.bouncycastle.crypto.params.ParametersWithIV r1 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r2 = new org.bouncycastle.crypto.params.KeyParameter
            r3 = 0
            r2.<init>(r0, r3, r5)
            r1.<init>(r2, r0, r5, r6)
            return r1
        L1e:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "Can't generate a derived key "
            r6.append(r1)
            r6.append(r0)
            java.lang.String r0 = " bytes long."
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
    }
}
