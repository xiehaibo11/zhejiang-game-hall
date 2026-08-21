package org.bouncycastle.asn1.mozilla;

public class PublicKeyAndChallenge extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERIA5String challenge;
    private org.bouncycastle.asn1.ASN1Sequence pkacSeq;
    private org.bouncycastle.asn1.x509.SubjectPublicKeyInfo spki;

    public PublicKeyAndChallenge(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r1.pkacSeq = r2
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r0)
            r1.spki = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERIA5String r2 = org.bouncycastle.asn1.DERIA5String.getInstance(r2)
            r1.challenge = r2
            return
    }

    public static org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge r3 = (org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge r0 = new org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unkown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.DERIA5String getChallenge() {
            r1 = this;
            org.bouncycastle.asn1.DERIA5String r0 = r1.challenge
            return r0
    }

    public org.bouncycastle.asn1.x509.SubjectPublicKeyInfo getSubjectPublicKeyInfo() {
            r1 = this;
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r1.spki
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.pkacSeq
            return r0
    }
}
