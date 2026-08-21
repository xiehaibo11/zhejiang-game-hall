package org.bouncycastle.asn1;

public class DERSetParser implements org.bouncycastle.asn1.ASN1SetParser {
    private org.bouncycastle.asn1.ASN1StreamParser _parser;

    DERSetParser(org.bouncycastle.asn1.ASN1StreamParser r1) {
            r0 = this;
            r0.<init>()
            r0._parser = r1
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r3 = this;
            org.bouncycastle.asn1.DERSet r0 = new org.bouncycastle.asn1.DERSet     // Catch: java.io.IOException -> Ld
            org.bouncycastle.asn1.ASN1StreamParser r1 = r3._parser     // Catch: java.io.IOException -> Ld
            org.bouncycastle.asn1.ASN1EncodableVector r1 = r1.readVector()     // Catch: java.io.IOException -> Ld
            r2 = 0
            r0.<init>(r1, r2)     // Catch: java.io.IOException -> Ld
            return r0
        Ld:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable readObject() throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1StreamParser r0 = r1._parser
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            return r0
    }
}
