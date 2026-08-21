package org.bouncycastle.asn1.cmp;

public class RevRepContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence crls;
    private org.bouncycastle.asn1.ASN1Sequence revCerts;
    private org.bouncycastle.asn1.ASN1Sequence status;

    private RevRepContent(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r3.status = r0
        L11:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L30
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            int r1 = r0.getTagNo()
            r2 = 1
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            if (r1 != 0) goto L2d
            r3.revCerts = r0
            goto L11
        L2d:
            r3.crls = r0
            goto L11
        L30:
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

    public static org.bouncycastle.asn1.cmp.RevRepContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.RevRepContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.RevRepContent r3 = (org.bouncycastle.asn1.cmp.RevRepContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.RevRepContent r0 = new org.bouncycastle.asn1.cmp.RevRepContent
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

    public org.bouncycastle.asn1.x509.CertificateList[] getCrls() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.crls
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.x509.CertificateList[] r1 = new org.bouncycastle.asn1.x509.CertificateList[r0]
            r2 = 0
        Ld:
            if (r2 == r0) goto L1e
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.crls
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.x509.CertificateList r3 = org.bouncycastle.asn1.x509.CertificateList.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    public org.bouncycastle.asn1.crmf.CertId[] getRevCerts() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.revCerts
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.crmf.CertId[] r1 = new org.bouncycastle.asn1.crmf.CertId[r0]
            r2 = 0
        Ld:
            if (r2 == r0) goto L1e
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.revCerts
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.crmf.CertId r3 = org.bouncycastle.asn1.crmf.CertId.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    public org.bouncycastle.asn1.cmp.PKIStatusInfo[] getStatus() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.status
            int r0 = r0.size()
            org.bouncycastle.asn1.cmp.PKIStatusInfo[] r1 = new org.bouncycastle.asn1.cmp.PKIStatusInfo[r0]
            r2 = 0
        L9:
            if (r2 == r0) goto L1a
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.status
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.PKIStatusInfo r3 = org.bouncycastle.asn1.cmp.PKIStatusInfo.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L1a:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.status
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.revCerts
            r2 = 0
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.crls
            r2 = 1
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
