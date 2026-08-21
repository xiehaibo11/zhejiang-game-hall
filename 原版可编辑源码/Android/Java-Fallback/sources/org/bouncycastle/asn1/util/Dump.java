package org.bouncycastle.asn1.util;

public class Dump {
    public Dump() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void main(java.lang.String[] r2) throws java.lang.Exception {
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r1 = 0
            r2 = r2[r1]
            r0.<init>(r2)
            org.bouncycastle.asn1.ASN1InputStream r2 = new org.bouncycastle.asn1.ASN1InputStream
            r2.<init>(r0)
        Ld:
            org.bouncycastle.asn1.DERObject r0 = r2.readObject()
            if (r0 == 0) goto L1d
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.String r0 = org.bouncycastle.asn1.util.ASN1Dump.dumpAsString(r0)
            r1.println(r0)
            goto Ld
        L1d:
            return
    }
}
