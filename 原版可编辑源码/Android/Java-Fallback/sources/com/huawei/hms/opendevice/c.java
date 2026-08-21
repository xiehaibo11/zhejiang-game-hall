package com.huawei.hms.opendevice;

public abstract class c {
    public static final java.lang.String a = "c";
    public static com.huawei.secure.android.common.encrypt.utils.RootKeyUtil b;
    public static java.util.Map<java.lang.String, java.lang.String> c;
    public static final java.lang.Object d = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.hms.opendevice.c.c = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.opendevice.c.d = r0
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = "2A57086C86EF54970C1E6EB37BFC72B1"
            return r0
    }

    public static java.lang.String a(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.huawei.hms.opendevice.c.c
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L10
            java.lang.String r1 = ""
        L10:
            return r1
    }

    public static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5) throws java.io.IOException {
            java.lang.String r0 = com.huawei.hms.opendevice.c.a
            java.lang.String r1 = "save local secret key."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L38
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L38
            com.huawei.hms.opendevice.s.a(r1)     // Catch: java.lang.Throwable -> L38
            java.io.OutputStreamWriter r5 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> L38
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L38
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = "UTF-8"
            r5.<init>(r2, r1)     // Catch: java.lang.Throwable -> L38
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L36
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L36
            r1.write(r4)     // Catch: java.lang.Throwable -> L33
            r1.flush()     // Catch: java.lang.Throwable -> L33
            java.util.Map<java.lang.String, java.lang.String> r0 = com.huawei.hms.opendevice.c.c     // Catch: java.lang.Throwable -> L33
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L33
            com.huawei.hms.utils.IOUtils.closeQuietly(r5)
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
            return
        L33:
            r3 = move-exception
            r0 = r1
            goto L3a
        L36:
            r3 = move-exception
            goto L3a
        L38:
            r3 = move-exception
            r5 = r0
        L3a:
            com.huawei.hms.utils.IOUtils.closeQuietly(r5)
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            throw r3
    }

    public static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, android.content.Context r8) {
            android.content.Context r8 = r8.getApplicationContext()
            java.lang.String r8 = com.huawei.hms.opendevice.p.a(r8)
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L84
            java.lang.String r0 = "m"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L7d
            r1.<init>()     // Catch: java.io.IOException -> L7d
            r1.append(r8)     // Catch: java.io.IOException -> L7d
            java.lang.String r2 = "/files/math/m"
            r1.append(r2)     // Catch: java.io.IOException -> L7d
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L7d
            a(r0, r3, r1)     // Catch: java.io.IOException -> L7d
            java.lang.String r3 = "p"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L7d
            r0.<init>()     // Catch: java.io.IOException -> L7d
            r0.append(r8)     // Catch: java.io.IOException -> L7d
            java.lang.String r1 = "/files/panda/p"
            r0.append(r1)     // Catch: java.io.IOException -> L7d
            java.lang.String r0 = r0.toString()     // Catch: java.io.IOException -> L7d
            a(r3, r4, r0)     // Catch: java.io.IOException -> L7d
            java.lang.String r3 = "d"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L7d
            r4.<init>()     // Catch: java.io.IOException -> L7d
            r4.append(r8)     // Catch: java.io.IOException -> L7d
            java.lang.String r0 = "/files/panda/d"
            r4.append(r0)     // Catch: java.io.IOException -> L7d
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> L7d
            a(r3, r5, r4)     // Catch: java.io.IOException -> L7d
            java.lang.String r3 = "t"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L7d
            r4.<init>()     // Catch: java.io.IOException -> L7d
            r4.append(r8)     // Catch: java.io.IOException -> L7d
            java.lang.String r5 = "/files/math/t"
            r4.append(r5)     // Catch: java.io.IOException -> L7d
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> L7d
            a(r3, r6, r4)     // Catch: java.io.IOException -> L7d
            java.lang.String r3 = "s"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L7d
            r4.<init>()     // Catch: java.io.IOException -> L7d
            r4.append(r8)     // Catch: java.io.IOException -> L7d
            java.lang.String r5 = "/files/s"
            r4.append(r5)     // Catch: java.io.IOException -> L7d
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> L7d
            a(r3, r7, r4)     // Catch: java.io.IOException -> L7d
            goto L84
        L7d:
            java.lang.String r3 = com.huawei.hms.opendevice.c.a
            java.lang.String r4 = "save key IOException."
            com.huawei.hms.support.log.HMSLog.e(r3, r4)
        L84:
            return
    }

    public static byte[] a(android.content.Context r2) {
            int r0 = com.huawei.android.hms.openid.R.string.push_cat_head
            java.lang.String r0 = r2.getString(r0)
            byte[] r0 = com.huawei.hms.opendevice.a.a(r0)
            int r1 = com.huawei.android.hms.openid.R.string.push_cat_body
            java.lang.String r2 = r2.getString(r1)
            byte[] r2 = com.huawei.hms.opendevice.a.a(r2)
            java.lang.String r1 = a()
            byte[] r1 = com.huawei.hms.opendevice.a.a(r1)
            byte[] r2 = a(r0, r2)
            byte[] r2 = a(r2, r1)
            byte[] r2 = a(r2)
            return r2
    }

    public static byte[] a(byte[] r2) {
            r0 = 0
            if (r2 == 0) goto L15
            int r1 = r2.length
            if (r1 != 0) goto L7
            goto L15
        L7:
            int r1 = r2.length
            if (r0 >= r1) goto L14
            r1 = r2[r0]
            int r1 = r1 >> 2
            byte r1 = (byte) r1
            r2[r0] = r1
            int r0 = r0 + 1
            goto L7
        L14:
            return r2
        L15:
            byte[] r2 = new byte[r0]
            return r2
    }

    public static byte[] a(byte[] r5, byte[] r6) {
            r0 = 0
            if (r5 == 0) goto L23
            if (r6 == 0) goto L23
            int r1 = r5.length
            if (r1 == 0) goto L23
            int r1 = r6.length
            if (r1 != 0) goto Lc
            goto L23
        Lc:
            int r1 = r5.length
            int r2 = r6.length
            if (r1 == r2) goto L13
            byte[] r5 = new byte[r0]
            return r5
        L13:
            byte[] r2 = new byte[r1]
        L15:
            if (r0 >= r1) goto L22
            r3 = r5[r0]
            r4 = r6[r0]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r2[r0] = r3
            int r0 = r0 + 1
            goto L15
        L22:
            return r2
        L23:
            byte[] r5 = new byte[r0]
            return r5
    }

    public static com.huawei.secure.android.common.encrypt.utils.RootKeyUtil b(android.content.Context r3) {
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r0 = com.huawei.hms.opendevice.c.b
            if (r0 != 0) goto L2b
            boolean r0 = g()
            if (r0 == 0) goto L21
            java.lang.String r3 = c()
            java.lang.String r0 = d()
            java.lang.String r1 = b()
            java.lang.String r2 = f()
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r3 = com.huawei.secure.android.common.encrypt.utils.RootKeyUtil.newInstance(r3, r0, r1, r2)
            com.huawei.hms.opendevice.c.b = r3
            goto L2b
        L21:
            java.lang.String r0 = com.huawei.hms.opendevice.c.a
            java.lang.String r1 = "root key util is null, init root key."
            com.huawei.hms.support.log.HMSLog.w(r0, r1)
            d(r3)
        L2b:
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r3 = com.huawei.hms.opendevice.c.b
            return r3
    }

    public static java.lang.String b() {
            java.lang.String r0 = "d"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = "m"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static java.lang.String c(android.content.Context r2) {
            boolean r0 = g()
            if (r0 != 0) goto L10
            java.lang.String r0 = com.huawei.hms.opendevice.c.a
            java.lang.String r1 = "work key is empty, execute init."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            d(r2)
        L10:
            java.lang.String r0 = e()
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r2 = b(r2)
            java.lang.String r2 = com.huawei.secure.android.common.encrypt.utils.WorkKeyCryptUtil.decryptWorkKey(r0, r2)
            return r2
    }

    public static java.lang.String d() {
            java.lang.String r0 = "p"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static void d(android.content.Context r12) {
            java.lang.Object r0 = com.huawei.hms.opendevice.c.d
            monitor-enter(r0)
            android.content.Context r1 = r12.getApplicationContext()     // Catch: java.lang.Throwable -> L8a
            e(r1)     // Catch: java.lang.Throwable -> L8a
            boolean r1 = g()     // Catch: java.lang.Throwable -> L8a
            if (r1 == 0) goto L19
            java.lang.String r12 = com.huawei.hms.opendevice.c.a     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = "The local secret is already in separate file mode."
            com.huawei.hms.support.log.HMSLog.i(r12, r1)     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8a
            return
        L19:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L8a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            r2.<init>()     // Catch: java.lang.Throwable -> L8a
            android.content.Context r3 = r12.getApplicationContext()     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = com.huawei.hms.opendevice.p.a(r3)     // Catch: java.lang.Throwable -> L8a
            r2.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = "/shared_prefs/LocalAvengers.xml"
            r2.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L8a
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L8a
            if (r2 == 0) goto L47
            com.huawei.secure.android.common.util.IOUtil.deleteSecure(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = com.huawei.hms.opendevice.c.a     // Catch: java.lang.Throwable -> L8a
            java.lang.String r2 = "destroy C, delete file LocalAvengers.xml."
            com.huawei.hms.support.log.HMSLog.i(r1, r2)     // Catch: java.lang.Throwable -> L8a
        L47:
            r1 = 32
            byte[] r2 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r1)     // Catch: java.lang.Throwable -> L8a
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r1)     // Catch: java.lang.Throwable -> L8a
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r1)     // Catch: java.lang.Throwable -> L8a
            byte[] r5 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r6 = com.huawei.hms.opendevice.a.a(r2)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r7 = com.huawei.hms.opendevice.a.a(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r8 = com.huawei.hms.opendevice.a.a(r4)     // Catch: java.lang.Throwable -> L8a
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r2 = com.huawei.secure.android.common.encrypt.utils.RootKeyUtil.newInstance(r6, r7, r8, r5)     // Catch: java.lang.Throwable -> L8a
            com.huawei.hms.opendevice.c.b = r2     // Catch: java.lang.Throwable -> L8a
            byte[] r1 = com.huawei.secure.android.common.encrypt.utils.EncryptUtil.generateSecureRandom(r1)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = com.huawei.hms.opendevice.a.a(r1)     // Catch: java.lang.Throwable -> L8a
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r2 = com.huawei.hms.opendevice.c.b     // Catch: java.lang.Throwable -> L8a
            java.lang.String r10 = com.huawei.secure.android.common.encrypt.utils.WorkKeyCryptUtil.encryptWorkKey(r1, r2)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r9 = com.huawei.hms.opendevice.a.a(r5)     // Catch: java.lang.Throwable -> L8a
            r11 = r12
            a(r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r12 = com.huawei.hms.opendevice.c.a     // Catch: java.lang.Throwable -> L8a
            java.lang.String r1 = "generate D."
            com.huawei.hms.support.log.HMSLog.i(r12, r1)     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8a
            return
        L8a:
            r12 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8a
            throw r12
    }

    public static java.lang.String e() {
            java.lang.String r0 = "s"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static void e(android.content.Context r6) {
            boolean r0 = g()
            if (r0 == 0) goto Le
            java.lang.String r6 = com.huawei.hms.opendevice.c.a
            java.lang.String r0 = "secretKeyCache not empty."
            com.huawei.hms.support.log.HMSLog.i(r6, r0)
            return
        Le:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.huawei.hms.opendevice.c.c
            r0.clear()
            java.lang.String r6 = com.huawei.hms.opendevice.p.a(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto Lc1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            java.lang.String r1 = "/files/math/m"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.huawei.hms.opendevice.s.a(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r2 = "/files/panda/p"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.huawei.hms.opendevice.s.a(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            java.lang.String r3 = "/files/panda/d"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.huawei.hms.opendevice.s.a(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r4 = "/files/math/t"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r3 = com.huawei.hms.opendevice.s.a(r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            java.lang.String r6 = "/files/s"
            r4.append(r6)
            java.lang.String r6 = r4.toString()
            java.lang.String r6 = com.huawei.hms.opendevice.s.a(r6)
            r4 = 5
            java.lang.String[] r4 = new java.lang.String[r4]
            r5 = 0
            r4[r5] = r0
            r5 = 1
            r4[r5] = r1
            r5 = 2
            r4[r5] = r2
            r5 = 3
            r4[r5] = r3
            r5 = 4
            r4[r5] = r6
            boolean r4 = com.huawei.hms.opendevice.t.a(r4)
            if (r4 == 0) goto Lc1
            java.util.Map<java.lang.String, java.lang.String> r4 = com.huawei.hms.opendevice.c.c
            java.lang.String r5 = "m"
            r4.put(r5, r0)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.huawei.hms.opendevice.c.c
            java.lang.String r4 = "p"
            r0.put(r4, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.huawei.hms.opendevice.c.c
            java.lang.String r1 = "d"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.huawei.hms.opendevice.c.c
            java.lang.String r1 = "t"
            r0.put(r1, r3)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.huawei.hms.opendevice.c.c
            java.lang.String r1 = "s"
            r0.put(r1, r6)
        Lc1:
            return
    }

    public static java.lang.String f() {
            java.lang.String r0 = "t"
            java.lang.String r0 = a(r0)
            return r0
    }

    public static boolean g() {
            java.lang.String r0 = e()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }
}
