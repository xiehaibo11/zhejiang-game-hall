package org.bouncycastle.asn1;

public class BEROctetStringParser implements org.bouncycastle.asn1.ASN1OctetStringParser {
    private org.bouncycastle.asn1.ASN1StreamParser _parser;

    protected BEROctetStringParser(org.bouncycastle.asn1.ASN1ObjectParser r1) {
            r0 = this;
            r0.<init>()
            org.bouncycastle.asn1.ASN1StreamParser r1 = r1._aIn
            r0._parser = r1
            return
    }

    BEROctetStringParser(org.bouncycastle.asn1.ASN1StreamParser r1) {
            r0 = this;
            r0.<init>()
            r0._parser = r1
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r4 = this;
            org.bouncycastle.asn1.BERConstructedOctetString r0 = new org.bouncycastle.asn1.BERConstructedOctetString     // Catch: java.io.IOException -> Le
            java.io.InputStream r1 = r4.getOctetStream()     // Catch: java.io.IOException -> Le
            byte[] r1 = org.bouncycastle.util.io.Streams.readAll(r1)     // Catch: java.io.IOException -> Le
            r0.<init>(r1)     // Catch: java.io.IOException -> Le
            return r0
        Le:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "IOException converting stream to byte array: "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.io.InputStream getOctetStream() {
            r2 = this;
            org.bouncycastle.asn1.ConstructedOctetStream r0 = new org.bouncycastle.asn1.ConstructedOctetStream
            org.bouncycastle.asn1.ASN1StreamParser r1 = r2._parser
            r0.<init>(r1)
            return r0
    }
}
