package com.kuaishou.weapon.p0;

public class e {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 3;
    public static final int e = -1;
    public static int f = -1;
    static java.lang.ThreadLocal<java.lang.StringBuilder> g;
    private static int h;

    static {
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            com.kuaishou.weapon.p0.e.g = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.Throwable r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            r1 = r3
        L6:
            if (r1 == 0) goto L12
            boolean r2 = r1 instanceof java.net.UnknownHostException
            if (r2 == 0) goto Ld
            return r0
        Ld:
            java.lang.Throwable r1 = r1.getCause()
            goto L6
        L12:
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r3.printStackTrace(r1)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static void a(int r8, java.lang.String r9) {
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.Throwable r0 = new java.lang.Throwable
            r0.<init>()
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            int r1 = r0.length
            r2 = 3
            r3 = 1
            r4 = 2
            if (r1 >= r2) goto L2f
            if (r8 == 0) goto L29
            if (r8 == r3) goto L23
            if (r8 == r4) goto L1d
            goto L22
        L1d:
            java.lang.String r8 = "WeaponSDK"
            android.util.Log.e(r8, r9)
        L22:
            return
        L23:
            java.lang.String r8 = "WeaponSDK"
            android.util.Log.d(r8, r9)
            return
        L29:
            java.lang.String r8 = "WeaponSDK"
            android.util.Log.i(r8, r9)
            return
        L2f:
            r1 = r0[r4]
            java.lang.String r1 = r1.getFileName()
            r2 = r0[r4]
            int r2 = r2.getLineNumber()
            r0 = r0[r4]
            java.lang.String r0 = r0.getMethodName()
            int r5 = r1.length()
            r6 = 0
            r7 = 5
            if (r5 <= r7) goto L52
            int r5 = r1.length()
            int r5 = r5 - r7
            java.lang.String r1 = r1.substring(r6, r5)
        L52:
            java.lang.ThreadLocal<java.lang.StringBuilder> r5 = com.kuaishou.weapon.p0.e.g
            java.lang.Object r5 = r5.get()
            java.lang.StringBuilder r5 = (java.lang.StringBuilder) r5
            if (r5 != 0) goto L66
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.ThreadLocal<java.lang.StringBuilder> r7 = com.kuaishou.weapon.p0.e.g
            r7.set(r5)
        L66:
            monitor-enter(r5)
            r5.setLength(r6)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r6 = "["
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7
            int r6 = com.kuaishou.weapon.p0.e.h     // Catch: java.lang.Throwable -> Lb7
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r6 = "]["
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7
            r5.append(r1)     // Catch: java.lang.Throwable -> Lb7
            r1 = 58
            r5.append(r1)     // Catch: java.lang.Throwable -> Lb7
            r5.append(r2)     // Catch: java.lang.Throwable -> Lb7
            r1 = 46
            r5.append(r1)     // Catch: java.lang.Throwable -> Lb7
            r5.append(r0)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r0 = "] "
            r5.append(r0)     // Catch: java.lang.Throwable -> Lb7
            r5.append(r9)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Throwable -> Lb7
            int r0 = com.kuaishou.weapon.p0.e.h     // Catch: java.lang.Throwable -> Lb7
            int r0 = r0 + r3
            com.kuaishou.weapon.p0.e.h = r0     // Catch: java.lang.Throwable -> Lb7
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Lb7
            if (r8 == 0) goto Lb1
            if (r8 == r3) goto Lab
            if (r8 == r4) goto La5
            goto Laa
        La5:
            java.lang.String r8 = "WeaponSDK"
            android.util.Log.e(r8, r9)
        Laa:
            return
        Lab:
            java.lang.String r8 = "WeaponSDK"
            android.util.Log.d(r8, r9)
            return
        Lb1:
            java.lang.String r8 = "WeaponSDK"
            android.util.Log.i(r8, r9)
            return
        Lb7:
            r8 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Lb7
            throw r8
    }

    public static void a(java.lang.String r2) {
            int r0 = com.kuaishou.weapon.p0.e.f
            r1 = -1
            if (r0 == r1) goto L8
            if (r0 == 0) goto L8
            goto Lc
        L8:
            r0 = 0
            a(r0, r2)
        Lc:
            return
    }

    public static void a(java.lang.String r2, java.lang.Throwable r3) {
            int r0 = com.kuaishou.weapon.p0.e.f
            r1 = -1
            if (r0 == r1) goto L8
            if (r0 == 0) goto L8
            goto L24
        L8:
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = "\n"
            r1.append(r2)
            java.lang.String r2 = a(r3)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            a(r0, r2)
        L24:
            return
    }

    public static void b(java.lang.String r3) {
            int r0 = com.kuaishou.weapon.p0.e.f
            r1 = -1
            r2 = 1
            if (r0 == r1) goto Lb
            if (r0 == 0) goto Lb
            if (r0 == r2) goto Lb
            goto Le
        Lb:
            a(r2, r3)
        Le:
            return
    }

    public static void b(java.lang.String r3, java.lang.Throwable r4) {
            int r0 = com.kuaishou.weapon.p0.e.f
            r1 = -1
            r2 = 1
            if (r0 == r1) goto Lb
            if (r0 == 0) goto Lb
            if (r0 == r2) goto Lb
            goto L26
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "\n"
            r0.append(r3)
            java.lang.String r3 = a(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            a(r2, r3)
        L26:
            return
    }

    public static void c(java.lang.String r3) {
            int r0 = com.kuaishou.weapon.p0.e.f
            r1 = -1
            r2 = 2
            if (r0 == r1) goto Le
            if (r0 == 0) goto Le
            r1 = 1
            if (r0 == r1) goto Le
            if (r0 == r2) goto Le
            goto L11
        Le:
            a(r2, r3)
        L11:
            return
    }

    public static void c(java.lang.String r3, java.lang.Throwable r4) {
            int r0 = com.kuaishou.weapon.p0.e.f
            r1 = -1
            r2 = 2
            if (r0 == r1) goto Le
            if (r0 == 0) goto Le
            r1 = 1
            if (r0 == r1) goto Le
            if (r0 == r2) goto Le
            goto L29
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "\n"
            r0.append(r3)
            java.lang.String r3 = a(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            a(r2, r3)
        L29:
            return
    }

    public static void d(java.lang.String r0) {
            return
    }
}
