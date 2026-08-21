package org.bouncycastle.asn1;

import java.io.IOException;
import java.io.InputStream;

public class DEROctetStringParser implements ASN1OctetStringParser {
    private DefiniteLengthInputStream stream;

    DEROctetStringParser(DefiniteLengthInputStream definiteLengthInputStream) {
        this.stream = definiteLengthInputStream;
    }

    @Override
    public DERObject getDERObject() {
        try {
            return new DEROctetString(this.stream.toByteArray());
        } catch (IOException e) {
            throw new IllegalStateException("IOException converting stream to byte array: " + e.getMessage());
        }
    }

    @Override
    public InputStream getOctetStream() {
        return this.stream;
    }
}
