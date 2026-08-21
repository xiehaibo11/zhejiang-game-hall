package org.bouncycastle.asn1;

public class DEROctetStringParser implements org.bouncycastle.asn1.ASN1OctetStringParser {
    private org.bouncycastle.asn1.DefiniteLengthInputStream stream;

    DEROctetStringParser(org.bouncycastle.asn1.DefiniteLengthInputStream r1) {
            r0 = this;
            r0.<init>()
            r0.stream = r1
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r4 = this;
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.io.IOException -> Lc
            org.bouncycastle.asn1.DefiniteLengthInputStream r1 = r4.stream     // Catch: java.io.IOException -> Lc
            byte[] r1 = r1.toByteArray()     // Catch: java.io.IOException -> Lc
            r0.<init>(r1)     // Catch: java.io.IOException -> Lc
            return r0
        Lc:
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
            r1 = this;
            org.bouncycastle.asn1.DefiniteLengthInputStream r0 = r1.stream
            return r0
    }
}
