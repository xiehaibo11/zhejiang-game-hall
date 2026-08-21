package org.bouncycastle.asn1;

public abstract class ASN1Null extends org.bouncycastle.asn1.ASN1Object {
    public ASN1Null() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r1) {
            r0 = this;
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1Null
            if (r1 != 0) goto L6
            r1 = 0
            return r1
        L6:
            r1 = 1
            return r1
    }

    @Override
    abstract void encode(org.bouncycastle.asn1.DEROutputStream r1) throws java.io.IOException;

    @Override
    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "NULL"
            return r0
    }
}
