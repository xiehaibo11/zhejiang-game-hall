package org.bouncycastle.asn1.pkcs;

public class CertificationRequest extends org.bouncycastle.asn1.ASN1Encodable {
    protected org.bouncycastle.asn1.pkcs.CertificationRequestInfo reqInfo;
    protected org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    protected org.bouncycastle.asn1.DERBitString sigBits;

    protected CertificationRequest() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.reqInfo = r0
            r1.sigAlgId = r0
            r1.sigBits = r0
            return
    }

    public CertificationRequest(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.reqInfo = r0
            r1.sigAlgId = r0
            r1.sigBits = r0
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r0 = org.bouncycastle.asn1.pkcs.CertificationRequestInfo.getInstance(r0)
            r1.reqInfo = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.sigAlgId = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r2 = (org.bouncycastle.asn1.DERBitString) r2
            r1.sigBits = r2
            return
    }

    public CertificationRequest(org.bouncycastle.asn1.pkcs.CertificationRequestInfo r2, org.bouncycastle.asn1.x509.AlgorithmIdentifier r3, org.bouncycastle.asn1.DERBitString r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.reqInfo = r0
            r1.sigAlgId = r0
            r1.sigBits = r0
            r1.reqInfo = r2
            r1.sigAlgId = r3
            r1.sigBits = r4
            return
    }

    public static org.bouncycastle.asn1.pkcs.CertificationRequest getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.CertificationRequest
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.CertificationRequest r3 = (org.bouncycastle.asn1.pkcs.CertificationRequest) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.CertificationRequest r0 = new org.bouncycastle.asn1.pkcs.CertificationRequest
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

    public org.bouncycastle.asn1.pkcs.CertificationRequestInfo getCertificationRequestInfo() {
            r1 = this;
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r0 = r1.reqInfo
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getSignature() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.sigBits
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getSignatureAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.sigAlgId
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r1 = r2.reqInfo
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.sigAlgId
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.sigBits
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
