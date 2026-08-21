package com.tkay.expressad.foundation.h;

public final class o {
    public static boolean a = true;
    public static boolean b = true;
    public static boolean c = true;
    public static boolean d = true;
    public static boolean e = true;
    public static boolean f = false;
    public static boolean g = true;
    public static boolean h = false;
    private static final java.lang.String i = "tkay_";

    static {
            boolean r0 = com.tkay.expressad.b.a
            if (r0 != 0) goto L15
            r0 = 0
            com.tkay.expressad.foundation.h.o.a = r0
            com.tkay.expressad.foundation.h.o.b = r0
            com.tkay.expressad.foundation.h.o.c = r0
            com.tkay.expressad.foundation.h.o.d = r0
            com.tkay.expressad.foundation.h.o.e = r0
            com.tkay.expressad.foundation.h.o.f = r0
            com.tkay.expressad.foundation.h.o.g = r0
            com.tkay.expressad.foundation.h.o.h = r0
        L15:
            return
    }

    private o() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L10
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "tkay_"
            java.lang.String r1 = r0.concat(r1)
        L10:
            return r1
    }

    private static void a(android.content.Context r1, java.lang.String r2) {
            boolean r0 = com.tkay.expressad.foundation.h.o.f
            if (r0 == 0) goto Lc
            r0 = 1
            android.widget.Toast r1 = android.widget.Toast.makeText(r1, r2, r0)
            r1.show()
        Lc:
            return
    }

    private static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.tkay.expressad.foundation.h.o.a
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.v(r1, r2)
        L11:
            return
    }

    private static void a(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.tkay.expressad.foundation.h.o.a
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.v(r1, r2, r3)
        L11:
            return
    }

    private static void a(java.lang.String r1, java.lang.Throwable r2) {
            boolean r0 = com.tkay.expressad.foundation.h.o.d
            if (r0 == 0) goto Ld
            if (r2 == 0) goto Ld
            java.lang.String r1 = a(r1)
            android.util.Log.w(r1, r2)
        Ld:
            return
    }

    private static void b(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.tkay.expressad.foundation.h.o.b
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.d(r1, r2)
        L11:
            return
    }

    private static void b(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.tkay.expressad.foundation.h.o.b
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.d(r1, r2, r3)
        L11:
            return
    }

    private static void c(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.tkay.expressad.foundation.h.o.c
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.i(r1, r2)
        L11:
            return
    }

    private static void c(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.tkay.expressad.foundation.h.o.c
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.i(r1, r2, r3)
        L11:
            return
    }

    private static void d(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.tkay.expressad.foundation.h.o.d
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.w(r1, r2)
        L11:
            return
    }

    private static void d(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.tkay.expressad.foundation.h.o.d
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.w(r1, r2, r3)
        L11:
            return
    }

    private static void e(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.tkay.expressad.foundation.h.o.e
            if (r0 == 0) goto Ld
            if (r2 == 0) goto Ld
            java.lang.String r1 = a(r1)
            android.util.Log.e(r1, r2)
        Ld:
            return
    }

    private static void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.tkay.expressad.foundation.h.o.e
            if (r0 == 0) goto Ld
            if (r2 == 0) goto Ld
            java.lang.String r1 = a(r1)
            android.util.Log.e(r1, r2, r3)
        Ld:
            return
    }
}
