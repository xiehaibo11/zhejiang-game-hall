package org.bouncycastle.asn1;

import java.io.IOException;
import java.util.Enumeration;

public class BERSet extends DERSet {
    public BERSet() {
    }

    public BERSet(DEREncodable dEREncodable) {
        super(dEREncodable);
    }

    public BERSet(DEREncodableVector dEREncodableVector) {
        super(dEREncodableVector, false);
    }

    BERSet(DEREncodableVector dEREncodableVector, boolean z) {
        super(dEREncodableVector, z);
    }

    @Override
    void encode(DEROutputStream dEROutputStream) throws IOException {
        if (!(dEROutputStream instanceof ASN1OutputStream) && !(dEROutputStream instanceof BEROutputStream)) {
            super.encode(dEROutputStream);
            return;
        }
        dEROutputStream.write(49);
        dEROutputStream.write(128);
        Enumeration objects = getObjects();
        while (objects.hasMoreElements()) {
            dEROutputStream.writeObject(objects.nextElement());
        }
        dEROutputStream.write(0);
        dEROutputStream.write(0);
    }
}
