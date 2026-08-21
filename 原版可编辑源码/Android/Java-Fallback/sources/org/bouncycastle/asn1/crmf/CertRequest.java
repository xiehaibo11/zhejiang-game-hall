package org.bouncycastle.asn1.crmf;

public class CertRequest extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERInteger certReqId;
    private org.bouncycastle.asn1.crmf.CertTemplate certTemplate;
    private org.bouncycastle.asn1.crmf.Controls controls;

    private CertRequest(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r2.certReqId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.crmf.CertTemplate r0 = org.bouncycastle.asn1.crmf.CertTemplate.getInstance(r0)
            r2.certTemplate = r0
            int r0 = r3.size()
            r1 = 2
            if (r0 <= r1) goto L2a
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.crmf.Controls r3 = org.bouncycastle.asn1.crmf.Controls.getInstance(r3)
            r2.controls = r3
        L2a:
            return
    }

    public static org.bouncycastle.asn1.crmf.CertRequest getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.CertRequest
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.CertRequest r3 = (org.bouncycastle.asn1.crmf.CertRequest) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.CertRequest r0 = new org.bouncycastle.asn1.crmf.CertRequest
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

    public org.bouncycastle.asn1.DERInteger getCertReqId() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.certReqId
            return r0
    }

    public org.bouncycastle.asn1.crmf.CertTemplate getCertTemplate() {
            r1 = this;
            org.bouncycastle.asn1.crmf.CertTemplate r0 = r1.certTemplate
            return r0
    }

    public org.bouncycastle.asn1.crmf.Controls getControls() {
            r1 = this;
            org.bouncycastle.asn1.crmf.Controls r0 = r1.controls
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.certReqId
            r0.add(r1)
            org.bouncycastle.asn1.crmf.CertTemplate r1 = r2.certTemplate
            r0.add(r1)
            org.bouncycastle.asn1.crmf.Controls r1 = r2.controls
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
