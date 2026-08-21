package org.bouncycastle.asn1;

public class DERConstructedSequence extends org.bouncycastle.asn1.ASN1Sequence {
    public DERConstructedSequence() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void addObject(org.bouncycastle.asn1.DEREncodable r1) {
            r0 = this;
            super.addObject(r1)
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r5) throws java.io.IOException {
            r4 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            java.util.Enumeration r2 = r4.getObjects()
        Le:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L1c
            java.lang.Object r3 = r2.nextElement()
            r1.writeObject(r3)
            goto Le
        L1c:
            r1.close()
            byte[] r0 = r0.toByteArray()
            r1 = 48
            r5.writeEncoded(r1, r0)
            return
    }

    public int getSize() {
            r1 = this;
            int r0 = r1.size()
            return r0
    }
}
