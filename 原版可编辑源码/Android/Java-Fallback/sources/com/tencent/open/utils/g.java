package com.tencent.open.utils;

public final class g {
    private static android.content.Context a;

    public static final android.content.Context a() {
            android.content.Context r0 = com.tencent.open.utils.g.a
            if (r0 != 0) goto L5
            r0 = 0
        L5:
            return r0
    }

    public static final java.io.File a(java.lang.String r1) {
            android.content.Context r0 = a()
            java.io.File r1 = com.tencent.open.utils.m.h(r0, r1)
            return r1
    }

    public static final void a(android.content.Context r0) {
            com.tencent.open.utils.g.a = r0
            return
    }

    public static final java.lang.String b() {
            android.content.Context r0 = a()
            if (r0 != 0) goto L9
            java.lang.String r0 = ""
            return r0
        L9:
            android.content.Context r0 = a()
            java.lang.String r0 = r0.getPackageName()
            return r0
    }

    public static final java.io.File c() {
            android.content.Context r0 = a()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            android.content.Context r0 = a()
            java.io.File r0 = r0.getFilesDir()
            return r0
    }

    public static final java.io.File d() {
            android.content.Context r0 = a()
            if (r0 == 0) goto Lb
            java.io.File r0 = r0.getCacheDir()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public static final java.io.File e() {
            r0 = 0
            java.io.File r0 = a(r0)
            return r0
    }
}
