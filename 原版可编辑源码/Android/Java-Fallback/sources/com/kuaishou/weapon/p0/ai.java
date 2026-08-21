package com.kuaishou.weapon.p0;

public class ai {
    private static final java.lang.String[] b = null;
    private android.content.Context a;

    static {
            java.lang.String r0 = "/data/local/"
            java.lang.String r1 = "/data/local/bin/"
            java.lang.String r2 = "/data/local/xbin/"
            java.lang.String r3 = "/sbin/"
            java.lang.String r4 = "/su/bin/"
            java.lang.String r5 = "/system/bin/"
            java.lang.String r6 = "/system/bin/.ext/"
            java.lang.String r7 = "/system/bin/failsafe/"
            java.lang.String r8 = "/system/sd/xbin/"
            java.lang.String r9 = "/system/usr/we-need-root/"
            java.lang.String r10 = "/system/xbin/"
            java.lang.String r11 = "/cache/"
            java.lang.String r12 = "/data/"
            java.lang.String r13 = "/dev/"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13}
            com.kuaishou.weapon.p0.ai.b = r0
            return
    }

    public ai(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private java.lang.String[] a(java.lang.String[] r7) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r7 = java.util.Arrays.asList(r7)
            r0.<init>(r7)
            r7 = 0
            java.lang.String r1 = "PATH"
            java.lang.String r1 = java.lang.System.getenv(r1)     // Catch: java.lang.Exception -> L55
            if (r1 == 0) goto L4c
            java.lang.String r2 = ""
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Exception -> L55
            if (r2 == 0) goto L1b
            goto L4c
        L1b:
            java.lang.String r2 = ":"
            java.lang.String[] r1 = r1.split(r2)     // Catch: java.lang.Exception -> L55
            int r2 = r1.length     // Catch: java.lang.Exception -> L55
            r3 = r7
        L23:
            if (r3 >= r2) goto L55
            r4 = r1[r3]     // Catch: java.lang.Exception -> L55
            java.lang.String r5 = "/"
            boolean r5 = r4.endsWith(r5)     // Catch: java.lang.Exception -> L55
            if (r5 != 0) goto L40
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r5.<init>()     // Catch: java.lang.Exception -> L55
            r5.append(r4)     // Catch: java.lang.Exception -> L55
            r4 = 47
            r5.append(r4)     // Catch: java.lang.Exception -> L55
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Exception -> L55
        L40:
            boolean r5 = r0.contains(r4)     // Catch: java.lang.Exception -> L55
            if (r5 != 0) goto L49
            r0.add(r4)     // Catch: java.lang.Exception -> L55
        L49:
            int r3 = r3 + 1
            goto L23
        L4c:
            java.lang.String[] r1 = new java.lang.String[r7]     // Catch: java.lang.Exception -> L55
            java.lang.Object[] r1 = r0.toArray(r1)     // Catch: java.lang.Exception -> L55
            java.lang.String[] r1 = (java.lang.String[]) r1     // Catch: java.lang.Exception -> L55
            return r1
        L55:
            java.lang.String[] r7 = new java.lang.String[r7]
            java.lang.Object[] r7 = r0.toArray(r7)
            java.lang.String[] r7 = (java.lang.String[]) r7
            return r7
    }

    public static boolean b() {
            java.lang.String r0 = "flyme"
            r1 = 0
            java.lang.String r2 = "ro.build.display.id"
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.a(r2)     // Catch: java.lang.Exception -> L22
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L10
            return r1
        L10:
            boolean r3 = r2.contains(r0)     // Catch: java.lang.Exception -> L22
            if (r3 != 0) goto L20
            java.lang.String r2 = r2.toLowerCase()     // Catch: java.lang.Exception -> L22
            boolean r0 = r2.contains(r0)     // Catch: java.lang.Exception -> L22
            if (r0 == 0) goto L22
        L20:
            r0 = 1
            return r0
        L22:
            return r1
    }

    public int a() {
            r8 = this;
            r0 = 0
            java.lang.String r1 = "su"
            java.lang.String[] r2 = com.kuaishou.weapon.p0.bh.z     // Catch: java.lang.Exception -> L24
            java.lang.String[] r2 = r8.a(r2)     // Catch: java.lang.Exception -> L24
            int r3 = r2.length     // Catch: java.lang.Exception -> L24
            r4 = r0
        Lb:
            r5 = 1
            if (r4 >= r3) goto L20
            r6 = r2[r4]     // Catch: java.lang.Exception -> L24
            java.io.File r7 = new java.io.File     // Catch: java.lang.Exception -> L24
            r7.<init>(r6, r1)     // Catch: java.lang.Exception -> L24
            boolean r6 = r7.exists()     // Catch: java.lang.Exception -> L24
            if (r6 == 0) goto L1d
            r1 = r5
            goto L21
        L1d:
            int r4 = r4 + 1
            goto Lb
        L20:
            r1 = r0
        L21:
            if (r1 == 0) goto L24
            return r5
        L24:
            return r0
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = ""
            com.kuaishou.weapon.p0.aa r1 = com.kuaishou.weapon.p0.aa.a()     // Catch: java.lang.Exception -> L11
            java.lang.String r3 = r1.b(r3)     // Catch: java.lang.Exception -> L11
            java.lang.String r1 = "\n"
            java.lang.String r3 = r3.replace(r1, r0)     // Catch: java.lang.Exception -> L11
            return r3
        L11:
            return r0
    }

    public java.lang.String c() {
            r4 = this;
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L1a
            r2 = 29
            if (r1 <= r2) goto L8
            return r0
        L8:
            com.kuaishou.weapon.p0.aa r1 = com.kuaishou.weapon.p0.aa.a()     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = "su -v"
            java.lang.String r1 = r1.b(r2)     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = "\n"
            java.lang.String r3 = ""
            java.lang.String r0 = r1.replace(r2, r3)     // Catch: java.lang.Exception -> L1a
        L1a:
            return r0
    }

    public int d() {
            r2 = this;
            com.kuaishou.weapon.p0.aa r0 = com.kuaishou.weapon.p0.aa.a()
            java.lang.String r1 = "ro.secure"
            java.lang.String r0 = r0.a(r1)
            if (r0 == 0) goto L16
            java.lang.String r1 = "0"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L16
            r0 = 0
            goto L17
        L16:
            r0 = 1
        L17:
            return r0
    }

    public int e() {
            r2 = this;
            com.kuaishou.weapon.p0.aa r0 = com.kuaishou.weapon.p0.aa.a()
            java.lang.String r1 = "ro.debuggable"
            java.lang.String r0 = r0.a(r1)
            if (r0 == 0) goto L16
            java.lang.String r1 = "0"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L16
            r0 = 0
            goto L17
        L16:
            r0 = 1
        L17:
            return r0
    }

    public int f() {
            r2 = this;
            com.kuaishou.weapon.p0.aa r0 = com.kuaishou.weapon.p0.aa.a()
            java.lang.String r1 = "ro.adb.secure"
            java.lang.String r0 = r0.a(r1)
            if (r0 == 0) goto L16
            java.lang.String r1 = "0"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L16
            r0 = 0
            goto L17
        L16:
            r0 = 1
        L17:
            return r0
    }

    public org.json.JSONObject g() {
            r7 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L75
            r0.<init>()     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = " which su "
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Exception -> L75
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r3 = "0"
            r4 = 1
            r5 = 0
            if (r2 != 0) goto L25
            int r2 = r1.length()     // Catch: java.lang.Exception -> L75
            r6 = 2
            if (r2 <= r6) goto L25
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L75
            java.lang.String r2 = "0-p"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L75
            goto L28
        L25:
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L75
        L28:
            java.lang.String r1 = " id "
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Exception -> L75
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            if (r2 != 0) goto L49
            java.lang.String r1 = r1.toLowerCase()     // Catch: java.lang.Exception -> L75
            java.lang.String r2 = "uid=0"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L75
            java.lang.String r2 = "1"
            if (r1 == 0) goto L46
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L75
            goto L49
        L46:
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L75
        L49:
            java.lang.String r1 = " busybox df "
            java.lang.String r1 = r7.a(r1)     // Catch: java.lang.Exception -> L75
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L75
            if (r2 != 0) goto L6e
            java.lang.String r2 = "not found"
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L75
            if (r2 != 0) goto L6e
            int r1 = r1.length()     // Catch: java.lang.Exception -> L75
            r2 = 30
            java.lang.String r3 = "2"
            if (r1 <= r2) goto L6b
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L75
            goto L6e
        L6b:
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L75
        L6e:
            int r1 = r0.length()     // Catch: java.lang.Exception -> L75
            if (r1 <= 0) goto L75
            return r0
        L75:
            r0 = 0
            return r0
    }

    public int h() {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/system/app/Superuser.apk"
            r0.<init>(r1)
            boolean r0 = r0.exists()
            if (r0 == 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public java.lang.String i() {
            r6 = this;
            java.lang.String[] r0 = com.kuaishou.weapon.p0.ai.b
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L28
            r3 = r0[r2]
            java.io.File r4 = new java.io.File
            java.lang.String r5 = "magisk"
            r4.<init>(r3, r5)
            boolean r4 = r4.exists()
            if (r4 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            return r0
        L25:
            int r2 = r2 + 1
            goto L4
        L28:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String j() {
            r6 = this;
            java.lang.String[] r0 = com.kuaishou.weapon.p0.ai.b
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L28
            r3 = r0[r2]
            java.io.File r4 = new java.io.File
            java.lang.String r5 = "su"
            r4.<init>(r3, r5)
            boolean r4 = r4.exists()
            if (r4 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            return r0
        L25:
            int r2 = r2 + 1
            goto L4
        L28:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String k() {
            r7 = this;
            java.lang.String r0 = ""
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Exception -> L8
            r1.<init>(r0)     // Catch: java.lang.Exception -> L8
            throw r1     // Catch: java.lang.Exception -> L8
        L8:
            r1 = move-exception
            java.lang.StackTraceElement[] r1 = r1.getStackTrace()
            int r2 = r1.length
            r3 = 0
        Lf:
            if (r3 >= r2) goto L4b
            r4 = r1[r3]
            java.lang.String r5 = r4.getClassName()
            java.lang.String r6 = "com.android.internal.os.ZygoteInit"
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L47
            java.lang.String r5 = r4.getMethodName()
            java.lang.String r6 = "invoked"
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L47
            java.lang.String r5 = r4.getMethodName()
            java.lang.String r6 = "main"
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L47
            java.lang.String r5 = r4.getMethodName()
            java.lang.String r6 = "handleHookedMethod"
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L44
            goto L47
        L44:
            int r3 = r3 + 1
            goto Lf
        L47:
            java.lang.String r0 = r4.getClassName()
        L4b:
            return r0
    }
}
