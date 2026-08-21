package org.bouncycastle.asn1;

public interface ASN1SequenceParser extends org.bouncycastle.asn1.DEREncodable {
    org.bouncycastle.asn1.DEREncodable readObject() throws java.io.IOException;
}
