package org.bouncycastle.asn1;

public interface ASN1TaggedObjectParser extends org.bouncycastle.asn1.DEREncodable {
    org.bouncycastle.asn1.DEREncodable getObjectParser(int r1, boolean r2) throws java.io.IOException;

    int getTagNo();
}
