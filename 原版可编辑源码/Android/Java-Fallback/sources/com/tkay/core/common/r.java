package com.tkay.core.common;

public class r {
    public static final java.lang.String a = null;
    private static volatile com.tkay.core.common.r b;
    private android.content.Context c;



    static {
            java.lang.Class<com.tkay.core.common.r> r0 = com.tkay.core.common.r.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.r.a = r0
            return
    }

    private r(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.c = r1
            return
    }

    static android.content.Context a(com.tkay.core.common.r r0) {
            android.content.Context r0 = r0.c
            return r0
    }

    public static com.tkay.core.common.r a(android.content.Context r2) {
            com.tkay.core.common.r r0 = com.tkay.core.common.r.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.r> r0 = com.tkay.core.common.r.class
            monitor-enter(r0)
            com.tkay.core.common.r r1 = com.tkay.core.common.r.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.r r1 = new com.tkay.core.common.r     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.r.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.r r2 = com.tkay.core.common.r.b
            return r2
    }

    private void a(int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, com.tkay.core.common.f.d r7) {
            r1 = this;
            android.content.Context r0 = r1.c
            if (r0 != 0) goto L5
            return
        L5:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L4f
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "common"
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "data"
            r0.putExtra(r3, r5)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "adsourceId"
            r0.putExtra(r3, r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "networkType"
            int r4 = r7.H()     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L4f
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "format"
            java.lang.String r4 = r7.Y()     // Catch: java.lang.Throwable -> L4f
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "showid"
            java.lang.String r4 = r7.l()     // Catch: java.lang.Throwable -> L4f
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = "tktype"
            r0.putExtra(r3, r2)     // Catch: java.lang.Throwable -> L4f
            android.content.Context r2 = r1.c     // Catch: java.lang.Throwable -> L4f
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L4f
            r0.setPackage(r2)     // Catch: java.lang.Throwable -> L4f
            android.content.Context r2 = r1.c     // Catch: java.lang.Throwable -> L4f
            com.tkay.core.common.b.j r2 = com.tkay.core.common.b.j.a(r2)     // Catch: java.lang.Throwable -> L4f
            r2.a(r0)     // Catch: java.lang.Throwable -> L4f
        L4f:
            return
    }

    static void a(com.tkay.core.common.r r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, com.tkay.core.common.f.d r7) {
            android.content.Context r0 = r1.c
            if (r0 == 0) goto L4e
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L4e
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "common"
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "data"
            r0.putExtra(r3, r5)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "adsourceId"
            r0.putExtra(r3, r6)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "networkType"
            int r4 = r7.H()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L4e
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "format"
            java.lang.String r4 = r7.Y()     // Catch: java.lang.Throwable -> L4e
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "showid"
            java.lang.String r4 = r7.l()     // Catch: java.lang.Throwable -> L4e
            r0.putExtra(r3, r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "tktype"
            r0.putExtra(r3, r2)     // Catch: java.lang.Throwable -> L4e
            android.content.Context r2 = r1.c     // Catch: java.lang.Throwable -> L4e
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L4e
            r0.setPackage(r2)     // Catch: java.lang.Throwable -> L4e
            android.content.Context r1 = r1.c     // Catch: java.lang.Throwable -> L4e
            com.tkay.core.common.b.j r1 = com.tkay.core.common.b.j.a(r1)     // Catch: java.lang.Throwable -> L4e
            r1.a(r0)     // Catch: java.lang.Throwable -> L4e
        L4e:
            return
    }

    public final void a(int r2, com.tkay.core.common.f.e r3, com.tkay.core.c.a r4) {
            r1 = this;
            com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lb
            com.tkay.core.common.r$1 r0 = new com.tkay.core.common.r$1     // Catch: java.lang.Throwable -> Lb
            r0.<init>(r1, r3, r2, r4)     // Catch: java.lang.Throwable -> Lb
            com.tkay.core.common.b.m.b(r0)     // Catch: java.lang.Throwable -> Lb
        Lb:
            return
    }

    public final void a(com.tkay.core.c.a r2) {
            r1 = this;
            com.tkay.core.common.b.m.a()
            com.tkay.core.common.r$2 r0 = new com.tkay.core.common.r$2
            r0.<init>(r1, r2)
            com.tkay.core.common.b.m.d(r0)
            return
    }
}
