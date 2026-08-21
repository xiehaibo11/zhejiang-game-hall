package com.tkay.expressad.a;

public final class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r0) {
            return r0
    }

    private static java.lang.String a(java.lang.String r2, java.util.List<java.lang.String> r3, java.lang.String r4) {
            if (r3 == 0) goto L1d
            java.util.Iterator r3 = r3.iterator()
        L6:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1d
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L6
            java.lang.String r2 = r2.replaceAll(r0, r4)
            goto L6
        L1d:
            return r2
    }
}
