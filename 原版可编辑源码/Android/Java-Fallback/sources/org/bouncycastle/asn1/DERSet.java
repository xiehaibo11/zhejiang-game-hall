package org.bouncycastle.asn1;

public class DERSet extends org.bouncycastle.asn1.ASN1Set {
    public DERSet() {
            r0 = this;
            r0.<init>()
            return
    }

    public DERSet(org.bouncycastle.asn1.DEREncodable r1) {
            r0 = this;
            r0.<init>()
            r0.addObject(r1)
            return
    }

    public DERSet(org.bouncycastle.asn1.DEREncodableVector r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            return
    }

    DERSet(org.bouncycastle.asn1.DEREncodableVector r3, boolean r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
        L4:
            int r1 = r3.size()
            if (r0 == r1) goto L14
            org.bouncycastle.asn1.DEREncodable r1 = r3.get(r0)
            r2.addObject(r1)
            int r0 = r0 + 1
            goto L4
        L14:
            if (r4 == 0) goto L19
            r2.sort()
        L19:
            return
    }

    public DERSet(org.bouncycastle.asn1.ASN1Encodable[] r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
        L4:
            int r1 = r3.length
            if (r0 == r1) goto Lf
            r1 = r3[r0]
            r2.addObject(r1)
            int r0 = r0 + 1
            goto L4
        Lf:
            r2.sort()
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
            r1 = 49
            r5.writeEncoded(r1, r0)
            return
    }
}
