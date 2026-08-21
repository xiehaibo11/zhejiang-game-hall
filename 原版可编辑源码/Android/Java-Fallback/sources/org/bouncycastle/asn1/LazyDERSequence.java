package org.bouncycastle.asn1;

public class LazyDERSequence extends org.bouncycastle.asn1.DERSequence {
    private byte[] encoded;
    private boolean parsed;
    private int size;

    LazyDERSequence(byte[] r2) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.parsed = r0
            r0 = -1
            r1.size = r0
            r1.encoded = r2
            return
    }

    private void parse() {
            r2 = this;
            org.bouncycastle.asn1.LazyDERConstructionEnumeration r0 = new org.bouncycastle.asn1.LazyDERConstructionEnumeration
            byte[] r1 = r2.encoded
            r0.<init>(r1)
        L7:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L17
            java.lang.Object r1 = r0.nextElement()
            org.bouncycastle.asn1.DEREncodable r1 = (org.bouncycastle.asn1.DEREncodable) r1
            r2.addObject(r1)
            goto L7
        L17:
            r0 = 1
            r2.parsed = r0
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.encoded
            r1 = 48
            r3.writeEncoded(r1, r0)
            return
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable getObjectAt(int r2) {
            r1 = this;
            boolean r0 = r1.parsed
            if (r0 != 0) goto L7
            r1.parse()
        L7:
            org.bouncycastle.asn1.DEREncodable r2 = super.getObjectAt(r2)
            return r2
    }

    @Override
    public java.util.Enumeration getObjects() {
            r2 = this;
            boolean r0 = r2.parsed
            if (r0 == 0) goto L9
            java.util.Enumeration r0 = super.getObjects()
            return r0
        L9:
            org.bouncycastle.asn1.LazyDERConstructionEnumeration r0 = new org.bouncycastle.asn1.LazyDERConstructionEnumeration
            byte[] r1 = r2.encoded
            r0.<init>(r1)
            return r0
    }

    @Override
    public int size() {
            r2 = this;
            int r0 = r2.size
            if (r0 >= 0) goto L1c
            org.bouncycastle.asn1.LazyDERConstructionEnumeration r0 = new org.bouncycastle.asn1.LazyDERConstructionEnumeration
            byte[] r1 = r2.encoded
            r0.<init>(r1)
            r1 = 0
        Lc:
            r2.size = r1
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L1c
            r0.nextElement()
            int r1 = r2.size
            int r1 = r1 + 1
            goto Lc
        L1c:
            int r0 = r2.size
            return r0
    }
}
