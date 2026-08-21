package org.bouncycastle.crypto.agreement.kdf;

public class ECDHKEKGenerator implements org.bouncycastle.crypto.DerivationFunction {
    private org.bouncycastle.asn1.DERObjectIdentifier algorithm;
    private org.bouncycastle.crypto.DerivationFunction kdf;
    private int keySize;
    private byte[] z;

    public ECDHKEKGenerator(org.bouncycastle.crypto.Digest r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.generators.KDF2BytesGenerator r0 = new org.bouncycastle.crypto.generators.KDF2BytesGenerator
            r0.<init>(r2)
            r1.kdf = r0
            return
    }

    private byte[] integerToBytes(int r4) {
            r3 = this;
            r0 = 4
            byte[] r0 = new byte[r0]
            int r1 = r4 >> 24
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r4 >> 16
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r1 = r4 >> 8
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            byte r4 = (byte) r4
            r1 = 3
            r0[r1] = r4
            return r0
    }

    @Override
    public int generateBytes(byte[] r6, int r7, int r8) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalArgumentException {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r5.algorithm
            org.bouncycastle.asn1.DERNull r3 = new org.bouncycastle.asn1.DERNull
            r3.<init>()
            r1.<init>(r2, r3)
            r0.add(r1)
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            int r3 = r5.keySize
            byte[] r3 = r5.integerToBytes(r3)
            r2.<init>(r3)
            r3 = 1
            r4 = 2
            r1.<init>(r3, r4, r2)
            r0.add(r1)
            org.bouncycastle.crypto.DerivationFunction r1 = r5.kdf
            org.bouncycastle.crypto.params.KDFParameters r2 = new org.bouncycastle.crypto.params.KDFParameters
            byte[] r3 = r5.z
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence
            r4.<init>(r0)
            byte[] r0 = r4.getDEREncoded()
            r2.<init>(r3, r0)
            r1.init(r2)
            org.bouncycastle.crypto.DerivationFunction r0 = r5.kdf
            int r6 = r0.generateBytes(r6, r7, r8)
            return r6
    }

    @Override
    public org.bouncycastle.crypto.Digest getDigest() {
            r1 = this;
            org.bouncycastle.crypto.DerivationFunction r0 = r1.kdf
            org.bouncycastle.crypto.Digest r0 = r0.getDigest()
            return r0
    }

    @Override
    public void init(org.bouncycastle.crypto.DerivationParameters r2) {
            r1 = this;
            org.bouncycastle.crypto.agreement.kdf.DHKDFParameters r2 = (org.bouncycastle.crypto.agreement.kdf.DHKDFParameters) r2
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r2.getAlgorithm()
            r1.algorithm = r0
            int r0 = r2.getKeySize()
            r1.keySize = r0
            byte[] r2 = r2.getZ()
            r1.z = r2
            return
    }
}
