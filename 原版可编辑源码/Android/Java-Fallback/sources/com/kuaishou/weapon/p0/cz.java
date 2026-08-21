package com.kuaishou.weapon.p0;

public class cz {
    private static volatile com.kuaishou.weapon.p0.cz b;
    private android.content.Context a;
    private android.app.Application.ActivityLifecycleCallbacks c;
    private boolean d;



    private cz(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    static android.content.Context a(com.kuaishou.weapon.p0.cz r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static com.kuaishou.weapon.p0.cz a(android.content.Context r2) {
            com.kuaishou.weapon.p0.cz r0 = com.kuaishou.weapon.p0.cz.b
            if (r0 != 0) goto L17
            java.lang.Class<com.kuaishou.weapon.p0.cz> r0 = com.kuaishou.weapon.p0.cz.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.cz r1 = com.kuaishou.weapon.p0.cz.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kuaishou.weapon.p0.cz r1 = new com.kuaishou.weapon.p0.cz     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.kuaishou.weapon.p0.cz.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.kuaishou.weapon.p0.cz r2 = com.kuaishou.weapon.p0.cz.b
            return r2
    }

    static boolean a(com.kuaishou.weapon.p0.cz r0, boolean r1) {
            r0.d = r1
            return r1
    }

    private void b() {
            r6 = this;
            android.content.Context r0 = r6.a     // Catch: java.lang.Throwable -> L3a
            if (r0 != 0) goto L5
            return
        L5:
            android.content.Context r0 = r6.a     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "re_po_rt"
            com.kuaishou.weapon.p0.h r0 = com.kuaishou.weapon.p0.h.a(r0, r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "plc001_f_act"
            r2 = 0
            int r1 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L3a
            if (r1 != 0) goto L17
            return
        L17:
            r1 = 1
            int[] r3 = new int[r1]     // Catch: java.lang.Throwable -> L3a
            r3[r2] = r2     // Catch: java.lang.Throwable -> L3a
            int[] r4 = new int[r1]     // Catch: java.lang.Throwable -> L3a
            java.lang.String r5 = "plc001_blpc"
            int r0 = r0.b(r5, r1)     // Catch: java.lang.Throwable -> L3a
            r4[r2] = r0     // Catch: java.lang.Throwable -> L3a
            android.content.Context r0 = r6.a     // Catch: java.lang.Throwable -> L3a
            boolean r0 = r0 instanceof android.app.Application     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L3a
            com.kuaishou.weapon.p0.cz$2 r0 = new com.kuaishou.weapon.p0.cz$2     // Catch: java.lang.Throwable -> L3a
            r0.<init>(r6, r3, r4)     // Catch: java.lang.Throwable -> L3a
            r6.c = r0     // Catch: java.lang.Throwable -> L3a
            android.content.Context r1 = r6.a     // Catch: java.lang.Throwable -> L3a
            android.app.Application r1 = (android.app.Application) r1     // Catch: java.lang.Throwable -> L3a
            r1.registerActivityLifecycleCallbacks(r0)     // Catch: java.lang.Throwable -> L3a
        L3a:
            return
    }

    static boolean b(com.kuaishou.weapon.p0.cz r0) {
            boolean r0 = r0.d
            return r0
    }

    static void c(com.kuaishou.weapon.p0.cz r0) {
            r0.b()
            return
    }

    static android.app.Application.ActivityLifecycleCallbacks d(com.kuaishou.weapon.p0.cz r0) {
            android.app.Application$ActivityLifecycleCallbacks r0 = r0.c
            return r0
    }

    public void a() {
            r2 = this;
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Throwable -> Lc
            com.kuaishou.weapon.p0.cz$1 r1 = new com.kuaishou.weapon.p0.cz$1     // Catch: java.lang.Throwable -> Lc
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lc
            r0.a(r1)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }
}
