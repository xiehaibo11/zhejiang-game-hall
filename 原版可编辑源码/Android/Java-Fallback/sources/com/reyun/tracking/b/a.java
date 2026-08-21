package com.reyun.tracking.b;

public class a {
    private android.content.Context a;
    private android.content.ServiceConnection b;
    private com.reyun.tracking.b.e c;
    private com.reyun.tracking.b.d d;

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    static com.reyun.tracking.b.e a(com.reyun.tracking.b.a r0) {
            com.reyun.tracking.b.e r0 = r0.c
            return r0
    }

    static com.reyun.tracking.b.e a(com.reyun.tracking.b.a r0, com.reyun.tracking.b.e r1) {
            r0.c = r1
            return r1
    }

    private boolean a() {
            r4 = this;
            android.content.Context r0 = r4.a
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.reyun.tracking.b.c r0 = new com.reyun.tracking.b.c
            r1 = 0
            r0.<init>(r4, r1)
            r4.b = r0
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r0.<init>(r1)
            java.lang.String r1 = "com.huawei.hwid"
            r0.setPackage(r1)
            android.content.Context r1 = r4.a
            android.content.ServiceConnection r2 = r4.b
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            return r0
    }

    static com.reyun.tracking.b.d b(com.reyun.tracking.b.a r0) {
            com.reyun.tracking.b.d r0 = r0.d
            return r0
    }

    private void b() {
            r2 = this;
            android.content.Context r0 = r2.a
            if (r0 != 0) goto L5
            return
        L5:
            android.content.ServiceConnection r1 = r2.b
            if (r1 == 0) goto L13
            r0.unbindService(r1)
            r0 = 0
            r2.c = r0
            r2.a = r0
            r2.d = r0
        L13:
            return
    }

    static void c(com.reyun.tracking.b.a r0) {
            r0.b()
            return
    }

    public void a(com.reyun.tracking.b.d r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.d = r1     // Catch: java.lang.Throwable -> L8
            r0.a()     // Catch: java.lang.Throwable -> L8
        L8:
            return
    }
}
