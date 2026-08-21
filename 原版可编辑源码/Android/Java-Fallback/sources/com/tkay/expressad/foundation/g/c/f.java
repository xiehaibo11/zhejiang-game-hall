package com.tkay.expressad.foundation.g.c;

public final class f {
    private static final java.lang.String a = "TkayDirManager";
    private static com.tkay.expressad.foundation.g.c.f d;
    private com.tkay.expressad.foundation.g.c.b b;
    private java.util.ArrayList<com.tkay.expressad.foundation.g.c.f.a> c;

    private static final class a {
        public com.tkay.expressad.foundation.g.c.c a;
        public java.io.File b;

        public a(com.tkay.expressad.foundation.g.c.c r1, java.io.File r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    static {
            return
    }

    private f(com.tkay.expressad.foundation.g.c.b r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.c = r1
            return
    }

    public static synchronized com.tkay.expressad.foundation.g.c.f a() {
            java.lang.Class<com.tkay.expressad.foundation.g.c.f> r0 = com.tkay.expressad.foundation.g.c.f.class
            monitor-enter(r0)
            com.tkay.expressad.foundation.g.c.f r1 = com.tkay.expressad.foundation.g.c.f.d     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L1c
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L2b
            android.content.Context r1 = r1.d()     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto L1c
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L2b
            android.content.Context r1 = r1.d()     // Catch: java.lang.Throwable -> L2b
            com.tkay.expressad.foundation.h.r.a(r1)     // Catch: java.lang.Throwable -> L2b
        L1c:
            com.tkay.expressad.foundation.g.c.f r1 = com.tkay.expressad.foundation.g.c.f.d     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L27
            java.lang.String r1 = "TkayDirManager"
            java.lang.String r2 = "mDirectoryManager == null"
            android.util.Log.e(r1, r2)     // Catch: java.lang.Throwable -> L2b
        L27:
            com.tkay.expressad.foundation.g.c.f r1 = com.tkay.expressad.foundation.g.c.f.d     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)
            return r1
        L2b:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.io.File a(com.tkay.expressad.foundation.g.c.c r3) {
            com.tkay.expressad.foundation.g.c.f r0 = a()     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L3f
            com.tkay.expressad.foundation.g.c.f r0 = a()     // Catch: java.lang.Throwable -> L3b
            java.util.ArrayList<com.tkay.expressad.foundation.g.c.f$a> r0 = r0.c     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L3f
            com.tkay.expressad.foundation.g.c.f r0 = a()     // Catch: java.lang.Throwable -> L3b
            java.util.ArrayList<com.tkay.expressad.foundation.g.c.f$a> r0 = r0.c     // Catch: java.lang.Throwable -> L3b
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3b
            if (r0 <= 0) goto L3f
            com.tkay.expressad.foundation.g.c.f r0 = a()     // Catch: java.lang.Throwable -> L3b
            java.util.ArrayList<com.tkay.expressad.foundation.g.c.f$a> r0 = r0.c     // Catch: java.lang.Throwable -> L3b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3b
        L24:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3b
            com.tkay.expressad.foundation.g.c.f$a r1 = (com.tkay.expressad.foundation.g.c.f.a) r1     // Catch: java.lang.Throwable -> L3b
            com.tkay.expressad.foundation.g.c.c r2 = r1.a     // Catch: java.lang.Throwable -> L3b
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L3b
            if (r2 == 0) goto L24
            java.io.File r3 = r1.b     // Catch: java.lang.Throwable -> L3b
            return r3
        L3b:
            r3 = move-exception
            r3.getMessage()
        L3f:
            r3 = 0
            return r3
    }

    public static synchronized void a(com.tkay.expressad.foundation.g.c.b r2) {
            java.lang.Class<com.tkay.expressad.foundation.g.c.f> r0 = com.tkay.expressad.foundation.g.c.f.class
            monitor-enter(r0)
            com.tkay.expressad.foundation.g.c.f r1 = com.tkay.expressad.foundation.g.c.f.d     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.tkay.expressad.foundation.g.c.f r1 = new com.tkay.expressad.foundation.g.c.f     // Catch: java.lang.Throwable -> L10
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L10
            com.tkay.expressad.foundation.g.c.f.d = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private boolean a(com.tkay.expressad.foundation.g.c.a r7) {
            r6 = this;
            com.tkay.expressad.foundation.g.c.a r0 = r7.c()
            r1 = 0
            if (r0 != 0) goto Lc
            java.lang.String r0 = r7.b()
            goto L33
        Lc:
            com.tkay.expressad.foundation.g.c.c r0 = r0.a()
            java.io.File r0 = a(r0)
            if (r0 != 0) goto L17
            return r1
        L17:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = r0.getAbsolutePath()
            r2.append(r0)
            java.lang.String r0 = java.io.File.separator
            r2.append(r0)
            java.lang.String r0 = r7.b()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
        L33:
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            boolean r0 = r2.exists()
            r3 = 1
            if (r0 != 0) goto L44
            boolean r0 = r2.mkdirs()
            goto L45
        L44:
            r0 = r3
        L45:
            if (r0 != 0) goto L48
            return r1
        L48:
            java.util.ArrayList<com.tkay.expressad.foundation.g.c.f$a> r0 = r6.c
            com.tkay.expressad.foundation.g.c.f$a r4 = new com.tkay.expressad.foundation.g.c.f$a
            com.tkay.expressad.foundation.g.c.c r5 = r7.a()
            r4.<init>(r5, r2)
            r0.add(r4)
            java.util.List r7 = r7.d()
            if (r7 == 0) goto L73
            java.util.Iterator r7 = r7.iterator()
        L60:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L73
            java.lang.Object r0 = r7.next()
            com.tkay.expressad.foundation.g.c.a r0 = (com.tkay.expressad.foundation.g.c.a) r0
            boolean r0 = r6.a(r0)
            if (r0 != 0) goto L60
            return r1
        L73:
            return r3
    }

    public static java.lang.String b(com.tkay.expressad.foundation.g.c.c r0) {
            java.io.File r0 = a(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public final boolean b() {
            r1 = this;
            com.tkay.expressad.foundation.g.c.b r0 = r1.b
            com.tkay.expressad.foundation.g.c.a r0 = r0.a()
            boolean r0 = r1.a(r0)
            return r0
    }
}
