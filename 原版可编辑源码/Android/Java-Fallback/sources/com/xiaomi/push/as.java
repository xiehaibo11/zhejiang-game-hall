package com.xiaomi.push;

class as implements com.xiaomi.push.au {
    private static boolean a;
    private volatile int a;
    private android.content.Context a;
    private android.content.ServiceConnection a;
    private final java.lang.Object a;
    private volatile java.lang.String a;
    private volatile java.lang.String b;
    private volatile boolean b;

    class a implements android.content.ServiceConnection {
        final com.xiaomi.push.as a;

        private a(com.xiaomi.push.as r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.xiaomi.push.as r1, com.xiaomi.push.at r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onServiceConnected(android.content.ComponentName r3, android.os.IBinder r4) {
                r2 = this;
                r3 = 2
                com.xiaomi.push.as r0 = r2.a     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L56
                java.lang.String r1 = com.xiaomi.push.as.b.a(r4)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L56
                com.xiaomi.push.as.a(r0, r1)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L56
                com.xiaomi.push.as r0 = r2.a     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L56
                boolean r4 = com.xiaomi.push.as.b.a(r4)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L56
                com.xiaomi.push.as.a(r0, r4)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L56
                com.xiaomi.push.as r4 = r2.a
                com.xiaomi.push.as.a(r4)
                com.xiaomi.push.as r4 = r2.a
                com.xiaomi.push.as.a(r4, r3)
                com.xiaomi.push.as r3 = r2.a
                java.lang.Object r4 = com.xiaomi.push.as.a(r3)
                monitor-enter(r4)
                com.xiaomi.push.as r3 = r2.a     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
                java.lang.Object r3 = com.xiaomi.push.as.a(r3)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
                r3.notifyAll()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
                goto L30
            L2e:
                r3 = move-exception
                goto L32
            L30:
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L2e
                goto L74
            L32:
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L2e
                throw r3
            L34:
                r4 = move-exception
                com.xiaomi.push.as r0 = r2.a
                com.xiaomi.push.as.a(r0)
                com.xiaomi.push.as r0 = r2.a
                com.xiaomi.push.as.a(r0, r3)
                com.xiaomi.push.as r3 = r2.a
                java.lang.Object r0 = com.xiaomi.push.as.a(r3)
                monitor-enter(r0)
                com.xiaomi.push.as r3 = r2.a     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
                java.lang.Object r3 = com.xiaomi.push.as.a(r3)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
                r3.notifyAll()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L52
                goto L52
            L50:
                r3 = move-exception
                goto L54
            L52:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
                throw r4
            L54:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
                throw r3
            L56:
                com.xiaomi.push.as r4 = r2.a
                com.xiaomi.push.as.a(r4)
                com.xiaomi.push.as r4 = r2.a
                com.xiaomi.push.as.a(r4, r3)
                com.xiaomi.push.as r3 = r2.a
                java.lang.Object r3 = com.xiaomi.push.as.a(r3)
                monitor-enter(r3)
                com.xiaomi.push.as r4 = r2.a     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
                java.lang.Object r4 = com.xiaomi.push.as.a(r4)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
                r4.notifyAll()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L73
                goto L73
            L71:
                r4 = move-exception
                goto L75
            L73:
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L71
            L74:
                return
            L75:
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L71
                throw r4
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r1) {
                r0 = this;
                return
        }
    }

    class b {
        static java.lang.String a(android.os.IBinder r4) {
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L20
                r2 = 1
                r3 = 0
                r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L20
                r1.readException()     // Catch: java.lang.Throwable -> L20
                java.lang.String r4 = r1.readString()     // Catch: java.lang.Throwable -> L20
                r1.recycle()
                r0.recycle()
                return r4
            L20:
                r4 = move-exception
                r1.recycle()
                r0.recycle()
                throw r4
        }

