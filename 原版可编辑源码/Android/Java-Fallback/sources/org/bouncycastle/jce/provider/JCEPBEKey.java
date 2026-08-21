package org.bouncycastle.jce.provider;

public class JCEPBEKey implements javax.crypto.interfaces.PBEKey {
    java.lang.String algorithm;
    int digest;
    int ivSize;
    int keySize;
    org.bouncycastle.asn1.DERObjectIdentifier oid;
    org.bouncycastle.crypto.CipherParameters param;
    javax.crypto.spec.PBEKeySpec pbeKeySpec;
    boolean tryWrong;
    int type;

    public JCEPBEKey(java.lang.String r2, org.bouncycastle.asn1.DERObjectIdentifier r3, int r4, int r5, int r6, int r7, javax.crypto.spec.PBEKeySpec r8, org.bouncycastle.crypto.CipherParameters r9) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.tryWrong = r0
            r1.algorithm = r2
            r1.oid = r3
            r1.type = r4
            r1.digest = r5
            r1.keySize = r6
            r1.ivSize = r7
            r1.pbeKeySpec = r8
            r1.param = r9
            return
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = r1.algorithm
            return r0
    }

    int getDigest() {
            r1 = this;
            int r0 = r1.digest
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r2 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r2.param
            if (r0 == 0) goto L15
            boolean r1 = r0 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r1 == 0) goto Le
            org.bouncycastle.crypto.params.ParametersWithIV r0 = (org.bouncycastle.crypto.params.ParametersWithIV) r0
            org.bouncycastle.crypto.CipherParameters r0 = r0.getParameters()
        Le:
            org.bouncycastle.crypto.params.KeyParameter r0 = (org.bouncycastle.crypto.params.KeyParameter) r0
            byte[] r0 = r0.getKey()
            return r0
        L15:
            int r0 = r2.type
            r1 = 2
            if (r0 != r1) goto L25
            javax.crypto.spec.PBEKeySpec r0 = r2.pbeKeySpec
            char[] r0 = r0.getPassword()
            byte[] r0 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS12PasswordToBytes(r0)
            return r0
        L25:
            javax.crypto.spec.PBEKeySpec r0 = r2.pbeKeySpec
            char[] r0 = r0.getPassword()
            byte[] r0 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS5PasswordToBytes(r0)
            return r0
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            java.lang.String r0 = "RAW"
            return r0
    }

    @Override
    public int getIterationCount() {
            r1 = this;
            javax.crypto.spec.PBEKeySpec r0 = r1.pbeKeySpec
            int r0 = r0.getIterationCount()
            return r0
    }

    int getIvSize() {
            r1 = this;
            int r0 = r1.ivSize
            return r0
    }

    int getKeySize() {
            r1 = this;
            int r0 = r1.keySize
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getOID() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.oid
            return r0
    }

    org.bouncycastle.crypto.CipherParameters getParam() {
            r1 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r1.param
            return r0
    }

    @Override
    public char[] getPassword() {
            r1 = this;
            javax.crypto.spec.PBEKeySpec r0 = r1.pbeKeySpec
            char[] r0 = r0.getPassword()
            return r0
    }

    @Override
    public byte[] getSalt() {
            r1 = this;
            javax.crypto.spec.PBEKeySpec r0 = r1.pbeKeySpec
            byte[] r0 = r0.getSalt()
            return r0
    }

    int getType() {
            r1 = this;
            int r0 = r1.type
            return r0
    }

    void setTryWrongPKCS12Zero(boolean r1) {
            r0 = this;
            r0.tryWrong = r1
            return
    }

    boolean shouldTryWrongPKCS12() {
            r1 = this;
            boolean r0 = r1.tryWrong
            return r0
    }
}
