package org.bouncycastle.asn1;

import java.io.IOException;

public abstract class ASN1Null extends ASN1Object {
    @Override
    boolean asn1Equals(DERObject dERObject) {
        return dERObject instanceof ASN1Null;
    }

    @Override
    abstract void encode(DEROutputStream dEROutputStream) throws IOException;

    @Override
    public int hashCode() {
        return 0;
    }

    public String toString() {
        return "NULL";
    }
}
