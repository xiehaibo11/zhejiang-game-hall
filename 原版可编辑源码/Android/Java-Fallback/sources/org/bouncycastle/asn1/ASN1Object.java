package org.bouncycastle.asn1;

public abstract class ASN1Object extends org.bouncycastle.asn1.DERObject {
    public ASN1Object() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.asn1.ASN1Object fromByteArray(byte[] r1) throws java.io.IOException {
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r1 = r0.readObject()
            org.bouncycastle.asn1.ASN1Object r1 = (org.bouncycastle.asn1.ASN1Object) r1
            return r1
    }

    abstract boolean asn1Equals(org.bouncycastle.asn1.DERObject r1);

    @Override
    abstract void encode(org.bouncycastle.asn1.DEROutputStream r1) throws java.io.IOException;

    @Override
    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 1
            if (r2 != r3) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof org.bouncycastle.asn1.DEREncodable
            if (r1 == 0) goto L15
            org.bouncycastle.asn1.DEREncodable r3 = (org.bouncycastle.asn1.DEREncodable) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            boolean r3 = r2.asn1Equals(r3)
            if (r3 == 0) goto L15
            goto L16
        L15:
            r0 = 0
        L16:
            return r0
    }

    @Override
    public abstract int hashCode();
}
