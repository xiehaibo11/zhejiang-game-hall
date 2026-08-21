package org.bouncycastle.asn1.x509;

public class X509NameTokenizer {
    private java.lang.StringBuffer buf;
    private int index;
    private char seperator;
    private java.lang.String value;

    public X509NameTokenizer(java.lang.String r2) {
            r1 = this;
            r0 = 44
            r1.<init>(r2, r0)
            return
    }

    public X509NameTokenizer(java.lang.String r2, char r3) {
            r1 = this;
            r1.<init>()
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1.buf = r0
            r1.value = r2
            r2 = -1
            r1.index = r2
            r1.seperator = r3
            return
    }

    public boolean hasMoreTokens() {
            r2 = this;
            int r0 = r2.index
            java.lang.String r1 = r2.value
            int r1 = r1.length()
            if (r0 == r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public java.lang.String nextToken() {
            r8 = this;
            int r0 = r8.index
            java.lang.String r1 = r8.value
            int r1 = r1.length()
            if (r0 != r1) goto Lc
            r0 = 0
            return r0
        Lc:
            int r0 = r8.index
            r1 = 1
            int r0 = r0 + r1
            java.lang.StringBuffer r2 = r8.buf
            r3 = 0
            r2.setLength(r3)
            r2 = 0
            r4 = 0
        L18:
            java.lang.String r5 = r8.value
            int r5 = r5.length()
            if (r0 == r5) goto L66
            java.lang.String r5 = r8.value
            char r5 = r5.charAt(r0)
            r6 = 34
            if (r5 != r6) goto L2f
            if (r2 != 0) goto L5d
            r4 = r4 ^ 1
            goto L62
        L2f:
            r6 = 92
            if (r2 != 0) goto L45
            if (r4 == 0) goto L36
            goto L45
        L36:
            if (r5 != r6) goto L3a
            r2 = 1
            goto L63
        L3a:
            char r6 = r8.seperator
            if (r5 != r6) goto L3f
            goto L66
        L3f:
            java.lang.StringBuffer r6 = r8.buf
            r6.append(r5)
            goto L63
        L45:
            r2 = 35
            if (r5 != r2) goto L5d
            java.lang.StringBuffer r2 = r8.buf
            int r7 = r2.length()
            int r7 = r7 - r1
            char r2 = r2.charAt(r7)
            r7 = 61
            if (r2 != r7) goto L5d
            java.lang.StringBuffer r2 = r8.buf
            r2.append(r6)
        L5d:
            java.lang.StringBuffer r2 = r8.buf
            r2.append(r5)
        L62:
            r2 = 0
        L63:
            int r0 = r0 + 1
            goto L18
        L66:
            r8.index = r0
            java.lang.StringBuffer r0 = r8.buf
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = r0.trim()
            return r0
    }
}
