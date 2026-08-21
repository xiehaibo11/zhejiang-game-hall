package com.tkay.china.a.a;

public final class d {
    private static final java.lang.String a = "OaidAidlUtil";
    private static final java.lang.String b = "com.huawei.hwid";
    private static final java.lang.String c = "com.uodis.opendevice.OPENIDS_SERVICE";
    private android.content.Context d;
    private android.content.ServiceConnection e;
    private com.tkay.china.a.a.c f;
    private com.tkay.china.a.a g;

    static class 1 {
    }

    private final class a implements android.content.ServiceConnection {
        final com.tkay.china.a.a.d a;

        private a(com.tkay.china.a.a.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tkay.china.a.a.d r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
                r1 = this;
                com.tkay.china.a.a.d r2 = r1.a
                com.tkay.china.a.a.c r3 = com.tkay.china.a.a.c.a.a(r3)
                com.tkay.china.a.a.d.a(r2, r3)
                com.tkay.china.a.a.d r2 = r1.a
                com.tkay.china.a.a.c r2 = com.tkay.china.a.a.d.a(r2)
                if (r2 == 0) goto L70
                com.tkay.china.a.a.d r2 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                com.tkay.china.a.a r2 = com.tkay.china.a.a.d.b(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                if (r2 == 0) goto L36
                com.tkay.china.a.a.d r2 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                com.tkay.china.a.a r2 = com.tkay.china.a.a.d.b(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                com.tkay.china.a.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                com.tkay.china.a.a.c r3 = com.tkay.china.a.a.d.a(r3)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                com.tkay.china.a.a.d r0 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                com.tkay.china.a.a.c r0 = com.tkay.china.a.a.d.a(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
                r2.a(r3, r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L54
            L36:
                com.tkay.china.a.a.d r2 = r1.a
                com.tkay.china.a.a.d.c(r2)
                return
            L3c:
                r2 = move-exception
                goto L6a
            L3e:
                r2 = move-exception
                com.tkay.china.a.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.tkay.china.a.a r3 = com.tkay.china.a.a.d.b(r3)     // Catch: java.lang.Throwable -> L3c
                if (r3 == 0) goto L36
                com.tkay.china.a.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.tkay.china.a.a r3 = com.tkay.china.a.a.d.b(r3)     // Catch: java.lang.Throwable -> L3c
                r2.getMessage()     // Catch: java.lang.Throwable -> L3c
                r3.a()     // Catch: java.lang.Throwable -> L3c
                goto L36
            L54:
                r2 = move-exception
                com.tkay.china.a.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.tkay.china.a.a r3 = com.tkay.china.a.a.d.b(r3)     // Catch: java.lang.Throwable -> L3c
                if (r3 == 0) goto L36
                com.tkay.china.a.a.d r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.tkay.china.a.a r3 = com.tkay.china.a.a.d.b(r3)     // Catch: java.lang.Throwable -> L3c
                r2.getMessage()     // Catch: java.lang.Throwable -> L3c
                r3.a()     // Catch: java.lang.Throwable -> L3c
                goto L36
            L6a:
                com.tkay.china.a.a.d r3 = r1.a
                com.tkay.china.a.a.d.c(r3)
                throw r2
            L70:
                return
        }

        @Override
        public final void onServiceDisconnected(android.content.ComponentName r2) {
                r1 = this;
                com.tkay.china.a.a.d r2 = r1.a
                r0 = 0
                com.tkay.china.a.a.d.a(r2, r0)
                return
        }
    }

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            return
    }

    static com.tkay.china.a.a.c a(com.tkay.china.a.a.d r0) {
            com.tkay.china.a.a.c r0 = r0.f
            return r0
    }

    static com.tkay.china.a.a.c a(com.tkay.china.a.a.d r0, com.tkay.china.a.a.c r1) {
            r0.f = r1
            return r1
    }

    private boolean a() {
            r4 = this;
            android.content.Context r0 = r4.d
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.tkay.china.a.a.d$a r0 = new com.tkay.china.a.a.d$a
            r0.<init>(r4, r1)
            r4.e = r0
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r0.<init>(r1)
            java.lang.String r1 = "com.huawei.hwid"
            r0.setPackage(r1)
            android.content.Context r1 = r4.d
            android.content.ServiceConnection r2 = r4.e
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            return r0
    }

    static com.tkay.china.a.a b(com.tkay.china.a.a.d r0) {
            com.tkay.china.a.a r0 = r0.g
            return r0
    }

    private void b() {
            r2 = this;
            android.content.Context r0 = r2.d
            if (r0 != 0) goto L5
            return
        L5:
            android.content.ServiceConnection r1 = r2.e
            if (r1 == 0) goto L13
            r0.unbindService(r1)     // Catch: java.lang.Throwable -> Lc
        Lc:
            r0 = 0
            r2.f = r0
            r2.d = r0
            r2.g = r0
        L13:
            return
    }

    static void c(com.tkay.china.a.a.d r2) {
            android.content.Context r0 = r2.d
            if (r0 != 0) goto L5
            return
        L5:
            android.content.ServiceConnection r1 = r2.e
            if (r1 == 0) goto L13
            r0.unbindService(r1)     // Catch: java.lang.Throwable -> Lc
        Lc:
            r0 = 0
            r2.f = r0
            r2.d = r0
            r2.g = r0
        L13:
            return
    }

    public final void a(com.tkay.china.a.a r4) {
            r3 = this;
            r3.g = r4
            android.content.Context r4 = r3.d
            if (r4 == 0) goto L22
            com.tkay.china.a.a.d$a r4 = new com.tkay.china.a.a.d$a
            r0 = 0
            r4.<init>(r3, r0)
            r3.e = r4
            android.content.Intent r4 = new android.content.Intent
            java.lang.String r0 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r4.<init>(r0)
            java.lang.String r0 = "com.huawei.hwid"
            r4.setPackage(r0)
            android.content.Context r0 = r3.d
            android.content.ServiceConnection r1 = r3.e
            r2 = 1
            r0.bindService(r4, r1, r2)
        L22:
            return
    }
}
