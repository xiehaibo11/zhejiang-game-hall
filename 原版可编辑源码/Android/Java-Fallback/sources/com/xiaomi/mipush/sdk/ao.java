package com.xiaomi.mipush.sdk;

public class ao {
    private static com.xiaomi.mipush.sdk.ao a;
    private static final java.util.ArrayList<com.xiaomi.mipush.sdk.ao.a> a = null;
    private static boolean b;
    private android.content.Context a;
    private android.content.Intent a;
    private android.os.Handler a;
    private android.os.Messenger a;
    private java.lang.Integer a;
    private java.lang.String a;
    private java.util.List<android.os.Message> a;
    private boolean a;
    private boolean c;

    class a<T extends com.xiaomi.push.iu<T, ?>> {
        com.xiaomi.push.hj a;
        T a;
        boolean a;

        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.xiaomi.mipush.sdk.ao.a = r0
            return
    }

    private ao(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.a = r0
            r1 = 0
            r3.a = r1
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3.a = r2
            r3.c = r0
            r3.a = r1
            r3.a = r1
            android.content.Context r0 = r4.getApplicationContext()
            r3.a = r0
            r3.a = r1
            boolean r0 = r3.c()
            r3.a = r0
            boolean r0 = r3.d()
            com.xiaomi.mipush.sdk.ao.b = r0
            com.xiaomi.mipush.sdk.ap r0 = new com.xiaomi.mipush.sdk.ap
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r3, r1)
            r3.a = r0
            boolean r4 = com.xiaomi.push.m.a(r4)
            if (r4 == 0) goto L43
            com.xiaomi.mipush.sdk.aq r4 = new com.xiaomi.mipush.sdk.aq
            r4.<init>(r3)
            com.xiaomi.push.service.i.a(r4)
        L43:
            android.content.Intent r4 = r3.b()
            if (r4 == 0) goto L4c
            r3.b(r4)
        L4c:
            return
    }

    private synchronized int a() {
            r3 = this;
            monitor-enter(r3)
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L13
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L13
            java.lang.String r1 = "service_boot_mode"
            r2 = -1
            int r0 = r0.getInt(r1, r2)     // Catch: java.lang.Throwable -> L13
            monitor-exit(r3)
            return r0
        L13:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    static android.content.Context a(com.xiaomi.mipush.sdk.ao r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    private android.content.Intent a() {
            r2 = this;
            boolean r0 = r2.a()
            if (r0 == 0) goto L19
            android.content.Context r0 = r2.a
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L19
            android.content.Intent r0 = r2.d()
            return r0
        L19:
            android.content.Intent r0 = r2.e()
            return r0
    }

    private android.os.Message a(android.content.Intent r3) {
            r2 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r1 = 17
            r0.what = r1
            r0.obj = r3
            return r0
    }

    static android.os.Messenger a(com.xiaomi.mipush.sdk.ao r0) {
            android.os.Messenger r0 = r0.a
            return r0
    }

    static android.os.Messenger a(com.xiaomi.mipush.sdk.ao r0, android.os.Messenger r1) {
            r0.a = r1
            return r1
    }

    public static synchronized com.xiaomi.mipush.sdk.ao a(android.content.Context r2) {
            java.lang.Class<com.xiaomi.mipush.sdk.ao> r0 = com.xiaomi.mipush.sdk.ao.class
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.ao r1 = com.xiaomi.mipush.sdk.ao.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.xiaomi.mipush.sdk.ao r1 = new com.xiaomi.mipush.sdk.ao     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            com.xiaomi.mipush.sdk.ao.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.xiaomi.mipush.sdk.ao r2 = com.xiaomi.mipush.sdk.ao.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static java.lang.Integer a(com.xiaomi.mipush.sdk.ao r0) {
            java.lang.Integer r0 = r0.a
            return r0
    }

    static java.lang.Integer a(com.xiaomi.mipush.sdk.ao r0, java.lang.Integer r1) {
            r0.a = r1
            return r1
    }

    private java.lang.String a() {
            r3 = this;
            android.content.Context r0 = r3.a     // Catch: java.lang.Exception -> L16
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "com.xiaomi.xmsf"
            r2 = 4
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L16
            int r0 = r0.versionCode     // Catch: java.lang.Exception -> L16
            r1 = 106(0x6a, float:1.49E-43)
            if (r0 < r1) goto L16
            java.lang.String r0 = "com.xiaomi.push.service.XMPushService"
            return r0
        L16:
            java.lang.String r0 = "com.xiaomi.xmsf.push.service.XMPushService"
            return r0
    }

    static java.util.List a(com.xiaomi.mipush.sdk.ao r0) {
            java.util.List<android.os.Message> r0 = r0.a
            return r0
    }

    static void a(com.xiaomi.mipush.sdk.ao r0, java.lang.String r1, com.xiaomi.mipush.sdk.au r2, boolean r3, java.util.HashMap r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(java.lang.String r12, com.xiaomi.mipush.sdk.au r13, boolean r14, java.util.HashMap<java.lang.String, java.lang.String> r15) {
            r11 = this;
            android.content.Context r0 = r11.a
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)
            boolean r0 = r0.b()
            if (r0 == 0) goto L164
            android.content.Context r0 = r11.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            if (r0 != 0) goto L16
            goto L164
        L16:
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            r1 = 1
            r0.a(r1)
            android.content.Intent r2 = r11.a()
            boolean r3 = android.text.TextUtils.isEmpty(r12)
            r4 = 0
            if (r3 == 0) goto L4b
            java.lang.String r12 = com.xiaomi.push.service.bd.a()
            r0.a(r12)
            if (r14 == 0) goto L39
            com.xiaomi.push.ii r3 = new com.xiaomi.push.ii
            r3.<init>(r12, r1)
            goto L3a
        L39:
            r3 = r4
        L3a:
            java.lang.Class<com.xiaomi.mipush.sdk.af> r5 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r5)
            android.content.Context r6 = r11.a     // Catch: java.lang.Throwable -> L48
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L48
            r6.a(r12)     // Catch: java.lang.Throwable -> L48
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L48
            goto L57
        L48:
            r12 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L48
            throw r12
        L4b:
            r0.a(r12)
            if (r14 == 0) goto L56
            com.xiaomi.push.ii r3 = new com.xiaomi.push.ii
            r3.<init>(r12, r1)
            goto L57
        L56:
            r3 = r4
        L57:
            int[] r5 = com.xiaomi.mipush.sdk.at.a
            int r6 = r13.ordinal()
            r5 = r5[r6]
            switch(r5) {
                case 1: goto L89;
                case 2: goto L70;
                case 3: goto L63;
                case 4: goto L63;
                case 5: goto L63;
                case 6: goto L63;
                default: goto L62;
            }
        L62:
            goto La4
        L63:
            com.xiaomi.push.ht r5 = com.xiaomi.push.ht.N
            java.lang.String r5 = r5.a
            r0.c(r5)
            if (r15 == 0) goto La4
            r0.a(r15)
            goto La4
        L70:
            com.xiaomi.push.ht r5 = com.xiaomi.push.ht.F
            java.lang.String r5 = r5.a
            r0.c(r5)
            com.xiaomi.push.ht r5 = com.xiaomi.push.ht.F
            java.lang.String r5 = r5.a
            r3.c(r5)
            if (r15 == 0) goto L86
            r0.a(r15)
            r3.a(r15)
        L86:
            java.lang.String r15 = "com.xiaomi.mipush.ENABLE_PUSH_MESSAGE"
            goto La1
        L89:
            com.xiaomi.push.ht r5 = com.xiaomi.push.ht.E
            java.lang.String r5 = r5.a
            r0.c(r5)
            com.xiaomi.push.ht r5 = com.xiaomi.push.ht.E
            java.lang.String r5 = r5.a
            r3.c(r5)
            if (r15 == 0) goto L9f
            r0.a(r15)
            r3.a(r15)
        L9f:
            java.lang.String r15 = "com.xiaomi.mipush.DISABLE_PUSH_MESSAGE"
        La1:
            r2.setAction(r15)
        La4:
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r5 = "type:"
            r15.append(r5)
            r15.append(r13)
            java.lang.String r5 = ", "
            r15.append(r5)
            r15.append(r12)
            java.lang.String r15 = r15.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r15)
            android.content.Context r15 = r11.a
            com.xiaomi.mipush.sdk.b r15 = com.xiaomi.mipush.sdk.b.a(r15)
            java.lang.String r15 = r15.a()
            r0.b(r15)
            android.content.Context r15 = r11.a
            java.lang.String r15 = r15.getPackageName()
            r0.d(r15)
            com.xiaomi.push.hj r15 = com.xiaomi.push.hj.i
            r5 = 0
            r11.a(r0, r15, r5, r4)
            if (r14 == 0) goto L14d
            android.content.Context r14 = r11.a
            com.xiaomi.mipush.sdk.b r14 = com.xiaomi.mipush.sdk.b.a(r14)
            java.lang.String r14 = r14.a()
            r3.b(r14)
            android.content.Context r14 = r11.a
            java.lang.String r14 = r14.getPackageName()
            r3.d(r14)
            android.content.Context r5 = r11.a
            com.xiaomi.push.hj r7 = com.xiaomi.push.hj.i
            r8 = 0
            android.content.Context r14 = r11.a
            java.lang.String r9 = r14.getPackageName()
            android.content.Context r14 = r11.a
            com.xiaomi.mipush.sdk.b r14 = com.xiaomi.mipush.sdk.b.a(r14)
            java.lang.String r10 = r14.a()
            r6 = r3
            com.xiaomi.push.if r14 = com.xiaomi.mipush.sdk.ai.a(r5, r6, r7, r8, r9, r10)
            byte[] r14 = com.xiaomi.push.it.a(r14)
            if (r14 == 0) goto L14d
            android.content.Context r15 = r11.a
            java.lang.String r15 = r15.getPackageName()
            android.content.Context r0 = r11.a
            com.xiaomi.push.hj r4 = com.xiaomi.push.hj.i
            int r5 = r14.length
            com.xiaomi.push.db.a(r15, r0, r3, r4, r5)
            java.lang.String r15 = "mipush_payload"
            r2.putExtra(r15, r14)
            java.lang.String r14 = "com.xiaomi.mipush.MESSAGE_CACHE"
            r2.putExtra(r14, r1)
            android.content.Context r14 = r11.a
            com.xiaomi.mipush.sdk.b r14 = com.xiaomi.mipush.sdk.b.a(r14)
            java.lang.String r14 = r14.a()
            java.lang.String r15 = "mipush_app_id"
            r2.putExtra(r15, r14)
            android.content.Context r14 = r11.a
            com.xiaomi.mipush.sdk.b r14 = com.xiaomi.mipush.sdk.b.a(r14)
            java.lang.String r14 = r14.b()
            java.lang.String r15 = "mipush_app_token"
            r2.putExtra(r15, r14)
            r11.c(r2)
        L14d:
            android.os.Message r14 = android.os.Message.obtain()
            r15 = 19
            r14.what = r15
            int r13 = r13.ordinal()
            r14.obj = r12
            r14.arg1 = r13
            android.os.Handler r12 = r11.a
            r0 = 5000(0x1388, double:2.4703E-320)
            r12.sendMessageDelayed(r14, r0)
        L164:
            return
    }

    static boolean a(com.xiaomi.mipush.sdk.ao r0, boolean r1) {
            r0.c = r1
            return r1
    }

    private android.content.Intent b() {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L13
            android.content.Intent r0 = r2.c()
            return r0
        L13:
            java.lang.String r0 = "pushChannel xmsf create own channel"
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            android.content.Intent r0 = r2.e()
            return r0
    }

    private void b(android.content.Intent r3) {
            r2 = this;
            boolean r0 = com.xiaomi.push.m.a()     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto L10
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L16
            r1 = 26
            if (r0 < r1) goto L10
            r2.d(r3)     // Catch: java.lang.Exception -> L16
            goto L1a
        L10:
            android.content.Context r0 = r2.a     // Catch: java.lang.Exception -> L16
            r0.startService(r3)     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r3 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L1a:
            return
    }

    private android.content.Intent c() {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 == 0) goto L10
            java.lang.String r0 = "pushChannel app start miui china channel"
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            android.content.Intent r0 = r1.d()
            return r0
        L10:
            java.lang.String r0 = "pushChannel app start  own channel"
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            android.content.Intent r0 = r1.e()
            return r0
    }

    private synchronized void c(int r4) {
            r3 = this;
            monitor-enter(r3)
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L19
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L19
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L19
            java.lang.String r1 = "service_boot_mode"
            android.content.SharedPreferences$Editor r4 = r0.putInt(r1, r4)     // Catch: java.lang.Throwable -> L19
            r4.commit()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r3)
            return
        L19:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private void c(android.content.Intent r4) {
            r3 = this;
            android.content.Context r0 = r3.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.T
            int r1 = r1.a()
            com.xiaomi.push.hk r2 = com.xiaomi.push.hk.a
            int r2 = r2.a()
            int r0 = r0.a(r1, r2)
            int r1 = r3.a()
            com.xiaomi.push.hk r2 = com.xiaomi.push.hk.b
            int r2 = r2.a()
            if (r0 != r2) goto L28
            boolean r0 = com.xiaomi.mipush.sdk.ao.b
            if (r0 == 0) goto L28
            r0 = 1
            goto L29
        L28:
            r0 = 0
        L29:
            if (r0 == 0) goto L2e
            com.xiaomi.push.hk r2 = com.xiaomi.push.hk.b
            goto L30
        L2e:
            com.xiaomi.push.hk r2 = com.xiaomi.push.hk.a
        L30:
            int r2 = r2.a()
            if (r2 == r1) goto L39
            r3.a(r2)
        L39:
            if (r0 == 0) goto L3f
            r3.d(r4)
            goto L42
        L3f:
            r3.b(r4)
        L42:
            return
    }

    private boolean c() {
            r4 = this;
            android.content.Context r0 = r4.a
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            r1 = 0
            java.lang.String r2 = "com.xiaomi.xmsf"
            r3 = 4
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r2, r3)     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto L11
            return r1
        L11:
            int r0 = r0.versionCode     // Catch: java.lang.Throwable -> L1a
            r2 = 105(0x69, float:1.47E-43)
            if (r0 >= r2) goto L18
            return r1
        L18:
            r0 = 1
            return r0
        L1a:
            return r1
    }

    private android.content.Intent d() {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.Context r1 = r4.a
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "com.xiaomi.xmsf"
            r0.setPackage(r2)
            java.lang.String r3 = r4.a()
            r0.setClassName(r2, r3)
            java.lang.String r2 = "mipush_app_package"
            r0.putExtra(r2, r1)
            r4.g()
            return r0
    }

    private synchronized void d(android.content.Intent r4) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.c     // Catch: java.lang.Throwable -> L51
            r1 = 0
            if (r0 == 0) goto L20
            android.os.Message r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L51
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L51
            r2 = 50
            if (r0 < r2) goto L19
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.remove(r1)     // Catch: java.lang.Throwable -> L51
        L19:
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.add(r4)     // Catch: java.lang.Throwable -> L51
            monitor-exit(r3)
            return
        L20:
            android.os.Messenger r0 = r3.a     // Catch: java.lang.Throwable -> L51
            if (r0 != 0) goto L40
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L51
            com.xiaomi.mipush.sdk.as r1 = new com.xiaomi.mipush.sdk.as     // Catch: java.lang.Throwable -> L51
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L51
            r2 = 1
            r0.bindService(r4, r1, r2)     // Catch: java.lang.Throwable -> L51
            r3.c = r2     // Catch: java.lang.Throwable -> L51
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.clear()     // Catch: java.lang.Throwable -> L51
            android.os.Message r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L51
            java.util.List<android.os.Message> r0 = r3.a     // Catch: java.lang.Throwable -> L51
            r0.add(r4)     // Catch: java.lang.Throwable -> L51
            goto L4f
        L40:
            android.os.Message r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L51
            android.os.Messenger r0 = r3.a     // Catch: android.os.RemoteException -> L4a java.lang.Throwable -> L51
            r0.send(r4)     // Catch: android.os.RemoteException -> L4a java.lang.Throwable -> L51
            goto L4f
        L4a:
            r4 = 0
            r3.a = r4     // Catch: java.lang.Throwable -> L51
            r3.c = r1     // Catch: java.lang.Throwable -> L51
        L4f:
            monitor-exit(r3)
            return
        L51:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private boolean d() {
            r4 = this;
            boolean r0 = r4.a()
            r1 = 1
            if (r0 == 0) goto L1d
            android.content.Context r0 = r4.a     // Catch: java.lang.Exception -> L1d
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L1d
            java.lang.String r2 = "com.xiaomi.xmsf"
            r3 = 4
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L1d
            int r0 = r0.versionCode     // Catch: java.lang.Exception -> L1d
            r2 = 108(0x6c, float:1.51E-43)
            if (r0 < r2) goto L1b
            return r1
        L1b:
            r0 = 0
            return r0
        L1d:
            return r1
    }

    private android.content.Intent e() {
            r5 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.Context r1 = r5.a
            java.lang.String r1 = r1.getPackageName()
            r5.h()
            android.content.ComponentName r2 = new android.content.ComponentName
            android.content.Context r3 = r5.a
            java.lang.String r4 = "com.xiaomi.push.service.XMPushService"
            r2.<init>(r3, r4)
            r0.setComponent(r2)
            java.lang.String r2 = "mipush_app_package"
            r0.putExtra(r2, r1)
            return r0
    }

    private boolean e() {
            r3 = this;
            android.content.Context r0 = r3.a
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = "miui"
            boolean r1 = r0.contains(r1)
            r2 = 1
            if (r1 != 0) goto L25
            java.lang.String r1 = "xiaomi"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L18
            goto L25
        L18:
            android.content.Context r0 = r3.a
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.flags
            r0 = r0 & r2
            if (r0 == 0) goto L24
            goto L25
        L24:
            r2 = 0
        L25:
            return r2
    }

    private void g() {
            r4 = this;
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L1b
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L1b
            android.content.ComponentName r1 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L1b
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = "com.xiaomi.push.service.XMPushService"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1b
            int r2 = r0.getComponentEnabledSetting(r1)     // Catch: java.lang.Throwable -> L1b
            r3 = 2
            if (r2 != r3) goto L17
            return
        L17:
            r2 = 1
            r0.setComponentEnabledSetting(r1, r3, r2)     // Catch: java.lang.Throwable -> L1b
        L1b:
            return
    }

    private void h() {
            r4 = this;
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L1a
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L1a
            android.content.ComponentName r1 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L1a
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L1a
            java.lang.String r3 = "com.xiaomi.push.service.XMPushService"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1a
            int r2 = r0.getComponentEnabledSetting(r1)     // Catch: java.lang.Throwable -> L1a
            r3 = 1
            if (r2 != r3) goto L17
            return
        L17:
            r0.setComponentEnabledSetting(r1, r3, r3)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    public void a() {
            r1 = this;
            android.content.Intent r0 = r1.a()
            r1.b(r0)
            return
    }

    public void a(int r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    void a(int r4, int r5) {
            r3 = this;
            android.content.Intent r0 = r3.a()
            java.lang.String r1 = "com.xiaomi.mipush.CLEAR_NOTIFICATION"
            r0.setAction(r1)
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            android.content.Context r2 = r3.a
            java.lang.String r2 = r2.getPackageName()
            r0.putExtra(r1, r2)
            java.lang.String r1 = com.xiaomi.push.service.bk.C
            r0.putExtra(r1, r4)
            java.lang.String r4 = com.xiaomi.push.service.bk.D
            r0.putExtra(r4, r5)
            r3.c(r0)
            return
    }

    void a(int r3, java.lang.String r4) {
            r2 = this;
            android.content.Intent r0 = r2.a()
            java.lang.String r1 = "com.xiaomi.mipush.thirdparty"
            r0.setAction(r1)
            java.lang.String r1 = "com.xiaomi.mipush.thirdparty_LEVEL"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "com.xiaomi.mipush.thirdparty_DESC"
            r0.putExtra(r3, r4)
            r2.b(r0)
            return
    }

    void a(android.content.Intent r3) {
            r2 = this;
            android.content.Intent r0 = r2.a()
            r1 = 24
            r3.fillIn(r0, r1)
            r2.c(r3)
            return
    }

    public final void a(com.xiaomi.push.hn r3) {
            r2 = this;
            android.content.Intent r0 = r2.a()
            byte[] r3 = com.xiaomi.push.it.a(r3)
            if (r3 != 0) goto L10
            java.lang.String r3 = "send TinyData failed, because tinyDataBytes is null."
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return
        L10:
            java.lang.String r1 = "com.xiaomi.mipush.SEND_TINYDATA"
            r0.setAction(r1)
            java.lang.String r1 = "mipush_payload"
            r0.putExtra(r1, r3)
            r2.b(r0)
            return
    }

    public final void a(com.xiaomi.push.ij r8, boolean r9) {
            r7 = this;
            android.content.Context r0 = r7.a
            android.content.Context r0 = r0.getApplicationContext()
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r0)
            android.content.Context r0 = r7.a
            java.lang.String r2 = r0.getPackageName()
            java.lang.String r4 = r8.a()
            java.lang.String r3 = "E100003"
            r5 = 6001(0x1771, float:8.409E-42)
            r6 = 0
            r1.a(r2, r3, r4, r5, r6)
            r0 = 0
            r7.a = r0
            android.content.Context r0 = r7.a
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)
            java.lang.String r1 = r8.a()
            r0.a = r1
            android.content.Intent r0 = r7.a()
            android.content.Context r1 = r7.a
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.a
            com.xiaomi.push.if r8 = com.xiaomi.mipush.sdk.ai.a(r1, r8, r2)
            byte[] r8 = com.xiaomi.push.it.a(r8)
            if (r8 != 0) goto L43
            java.lang.String r8 = "register fail, because msgBytes is null."
            com.xiaomi.channel.commonutils.logger.b.a(r8)
            return
        L43:
            java.lang.String r1 = "com.xiaomi.mipush.REGISTER_APP"
            r0.setAction(r1)
            android.content.Context r1 = r7.a
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "mipush_app_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "mipush_payload"
            r0.putExtra(r1, r8)
            java.lang.String r8 = r7.a
            java.lang.String r1 = "mipush_session"
            r0.putExtra(r1, r8)
            java.lang.String r8 = "mipush_env_chanage"
            r0.putExtra(r8, r9)
            android.content.Context r8 = r7.a
            com.xiaomi.mipush.sdk.b r8 = com.xiaomi.mipush.sdk.b.a(r8)
            int r8 = r8.a()
            java.lang.String r9 = "mipush_env_type"
            r0.putExtra(r9, r8)
            android.content.Context r8 = r7.a
            boolean r8 = com.xiaomi.push.bj.b(r8)
            if (r8 == 0) goto L89
            boolean r8 = r7.b()
            if (r8 == 0) goto L89
            r7.c(r0)
            goto L8b
        L89:
            r7.a = r0
        L8b:
            return
    }

    public final void a(com.xiaomi.push.ip r4) {
            r3 = this;
            android.content.Context r0 = r3.a
            com.xiaomi.push.hj r1 = com.xiaomi.push.hj.b
            com.xiaomi.push.if r4 = com.xiaomi.mipush.sdk.ai.a(r0, r4, r1)
            byte[] r4 = com.xiaomi.push.it.a(r4)
            if (r4 != 0) goto L14
            java.lang.String r4 = "unregister fail, because msgBytes is null."
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return
        L14:
            android.content.Intent r0 = r3.a()
            java.lang.String r1 = "com.xiaomi.mipush.UNREGISTER_APP"
            r0.setAction(r1)
            android.content.Context r1 = r3.a
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "mipush_app_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "mipush_payload"
            r0.putExtra(r1, r4)
            r3.c(r0)
            return
    }

    public final <T extends com.xiaomi.push.iu<T, ?>> void a(T r2, com.xiaomi.push.hj r3, com.xiaomi.push.hw r4) {
            r1 = this;
            com.xiaomi.push.hj r0 = com.xiaomi.push.hj.a
            boolean r0 = r3.equals(r0)
            r0 = r0 ^ 1
            r1.a(r2, r3, r0, r4)
            return
    }

    public <T extends com.xiaomi.push.iu<T, ?>> void a(T r2, com.xiaomi.push.hj r3, boolean r4) {
            r1 = this;
            com.xiaomi.mipush.sdk.ao$a r0 = new com.xiaomi.mipush.sdk.ao$a
            r0.<init>()
            r0.a = r2
            r0.a = r3
            r0.a = r4
            java.util.ArrayList<com.xiaomi.mipush.sdk.ao$a> r2 = com.xiaomi.mipush.sdk.ao.a
            monitor-enter(r2)
            java.util.ArrayList<com.xiaomi.mipush.sdk.ao$a> r3 = com.xiaomi.mipush.sdk.ao.a     // Catch: java.lang.Throwable -> L25
            r3.add(r0)     // Catch: java.lang.Throwable -> L25
            java.util.ArrayList<com.xiaomi.mipush.sdk.ao$a> r3 = com.xiaomi.mipush.sdk.ao.a     // Catch: java.lang.Throwable -> L25
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L25
            r4 = 10
            if (r3 <= r4) goto L23
            java.util.ArrayList<com.xiaomi.mipush.sdk.ao$a> r3 = com.xiaomi.mipush.sdk.ao.a     // Catch: java.lang.Throwable -> L25
            r4 = 0
            r3.remove(r4)     // Catch: java.lang.Throwable -> L25
        L23:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L25
            throw r3
    }

    public final <T extends com.xiaomi.push.iu<T, ?>> void a(T r8, com.xiaomi.push.hj r9, boolean r10, com.xiaomi.push.hw r11) {
            r7 = this;
            r4 = 1
            r6 = 1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r0.a(r1, r2, r3, r4, r5, r6)
            return
    }

    public final <T extends com.xiaomi.push.iu<T, ?>> void a(T r8, com.xiaomi.push.hj r9, boolean r10, com.xiaomi.push.hw r11, boolean r12) {
            r7 = this;
            r4 = 1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r6 = r12
            r0.a(r1, r2, r3, r4, r5, r6)
            return
    }

    public final <T extends com.xiaomi.push.iu<T, ?>> void a(T r11, com.xiaomi.push.hj r12, boolean r13, boolean r14, com.xiaomi.push.hw r15, boolean r16) {
            r10 = this;
            r9 = r10
            android.content.Context r0 = r9.a
            java.lang.String r7 = r0.getPackageName()
            android.content.Context r0 = r9.a
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)
            java.lang.String r8 = r0.a()
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public final <T extends com.xiaomi.push.iu<T, ?>> void a(T r11, com.xiaomi.push.hj r12, boolean r13, boolean r14, com.xiaomi.push.hw r15, boolean r16, java.lang.String r17, java.lang.String r18) {
            r10 = this;
            r9 = 1
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public final <T extends com.xiaomi.push.iu<T, ?>> void a(T r12, com.xiaomi.push.hj r13, boolean r14, boolean r15, com.xiaomi.push.hw r16, boolean r17, java.lang.String r18, java.lang.String r19, boolean r20) {
            r11 = this;
            r10 = 1
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public final <T extends com.xiaomi.push.iu<T, ?>> void a(T r10, com.xiaomi.push.hj r11, boolean r12, boolean r13, com.xiaomi.push.hw r14, boolean r15, java.lang.String r16, java.lang.String r17, boolean r18, boolean r19) {
            r9 = this;
            r0 = r9
            r1 = r14
            if (r19 == 0) goto L1c
            android.content.Context r2 = r0.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            boolean r2 = r2.c()
            if (r2 != 0) goto L1c
            if (r13 == 0) goto L16
            r9.a(r10, r11, r12)
            goto L6f
        L16:
            java.lang.String r1 = "drop the message before initialization."
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            goto L6f
        L1c:
            if (r18 == 0) goto L2c
            android.content.Context r2 = r0.a
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r16
            r7 = r17
            com.xiaomi.push.if r2 = com.xiaomi.mipush.sdk.ai.a(r2, r3, r4, r5, r6, r7)
            goto L39
        L2c:
            android.content.Context r3 = r0.a
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r16
            r8 = r17
            com.xiaomi.push.if r2 = com.xiaomi.mipush.sdk.ai.b(r3, r4, r5, r6, r7, r8)
        L39:
            if (r1 == 0) goto L3e
            r2.a(r14)
        L3e:
            byte[] r1 = com.xiaomi.push.it.a(r2)
            if (r1 != 0) goto L4a
            java.lang.String r1 = "send message fail, because msgBytes is null."
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            return
        L4a:
            android.content.Context r2 = r0.a
            java.lang.String r2 = r2.getPackageName()
            android.content.Context r3 = r0.a
            int r4 = r1.length
            r5 = r10
            r6 = r11
            com.xiaomi.push.db.a(r2, r3, r10, r11, r4)
            android.content.Intent r2 = r9.a()
            java.lang.String r3 = "com.xiaomi.mipush.SEND_MESSAGE"
            r2.setAction(r3)
            java.lang.String r3 = "mipush_payload"
            r2.putExtra(r3, r1)
            java.lang.String r1 = "com.xiaomi.mipush.MESSAGE_CACHE"
            r3 = r15
            r2.putExtra(r1, r15)
            r9.c(r2)
        L6f:
            return
    }

    public final void a(java.lang.String r3, com.xiaomi.mipush.sdk.au r4, com.xiaomi.mipush.sdk.e r5) {
            r2 = this;
            android.content.Context r0 = r2.a
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)
            java.lang.String r1 = "syncing"
            r0.a(r4, r1)
            android.content.Context r0 = r2.a
            java.util.HashMap r5 = com.xiaomi.mipush.sdk.i.a(r0, r5)
            r0 = 0
            r2.a(r3, r4, r0, r5)
            return
    }

    public void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.content.Intent r0 = r3.a()
            java.lang.String r1 = "com.xiaomi.mipush.CLEAR_NOTIFICATION"
            r0.setAction(r1)
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            android.content.Context r2 = r3.a
            java.lang.String r2 = r2.getPackageName()
            r0.putExtra(r1, r2)
            java.lang.String r1 = com.xiaomi.push.service.bk.H
            r0.putExtra(r1, r4)
            java.lang.String r4 = com.xiaomi.push.service.bk.I
            r0.putExtra(r4, r5)
            r3.c(r0)
            return
    }

    public final void a(boolean r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public final void a(boolean r6, java.lang.String r7) {
            r5 = this;
            r0 = 0
            r1 = 1
            java.lang.String r2 = ""
            java.lang.String r3 = "syncing"
            if (r6 == 0) goto L21
            android.content.Context r6 = r5.a
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)
            com.xiaomi.mipush.sdk.au r4 = com.xiaomi.mipush.sdk.au.a
            r6.a(r4, r3)
            android.content.Context r6 = r5.a
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)
            com.xiaomi.mipush.sdk.au r3 = com.xiaomi.mipush.sdk.au.b
            r6.a(r3, r2)
            com.xiaomi.mipush.sdk.au r6 = com.xiaomi.mipush.sdk.au.a
            goto L39
        L21:
            android.content.Context r6 = r5.a
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)
            com.xiaomi.mipush.sdk.au r4 = com.xiaomi.mipush.sdk.au.b
            r6.a(r4, r3)
            android.content.Context r6 = r5.a
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)
            com.xiaomi.mipush.sdk.au r3 = com.xiaomi.mipush.sdk.au.a
            r6.a(r3, r2)
            com.xiaomi.mipush.sdk.au r6 = com.xiaomi.mipush.sdk.au.b
        L39:
            r5.a(r7, r6, r1, r0)
            return
    }

    public boolean a() {
            r2 = this;
            boolean r0 = r2.a
            r1 = 1
            if (r0 == 0) goto L12
            android.content.Context r0 = r2.a
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)
            int r0 = r0.a()
            if (r1 != r0) goto L12
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public boolean a(int r5) {
            r4 = this;
            android.content.Context r0 = r4.a
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)
            boolean r0 = r0.b()
            r1 = 0
            if (r0 != 0) goto Le
            return r1
        Le:
            r4.c(r5)
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            java.lang.String r2 = com.xiaomi.push.service.bd.a()
            r0.a(r2)
            android.content.Context r2 = r4.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r2 = r2.a()
            r0.b(r2)
            android.content.Context r2 = r4.a
            java.lang.String r2 = r2.getPackageName()
            r0.d(r2)
            com.xiaomi.push.ht r2 = com.xiaomi.push.ht.G
            java.lang.String r2 = r2.a
            r0.c(r2)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r0.a = r2
            java.util.Map<java.lang.String, java.lang.String> r2 = r0.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            java.lang.String r5 = ""
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            java.lang.String r3 = "boot_mode"
            r2.put(r3, r5)
            android.content.Context r5 = r4.a
            com.xiaomi.mipush.sdk.ao r5 = a(r5)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            r3 = 0
            r5.a(r0, r2, r1, r3)
            r5 = 1
            return r5
    }

    public final void b() {
            r2 = this;
            android.content.Intent r0 = r2.a()
            java.lang.String r1 = "com.xiaomi.mipush.DISABLE_PUSH"
            r0.setAction(r1)
            r2.c(r0)
            return
    }

    public void b(int r5) {
            r4 = this;
            android.content.Intent r0 = r4.a()
            java.lang.String r1 = "com.xiaomi.mipush.SET_NOTIFICATION_TYPE"
            r0.setAction(r1)
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            android.content.Context r2 = r4.a
            java.lang.String r2 = r2.getPackageName()
            r0.putExtra(r1, r2)
            java.lang.String r1 = com.xiaomi.push.service.bk.E
            r0.putExtra(r1, r5)
            java.lang.String r1 = com.xiaomi.push.service.bk.G
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r3 = r4.a
            java.lang.String r3 = r3.getPackageName()
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            java.lang.String r5 = com.xiaomi.push.bo.b(r5)
            r0.putExtra(r1, r5)
            r4.c(r0)
            return
    }

    public boolean b() {
            r5 = this;
            boolean r0 = r5.a()
            r1 = 1
            if (r0 == 0) goto L53
            boolean r0 = r5.e()
            if (r0 == 0) goto L53
            java.lang.Integer r0 = r5.a
            r2 = 0
            if (r0 != 0) goto L49
            android.content.Context r0 = r5.a
            com.xiaomi.push.service.bn r0 = com.xiaomi.push.service.bn.a(r0)
            int r0 = r0.a()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r5.a = r0
            int r0 = r0.intValue()
            if (r0 != 0) goto L49
            com.xiaomi.mipush.sdk.ar r0 = new com.xiaomi.mipush.sdk.ar
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r3.<init>(r4)
            r0.<init>(r5, r3)
            android.content.Context r3 = r5.a
            android.content.ContentResolver r3 = r3.getContentResolver()
            android.content.Context r4 = r5.a
            com.xiaomi.push.service.bn r4 = com.xiaomi.push.service.bn.a(r4)
            android.net.Uri r4 = r4.a()
            r3.registerContentObserver(r4, r2, r0)
        L49:
            java.lang.Integer r0 = r5.a
            int r0 = r0.intValue()
            if (r0 == 0) goto L52
            goto L53
        L52:
            r1 = r2
        L53:
            return r1
    }

    public void c() {
            r1 = this;
            android.content.Intent r0 = r1.a
            if (r0 == 0) goto La
            r1.c(r0)
            r0 = 0
            r1.a = r0
        La:
            return
    }

    public void d() {
            r11 = this;
            java.util.ArrayList<com.xiaomi.mipush.sdk.ao$a> r0 = com.xiaomi.mipush.sdk.ao.a
            monitor-enter(r0)
            java.lang.Thread r1 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L42
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L42
            java.lang.Thread r2 = r2.getThread()     // Catch: java.lang.Throwable -> L42
            if (r1 != r2) goto L13
            r1 = 1
            goto L14
        L13:
            r1 = 0
        L14:
            java.util.ArrayList<com.xiaomi.mipush.sdk.ao$a> r2 = com.xiaomi.mipush.sdk.ao.a     // Catch: java.lang.Throwable -> L42
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L42
        L1a:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L42
            if (r3 == 0) goto L3b
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L42
            com.xiaomi.mipush.sdk.ao$a r3 = (com.xiaomi.mipush.sdk.ao.a) r3     // Catch: java.lang.Throwable -> L42
            T extends com.xiaomi.push.iu<T, ?> r5 = r3.a     // Catch: java.lang.Throwable -> L42
            com.xiaomi.push.hj r6 = r3.a     // Catch: java.lang.Throwable -> L42
            boolean r7 = r3.a     // Catch: java.lang.Throwable -> L42
            r8 = 0
            r9 = 0
            r10 = 1
            r4 = r11
            r4.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L42
            if (r1 != 0) goto L1a
            r3 = 100
            java.lang.Thread.sleep(r3)     // Catch: java.lang.InterruptedException -> L1a java.lang.Throwable -> L42
            goto L1a
        L3b:
            java.util.ArrayList<com.xiaomi.mipush.sdk.ao$a> r1 = com.xiaomi.mipush.sdk.ao.a     // Catch: java.lang.Throwable -> L42
            r1.clear()     // Catch: java.lang.Throwable -> L42
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L42
            return
        L42:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L42
            throw r1
    }

    public void e() {
            r5 = this;
            android.content.Intent r0 = r5.a()
            java.lang.String r1 = "com.xiaomi.mipush.CLEAR_HEADSUPNOTIFICATION"
            r0.setAction(r1)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "android.app.ActivityThread"
            java.lang.String r3 = "currentApplication"
            java.lang.Object r1 = com.xiaomi.push.bk.a(r2, r3, r1)
            android.app.Application r1 = (android.app.Application) r1
            if (r1 == 0) goto L27
            android.content.Context r2 = r1.getApplicationContext()
            if (r2 == 0) goto L27
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r1 = r1.getPackageName()
            goto L28
        L27:
            r1 = 0
        L28:
            android.content.Context r2 = r5.a
            java.lang.String r2 = r2.getPackageName()
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L57
            boolean r3 = r1.equals(r2)
            if (r3 != 0) goto L57
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "application package name: "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = ", not equals context package name: "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            goto L58
        L57:
            r1 = r2
        L58:
            java.lang.String r2 = com.xiaomi.push.service.bk.B
            r0.putExtra(r2, r1)
            r5.c(r0)
            return
    }

    public void f() {
            r3 = this;
            android.content.Intent r0 = r3.a()
            java.lang.String r1 = "com.xiaomi.mipush.SET_NOTIFICATION_TYPE"
            r0.setAction(r1)
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            android.content.Context r2 = r3.a
            java.lang.String r2 = r2.getPackageName()
            r0.putExtra(r1, r2)
            java.lang.String r1 = com.xiaomi.push.service.bk.G
            android.content.Context r2 = r3.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r2 = com.xiaomi.push.bo.b(r2)
            r0.putExtra(r1, r2)
            r3.c(r0)
            return
    }
}
