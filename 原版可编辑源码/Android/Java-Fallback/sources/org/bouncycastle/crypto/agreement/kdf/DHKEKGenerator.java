package org.bouncycastle.crypto.agreement.kdf;

public class DHKEKGenerator implements org.bouncycastle.crypto.DerivationFunction {
    private org.bouncycastle.asn1.DERObjectIdentifier algorithm;
    private final org.bouncycastle.crypto.Digest digest;
    private int keySize;
    private byte[] partyAInfo;
    private byte[] z;

    public DHKEKGenerator(org.bouncycastle.crypto.Digest r1) {
            r0 = this;
            r0.<init>()
            r0.digest = r1
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
    public int generateBytes(byte[] r13, int r14, int r15) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalArgumentException {
            r12 = this;
            int r0 = r13.length
            int r0 = r0 - r15
            if (r0 < r14) goto Lad
            long r0 = (long) r15
            org.bouncycastle.crypto.Digest r2 = r12.digest
            int r2 = r2.getDigestSize()
            r3 = 8589934591(0x1ffffffff, double:4.2439915814E-314)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 > 0) goto La5
            long r3 = (long) r2
            long r0 = r0 + r3
            r5 = 1
            long r0 = r0 - r5
            long r0 = r0 / r3
            int r1 = (int) r0
            org.bouncycastle.crypto.Digest r0 = r12.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            r3 = 1
            r4 = 0
            r5 = 0
            r6 = 1
        L27:
            if (r5 >= r1) goto L9f
            org.bouncycastle.crypto.Digest r7 = r12.digest
            byte[] r8 = r12.z
            int r9 = r8.length
            r7.update(r8, r4, r9)
            org.bouncycastle.asn1.ASN1EncodableVector r7 = new org.bouncycastle.asn1.ASN1EncodableVector
            r7.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r8 = new org.bouncycastle.asn1.ASN1EncodableVector
            r8.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r9 = r12.algorithm
            r8.add(r9)
            org.bouncycastle.asn1.DEROctetString r9 = new org.bouncycastle.asn1.DEROctetString
            byte[] r10 = r12.integerToBytes(r6)
            r9.<init>(r10)
            r8.add(r9)
            org.bouncycastle.asn1.DERSequence r9 = new org.bouncycastle.asn1.DERSequence
            r9.<init>(r8)
            r7.add(r9)
            byte[] r8 = r12.partyAInfo
            if (r8 == 0) goto L67
            org.bouncycastle.asn1.DERTaggedObject r8 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DEROctetString r9 = new org.bouncycastle.asn1.DEROctetString
            byte[] r10 = r12.partyAInfo
            r9.<init>(r10)
            r8.<init>(r3, r4, r9)
            r7.add(r8)
        L67:
            org.bouncycastle.asn1.DERTaggedObject r8 = new org.bouncycastle.asn1.DERTaggedObject
            r9 = 2
            org.bouncycastle.asn1.DEROctetString r10 = new org.bouncycastle.asn1.DEROctetString
            int r11 = r12.keySize
            byte[] r11 = r12.integerToBytes(r11)
            r10.<init>(r11)
            r8.<init>(r3, r9, r10)
            r7.add(r8)
            org.bouncycastle.asn1.DERSequence r8 = new org.bouncycastle.asn1.DERSequence
            r8.<init>(r7)
            byte[] r7 = r8.getDEREncoded()
            org.bouncycastle.crypto.Digest r8 = r12.digest
            int r9 = r7.length
            r8.update(r7, r4, r9)
            org.bouncycastle.crypto.Digest r7 = r12.digest
            r7.doFinal(r0, r4)
            if (r15 <= r2) goto L97
            java.lang.System.arraycopy(r0, r4, r13, r14, r2)
            int r14 = r14 + r2
            int r15 = r15 - r2
            goto L9a
        L97:
            java.lang.System.arraycopy(r0, r4, r13, r14, r15)
        L9a:
            int r6 = r6 + 1
            int r5 = r5 + 1
            goto L27
        L9f:
            org.bouncycastle.crypto.Digest r13 = r12.digest
            r13.reset()
            return r15
        La5:
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.String r14 = "Output length too large"
            r13.<init>(r14)
            throw r13
        Lad:
            org.bouncycastle.crypto.DataLengthException r13 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r14 = "output buffer too small"
            r13.<init>(r14)
            throw r13
    }

    @Override
    public org.bouncycastle.crypto.Digest getDigest() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
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
            byte[] r0 = r2.getZ()
            r1.z = r0
            byte[] r2 = r2.getExtraInfo()
            r1.partyAInfo = r2
            return
    }
}
