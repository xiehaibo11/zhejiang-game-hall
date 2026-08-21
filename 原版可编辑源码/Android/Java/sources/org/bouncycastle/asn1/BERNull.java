package org.bouncycastle.asn1;

import java.io.IOException;

public class BERNull extends DERNull {
    public static final BERNull INSTANCE = new BERNull();

    @Override
    void encode(DEROutputStream dEROutputStream) throws IOException {
        if ((dEROutputStream instanceof ASN1OutputStream) || (dEROutputStream instanceof BEROutputStream)) {
            dEROutputStream.write(5);
        } else {
            super.encode(dEROutputStream);
        }
    }
}
