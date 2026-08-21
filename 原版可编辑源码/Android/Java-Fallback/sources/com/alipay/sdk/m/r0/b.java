package com.alipay.sdk.m.r0;

public class b {
    public static java.lang.String e = "OpenDeviceId library";
    public static boolean f;
    public android.content.Context a;
    public com.alipay.sdk.m.q0.a b;
    public android.content.ServiceConnection c;
    public com.alipay.sdk.m.r0.b.b d;

    public class a implements android.content.ServiceConnection {
        public final com.alipay.sdk.m.r0.b a;

        public a(com.alipay.sdk.m.r0.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public synchronized void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
                r1 = this;
                monitor-enter(r1)
                com.alipay.sdk.m.r0.b r2 = r1.a     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.q0.a r3 = com.alipay.sdk.m.q0.a.a.a(r3)     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.r0.b.a(r2, r3)     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.r0.b r2 = r1.a     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.r0.b$b r2 = com.alipay.sdk.m.r0.b.a(r2)     // Catch: java.lang.Throwable -> L28
                if (r2 == 0) goto L1f
                com.alipay.sdk.m.r0.b r2 = r1.a     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.r0.b$b r2 = com.alipay.sdk.m.r0.b.a(r2)     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.r0.b r3 = r1.a     // Catch: java.lang.Throwable -> L28
                java.lang.String r0 = "Deviceid Service Connected"
                r2.a(r0, r3)     // Catch: java.lang.Throwable -> L28
            L1f:
                com.alipay.sdk.m.r0.b r2 = r1.a     // Catch: java.lang.Throwable -> L28
                java.lang.String r3 = "Service onServiceConnected"
                com.alipay.sdk.m.r0.b.a(r2, r3)     // Catch: java.lang.Throwable -> L28
                monitor-exit(r1)
                return
            L28:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r2) {
                r1 = this;
                com.alipay.sdk.m.r0.b r2 = r1.a
                r0 = 0
                com.alipay.sdk.m.r0.b.a(r2, r0)
                com.alipay.sdk.m.r0.b r2 = r1.a
                java.lang.String r0 = "Service onServiceDisconnected"
                com.alipay.sdk.m.r0.b.a(r2, r0)
                return
        }
    }

    public interface b<T> {
        void a(T r1, com.alipay.sdk.m.r0.b r2);
    }

    static {
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.d = r0
            return
    }

    public static com.alipay.sdk.m.q0.a a(com.alipay.sdk.m.r0.b r0, com.alipay.sdk.m.q0.a r1) {
            r0.b = r1
            return r1
    }

    public static com.alipay.sdk.m.r0.b.b a(com.alipay.sdk.m.r0.b r0) {
            com.alipay.sdk.m.r0.b$b r0 = r0.d
            return r0
    }

    public static void a(com.alipay.sdk.m.r0.b r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.alipay.sdk.m.r0.b.f
            if (r0 == 0) goto L9
            java.lang.String r0 = com.alipay.sdk.m.r0.b.e
            android.util.Log.e(r0, r2)
        L9:
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.alipay.sdk.m.r0.b.f
            if (r0 == 0) goto L9
            java.lang.String r0 = com.alipay.sdk.m.r0.b.e
            android.util.Log.i(r0, r2)
        L9:
            return
    }

    public int a(android.content.Context r3, com.alipay.sdk.m.r0.b.b<java.lang.String> r4) {
            r2 = this;
            if (r3 == 0) goto L31
            r2.a = r3
            r2.d = r4
            com.alipay.sdk.m.r0.b$a r3 = new com.alipay.sdk.m.r0.b$a
            r3.<init>(r2)
            r2.c = r3
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            java.lang.String r4 = "com.zui.deviceidservice"
            java.lang.String r0 = "com.zui.deviceidservice.DeviceidService"
            r3.setClassName(r4, r0)
            android.content.Context r4 = r2.a
            android.content.ServiceConnection r0 = r2.c
            r1 = 1
            boolean r3 = r4.bindService(r3, r0, r1)
            if (r3 == 0) goto L2a
            java.lang.String r3 = "bindService Successful!"
            r2.b(r3)
            return r1
        L2a:
            java.lang.String r3 = "bindService Failed!"
            r2.b(r3)
            r3 = -1
            return r3
        L31:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "Context can not be null."
            r3.<init>(r4)
            throw r3
    }

    public java.lang.String a() {
            r4 = this;
            android.content.Context r0 = r4.a
            if (r0 == 0) goto L54
            java.lang.String r0 = r0.getPackageName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "liufeng, getAAID package："
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r4.b(r1)
            r1 = 0
            if (r0 == 0) goto L4e
            java.lang.String r2 = ""
            boolean r3 = r0.equals(r2)
            if (r3 != 0) goto L4e
            com.alipay.sdk.m.q0.a r3 = r4.b     // Catch: android.os.RemoteException -> L48
            if (r3 == 0) goto L53
            com.alipay.sdk.m.q0.a r3 = r4.b     // Catch: android.os.RemoteException -> L48
            java.lang.String r1 = r3.a(r0)     // Catch: android.os.RemoteException -> L48
            if (r1 == 0) goto L39
            boolean r2 = r2.equals(r1)     // Catch: android.os.RemoteException -> L48
            if (r2 == 0) goto L53
        L39:
            com.alipay.sdk.m.q0.a r2 = r4.b     // Catch: android.os.RemoteException -> L48
            boolean r2 = r2.c(r0)     // Catch: android.os.RemoteException -> L48
            if (r2 == 0) goto L53
            com.alipay.sdk.m.q0.a r2 = r4.b     // Catch: android.os.RemoteException -> L48
            java.lang.String r1 = r2.a(r0)     // Catch: android.os.RemoteException -> L48
            goto L53
        L48:
            java.lang.String r0 = "getAAID error, RemoteException!"
            r4.a(r0)
            goto L53
        L4e:
            java.lang.String r0 = "input package is null!"
            r4.b(r0)
        L53:
            return r1
        L54:
            java.lang.String r0 = "Context is null."
            r4.b(r0)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Context is null, must be new OpenDeviceId first"
            r0.<init>(r1)
            throw r0
    }

