package com.xiaomi.push;

class bb implements com.xiaomi.push.au {
    private static boolean a;
    private volatile int a;
    private android.content.Context a;
    private android.content.ServiceConnection a;
    private volatile com.xiaomi.push.bb.a a;
    private final java.lang.Object a;

    class a {
        final com.xiaomi.push.bb a;
        java.lang.String a;
        java.lang.String b;
        java.lang.String c;
        java.lang.String d;

        private a(com.xiaomi.push.bb r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.a = r1
                r0.b = r1
                r0.c = r1
                r0.d = r1
                return
        }

        a(com.xiaomi.push.bb r1, com.xiaomi.push.bc r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    class b implements android.content.ServiceConnection {
        final com.xiaomi.push.bb a;

        private b(com.xiaomi.push.bb r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        b(com.xiaomi.push.bb r1, com.xiaomi.push.bc r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
                r1 = this;
                com.xiaomi.push.bb r2 = r1.a
                com.xiaomi.push.bb$a r2 = com.xiaomi.push.bb.a(r2)
                if (r2 == 0) goto L9
                return
            L9:
                java.lang.Thread r2 = new java.lang.Thread
                com.xiaomi.push.bd r0 = new com.xiaomi.push.bd
                r0.<init>(r1, r3)
                r2.<init>(r0)
                r2.start()
                return
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r1) {
                r0 = this;
                return
        }
    }

    class c {
        static java.lang.String a(android.os.IBinder r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.heytap.openid.IOpenID"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L29
                r0.writeString(r4)     // Catch: java.lang.Throwable -> L29
                r0.writeString(r5)     // Catch: java.lang.Throwable -> L29
                r0.writeString(r6)     // Catch: java.lang.Throwable -> L29
                r4 = 1
                r5 = 0
                r3.transact(r4, r0, r1, r5)     // Catch: java.lang.Throwable -> L29
                r1.readException()     // Catch: java.lang.Throwable -> L29
                java.lang.String r3 = r1.readString()     // Catch: java.lang.Throwable -> L29
                r1.recycle()
                r0.recycle()
                return r3
            L29:
                r3 = move-exception
                r1.recycle()
                r0.recycle()
                throw r3
        }
    }

    public bb(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r0 = 0
            r1.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.a = r0
            r1.a = r2
            r1.a()
            return
    }

    static int a(com.xiaomi.push.bb r0, int r1) {
            r0.a = r1
            return r1
    }

    static android.content.Context a(com.xiaomi.push.bb r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static com.xiaomi.push.bb.a a(com.xiaomi.push.bb r0) {
            com.xiaomi.push.bb$a r0 = r0.a
            return r0
    }

    static com.xiaomi.push.bb.a a(com.xiaomi.push.bb r0, com.xiaomi.push.bb.a r1) {
            r0.a = r1
            return r1
    }

    static java.lang.Object a(com.xiaomi.push.bb r0) {
            java.lang.Object r0 = r0.a
            return r0
    }

    static java.lang.String a(com.xiaomi.push.bb r0) {
            java.lang.String r0 = r0.b()
            return r0
    }

    private void a() {
            r4 = this;
            com.xiaomi.push.bb$b r0 = new com.xiaomi.push.bb$b
            r1 = 0
            r0.<init>(r4, r1)
            r4.a = r0
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.heytap.openid"
            java.lang.String r2 = "com.heytap.openid.IdentifyService"
            r0.setClassName(r1, r2)
            java.lang.String r1 = "action.com.heytap.openid.OPEN_ID_SERVICE"
            r0.setAction(r1)
            r1 = 1
            android.content.Context r2 = r4.a     // Catch: java.lang.Exception -> L23
            android.content.ServiceConnection r3 = r4.a     // Catch: java.lang.Exception -> L23
            boolean r0 = r2.bindService(r0, r3, r1)     // Catch: java.lang.Exception -> L23
            goto L24
        L23:
            r0 = 0
        L24:
            if (r0 == 0) goto L27
            goto L28
        L27:
            r1 = 2
        L28:
            r4.a = r1
            return
    }

    static void a(com.xiaomi.push.bb r0) {
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
            java.lang.String r2 = "oppo's "
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

    public static boolean a(android.content.Context r6) {
            r0 = 0
            android.content.pm.PackageManager r6 = r6.getPackageManager()     // Catch: java.lang.Exception -> L36
            java.lang.String r1 = "com.heytap.openid"
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r6 = r6.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L36
            if (r6 == 0) goto L36
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L36
            r2 = 28
            if (r1 < r2) goto L1a
            long r1 = r6.getLongVersionCode()     // Catch: java.lang.Exception -> L36
            goto L1d
        L1a:
            int r1 = r6.versionCode     // Catch: java.lang.Exception -> L36
            long r1 = (long) r1     // Catch: java.lang.Exception -> L36
        L1d:
            android.content.pm.ApplicationInfo r6 = r6.applicationInfo     // Catch: java.lang.Exception -> L36
            int r6 = r6.flags     // Catch: java.lang.Exception -> L36
            r3 = 1
            r6 = r6 & r3
            if (r6 == 0) goto L27
            r6 = r3
            goto L28
        L27:
            r6 = r0
        L28:
            r4 = 1
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r1 < 0) goto L30
            r1 = r3
            goto L31
        L30:
            r1 = r0
        L31:
            com.xiaomi.push.bb.a = r1     // Catch: java.lang.Exception -> L36
            if (r6 == 0) goto L36
            return r3
        L36:
            return r0
    }

    private java.lang.String b() {
            r6 = this;
            android.content.Context r0 = r6.a     // Catch: java.lang.Exception -> L48
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L48
            android.content.Context r1 = r6.a     // Catch: java.lang.Exception -> L48
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> L48
            r2 = 64
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L48
            android.content.pm.Signature[] r0 = r0.signatures     // Catch: java.lang.Exception -> L48
            java.lang.String r1 = "SHA1"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Exception -> L48
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L48
            r2.<init>()     // Catch: java.lang.Exception -> L48
            r3 = 0
            r0 = r0[r3]     // Catch: java.lang.Exception -> L48
            byte[] r0 = r0.toByteArray()     // Catch: java.lang.Exception -> L48
            byte[] r0 = r1.digest(r0)     // Catch: java.lang.Exception -> L48
        L2a:
            int r1 = r0.length     // Catch: java.lang.Exception -> L48
            if (r3 >= r1) goto L43
            r1 = r0[r3]     // Catch: java.lang.Exception -> L48
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 | 256(0x100, float:3.59E-43)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)     // Catch: java.lang.Exception -> L48
            r4 = 3
            r5 = 1
            java.lang.String r1 = r1.substring(r5, r4)     // Catch: java.lang.Exception -> L48
            r2.append(r1)     // Catch: java.lang.Exception -> L48
            int r3 = r3 + 1
            goto L2a
        L43:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L48
            return r0
        L48:
            java.lang.String r0 = ""
            return r0
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
            com.xiaomi.push.bb$a r0 = r1.a
            if (r0 != 0) goto Lb
            r0 = 0
            goto Lf
        Lb:
            com.xiaomi.push.bb$a r0 = r1.a
            java.lang.String r0 = r0.b
        Lf:
            return r0
    }

    @Override
    public boolean a() {
            r1 = this;
            boolean r0 = com.xiaomi.push.bb.a
            return r0
    }
}
