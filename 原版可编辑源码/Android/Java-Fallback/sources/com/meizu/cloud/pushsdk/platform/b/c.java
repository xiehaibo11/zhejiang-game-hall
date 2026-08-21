package com.meizu.cloud.pushsdk.platform.b;

import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;

public abstract class c<T extends com.meizu.cloud.pushsdk.platform.message.BasicPushStatus> {
    protected final android.content.Context a;
    protected java.lang.String b;
    protected java.lang.String c;
    protected java.lang.String d;
    protected final com.meizu.cloud.pushsdk.platform.a.a e;
    protected boolean f;
    protected boolean g;
    private java.util.concurrent.ScheduledExecutorService h;
    private java.lang.String i;


    public c(android.content.Context r2, java.lang.String r3, java.lang.String r4, com.meizu.cloud.pushsdk.platform.a.a r5, java.util.concurrent.ScheduledExecutorService r6) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.f = r0
            r1.g = r0
            r0 = 0
            r1.i = r0
            r1.h = r6
            r1.a = r2
            r1.b = r3
            r1.c = r4
            r1.e = r5
            return
    }

    private boolean a(int r2) {
            r1 = this;
            r0 = 110000(0x1adb0, float:1.54143E-40)
            if (r2 < r0) goto Lc
            r0 = 200000(0x30d40, float:2.8026E-40)
            if (r2 > r0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    private boolean b(T r2) {
            r1 = this;
            java.lang.String r2 = r2.getCode()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r2 = r2.intValue()
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 <= r0) goto L14
            r0 = 600(0x258, float:8.41E-43)
            if (r2 < r0) goto L1e
        L14:
            r0 = 1000(0x3e8, float:1.401E-42)
            if (r2 <= r0) goto L1c
            r0 = 2000(0x7d0, float:2.803E-42)
            if (r2 < r0) goto L1e
        L1c:
            if (r2 != 0) goto L20
        L1e:
            r2 = 1
            goto L21
        L20:
            r2 = 0
        L21:
            return r2
    }

    private boolean h() {
            r2 = this;
            boolean r0 = r2.g
            if (r0 == 0) goto L14
            android.content.Context r0 = r2.a
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = r2.i
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    protected java.lang.String a(android.content.Context r6, java.lang.String r7) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            r1 = 0
            if (r0 != 0) goto L5f
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r7)
            android.content.pm.PackageManager r6 = r6.getPackageManager()
            r7 = 0
            java.util.List r6 = r6.queryIntentServices(r0, r7)
            if (r6 == 0) goto L5f
            java.util.Iterator r0 = r6.iterator()
        L1b:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r0.next()
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2
            android.content.pm.ServiceInfo r3 = r2.serviceInfo
            java.lang.String r3 = r3.packageName
            java.lang.String r4 = "com.meizu.cloud"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L1b
            android.content.pm.ServiceInfo r0 = r2.serviceInfo
            java.lang.String r0 = r0.packageName
            r5.i = r0
            android.content.pm.ServiceInfo r0 = r2.serviceInfo
            java.lang.String r1 = r0.name
        L3d:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L5f
            int r0 = r6.size()
            if (r0 <= 0) goto L5f
            java.lang.Object r0 = r6.get(r7)
            android.content.pm.ResolveInfo r0 = (android.content.pm.ResolveInfo) r0
            android.content.pm.ServiceInfo r0 = r0.serviceInfo
            java.lang.String r0 = r0.packageName
            r5.i = r0
            java.lang.Object r6 = r6.get(r7)
            android.content.pm.ResolveInfo r6 = (android.content.pm.ResolveInfo) r6
            android.content.pm.ServiceInfo r6 = r6.serviceInfo
            java.lang.String r1 = r6.name
        L5f:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "current process packageName "
            r6.append(r7)
            java.lang.String r7 = r5.i
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "Strategy"
            com.meizu.cloud.pushinternal.DebugLogger.i(r7, r6)
            return r1
    }

    protected void a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = r2.i     // Catch: java.lang.Exception -> L10
            r3.setPackage(r0)     // Catch: java.lang.Exception -> L10
            java.lang.String r0 = "com.meizu.cloud.pushservice.action.PUSH_MANAGER_SERVICE"
            r3.setAction(r0)     // Catch: java.lang.Exception -> L10
            android.content.Context r0 = r2.a     // Catch: java.lang.Exception -> L10
            r0.startService(r3)     // Catch: java.lang.Exception -> L10
            goto L2b
        L10:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "start RemoteService error "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "Strategy"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r3)
        L2b:
            return
    }

    protected abstract void a(T r1);

    public void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    protected abstract boolean a();

    protected abstract T b();

    public void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    protected abstract android.content.Intent c();

    public void c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    protected android.content.Intent[] d() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected abstract T e();

    protected abstract T f();

    protected abstract int g();

    protected boolean k() {
            r2 = this;
            boolean r0 = r2.g
            if (r0 == 0) goto L18
            boolean r0 = r2.f
            if (r0 == 0) goto L18
            android.content.Context r0 = r2.a
            java.lang.String r1 = "com.meizu.cloud.pushservice.action.PUSH_MANAGER_SERVICE"
            java.lang.String r0 = r2.a(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    protected boolean l() {
            r2 = this;
            int r0 = r2.g()
            r1 = 2
            if (r1 == r0) goto L12
            r0 = 32
            int r1 = r2.g()
            if (r0 != r1) goto L10
            goto L12
        L10:
            r0 = 0
            goto L13
        L12:
            r0 = 1
        L13:
            return r0
    }

    public boolean m() {
            r2 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r2.h
            if (r0 == 0) goto Le
            com.meizu.cloud.pushsdk.platform.b.c$1 r1 = new com.meizu.cloud.pushsdk.platform.b.c$1
            r1.<init>(r2)
            r0.execute(r1)
            r0 = 1
            goto L12
        Le:
            boolean r0 = r2.n()
        L12:
            return r0
    }

    public boolean n() {
            r7 = this;
            boolean r0 = r7.a()
            r1 = 1
            java.lang.String r2 = "Strategy"
            if (r0 != 0) goto L17
            java.lang.String r0 = "Missing required parameters"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r0)
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r0 = r7.b()
        L12:
            r7.a(r0)
            goto Lfd
        L17:
            boolean r0 = r7.k()
            if (r0 != 0) goto L9e
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r0 = r7.e()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "real response status "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r3)
            if (r0 == 0) goto Lfd
            boolean r3 = r7.l()
            if (r3 == 0) goto L4a
            java.lang.String r3 = r0.getCode()
            java.lang.String r4 = "20000"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L4a
            return r1
        L4a:
            boolean r3 = r7.h()
            if (r3 == 0) goto L53
            java.lang.String r3 = "response all request in local app"
            goto L99
        L53:
            java.lang.String r3 = r0.getCode()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L5f
            java.lang.String r3 = "0"
        L5f:
            java.lang.String r4 = r0.getCode()
            java.lang.String r5 = "200"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L6e
            r7.a(r0)
        L6e:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            int r3 = r3.intValue()
            boolean r4 = r7.a(r3)
            if (r4 == 0) goto Lfd
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "service error so notify pushManager invoker code="
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = " message "
            r4.append(r3)
            java.lang.String r3 = r0.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
        L99:
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r3)
            goto L12
        L9e:
            java.lang.String r0 = "send message to remote service"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            boolean r0 = r7.l()
            if (r0 != 0) goto Lc7
            com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r0 = r7.f()
            if (r0 == 0) goto Lc8
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "local response "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r3)
            r7.a(r0)
            goto Lc8
        Lc7:
            r0 = 0
        Lc8:
            android.content.Intent r3 = r7.c()
            if (r3 == 0) goto Ld1
            r7.a(r3)
        Ld1:
            android.content.Intent[] r3 = r7.d()
            if (r3 == 0) goto Lf8
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "send sendRpcRequests length "
            r4.append(r5)
            int r5 = r3.length
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r4)
            int r4 = r3.length
            r5 = 0
        Lee:
            if (r5 >= r4) goto Lf8
            r6 = r3[r5]
            r7.a(r6)
            int r5 = r5 + 1
            goto Lee
        Lf8:
            android.content.Context r3 = r7.a
            com.meizu.cloud.pushsdk.a.a(r3)
        Lfd:
            if (r0 == 0) goto L11c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "current status code "
            r3.append(r4)
            java.lang.String r4 = r0.getCode()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r3)
            boolean r0 = r7.b(r0)
            r1 = r1 ^ r0
        L11c:
            return r1
    }
}
