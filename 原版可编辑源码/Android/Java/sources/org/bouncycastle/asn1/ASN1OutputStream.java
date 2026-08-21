package org.bouncycastle.asn1;

import java.io.IOException;
import java.io.OutputStream;

public class ASN1OutputStream extends DEROutputStream {
    public ASN1OutputStream(OutputStream outputStream) {
        super(outputStream);
    }

    @Override
    public void writeObject(Object obj) throws IOException {
        DERObject dERObject;
        if (obj == null) {
            writeNull();
            return;
        }
        if (obj instanceof DERObject) {
            dERObject = (DERObject) obj;
        } else {
            if (!(obj instanceof DEREncodable)) {
                throw new IOException("object not ASN1Encodable");
            }
            dERObject = ((DEREncodable) obj).getDERObject();
        }
        dERObject.encode(this);
    }
}
