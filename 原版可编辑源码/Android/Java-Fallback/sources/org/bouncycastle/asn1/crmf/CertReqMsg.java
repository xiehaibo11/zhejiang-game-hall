package org.bouncycastle.asn1.crmf;

public class CertReqMsg extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.crmf.CertRequest certReq;
    private org.bouncycastle.asn1.crmf.ProofOfPossession pop;
    private org.bouncycastle.asn1.ASN1Sequence regInfo;

    private CertReqMsg(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            java.util.Enumeration r3 = r3.getObjects()
            java.lang.Object r0 = r3.nextElement()
            org.bouncycastle.asn1.crmf.CertRequest r0 = org.bouncycastle.asn1.crmf.CertRequest.getInstance(r0)
            r2.certReq = r0
        L11:
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L2d
            java.lang.Object r0 = r3.nextElement()
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L26
            org.bouncycastle.asn1.crmf.ProofOfPossession r0 = org.bouncycastle.asn1.crmf.ProofOfPossession.getInstance(r0)
            r2.pop = r0
            goto L11
        L26:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r2.regInfo = r0
            goto L11
        L2d:
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r1, org.bouncycastle.asn1.ASN1Encodable r2) {
            r0 = this;
            if (r2 == 0) goto L5
            r1.add(r2)
        L5:
            return
    }

    public static org.bouncycastle.asn1.crmf.CertReqMsg getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.CertReqMsg
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.CertReqMsg r3 = (org.bouncycastle.asn1.crmf.CertReqMsg) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.CertReqMsg r0 = new org.bouncycastle.asn1.crmf.CertReqMsg
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

    public org.bouncycastle.asn1.crmf.CertRequest getCertReq() {
            r1 = this;
            org.bouncycastle.asn1.crmf.CertRequest r0 = r1.certReq
            return r0
    }

    public org.bouncycastle.asn1.crmf.ProofOfPossession getPop() {
            r1 = this;
            org.bouncycastle.asn1.crmf.ProofOfPossession r0 = r1.pop
            return r0
    }

    public org.bouncycastle.asn1.crmf.AttributeTypeAndValue[] getRegInfo() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.regInfo
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.crmf.AttributeTypeAndValue[] r1 = new org.bouncycastle.asn1.crmf.AttributeTypeAndValue[r0]
            r2 = 0
        Ld:
            if (r2 == r0) goto L1e
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.regInfo
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.crmf.AttributeTypeAndValue r3 = org.bouncycastle.asn1.crmf.AttributeTypeAndValue.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.crmf.CertRequest r1 = r2.certReq
            r0.add(r1)
            org.bouncycastle.asn1.crmf.ProofOfPossession r1 = r2.pop
            r2.addOptional(r0, r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.regInfo
            r2.addOptional(r0, r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
