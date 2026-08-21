package org.bouncycastle.asn1;

import java.io.IOException;

public abstract class DERObject extends ASN1Encodable implements DERTags {
    abstract void encode(DEROutputStream dEROutputStream) throws IOException;

    @Override
    public abstract boolean equals(Object obj);

    @Override
    public abstract int hashCode();

    @Override
    public DERObject toASN1Object() {
        return this;
    }
}
