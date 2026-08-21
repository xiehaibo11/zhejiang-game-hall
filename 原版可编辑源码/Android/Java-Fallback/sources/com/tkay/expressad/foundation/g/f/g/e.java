package com.tkay.expressad.foundation.g.f.g;

public class e {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.g.e> r0 = com.tkay.expressad.foundation.g.f.g.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.g.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.util.List<com.tkay.expressad.foundation.g.f.c.c> r5) {
            java.lang.String r0 = "Content-Type"
            com.tkay.expressad.foundation.g.f.c.c r5 = b(r5, r0)
            if (r5 == 0) goto L3e
            java.lang.String r5 = r5.b()
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L3e
            java.lang.String r0 = ";"
            java.lang.String[] r5 = r5.split(r0)
            r0 = 1
            r1 = r0
        L1a:
            int r2 = r5.length
            if (r1 >= r2) goto L3e
            r2 = r5[r1]
            java.lang.String r2 = r2.trim()
            java.lang.String r3 = "="
            java.lang.String[] r2 = r2.split(r3)
            int r3 = r2.length
            r4 = 2
            if (r3 != r4) goto L3b
            r3 = 0
            r3 = r2[r3]
            java.lang.String r4 = "charset"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L3b
            r5 = r2[r0]
            goto L40
        L3b:
            int r1 = r1 + 1
            goto L1a
        L3e:
            java.lang.String r5 = "UTF-8"
        L40:
            return r5
    }

    public static java.lang.String a(java.util.List<com.tkay.expressad.foundation.g.f.c.c> r0, java.lang.String r1) {
            com.tkay.expressad.foundation.g.f.c.c r0 = b(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.b()
            goto Ld
        Lb:
            java.lang.String r0 = ""
        Ld:
            return r0
    }

    private static void a(com.tkay.expressad.foundation.g.f.h.b r1, java.lang.String r2, java.lang.String r3) {
            if (r1 == 0) goto L17
            boolean r0 = com.tkay.expressad.foundation.h.w.a(r2)     // Catch: java.lang.Exception -> L13
            if (r0 != 0) goto L17
            boolean r0 = com.tkay.expressad.foundation.h.w.a(r3)     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto Lf
            goto L17
        Lf:
            r1.a(r2, r3)     // Catch: java.lang.Exception -> L13
            return
        L13:
            r1 = move-exception
            r1.printStackTrace()
        L17:
            return
    }

    private static com.tkay.expressad.foundation.g.f.c.c b(java.util.List<com.tkay.expressad.foundation.g.f.c.c> r3, java.lang.String r4) {
            if (r3 == 0) goto L1f
            r0 = 0
        L3:
            int r1 = r3.size()
            if (r0 >= r1) goto L1f
            java.lang.Object r1 = r3.get(r0)
            com.tkay.expressad.foundation.g.f.c.c r1 = (com.tkay.expressad.foundation.g.f.c.c) r1
            if (r1 == 0) goto L1c
            java.lang.String r2 = r1.a()
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L1c
            goto L20
        L1c:
            int r0 = r0 + 1
            goto L3
        L1f:
            r1 = 0
        L20:
            return r1
    }

    public static boolean b(java.util.List<com.tkay.expressad.foundation.g.f.c.c> r1) {
            java.lang.String r0 = "Content-Encoding"
            java.lang.String r1 = a(r1, r0)
            java.lang.String r0 = "gzip"
            boolean r1 = android.text.TextUtils.equals(r1, r0)
            return r1
    }

    private static boolean c(java.util.List<com.tkay.expressad.foundation.g.f.c.c> r3) {
            java.lang.String r0 = "Accept-Ranges"
            java.lang.String r0 = a(r3, r0)
            java.lang.String r1 = "bytes"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            r2 = 1
            if (r0 == 0) goto L10
            return r2
        L10:
            java.lang.String r0 = "Content-Range"
            java.lang.String r3 = a(r3, r0)
            if (r3 == 0) goto L1f
            boolean r3 = r3.startsWith(r1)
            if (r3 == 0) goto L1f
            return r2
        L1f:
            r3 = 0
            return r3
    }
}
