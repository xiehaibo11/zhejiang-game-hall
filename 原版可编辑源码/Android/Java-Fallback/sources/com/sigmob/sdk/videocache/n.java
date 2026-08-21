package com.sigmob.sdk.videocache;

public final class n {
    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T a(T r0) {
            if (r0 == 0) goto L3
            return r0
        L3:
            r0 = 0
            throw r0
    }

    public static <T> T a(T r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return r0
        L3:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            r0.<init>(r1)
            throw r0
    }

    static void a(boolean r0) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>()
            throw r0
    }

    static void a(boolean r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static void a(java.lang.Object... r3) {
            int r0 = r3.length
            r1 = 0
        L2:
            if (r1 >= r0) goto Ld
            r2 = r3[r1]
            if (r2 == 0) goto Lb
            int r1 = r1 + 1
            goto L2
        Lb:
            r3 = 0
            throw r3
        Ld:
            return
    }
}
