package org.bouncycastle.asn1.cmp;

public class KeyRecRepContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence caCerts;
    private org.bouncycastle.asn1.ASN1Sequence keyPairHist;
    private org.bouncycastle.asn1.cmp.CMPCertificate newSigCert;
    private org.bouncycastle.asn1.cmp.PKIStatusInfo status;

    private KeyRecRepContent(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = org.bouncycastle.asn1.cmp.PKIStatusInfo.getInstance(r0)
            r3.status = r0
        L11:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L67
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            int r1 = r0.getTagNo()
            if (r1 == 0) goto L5c
            r2 = 1
            if (r1 == r2) goto L51
            r2 = 2
            if (r1 != r2) goto L36
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r3.keyPairHist = r0
            goto L11
        L36:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag number: "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
        L51:
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r3.caCerts = r0
            goto L11
        L5c:
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.cmp.CMPCertificate r0 = org.bouncycastle.asn1.cmp.CMPCertificate.getInstance(r0)
            r3.newSigCert = r0
            goto L11
        L67:
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

    public static org.bouncycastle.asn1.cmp.KeyRecRepContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.KeyRecRepContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.KeyRecRepContent r3 = (org.bouncycastle.asn1.cmp.KeyRecRepContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.KeyRecRepContent r0 = new org.bouncycastle.asn1.cmp.KeyRecRepContent
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

    public org.bouncycastle.asn1.cmp.CMPCertificate[] getCaCerts() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.caCerts
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.cmp.CMPCertificate[] r1 = new org.bouncycastle.asn1.cmp.CMPCertificate[r0]
            r2 = 0
        Ld:
            if (r2 == r0) goto L1e
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.caCerts
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.CMPCertificate r3 = org.bouncycastle.asn1.cmp.CMPCertificate.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    public org.bouncycastle.asn1.cmp.CertifiedKeyPair[] getKeyPairHist() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.keyPairHist
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.cmp.CertifiedKeyPair[] r1 = new org.bouncycastle.asn1.cmp.CertifiedKeyPair[r0]
            r2 = 0
        Ld:
            if (r2 == r0) goto L1e
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.keyPairHist
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.CertifiedKeyPair r3 = org.bouncycastle.asn1.cmp.CertifiedKeyPair.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    public org.bouncycastle.asn1.cmp.CMPCertificate getNewSigCert() {
            r1 = this;
            org.bouncycastle.asn1.cmp.CMPCertificate r0 = r1.newSigCert
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIStatusInfo getStatus() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = r1.status
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cmp.PKIStatusInfo r1 = r3.status
            r0.add(r1)
            org.bouncycastle.asn1.cmp.CMPCertificate r1 = r3.newSigCert
            r2 = 0
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.caCerts
            r2 = 1
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.keyPairHist
            r2 = 2
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
