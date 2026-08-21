package org.bouncycastle.asn1.x9;

public class X9ECPoint extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.math.ec.ECPoint p;

    public X9ECPoint(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.asn1.ASN1OctetString r2) {
            r0 = this;
            r0.<init>()
            byte[] r2 = r2.getOctets()
            org.bouncycastle.math.ec.ECPoint r1 = r1.decodePoint(r2)
            r0.p = r1
            return
    }

    public X9ECPoint(org.bouncycastle.math.ec.ECPoint r1) {
            r0 = this;
            r0.<init>()
            r0.p = r1
            return
    }

    public org.bouncycastle.math.ec.ECPoint getPoint() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r1.p
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            org.bouncycastle.math.ec.ECPoint r1 = r2.p
            byte[] r1 = r1.getEncoded()
            r0.<init>(r1)
            return r0
    }
}
