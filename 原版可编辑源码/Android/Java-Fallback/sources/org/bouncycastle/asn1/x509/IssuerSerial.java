package org.bouncycastle.asn1.x509;

public class IssuerSerial extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.GeneralNames issuer;
    org.bouncycastle.asn1.DERBitString issuerUID;
    org.bouncycastle.asn1.DERInteger serial;

    public IssuerSerial(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 3
            r2 = 2
            if (r0 == r2) goto L2d
            int r0 = r4.size()
            if (r0 != r1) goto L12
            goto L2d
        L12:
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
        L2d:
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.GeneralNames r0 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r0)
            r3.issuer = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.serial = r0
            int r0 = r4.size()
            if (r0 != r1) goto L53
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.DERBitString r4 = org.bouncycastle.asn1.DERBitString.getInstance(r4)
            r3.issuerUID = r4
        L53:
            return
    }

    public IssuerSerial(org.bouncycastle.asn1.x509.GeneralNames r1, org.bouncycastle.asn1.DERInteger r2) {
            r0 = this;
            r0.<init>()
            r0.issuer = r1
            r0.serial = r2
            return
    }

    public static org.bouncycastle.asn1.x509.IssuerSerial getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.IssuerSerial
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.IssuerSerial r0 = new org.bouncycastle.asn1.x509.IssuerSerial
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.x509.IssuerSerial r3 = (org.bouncycastle.asn1.x509.IssuerSerial) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.IssuerSerial getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.IssuerSerial r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralNames getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r1.issuer
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getIssuerUID() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.issuerUID
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSerial() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.serial
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralNames r1 = r2.issuer
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.serial
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.issuerUID
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
