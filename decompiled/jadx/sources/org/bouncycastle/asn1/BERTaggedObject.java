package org.bouncycastle.asn1;

import java.io.IOException;
import java.util.Enumeration;

/* JADX INFO: loaded from: classes4.dex */
public class BERTaggedObject extends DERTaggedObject {
    public BERTaggedObject(int i) {
        super(false, i, new BERSequence());
    }

    public BERTaggedObject(int i, DEREncodable dEREncodable) {
        super(i, dEREncodable);
    }

    public BERTaggedObject(boolean z, int i, DEREncodable dEREncodable) {
        super(z, i, dEREncodable);
    }

    @Override // org.bouncycastle.asn1.DERTaggedObject, org.bouncycastle.asn1.ASN1TaggedObject, org.bouncycastle.asn1.ASN1Object, org.bouncycastle.asn1.DERObject
    void encode(DEROutputStream dEROutputStream) throws IOException {
        if (!(dEROutputStream instanceof ASN1OutputStream) && !(dEROutputStream instanceof BEROutputStream)) {
            super.encode(dEROutputStream);
            return;
        }
        dEROutputStream.write(this.tagNo | 160);
        dEROutputStream.write(128);
        if (!this.empty) {
            if (this.explicit) {
                dEROutputStream.writeObject(this.obj);
            } else if (this.obj instanceof ASN1OctetString) {
                Enumeration objects = this.obj instanceof BERConstructedOctetString ? ((BERConstructedOctetString) this.obj).getObjects() : new BERConstructedOctetString(((ASN1OctetString) this.obj).getOctets()).getObjects();
                while (objects.hasMoreElements()) {
                    dEROutputStream.writeObject(objects.nextElement());
                }
            } else if (this.obj instanceof ASN1Sequence) {
                Enumeration objects2 = ((ASN1Sequence) this.obj).getObjects();
                while (objects2.hasMoreElements()) {
                    dEROutputStream.writeObject(objects2.nextElement());
                }
            } else {
                if (!(this.obj instanceof ASN1Set)) {
                    throw new RuntimeException("not implemented: " + this.obj.getClass().getName());
                }
                Enumeration objects3 = ((ASN1Set) this.obj).getObjects();
                while (objects3.hasMoreElements()) {
                    dEROutputStream.writeObject(objects3.nextElement());
                }
            }
        }
        dEROutputStream.write(0);
        dEROutputStream.write(0);
    }
}
