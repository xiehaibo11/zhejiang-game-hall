package com.mbridge.msdk.optimize.a;

public final class a {
    private android.content.Context a;
    private android.content.ServiceConnection b;
    private com.mbridge.msdk.optimize.a.c c;
    private com.mbridge.msdk.optimize.a.b d;

    static class 1 {
    }

    private final class a implements android.content.ServiceConnection {
        final com.mbridge.msdk.optimize.a.a a;

        private a(com.mbridge.msdk.optimize.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.mbridge.msdk.optimize.a.a r1, com.mbridge.msdk.optimize.a.a.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
                r1 = this;
                com.mbridge.msdk.optimize.a.a r2 = r1.a
                com.mbridge.msdk.optimize.a.c r3 = com.mbridge.msdk.optimize.a.c.a.a(r3)
                com.mbridge.msdk.optimize.a.a.a(r2, r3)
                com.mbridge.msdk.optimize.a.a r2 = r1.a
                com.mbridge.msdk.optimize.a.c r2 = com.mbridge.msdk.optimize.a.a.a(r2)
                if (r2 == 0) goto L72
                com.mbridge.msdk.optimize.a.a r2 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                com.mbridge.msdk.optimize.a.b r2 = com.mbridge.msdk.optimize.a.a.b(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                if (r2 == 0) goto L36
                com.mbridge.msdk.optimize.a.a r2 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                com.mbridge.msdk.optimize.a.b r2 = com.mbridge.msdk.optimize.a.a.b(r2)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                com.mbridge.msdk.optimize.a.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                com.mbridge.msdk.optimize.a.c r3 = com.mbridge.msdk.optimize.a.a.a(r3)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                com.mbridge.msdk.optimize.a.a r0 = r1.a     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                com.mbridge.msdk.optimize.a.c r0 = com.mbridge.msdk.optimize.a.a.a(r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
                r2.a(r3, r0)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L3e android.os.RemoteException -> L55
            L36:
                com.mbridge.msdk.optimize.a.a r2 = r1.a
                com.mbridge.msdk.optimize.a.a.c(r2)
                goto L72
            L3c:
                r2 = move-exception
                goto L6c
            L3e:
                r2 = move-exception
                com.mbridge.msdk.optimize.a.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.mbridge.msdk.optimize.a.b r3 = com.mbridge.msdk.optimize.a.a.b(r3)     // Catch: java.lang.Throwable -> L3c
                if (r3 == 0) goto L36
                com.mbridge.msdk.optimize.a.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.mbridge.msdk.optimize.a.b r3 = com.mbridge.msdk.optimize.a.a.b(r3)     // Catch: java.lang.Throwable -> L3c
                java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L3c
                r3.a(r2)     // Catch: java.lang.Throwable -> L3c
                goto L36
            L55:
                r2 = move-exception
                com.mbridge.msdk.optimize.a.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.mbridge.msdk.optimize.a.b r3 = com.mbridge.msdk.optimize.a.a.b(r3)     // Catch: java.lang.Throwable -> L3c
                if (r3 == 0) goto L36
                com.mbridge.msdk.optimize.a.a r3 = r1.a     // Catch: java.lang.Throwable -> L3c
                com.mbridge.msdk.optimize.a.b r3 = com.mbridge.msdk.optimize.a.a.b(r3)     // Catch: java.lang.Throwable -> L3c
                java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L3c
                r3.a(r2)     // Catch: java.lang.Throwable -> L3c
                goto L36
            L6c:
                com.mbridge.msdk.optimize.a.a r3 = r1.a
                com.mbridge.msdk.optimize.a.a.c(r3)
                throw r2
            L72:
                return
        }

        @Override
        public final void onServiceDisconnected(android.content.ComponentName r2) {
                r1 = this;
                com.mbridge.msdk.optimize.a.a r2 = r1.a
                r0 = 0
                com.mbridge.msdk.optimize.a.a.a(r2, r0)
                return
        }
    }

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    static com.mbridge.msdk.optimize.a.c a(com.mbridge.msdk.optimize.a.a r0) {
            com.mbridge.msdk.optimize.a.c r0 = r0.c
            return r0
    }

    static com.mbridge.msdk.optimize.a.c a(com.mbridge.msdk.optimize.a.a r0, com.mbridge.msdk.optimize.a.c r1) {
            r0.c = r1
            return r1
    }

    static com.mbridge.msdk.optimize.a.b b(com.mbridge.msdk.optimize.a.a r0) {
            com.mbridge.msdk.optimize.a.b r0 = r0.d
            return r0
    }

    static void c(com.mbridge.msdk.optimize.a.a r2) {
            android.content.Context r0 = r2.a
            if (r0 != 0) goto L5
            goto L13
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

    public final void a(com.mbridge.msdk.optimize.a.b r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r3.d = r4     // Catch: java.lang.Throwable -> L26
            android.content.Context r4 = r3.a     // Catch: java.lang.Throwable -> L26
            if (r4 != 0) goto La
            goto L26
        La:
            com.mbridge.msdk.optimize.a.a$a r4 = new com.mbridge.msdk.optimize.a.a$a     // Catch: java.lang.Throwable -> L26
            r0 = 0
            r4.<init>(r3, r0)     // Catch: java.lang.Throwable -> L26
            r3.b = r4     // Catch: java.lang.Throwable -> L26
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Throwable -> L26
            java.lang.String r0 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L26
            java.lang.String r0 = "com.huawei.hwid"
            r4.setPackage(r0)     // Catch: java.lang.Throwable -> L26
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L26
            android.content.ServiceConnection r1 = r3.b     // Catch: java.lang.Throwable -> L26
            r2 = 1
            r0.bindService(r4, r1, r2)     // Catch: java.lang.Throwable -> L26
        L26:
            return
    }
}
