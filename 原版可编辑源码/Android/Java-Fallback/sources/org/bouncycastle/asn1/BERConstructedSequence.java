package org.bouncycastle.asn1;

public class BERConstructedSequence extends org.bouncycastle.asn1.DERConstructedSequence {
    public BERConstructedSequence() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OutputStream
            if (r0 != 0) goto Ld
            boolean r0 = r3 instanceof org.bouncycastle.asn1.BEROutputStream
            if (r0 == 0) goto L9
            goto Ld
        L9:
            super.encode(r3)
            goto L30
        Ld:
            r0 = 48
            r3.write(r0)
            r0 = 128(0x80, float:1.8E-43)
            r3.write(r0)
            java.util.Enumeration r0 = r2.getObjects()
        L1b:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r0.nextElement()
            r3.writeObject(r1)
            goto L1b
        L29:
            r0 = 0
            r3.write(r0)
            r3.write(r0)
        L30:
            return
    }
}
