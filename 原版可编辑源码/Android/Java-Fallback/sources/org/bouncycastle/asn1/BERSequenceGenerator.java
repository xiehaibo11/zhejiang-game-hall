package org.bouncycastle.asn1;

public class BERSequenceGenerator extends org.bouncycastle.asn1.BERGenerator {
    public BERSequenceGenerator(java.io.OutputStream r1) throws java.io.IOException {
            r0 = this;
            r0.<init>(r1)
            r1 = 48
            r0.writeBERHeader(r1)
            return
    }

    public BERSequenceGenerator(java.io.OutputStream r1, int r2, boolean r3) throws java.io.IOException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 48
            r0.writeBERHeader(r1)
            return
    }

    public void addObject(org.bouncycastle.asn1.DEREncodable r3) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            org.bouncycastle.asn1.BEROutputStream r0 = new org.bouncycastle.asn1.BEROutputStream
            java.io.OutputStream r1 = r2._out
            r0.<init>(r1)
            r3.encode(r0)
            return
    }

    public void close() throws java.io.IOException {
            r0 = this;
            r0.writeBEREnd()
            return
    }
}
