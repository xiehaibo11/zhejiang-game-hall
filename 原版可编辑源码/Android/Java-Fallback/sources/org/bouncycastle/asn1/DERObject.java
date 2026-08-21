package org.bouncycastle.asn1;

public abstract class DERObject extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.DERTags {
    public DERObject() {
            r0 = this;
            r0.<init>()
            return
    }

    abstract void encode(org.bouncycastle.asn1.DEROutputStream r1) throws java.io.IOException;

    @Override
    public abstract boolean equals(java.lang.Object r1);

    @Override
    public abstract int hashCode();

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r0 = this;
            return r0
    }
}