    public void a(boolean r1) {
            r0 = this;
            com.alipay.sdk.m.r0.b.f = r1
            return
    }

    public java.lang.String b() {
            r2 = this;
            android.content.Context r0 = r2.a
            if (r0 == 0) goto L1a
            com.alipay.sdk.m.q0.a r0 = r2.b     // Catch: android.os.RemoteException -> Lf
            if (r0 == 0) goto L18
            com.alipay.sdk.m.q0.a r0 = r2.b     // Catch: android.os.RemoteException -> Lf
            java.lang.String r0 = r0.a()     // Catch: android.os.RemoteException -> Lf
            return r0
        Lf:
            r0 = move-exception
            java.lang.String r1 = "getOAID error, RemoteException!"
            r2.a(r1)
            r0.printStackTrace()
        L18:
            r0 = 0
            return r0
        L1a:
            java.lang.String r0 = "Context is null."
            r2.a(r0)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Context is null, must be new OpenDeviceId first"
            r0.<init>(r1)
            throw r0
    }

    public java.lang.String c() {
            r2 = this;
            android.content.Context r0 = r2.a
            if (r0 == 0) goto L24
            com.alipay.sdk.m.q0.a r0 = r2.b     // Catch: java.lang.Exception -> Lf android.os.RemoteException -> L19
            if (r0 == 0) goto L22
            com.alipay.sdk.m.q0.a r0 = r2.b     // Catch: java.lang.Exception -> Lf android.os.RemoteException -> L19
            java.lang.String r0 = r0.b()     // Catch: java.lang.Exception -> Lf android.os.RemoteException -> L19
            return r0
        Lf:
            r0 = move-exception
            java.lang.String r1 = "getUDID error, Exception!"
            r2.a(r1)
            r0.printStackTrace()
            goto L22
        L19:
            r0 = move-exception
            java.lang.String r1 = "getUDID error, RemoteException!"
            r2.a(r1)
            r0.printStackTrace()
        L22:
            r0 = 0
            return r0
        L24:
            java.lang.String r0 = "Context is null."
            r2.a(r0)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Context is null, must be new OpenDeviceId first"
            r0.<init>(r1)
            throw r0
    }

    public java.lang.String d() {
            r3 = this;
            android.content.Context r0 = r3.a
            if (r0 == 0) goto L42
            java.lang.String r0 = r0.getPackageName()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "liufeng, getVAID package："
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r3.b(r1)
            if (r0 == 0) goto L3b
            java.lang.String r1 = ""
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L3b
            com.alipay.sdk.m.q0.a r1 = r3.b     // Catch: android.os.RemoteException -> L31
            if (r1 == 0) goto L40
            com.alipay.sdk.m.q0.a r1 = r3.b     // Catch: android.os.RemoteException -> L31
            java.lang.String r0 = r1.b(r0)     // Catch: android.os.RemoteException -> L31
            return r0
        L31:
            r0 = move-exception
            java.lang.String r1 = "getVAID error, RemoteException!"
            r3.a(r1)
            r0.printStackTrace()
            goto L40
        L3b:
            java.lang.String r0 = "input package is null!"
            r3.b(r0)
        L40:
            r0 = 0
            return r0
        L42:
            java.lang.String r0 = "Context is null."
            r3.b(r0)
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Context is null, must be new OpenDeviceId first"
            r0.<init>(r1)
            throw r0
    }

    public boolean e() {
            r2 = this;
            r0 = 0
            com.alipay.sdk.m.q0.a r1 = r2.b     // Catch: android.os.RemoteException -> L11
            if (r1 == 0) goto L10
            java.lang.String r1 = "Device support opendeviceid"
            r2.b(r1)     // Catch: android.os.RemoteException -> L11
            com.alipay.sdk.m.q0.a r1 = r2.b     // Catch: android.os.RemoteException -> L11
            boolean r0 = r1.c()     // Catch: android.os.RemoteException -> L11
        L10:
            return r0
        L11:
            java.lang.String r1 = "isSupport error, RemoteException!"
            r2.a(r1)
            return r0
    }

    public void f() {
            r2 = this;
            android.content.Context r0 = r2.a     // Catch: java.lang.IllegalArgumentException -> Ld
            android.content.ServiceConnection r1 = r2.c     // Catch: java.lang.IllegalArgumentException -> Ld
            r0.unbindService(r1)     // Catch: java.lang.IllegalArgumentException -> Ld
            java.lang.String r0 = "unBind Service successful"
            r2.b(r0)     // Catch: java.lang.IllegalArgumentException -> Ld
            goto L12
        Ld:
            java.lang.String r0 = "unBind Service exception"
            r2.a(r0)
        L12:
            r0 = 0
            r2.b = r0
            return
    }
}
