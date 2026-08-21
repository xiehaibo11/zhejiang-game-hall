package org.bouncycastle.asn1;

public class DERTaggedObject extends org.bouncycastle.asn1.ASN1TaggedObject {
    public DERTaggedObject(int r3) {
            r2 = this;
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>()
            r1 = 0
            r2.<init>(r1, r3, r0)
            return
    }

    public DERTaggedObject(int r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public DERTaggedObject(boolean r1, int r2, org.bouncycastle.asn1.DEREncodable r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r5) throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.empty
            r1 = 0
            if (r0 != 0) goto L40
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r2 = new org.bouncycastle.asn1.DEROutputStream
            r2.<init>(r0)
            org.bouncycastle.asn1.DEREncodable r3 = r4.obj
            r2.writeObject(r3)
            r2.close()
            byte[] r0 = r0.toByteArray()
            boolean r2 = r4.explicit
            if (r2 == 0) goto L27
            int r1 = r4.tagNo
            r1 = r1 | 160(0xa0, float:2.24E-43)
            r5.writeEncoded(r1, r0)
            goto L49
        L27:
            r2 = r0[r1]
            r2 = r2 & 32
            if (r2 == 0) goto L35
            int r2 = r4.tagNo
            r2 = r2 | 160(0xa0, float:2.24E-43)
            byte r2 = (byte) r2
            r0[r1] = r2
            goto L3c
        L35:
            int r2 = r4.tagNo
            r2 = r2 | 128(0x80, float:1.8E-43)
            byte r2 = (byte) r2
            r0[r1] = r2
        L3c:
            r5.write(r0)
            goto L49
        L40:
            int r0 = r4.tagNo
            r0 = r0 | 160(0xa0, float:2.24E-43)
            byte[] r1 = new byte[r1]
            r5.writeEncoded(r0, r1)
        L49:
            return
    }
}
