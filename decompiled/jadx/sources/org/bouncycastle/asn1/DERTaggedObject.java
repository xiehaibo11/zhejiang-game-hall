package org.bouncycastle.asn1;

import java.io.ByteArrayOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes4.dex */
public class DERTaggedObject extends ASN1TaggedObject {
    public DERTaggedObject(int i) {
        super(false, i, new DERSequence());
    }

    public DERTaggedObject(int i, DEREncodable dEREncodable) {
        super(i, dEREncodable);
    }

    public DERTaggedObject(boolean z, int i, DEREncodable dEREncodable) {
        super(z, i, dEREncodable);
    }

    @Override // org.bouncycastle.asn1.ASN1TaggedObject, org.bouncycastle.asn1.ASN1Object, org.bouncycastle.asn1.DERObject
    void encode(DEROutputStream dEROutputStream) throws IOException {
        if (this.empty) {
            dEROutputStream.writeEncoded(this.tagNo | 160, new byte[0]);
            return;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        DEROutputStream dEROutputStream2 = new DEROutputStream(byteArrayOutputStream);
        dEROutputStream2.writeObject(this.obj);
        dEROutputStream2.close();
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        if (this.explicit) {
            dEROutputStream.writeEncoded(this.tagNo | 160, byteArray);
            return;
        }
        if ((byteArray[0] & 32) != 0) {
            byteArray[0] = (byte) (this.tagNo | 160);
        } else {
            byteArray[0] = (byte) (this.tagNo | 128);
        }
        dEROutputStream.write(byteArray);
    }
}
