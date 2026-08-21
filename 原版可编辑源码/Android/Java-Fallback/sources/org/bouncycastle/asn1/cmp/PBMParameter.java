package org.bouncycastle.asn1.cmp;

public class PBMParameter extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERInteger iterationCount;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier mac;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier owf;
    private org.bouncycastle.asn1.ASN1OctetString salt;

    private PBMParameter(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0)
            r1.salt = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.owf = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r1.iterationCount = r0
            r0 = 3
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r2)
            r1.mac = r2
            return
    }

    public static org.bouncycastle.asn1.cmp.PBMParameter getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PBMParameter
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PBMParameter r3 = (org.bouncycastle.asn1.cmp.PBMParameter) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PBMParameter r0 = new org.bouncycastle.asn1.cmp.PBMParameter
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

    public org.bouncycastle.asn1.DERInteger getIterationCount() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.iterationCount
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getMac() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.mac
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getOwf() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.owf
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.salt
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.owf
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.iterationCount
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.mac
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
