package com.igexin.sdk;

public class PushService extends android.app.Service {
    private final java.lang.String a;

    public PushService() {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getName()
            r1.a = r0
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r3) {
            r2 = this;
            if (r3 == 0) goto Ld
            java.lang.String r0 = r3.getType()
            if (r0 == 0) goto Ld
            java.lang.String r0 = r3.getType()
            goto Lf
        Ld:
            java.lang.String r0 = ""
        Lf:
            java.lang.String r1 = "GB-"
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto L3a
            java.lang.String r1 = "PB-"
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L20
            goto L3a
        L20:
            java.lang.String r1 = "SERVER_LOG"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L31
            com.igexin.b.a.c.a.f r3 = com.igexin.b.a.c.a.f.a()
            android.os.IBinder r3 = r3.b()
            return r3
        L31:
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            android.os.IBinder r3 = r0.a(r2, r3)
            return r3
        L3a:
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            r1 = 0
            r0.a(r2, r3, r1, r1)
            r3 = 0
            return r3
    }

    @Override
    public void onCreate() {
            r1 = this;
            super.onCreate()
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            r0.a(r1)
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            r0.b()
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r2, int r3, int r4) {
            r1 = this;
            super.onStartCommand(r2, r3, r4)
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            r0.a(r1, r2, r3, r4)
            r2 = 2
            return r2
    }

    @Override
    public boolean onUnbind(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.onUnbind(r1)
            return r1
    }
}
