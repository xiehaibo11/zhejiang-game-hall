package org.bouncycastle.asn1;

import java.io.IOException;

public class DEROctetString extends ASN1OctetString {
    public DEROctetString(DEREncodable dEREncodable) {
        super(dEREncodable);
    }

    public DEROctetString(byte[] bArr) {
        super(bArr);
    }

    @Override
    void encode(DEROutputStream dEROutputStream) throws IOException {
        dEROutputStream.writeEncoded(4, this.string);
    }
}
