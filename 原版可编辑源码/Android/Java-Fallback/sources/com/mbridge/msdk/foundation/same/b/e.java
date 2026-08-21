package com.mbridge.msdk.foundation.same.b;

public final class e {
    private static com.mbridge.msdk.foundation.same.b.e c;
    private com.mbridge.msdk.foundation.same.b.b a;
    private java.util.ArrayList<com.mbridge.msdk.foundation.same.b.e.a> b;

    private static final class a {
        public com.mbridge.msdk.foundation.same.b.c a;
        public java.io.File b;

        public a(com.mbridge.msdk.foundation.same.b.c r1, java.io.File r2) {
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

    private e(com.mbridge.msdk.foundation.same.b.b r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.b = r1
            return
    }

    public static synchronized com.mbridge.msdk.foundation.same.b.e a() {
            java.lang.Class<com.mbridge.msdk.foundation.same.b.e> r0 = com.mbridge.msdk.foundation.same.b.e.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.same.b.e r1 = com.mbridge.msdk.foundation.same.b.e.c     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L1c
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2b
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto L1c
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2b
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L2b
            com.mbridge.msdk.foundation.tools.ac.a(r1)     // Catch: java.lang.Throwable -> L2b
        L1c:
            com.mbridge.msdk.foundation.same.b.e r1 = com.mbridge.msdk.foundation.same.b.e.c     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L27
            java.lang.String r1 = "MBridgeDirManager"
            java.lang.String r2 = "mDirectoryManager == null"
            android.util.Log.e(r1, r2)     // Catch: java.lang.Throwable -> L2b
        L27:
            com.mbridge.msdk.foundation.same.b.e r1 = com.mbridge.msdk.foundation.same.b.e.c     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)
            return r1
        L2b:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.io.File a(com.mbridge.msdk.foundation.same.b.c r3) {
            com.mbridge.msdk.foundation.same.b.e r0 = a()     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L31
            com.mbridge.msdk.foundation.same.b.e r0 = a()     // Catch: java.lang.Throwable -> L27
            java.util.ArrayList<com.mbridge.msdk.foundation.same.b.e$a> r0 = r0.b     // Catch: java.lang.Throwable -> L27
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L27
        L10:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.foundation.same.b.e$a r1 = (com.mbridge.msdk.foundation.same.b.e.a) r1     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.foundation.same.b.c r2 = r1.a     // Catch: java.lang.Throwable -> L27
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L27
            if (r2 == 0) goto L10
            java.io.File r3 = r1.b     // Catch: java.lang.Throwable -> L27
            return r3
        L27:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r1 = "MBridgeDirManager"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0, r3)
        L31:
            r3 = 0
            return r3
    }

    public static synchronized void a(com.mbridge.msdk.foundation.same.b.b r2) {
            java.lang.Class<com.mbridge.msdk.foundation.same.b.e> r0 = com.mbridge.msdk.foundation.same.b.e.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.same.b.e r1 = com.mbridge.msdk.foundation.same.b.e.c     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.mbridge.msdk.foundation.same.b.e r1 = new com.mbridge.msdk.foundation.same.b.e     // Catch: java.lang.Throwable -> L10
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.foundation.same.b.e.c = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private boolean a(com.mbridge.msdk.foundation.same.b.a r7) {
            r6 = this;
            com.mbridge.msdk.foundation.same.b.a r0 = r7.c()
            if (r0 != 0) goto Lb
            java.lang.String r0 = r7.b()
            goto L2f
        Lb:
            com.mbridge.msdk.foundation.same.b.c r0 = r0.a()
            java.io.File r0 = a(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = r0.getAbsolutePath()
            r1.append(r0)
            java.lang.String r0 = java.io.File.separator
            r1.append(r0)
            java.lang.String r0 = r7.b()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L2f:
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r0 = r1.exists()
            r2 = 1
            if (r0 != 0) goto L40
            boolean r0 = r1.mkdirs()
            goto L41
        L40:
            r0 = r2
        L41:
            r3 = 0
            if (r0 != 0) goto L45
            return r3
        L45:
            java.util.ArrayList<com.mbridge.msdk.foundation.same.b.e$a> r0 = r6.b
            com.mbridge.msdk.foundation.same.b.e$a r4 = new com.mbridge.msdk.foundation.same.b.e$a
            com.mbridge.msdk.foundation.same.b.c r5 = r7.a()
            r4.<init>(r5, r1)
            r0.add(r4)
            java.util.List r7 = r7.d()
            if (r7 == 0) goto L70
            java.util.Iterator r7 = r7.iterator()
        L5d:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L70
            java.lang.Object r0 = r7.next()
            com.mbridge.msdk.foundation.same.b.a r0 = (com.mbridge.msdk.foundation.same.b.a) r0
            boolean r0 = r6.a(r0)
            if (r0 != 0) goto L5d
            return r3
        L70:
            return r2
    }

    public static java.lang.String b(com.mbridge.msdk.foundation.same.b.c r0) {
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
            com.mbridge.msdk.foundation.same.b.b r0 = r1.a
            com.mbridge.msdk.foundation.same.b.a r0 = r0.a()
            boolean r0 = r1.a(r0)
            return r0
    }
}
