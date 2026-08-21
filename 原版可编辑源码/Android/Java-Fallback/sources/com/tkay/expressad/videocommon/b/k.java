package com.tkay.expressad.videocommon.b;

public final class k {
    public static final java.lang.String a = "foldername";
    public static final java.lang.String b = "md5filename";
    public static final java.lang.String c = "nc";
    public static final int d = 259200000;
    private static java.lang.String e = "ResourceManager";
    private java.lang.String f;


    private static class a {
        public static com.tkay.expressad.videocommon.b.k a;

        static {
                com.tkay.expressad.videocommon.b.k r0 = new com.tkay.expressad.videocommon.b.k
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.videocommon.b.k.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            return
    }

    private k() {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.g
            java.lang.String r0 = com.tkay.expressad.foundation.g.c.f.b(r0)
            r1.f = r0
            return
    }

    k(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.videocommon.b.k a() {
            com.tkay.expressad.videocommon.b.k r0 = com.tkay.expressad.videocommon.b.k.a.a
            return r0
    }

    static java.lang.String a(com.tkay.expressad.videocommon.b.k r0) {
            java.lang.String r0 = r0.f
            return r0
    }

    private java.lang.String a(java.lang.String r3, java.lang.String r4, java.io.File r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.f
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r3)
            java.lang.String r3 = com.tkay.expressad.foundation.h.p.a(r3)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r3 = com.tkay.expressad.foundation.h.m.a(r4, r3)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L2c
            java.lang.String r3 = com.tkay.expressad.foundation.h.m.b(r5)
        L2c:
            return r3
    }

    private void c() {
            r1 = this;
            com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.g
            java.lang.String r0 = com.tkay.expressad.foundation.g.c.f.b(r0)
            r1.f = r0
            return
    }

    public final java.lang.String a(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "?"
            java.lang.String r1 = ""
            java.lang.String r2 = "/"
            java.lang.String r3 = com.tkay.expressad.foundation.h.x.a(r7)     // Catch: java.lang.Exception -> L90
            java.lang.String r3 = com.tkay.expressad.foundation.h.p.a(r3)     // Catch: java.lang.Exception -> L90
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L90
            r4.<init>()     // Catch: java.lang.Exception -> L90
            java.lang.String r5 = r6.f     // Catch: java.lang.Exception -> L90
            r4.append(r5)     // Catch: java.lang.Exception -> L90
            r4.append(r2)     // Catch: java.lang.Exception -> L90
            r4.append(r3)     // Catch: java.lang.Exception -> L90
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L90
            android.net.Uri r4 = android.net.Uri.parse(r7)     // Catch: java.lang.Exception -> L90
            java.lang.String r5 = "foldername"
            java.util.List r4 = r4.getQueryParameters(r5)     // Catch: java.lang.Exception -> L90
            if (r4 == 0) goto L98
            int r5 = r4.size()     // Catch: java.lang.Exception -> L90
            if (r5 <= 0) goto L98
            r5 = 0
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Exception -> L90
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L90
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L90
            if (r5 != 0) goto L98
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L90
            r5.<init>()     // Catch: java.lang.Exception -> L90
            r5.append(r3)     // Catch: java.lang.Exception -> L90
            r5.append(r2)     // Catch: java.lang.Exception -> L90
            r5.append(r4)     // Catch: java.lang.Exception -> L90
            r5.append(r2)     // Catch: java.lang.Exception -> L90
            r5.append(r4)     // Catch: java.lang.Exception -> L90
            java.lang.String r2 = ".html"
            r5.append(r2)     // Catch: java.lang.Exception -> L90
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> L90
            boolean r3 = com.tkay.expressad.foundation.h.m.a(r2)     // Catch: java.lang.Exception -> L90
            if (r3 == 0) goto L98
            int r3 = r7.indexOf(r0)     // Catch: java.lang.Exception -> L6f
            int r3 = r3 + 1
            java.lang.String r7 = r7.substring(r3)     // Catch: java.lang.Exception -> L6f
            goto L70
        L6f:
            r7 = r1
        L70:
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L90
            if (r3 != 0) goto L7e
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L90
            java.lang.String r1 = r0.concat(r7)     // Catch: java.lang.Exception -> L90
        L7e:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L90
            java.lang.String r0 = "file://"
            r7.<init>(r0)     // Catch: java.lang.Exception -> L90
            r7.append(r2)     // Catch: java.lang.Exception -> L90
            r7.append(r1)     // Catch: java.lang.Exception -> L90
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L90
            return r7
        L90:
            r7 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L98
            r7.printStackTrace()
        L98:
            r7 = 0
            return r7
    }

    public final synchronized java.lang.String a(java.lang.String r5, byte[] r6) {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "unknow exception "
            if (r6 == 0) goto L8f
            int r1 = r6.length     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r1 <= 0) goto L8f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = r4.f     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = "/"
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = com.tkay.expressad.foundation.h.x.a(r5)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = com.tkay.expressad.foundation.h.p.a(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r2 = ".zip"
            r1.append(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r2.<init>(r1)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            boolean r6 = com.tkay.expressad.foundation.h.m.a(r6, r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r6 == 0) goto L78
            android.net.Uri r6 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r3 = "nc"
            java.util.List r3 = r6.getQueryParameters(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 == 0) goto L4f
            int r3 = r3.size()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 != 0) goto L49
            goto L4f
        L49:
            java.lang.String r5 = r4.a(r5, r1, r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            r0 = r5
            goto L78
        L4f:
            java.lang.String r3 = "md5filename"
            java.util.List r6 = r6.getQueryParameters(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r6 == 0) goto L78
            int r3 = r6.size()     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 <= 0) goto L78
            r3 = 0
            java.lang.Object r6 = r6.get(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            boolean r3 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r3 != 0) goto L78
            java.lang.String r3 = com.tkay.expressad.foundation.h.l.a(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            boolean r6 = r6.equals(r3)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r6 == 0) goto L78
            java.lang.String r0 = r4.a(r5, r1, r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
        L78:
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            if (r5 != 0) goto L8f
            com.tkay.expressad.foundation.h.m.b(r2)     // Catch: java.lang.Exception -> L82 java.lang.Throwable -> L92
            goto L8f
        L82:
            r5 = move-exception
            boolean r6 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L92
            if (r6 == 0) goto L8a
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L92
        L8a:
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L92
            goto L90
        L8f:
            r5 = r0
        L90:
            monitor-exit(r4)
            return r5
        L92:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final void b() {
            r2 = this;
            java.lang.String r0 = r2.f     // Catch: java.lang.Exception -> L13
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L13
            if (r0 != 0) goto L12
            com.tkay.expressad.videocommon.b.f r0 = com.tkay.expressad.videocommon.b.f.a.a     // Catch: java.lang.Exception -> L13
            com.tkay.expressad.videocommon.b.k$1 r1 = new com.tkay.expressad.videocommon.b.k$1     // Catch: java.lang.Exception -> L13
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
