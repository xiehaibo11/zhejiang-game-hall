package org.bouncycastle.asn1;

public class DERSequenceGenerator extends org.bouncycastle.asn1.DERGenerator {
    private final java.io.ByteArrayOutputStream _bOut;

    public DERSequenceGenerator(java.io.OutputStream r1) throws java.io.IOException {
            r0 = this;
            r0.<init>(r1)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            r0._bOut = r1
            return
    }

    public DERSequenceGenerator(java.io.OutputStream r1, int r2, boolean r3) throws java.io.IOException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            r0._bOut = r1
            return
    }

    public void addObject(org.bouncycastle.asn1.DEREncodable r3) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            org.bouncycastle.asn1.DEROutputStream r0 = new org.bouncycastle.asn1.DEROutputStream
            java.io.ByteArrayOutputStream r1 = r2._bOut
            r0.<init>(r1)
            r3.encode(r0)
            return
    }

    public void close() throws java.io.IOException {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = r2._bOut
            byte[] r0 = r0.toByteArray()
            r1 = 48
            r2.writeDEREncoded(r1, r0)
            return
    }

    @Override
    public java.io.OutputStream getRawOutputStream() {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1._bOut
            return r0
    }
}
