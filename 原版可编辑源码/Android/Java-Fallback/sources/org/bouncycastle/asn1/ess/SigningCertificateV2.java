package org.bouncycastle.asn1.ess;

public class SigningCertificateV2 extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Sequence certs;
    org.bouncycastle.asn1.ASN1Sequence policies;

    public SigningCertificateV2(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 1
            if (r0 < r1) goto L2d
            int r0 = r4.size()
            r2 = 2
            if (r0 > r2) goto L2d
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r3.certs = r0
            int r0 = r4.size()
            if (r0 <= r1) goto L2c
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            r3.policies = r4
        L2c:
            return
        L2d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public SigningCertificateV2(org.bouncycastle.asn1.ess.ESSCertIDv2[] r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1 = 0
        L9:
            int r2 = r4.length
            if (r1 >= r2) goto L14
            r2 = r4[r1]
            r0.add(r2)
            int r1 = r1 + 1
            goto L9
        L14:
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence
            r4.<init>(r0)
            r3.certs = r4
            return
    }

    public SigningCertificateV2(org.bouncycastle.asn1.ess.ESSCertIDv2[] r5, org.bouncycastle.asn1.x509.PolicyInformation[] r6) {
            r4 = this;
            r4.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1 = 0
            r2 = 0
        La:
            int r3 = r5.length
            if (r2 >= r3) goto L15
            r3 = r5[r2]
            r0.add(r3)
            int r2 = r2 + 1
            goto La
        L15:
            org.bouncycastle.asn1.DERSequence r5 = new org.bouncycastle.asn1.DERSequence
            r5.<init>(r0)
            r4.certs = r5
            if (r6 == 0) goto L35
            org.bouncycastle.asn1.ASN1EncodableVector r5 = new org.bouncycastle.asn1.ASN1EncodableVector
            r5.<init>()
        L23:
            int r0 = r6.length
            if (r1 >= r0) goto L2e
            r0 = r6[r1]
            r5.add(r0)
            int r1 = r1 + 1
            goto L23
        L2e:
            org.bouncycastle.asn1.DERSequence r6 = new org.bouncycastle.asn1.DERSequence
            r6.<init>(r5)
            r4.policies = r6
        L35:
            return
    }

    public static org.bouncycastle.asn1.ess.SigningCertificateV2 getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ess.SigningCertificateV2
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ess.SigningCertificateV2 r0 = new org.bouncycastle.asn1.ess.SigningCertificateV2
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'SigningCertificateV2' factory : "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            org.bouncycastle.asn1.ess.SigningCertificateV2 r3 = (org.bouncycastle.asn1.ess.SigningCertificateV2) r3
            return r3
    }

    public org.bouncycastle.asn1.ess.ESSCertIDv2[] getCerts() {
            r3 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r3.certs
            int r0 = r0.size()
            org.bouncycastle.asn1.ess.ESSCertIDv2[] r0 = new org.bouncycastle.asn1.ess.ESSCertIDv2[r0]
            r1 = 0
        L9:
            org.bouncycastle.asn1.ASN1Sequence r2 = r3.certs
            int r2 = r2.size()
            if (r1 == r2) goto L20
            org.bouncycastle.asn1.ASN1Sequence r2 = r3.certs
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r1)
            org.bouncycastle.asn1.ess.ESSCertIDv2 r2 = org.bouncycastle.asn1.ess.ESSCertIDv2.getInstance(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L9
        L20:
            return r0
    }

    public org.bouncycastle.asn1.x509.PolicyInformation[] getPolicies() {
            r3 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r3.policies
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.x509.PolicyInformation[] r0 = new org.bouncycastle.asn1.x509.PolicyInformation[r0]
            r1 = 0
        Ld:
            org.bouncycastle.asn1.ASN1Sequence r2 = r3.policies
            int r2 = r2.size()
            if (r1 == r2) goto L24
            org.bouncycastle.asn1.ASN1Sequence r2 = r3.policies
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r1)
            org.bouncycastle.asn1.x509.PolicyInformation r2 = org.bouncycastle.asn1.x509.PolicyInformation.getInstance(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto Ld
        L24:
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.certs
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.policies
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
