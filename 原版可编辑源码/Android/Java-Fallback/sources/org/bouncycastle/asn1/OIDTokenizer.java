package org.bouncycastle.asn1;

public class OIDTokenizer {
    private int index;
    private java.lang.String oid;

    public OIDTokenizer(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.oid = r1
            r1 = 0
            r0.index = r1
            return
    }

    public boolean hasMoreTokens() {
            r2 = this;
            int r0 = r2.index
            r1 = -1
            if (r0 == r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public java.lang.String nextToken() {
            r4 = this;
            int r0 = r4.index
            r1 = -1
            if (r0 != r1) goto L7
            r0 = 0
            return r0
        L7:
            java.lang.String r2 = r4.oid
            r3 = 46
            int r0 = r2.indexOf(r3, r0)
            if (r0 != r1) goto L1c
            java.lang.String r0 = r4.oid
            int r2 = r4.index
            java.lang.String r0 = r0.substring(r2)
            r4.index = r1
            return r0
        L1c:
            java.lang.String r1 = r4.oid
            int r2 = r4.index
            java.lang.String r1 = r1.substring(r2, r0)
            int r0 = r0 + 1
            r4.index = r0
            return r1
    }
}
