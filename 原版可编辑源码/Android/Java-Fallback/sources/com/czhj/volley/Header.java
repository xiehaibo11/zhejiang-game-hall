package com.czhj.volley;

public final class Header {
    private final java.lang.String a;
    private final java.lang.String b;

    public Header(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L2b
        L12:
            com.czhj.volley.Header r5 = (com.czhj.volley.Header) r5
            java.lang.String r2 = r4.a
            java.lang.String r3 = r5.a
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            if (r2 == 0) goto L29
            java.lang.String r2 = r4.b
            java.lang.String r5 = r5.b
            boolean r5 = android.text.TextUtils.equals(r2, r5)
            if (r5 == 0) goto L29
            goto L2a
        L29:
            r0 = r1
        L2a:
            return r0
        L2b:
            return r1
    }

    public final java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final java.lang.String getValue() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.a
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            java.lang.String r1 = r2.b
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Header[name="
            r0.append(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ",value="
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
