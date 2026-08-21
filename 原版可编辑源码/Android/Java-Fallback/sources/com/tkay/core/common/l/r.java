package com.tkay.core.common.l;

public final class r {
    public r() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            int r0 = r2.length()
            int r3 = r3.length()
            if (r0 != r3) goto Lb
            return r2
        Lb:
            int r3 = r3 - r0
            int r3 = java.lang.Math.abs(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            r2 = 0
        L16:
            if (r2 >= r3) goto L20
            java.lang.String r1 = " "
            r0.append(r1)
            int r2 = r2 + 1
            goto L16
        L20:
            java.lang.String r2 = r0.toString()
            return r2
    }
}
