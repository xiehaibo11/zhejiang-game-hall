package org.bouncycastle.asn1.util;

public class DERDump extends org.bouncycastle.asn1.util.ASN1Dump {
    public DERDump() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String dumpAsString(org.bouncycastle.asn1.DEREncodable r1) {
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            java.lang.String r0 = ""
            java.lang.String r1 = _dumpAsString(r0, r1)
            return r1
    }

    public static java.lang.String dumpAsString(org.bouncycastle.asn1.DERObject r1) {
            java.lang.String r0 = ""
            java.lang.String r1 = _dumpAsString(r0, r1)
            return r1
    }
}
