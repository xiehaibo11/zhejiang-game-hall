package com.tkay.expressad.videocommon.b;

public final class h {
    public static final int a = 259200000;
    private static final java.lang.String b = "HTMLResourceManager";
    private java.lang.String c;


    private static class a {
        public static com.tkay.expressad.videocommon.b.h a;

        static {
                com.tkay.expressad.videocommon.b.h r0 = new com.tkay.expressad.videocommon.b.h
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.videocommon.b.h.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private h() {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.i
            java.lang.String r0 = com.tkay.expressad.foundation.g.c.f.b(r0)
            r1.c = r0
            return
    }

    h(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.videocommon.b.h a() {
            com.tkay.expressad.videocommon.b.h r0 = com.tkay.expressad.videocommon.b.h.a.a
            return r0
    }

    static java.lang.String a(com.tkay.expressad.videocommon.b.h r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    private void c() {
            r1 = this;
            com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.i
            java.lang.String r0 = com.tkay.expressad.foundation.g.c.f.b(r0)
            r1.c = r0
            return
    }

    public final java.lang.String a(java.lang.String r3) {
            r2 = this;
            java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r3)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = com.tkay.expressad.foundation.h.p.a(r3)     // Catch: java.lang.Throwable -> L39
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
            r0.<init>()     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = r2.c     // Catch: java.lang.Throwable -> L39
            r0.append(r1)     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = "/"
            r0.append(r1)     // Catch: java.lang.Throwable -> L39
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = ".html"
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L39
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L39
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L39
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L41
            java.lang.String r0 = "file:////"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = r0.concat(r3)     // Catch: java.lang.Throwable -> L39
            return r3
        L39:
            r3 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L41
            r3.printStackTrace()
        L41:
            r3 = 0
            return r3
    }

    public final boolean a(java.lang.String r3, byte[] r4) {
            r2 = this;
            if (r4 == 0) goto L3d
            int r0 = r4.length     // Catch: java.lang.Exception -> L35
            if (r0 <= 0) goto L3d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L35
            r0.<init>()     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = r2.c     // Catch: java.lang.Exception -> L35
            r0.append(r1)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "/"
            r0.append(r1)     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r3)     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = com.tkay.expressad.foundation.h.p.a(r3)     // Catch: java.lang.Exception -> L35
            r0.append(r3)     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = ".html"
            r0.append(r3)     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L35
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L35
            r0.<init>(r3)     // Catch: java.lang.Exception -> L35
            boolean r3 = com.tkay.expressad.foundation.h.m.a(r4, r0)     // Catch: java.lang.Exception -> L35
            if (r3 == 0) goto L3d
            r3 = 1
            return r3
        L35:
            r3 = move-exception
            boolean r4 = com.tkay.expressad.b.a
            if (r4 == 0) goto L3d
            r3.printStackTrace()
        L3d:
            r3 = 0
            return r3
    }

    public final java.lang.String b(java.lang.String r6) {
            r5 = this;
            java.lang.String r6 = com.tkay.expressad.foundation.h.x.a(r6)     // Catch: java.lang.Throwable -> L37
            java.lang.String r6 = com.tkay.expressad.foundation.h.p.a(r6)     // Catch: java.lang.Throwable -> L37
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            r0.<init>()     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = r5.c     // Catch: java.lang.Throwable -> L37
            r0.append(r1)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "/"
            r0.append(r1)     // Catch: java.lang.Throwable -> L37
            r0.append(r6)     // Catch: java.lang.Throwable -> L37
            java.lang.String r6 = ".html"
            r0.append(r6)     // Catch: java.lang.Throwable -> L37
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L37
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L37
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L37
            long r1 = r0.length()     // Catch: java.lang.Throwable -> L37
            r3 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 <= 0) goto L3f
            java.lang.String r6 = com.tkay.expressad.foundation.h.m.a(r0)     // Catch: java.lang.Throwable -> L37
            return r6
        L37:
            r6 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L3f
            r6.printStackTrace()
        L3f:
            r6 = 0
            return r6
    }

    public final void b() {
            r2 = this;
            java.lang.String r0 = r2.c     // Catch: java.lang.Exception -> L13
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L13
            if (r0 != 0) goto L12
            com.tkay.expressad.videocommon.b.f r0 = com.tkay.expressad.videocommon.b.f.a.a     // Catch: java.lang.Exception -> L13
            com.tkay.expressad.videocommon.b.h$1 r1 = new com.tkay.expressad.videocommon.b.h$1     // Catch: java.lang.Exception -> L13
            r1.<init>(r2)     // Catch: java.lang.Exception -> L13
            r0.a(r1)     // Catch: java.lang.Exception -> L13
        L12:
            return
        L13:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L1b
            r0.printStackTrace()
        L1b:
            return
    }
}
