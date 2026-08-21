package org.bouncycastle.asn1;

import java.io.IOException;

public interface ASN1SetParser extends DEREncodable {
    DEREncodable readObject() throws IOException;
}
