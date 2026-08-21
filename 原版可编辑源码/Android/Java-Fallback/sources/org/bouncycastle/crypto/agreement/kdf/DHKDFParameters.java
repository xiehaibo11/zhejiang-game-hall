package org.bouncycastle.crypto.agreement.kdf;

public class DHKDFParameters implements org.bouncycastle.crypto.DerivationParameters {
    private final org.bouncycastle.asn1.DERObjectIdentifier algorithm;
    private final byte[] extraInfo;
    private final int keySize;
    private final byte[] z;

    public DHKDFParameters(org.bouncycastle.asn1.DERObjectIdentifier r1, int r2, byte[] r3) {
            r0 = this;
            r0.<init>()
            r0.algorithm = r1
            r0.keySize = r2
            r0.z = r3
            r1 = 0
            r0.extraInfo = r1
            return
    }

    public DHKDFParameters(org.bouncycastle.asn1.DERObjectIdentifier r1, int r2, byte[] r3, byte[] r4) {
            r0 = this;
            r0.<init>()
            r0.algorithm = r1
            r0.keySize = r2
            r0.z = r3
            r0.extraInfo = r4
            return
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.algorithm
            return r0
    }

    public byte[] getExtraInfo() {
            r1 = this;
            byte[] r0 = r1.extraInfo
            return r0
    }

    public int getKeySize() {
            r1 = this;
            int r0 = r1.keySize
            return r0
    }

    public byte[] getZ() {
            r1 = this;
            byte[] r0 = r1.z
            return r0
    }
}
