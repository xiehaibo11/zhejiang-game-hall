package org.bouncycastle.asn1;

public class BERSequenceParser implements org.bouncycastle.asn1.ASN1SequenceParser {
    private org.bouncycastle.asn1.ASN1StreamParser _parser;

    BERSequenceParser(org.bouncycastle.asn1.ASN1StreamParser r1) {
            r0 = this;
            r0.<init>()
            r0._parser = r1
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r2 = this;
            org.bouncycastle.asn1.BERSequence r0 = new org.bouncycastle.asn1.BERSequence     // Catch: java.io.IOException -> Lc
            org.bouncycastle.asn1.ASN1StreamParser r1 = r2._parser     // Catch: java.io.IOException -> Lc
            org.bouncycastle.asn1.ASN1EncodableVector r1 = r1.readVector()     // Catch: java.io.IOException -> Lc
            r0.<init>(r1)     // Catch: java.io.IOException -> Lc
            return r0
        Lc:
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