        static boolean a(android.os.IBinder r4) {
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L23
                r2 = 2
                r3 = 0
                r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L23
                r1.readException()     // Catch: java.lang.Throwable -> L23
                int r4 = r1.readInt()     // Catch: java.lang.Throwable -> L23
                if (r4 == 0) goto L1c
                r3 = 1
            L1c:
                r1.recycle()
                r0.recycle()
                return r3
            L23:
                r4 = move-exception
                r1.recycle()
                r0.recycle()
                throw r4
        }
    }

    public as(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r1 = 0
            r2.a = r1
            r2.b = r0
            r2.b = r1
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.a = r0
            r2.a = r3
            r2.a()
            return
    }

    static int a(com.xiaomi.push.as r0, int r1) {
            r0.a = r1
            return r1
    }

    static java.lang.Object a(com.xiaomi.push.as r0) {
            java.lang.Object r0 = r0.a
            return r0
    }

    static java.lang.String a(com.xiaomi.push.as r0, java.lang.String r1) {
            r0.a = r1
            return r1
    }

    private void a() {
            r4 = this;
            com.xiaomi.push.as$a r0 = new com.xiaomi.push.as$a
            r1 = 0
            r0.<init>(r4, r1)
            r4.a = r0
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r0.<init>(r1)
            java.lang.String r1 = "com.huawei.hwid"
            r0.setPackage(r1)
            r1 = 1
            android.content.Context r2 = r4.a     // Catch: java.lang.Exception -> L1e
            android.content.ServiceConnection r3 = r4.a     // Catch: java.lang.Exception -> L1e
            boolean r0 = r2.bindService(r0, r3, r1)     // Catch: java.lang.Exception -> L1e
            goto L1f
        L1e:
            r0 = 0
        L1f:
            if (r0 == 0) goto L22
            goto L23
        L22:
            r1 = 2
        L23:
            r4.a = r1
            return
    }

    static void a(com.xiaomi.push.as r0) {
            r0.b()
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            int r0 = r3.a
            r1 = 1
            if (r0 != r1) goto L39
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L39
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            r1.<init>()     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            java.lang.String r2 = "huawei's "
            r1.append(r2)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            r1.append(r4)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            java.lang.String r4 = " wait..."
            r1.append(r4)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            java.lang.Object r4 = r3.a     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            r1 = 3000(0xbb8, double:1.482E-320)
            r4.wait(r1)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L35
            goto L35
        L33:
            r4 = move-exception
            goto L37
        L35:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            goto L39
        L37:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            throw r4
        L39:
            return
    }

    public static boolean a(android.content.Context r4) {
            r0 = 0
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "com.huawei.hwid"
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L27
            android.content.pm.ApplicationInfo r1 = r4.applicationInfo     // Catch: java.lang.Exception -> L27
            int r1 = r1.flags     // Catch: java.lang.Exception -> L27
            r2 = 1
            r1 = r1 & r2
            if (r1 == 0) goto L17
            r1 = r2
            goto L18
        L17:
            r1 = r0
        L18:
            int r4 = r4.versionCode     // Catch: java.lang.Exception -> L27
            r3 = 20602000(0x13a5c90, float:3.4229215E-38)
            if (r4 < r3) goto L21
            r4 = r2
            goto L22
        L21:
            r4 = r0
        L22:
            com.xiaomi.push.as.a = r4     // Catch: java.lang.Exception -> L27
            if (r1 == 0) goto L27
            return r2
        L27:
            return r0
    }

    static boolean a(com.xiaomi.push.as r0, boolean r1) {
            r0.b = r1
            return r1
    }

    private void b() {
            r2 = this;
            android.content.ServiceConnection r0 = r2.a
            if (r0 == 0) goto L9
            android.content.Context r1 = r2.a     // Catch: java.lang.Exception -> L9
            r1.unbindService(r0)     // Catch: java.lang.Exception -> L9
        L9:
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "getOAID"
            r1.a(r0)
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public boolean a() {
            r1 = this;
            boolean r0 = com.xiaomi.push.as.a
            return r0
    }
}
