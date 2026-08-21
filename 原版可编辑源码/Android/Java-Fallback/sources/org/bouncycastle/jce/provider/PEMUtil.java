package org.bouncycastle.jce.provider;

public class PEMUtil {
    private final java.lang.String _footer1;
    private final java.lang.String _footer2;
    private final java.lang.String _header1;
    private final java.lang.String _header2;

    PEMUtil(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-----BEGIN "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "-----"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3._header1 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-----BEGIN X509 "
            r0.append(r2)
            r0.append(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3._header2 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-----END "
            r0.append(r2)
            r0.append(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3._footer1 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-----END X509 "
            r0.append(r2)
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            r3._footer2 = r4
            return
    }

    private java.lang.String readLine(java.io.InputStream r5) throws java.io.IOException {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
        L5:
            int r1 = r5.read()
            r2 = 13
            if (r1 == r2) goto L1b
            r3 = 10
            if (r1 == r3) goto L1b
            if (r1 < 0) goto L1b
            if (r1 != r2) goto L16
            goto L5
        L16:
            char r1 = (char) r1
            r0.append(r1)
            goto L5
        L1b:
            if (r1 < 0) goto L23
            int r2 = r0.length()
            if (r2 == 0) goto L5
        L23:
            if (r1 >= 0) goto L27
            r5 = 0
            return r5
        L27:
            java.lang.String r5 = r0.toString()
            return r5
    }

    org.bouncycastle.asn1.ASN1Sequence readPEMObject(java.io.InputStream r4) throws java.io.IOException {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
        L5:
            java.lang.String r1 = r3.readLine(r4)
            if (r1 == 0) goto L1b
            java.lang.String r2 = r3._header1
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L1b
            java.lang.String r2 = r3._header2
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L5
        L1b:
            java.lang.String r1 = r3.readLine(r4)
            if (r1 == 0) goto L36
            java.lang.String r2 = r3._footer1
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L36
            java.lang.String r2 = r3._footer2
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L32
            goto L36
        L32:
            r0.append(r1)
            goto L1b
        L36:
            int r4 = r0.length()
            if (r4 == 0) goto L5c
            org.bouncycastle.asn1.ASN1InputStream r4 = new org.bouncycastle.asn1.ASN1InputStream
            java.lang.String r0 = r0.toString()
            byte[] r0 = org.bouncycastle.util.encoders.Base64.decode(r0)
            r4.<init>(r0)
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()
            boolean r0 = r4 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L54
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            return r4
        L54:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "malformed PEM data encountered"
            r4.<init>(r0)
            throw r4
        L5c:
            r4 = 0
            return r4
    }
}
