package org.bouncycastle.asn1;

public class ASN1OutputStream extends org.bouncycastle.asn1.DEROutputStream {
    public ASN1OutputStream(java.io.OutputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public void writeObject(java.lang.Object r2) throws java.io.IOException {
            r1 = this;
            if (r2 != 0) goto L6
            r1.writeNull()
            goto L1b
        L6:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERObject
            if (r0 == 0) goto L10
            org.bouncycastle.asn1.DERObject r2 = (org.bouncycastle.asn1.DERObject) r2
        Lc:
            r2.encode(r1)
            goto L1b
        L10:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DEREncodable
            if (r0 == 0) goto L1c
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            goto Lc
        L1b:
            return
        L1c:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "object not ASN1Encodable"
            r2.<init>(r0)
            throw r2
    }
}
