package com.vivo.push.sdk.service;

public class CommandService extends android.app.Service {
    public CommandService() {
            r0 = this;
            r0.<init>()
            return
    }

    protected boolean a(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "com.vivo.pushservice.action.RECEIVE"
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r2) {
            r1 = this;
            java.lang.String r2 = "CommandService"
            java.lang.String r0 = "onBind initSuc: "
            com.vivo.push.util.p.c(r2, r0)
            r2 = 0
            return r2
    }

    @Override
    public void onCreate() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = " -- oncreate "
            r0.append(r1)
            java.lang.String r1 = r2.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "CommandService"
            com.vivo.push.util.p.c(r1, r0)
            super.onCreate()
            android.content.Context r0 = r2.getApplicationContext()
            android.content.Context r0 = com.vivo.push.util.ContextDelegate.getContext(r0)
            com.vivo.push.sdk.a r1 = com.vivo.push.sdk.a.a()
            r1.a(r0)
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r3, int r4, int r5) {
            r2 = this;
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r4.append(r5)
            java.lang.String r5 = " -- onStartCommand "
            r4.append(r5)
            java.lang.String r5 = r2.getPackageName()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "CommandService"
            com.vivo.push.util.p.c(r5, r4)
            r4 = 2
            if (r3 != 0) goto L2c
            r2.stopSelf()
            return r4
        L2c:
            java.lang.String r0 = r3.getAction()
            boolean r0 = r2.a(r0)
            if (r0 != 0) goto L59
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getPackageName()
            r0.append(r1)
            java.lang.String r1 = " receive invalid action "
            r0.append(r1)
            java.lang.String r3 = r3.getAction()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.vivo.push.util.p.a(r5, r3)
            r2.stopSelf()
            return r4
        L59:
            com.vivo.push.sdk.a r0 = com.vivo.push.sdk.a.a()     // Catch: java.lang.Exception -> L70
            java.lang.Class r1 = r2.getClass()     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Exception -> L70
            r0.a(r1)     // Catch: java.lang.Exception -> L70
            com.vivo.push.sdk.a r0 = com.vivo.push.sdk.a.a()     // Catch: java.lang.Exception -> L70
            r0.a(r3)     // Catch: java.lang.Exception -> L70
            goto L76
        L70:
            r3 = move-exception
            java.lang.String r0 = "onStartCommand -- error"
            com.vivo.push.util.p.a(r5, r0, r3)
        L76:
            r2.stopSelf()
            return r4
    }

    @Override
    public boolean onUnbind(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.onUnbind(r1)
            return r1
    }
}
