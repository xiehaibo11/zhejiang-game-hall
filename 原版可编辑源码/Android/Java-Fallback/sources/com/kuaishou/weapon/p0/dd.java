package com.kuaishou.weapon.p0;

public class dd {
    private static volatile com.kuaishou.weapon.p0.dd b;
    private android.content.Context a;


    private dd(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    static android.content.Context a(com.kuaishou.weapon.p0.dd r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static com.kuaishou.weapon.p0.dd a(android.content.Context r2) {
            com.kuaishou.weapon.p0.dd r0 = com.kuaishou.weapon.p0.dd.b
            if (r0 != 0) goto L17
            java.lang.Class<com.kuaishou.weapon.p0.dd> r0 = com.kuaishou.weapon.p0.dd.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.dd r1 = com.kuaishou.weapon.p0.dd.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kuaishou.weapon.p0.dd r1 = new com.kuaishou.weapon.p0.dd     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.kuaishou.weapon.p0.dd.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.kuaishou.weapon.p0.dd r2 = com.kuaishou.weapon.p0.dd.b
            return r2
    }

    public void a(int r3) {
            r2 = this;
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()
            com.kuaishou.weapon.p0.dd$1 r1 = new com.kuaishou.weapon.p0.dd$1
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }
}
