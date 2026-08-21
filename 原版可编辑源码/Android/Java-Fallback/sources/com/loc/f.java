package com.loc;

public final class f {
    com.loc.e a;
    android.content.Context b;
    android.os.Messenger c;

    public f(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.c = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.b = r2
            com.loc.e r2 = new com.loc.e
            android.content.Context r0 = r1.b
            r2.<init>(r0)
            r1.a = r2
            return
    }

    public final android.os.IBinder a(android.content.Intent r2) {
            r1 = this;
            com.loc.e r0 = r1.a
            r0.b(r2)
            com.loc.e r0 = r1.a
            r0.a(r2)
            android.os.Messenger r2 = new android.os.Messenger
            com.loc.e r0 = r1.a
            android.os.Handler r0 = r0.b()
            r2.<init>(r0)
            r1.c = r2
            android.os.IBinder r2 = r2.getBinder()
            return r2
    }

    public final void a() {
            r3 = this;
            com.loc.e.d()     // Catch: java.lang.Throwable -> L19
            com.loc.e r0 = r3.a     // Catch: java.lang.Throwable -> L19
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L19
            r0.j = r1     // Catch: java.lang.Throwable -> L19
            com.loc.e r0 = r3.a     // Catch: java.lang.Throwable -> L19
            long r1 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L19
            r0.k = r1     // Catch: java.lang.Throwable -> L19
            com.loc.e r0 = r3.a     // Catch: java.lang.Throwable -> L19
            r0.a()     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r0 = move-exception
            java.lang.String r1 = "ApsServiceCore"
            java.lang.String r2 = "onCreate"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final int b() {
            r1 = this;
            com.loc.e r0 = r1.a
            if (r0 == 0) goto Le
            com.amap.api.location.AMapLocationClientOption r0 = r0.n
            boolean r0 = r0.isSelfStartServiceEnable()
            if (r0 != 0) goto Le
            r0 = 2
            return r0
        Le:
            r0 = 0
            return r0
    }

    public final void c() {
            r3 = this;
            com.loc.e r0 = r3.a     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto Lf
            com.loc.e r0 = r3.a     // Catch: java.lang.Throwable -> L10
            android.os.Handler r0 = r0.b()     // Catch: java.lang.Throwable -> L10
            r1 = 11
            r0.sendEmptyMessage(r1)     // Catch: java.lang.Throwable -> L10
        Lf:
            return
        L10:
            r0 = move-exception
            java.lang.String r1 = "ApsServiceCore"
            java.lang.String r2 = "onDestroy"
            com.loc.fr.a(r0, r1, r2)
            return
    }
}
