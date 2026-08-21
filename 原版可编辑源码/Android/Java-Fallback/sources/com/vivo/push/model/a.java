package com.vivo.push.model;

public final class a {
    private java.lang.String a;
    private java.lang.String b;

    public a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.vivo.push.model.a r5 = (com.vivo.push.model.a) r5
            java.lang.String r2 = r4.a
            java.lang.String r5 = r5.a
            if (r2 != 0) goto L1e
            if (r5 == 0) goto L25
            return r1
        L1e:
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L25
            return r1
        L25:
            return r0
    }

    public final int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            int r0 = r0 + 31
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ConfigItem{mKey='"
            r0.<init>(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", mValue='"
            r0.append(r2)
            java.lang.String r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
