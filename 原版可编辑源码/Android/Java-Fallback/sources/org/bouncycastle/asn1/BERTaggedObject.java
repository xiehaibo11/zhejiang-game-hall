package org.bouncycastle.asn1;

public class BERTaggedObject extends org.bouncycastle.asn1.DERTaggedObject {
    public BERTaggedObject(int r3) {
            r2 = this;
            org.bouncycastle.asn1.BERSequence r0 = new org.bouncycastle.asn1.BERSequence
            r0.<init>()
            r1 = 0
            r2.<init>(r1, r3, r0)
            return
    }

    public BERTaggedObject(int r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public BERTaggedObject(boolean r1, int r2, org.bouncycastle.asn1.DEREncodable r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OutputStream
            if (r0 != 0) goto Le
            boolean r0 = r3 instanceof org.bouncycastle.asn1.BEROutputStream
            if (r0 == 0) goto L9
            goto Le
        L9:
            super.encode(r3)
            goto Lbb
        Le:
            int r0 = r2.tagNo
            r0 = r0 | 160(0xa0, float:2.24E-43)
            r3.write(r0)
            r0 = 128(0x80, float:1.8E-43)
            r3.write(r0)
            boolean r0 = r2.empty
            if (r0 != 0) goto Lb4
            boolean r0 = r2.explicit
            if (r0 != 0) goto Laf
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L56
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            boolean r0 = r0 instanceof org.bouncycastle.asn1.BERConstructedOctetString
            if (r0 == 0) goto L37
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            org.bouncycastle.asn1.BERConstructedOctetString r0 = (org.bouncycastle.asn1.BERConstructedOctetString) r0
            java.util.Enumeration r0 = r0.getObjects()
            goto L48
        L37:
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            org.bouncycastle.asn1.BERConstructedOctetString r1 = new org.bouncycastle.asn1.BERConstructedOctetString
            byte[] r0 = r0.getOctets()
            r1.<init>(r0)
            java.util.Enumeration r0 = r1.getObjects()
        L48:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto Lb4
            java.lang.Object r1 = r0.nextElement()
            r3.writeObject(r1)
            goto L48
        L56:
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L72
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            java.util.Enumeration r0 = r0.getObjects()
        L64:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto Lb4
            java.lang.Object r1 = r0.nextElement()
            r3.writeObject(r1)
            goto L64
        L72:
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1Set
            if (r0 == 0) goto L8e
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            org.bouncycastle.asn1.ASN1Set r0 = (org.bouncycastle.asn1.ASN1Set) r0
            java.util.Enumeration r0 = r0.getObjects()
        L80:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto Lb4
            java.lang.Object r1 = r0.nextElement()
            r3.writeObject(r1)
            goto L80
        L8e:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "not implemented: "
            r0.append(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r2.obj
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        Laf:
            org.bouncycastle.asn1.DEREncodable r0 = r2.obj
            r3.writeObject(r0)
        Lb4:
            r0 = 0
            r3.write(r0)
            r3.write(r0)
        Lbb:
            return
    }
}
