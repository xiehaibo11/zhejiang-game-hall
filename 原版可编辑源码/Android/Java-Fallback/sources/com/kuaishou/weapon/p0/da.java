package com.kuaishou.weapon.p0;

public class da {
    private static volatile com.kuaishou.weapon.p0.da b;
    private android.content.Context a;


    private da(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    static android.content.Context a(com.kuaishou.weapon.p0.da r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static com.kuaishou.weapon.p0.da a(android.content.Context r2) {
            com.kuaishou.weapon.p0.da r0 = com.kuaishou.weapon.p0.da.b
            if (r0 != 0) goto L17
            java.lang.Class<com.kuaishou.weapon.p0.da> r0 = com.kuaishou.weapon.p0.da.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.da r1 = com.kuaishou.weapon.p0.da.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kuaishou.weapon.p0.da r1 = new com.kuaishou.weapon.p0.da     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.kuaishou.weapon.p0.da.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.kuaishou.weapon.p0.da r2 = com.kuaishou.weapon.p0.da.b
            return r2
    }

    public void a(int r3, int r4) {
            r2 = this;
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()
            com.kuaishou.weapon.p0.da$1 r1 = new com.kuaishou.weapon.p0.da$1
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }
}
