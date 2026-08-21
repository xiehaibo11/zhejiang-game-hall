package org.bouncycastle.asn1.esf;

public class SignerAttribute extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AttributeCertificate certifiedAttributes;
    private org.bouncycastle.asn1.ASN1Sequence claimedAttributes;

    private SignerAttribute(java.lang.Object r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERTaggedObject r3 = (org.bouncycastle.asn1.DERTaggedObject) r3
            int r0 = r3.getTagNo()
            r1 = 1
            if (r0 != 0) goto L1a
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r3, r1)
            r2.claimedAttributes = r3
            goto L26
        L1a:
            int r0 = r3.getTagNo()
            if (r0 != r1) goto L27
            org.bouncycastle.asn1.x509.AttributeCertificate r3 = org.bouncycastle.asn1.x509.AttributeCertificate.getInstance(r3)
            r2.certifiedAttributes = r3
        L26:
            return
        L27:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "illegal tag."
            r3.<init>(r0)
            throw r3
    }

    public SignerAttribute(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.claimedAttributes = r1
            return
    }

    public SignerAttribute(org.bouncycastle.asn1.x509.AttributeCertificate r1) {
            r0 = this;
            r0.<init>()
            r0.certifiedAttributes = r1
            return
    }

    public static org.bouncycastle.asn1.esf.SignerAttribute getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L35
            boolean r0 = r3 instanceof org.bouncycastle.asn1.esf.SignerAttribute
            if (r0 == 0) goto L7
            goto L35
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L11
            org.bouncycastle.asn1.esf.SignerAttribute r0 = new org.bouncycastle.asn1.esf.SignerAttribute
            r0.<init>(r3)
            return r0
        L11:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'SignerAttribute' factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L35:
            org.bouncycastle.asn1.esf.SignerAttribute r3 = (org.bouncycastle.asn1.esf.SignerAttribute) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.AttributeCertificate getCertifiedAttributes() {
            r1 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r1.certifiedAttributes
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getClaimedAttributes() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.claimedAttributes
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Sequence r1 = r4.claimedAttributes
            if (r1 == 0) goto L12
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.claimedAttributes
            r1.<init>(r2, r3)
            goto L1a
        L12:
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 1
            org.bouncycastle.asn1.x509.AttributeCertificate r3 = r4.certifiedAttributes
            r1.<init>(r2, r3)
        L1a:
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
