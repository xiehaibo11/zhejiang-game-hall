package org.bouncycastle.asn1.cmp;

public class OOBCertHash extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.crmf.CertId certId;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier hashAlg;
    private org.bouncycastle.asn1.DERBitString hashVal;

    private OOBCertHash(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()
            r1 = 1
            int r0 = r0 - r1
            int r2 = r0 + (-1)
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r0 = org.bouncycastle.asn1.DERBitString.getInstance(r0)
            r4.hashVal = r0
        L15:
            if (r2 < 0) goto L33
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r3 = r0.getTagNo()
            if (r3 != 0) goto L2a
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0, r1)
            r4.hashAlg = r0
            goto L30
        L2a:
            org.bouncycastle.asn1.crmf.CertId r0 = org.bouncycastle.asn1.crmf.CertId.getInstance(r0, r1)
            r4.certId = r0
        L30:
            int r2 = r2 + (-1)
            goto L15
        L33:
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r3, int r4, org.bouncycastle.asn1.ASN1Encodable r5) {
            r2 = this;
            if (r5 == 0) goto Lb
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 1
            r0.<init>(r1, r4, r5)
            r3.add(r0)
        Lb:
            return
    }

    public static org.bouncycastle.asn1.cmp.OOBCertHash getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.OOBCertHash
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.OOBCertHash r3 = (org.bouncycastle.asn1.cmp.OOBCertHash) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.OOBCertHash r0 = new org.bouncycastle.asn1.cmp.OOBCertHash
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.crmf.CertId getCertId() {
            r1 = this;
            org.bouncycastle.asn1.crmf.CertId r0 = r1.certId
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getHashAlg() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.hashAlg
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.hashAlg
            r2 = 0
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.crmf.CertId r1 = r3.certId
            r2 = 1
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERBitString r1 = r3.hashVal
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
