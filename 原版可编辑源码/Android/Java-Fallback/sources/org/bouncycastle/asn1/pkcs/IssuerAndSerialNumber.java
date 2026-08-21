package org.bouncycastle.asn1.pkcs;

public class IssuerAndSerialNumber extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger certSerialNumber;
    org.bouncycastle.asn1.x509.X509Name name;

    public IssuerAndSerialNumber(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.X509Name r0 = org.bouncycastle.asn1.x509.X509Name.getInstance(r0)
            r1.name = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            r1.certSerialNumber = r2
            return
    }

    public IssuerAndSerialNumber(org.bouncycastle.asn1.x509.X509Name r1, java.math.BigInteger r2) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r2)
            r0.certSerialNumber = r1
            return
    }

    public IssuerAndSerialNumber(org.bouncycastle.asn1.x509.X509Name r1, org.bouncycastle.asn1.DERInteger r2) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.certSerialNumber = r2
            return
    }

    public static org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber r3 = (org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber r0 = new org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.DERInteger getCertificateSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.certSerialNumber
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getName() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Name r0 = r1.name
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.X509Name r1 = r2.name
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.certSerialNumber
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
