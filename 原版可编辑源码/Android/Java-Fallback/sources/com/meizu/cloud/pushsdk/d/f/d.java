package com.meizu.cloud.pushsdk.d.f;

public final class d {
    public static <T> T a(T r0) {
            if (r0 == 0) goto L3
            return r0
        L3:
            r0 = 0
            throw r0
    }

    public static <T> T a(T r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }

    public static void a(boolean r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            throw r0
    }
}
