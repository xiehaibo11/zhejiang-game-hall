package org.bouncycastle.asn1;

public class DEROctetString extends org.bouncycastle.asn1.ASN1OctetString {
    public DEROctetString(org.bouncycastle.asn1.DEREncodable r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public DEROctetString(byte[] r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.string
            r1 = 4
            r3.writeEncoded(r1, r0)
            return
    }
}
