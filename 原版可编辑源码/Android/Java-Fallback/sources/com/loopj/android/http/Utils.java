package com.loopj.android.http;

class Utils {
    private Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void asserts(boolean r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r1)
            throw r0
    }

    public static <T> T notNull(T r1, java.lang.String r2) {
            if (r1 == 0) goto L3
            return r1
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " should not be null!"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2)
            throw r1
    }
}
