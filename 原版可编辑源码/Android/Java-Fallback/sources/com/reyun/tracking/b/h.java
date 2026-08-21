package com.reyun.tracking.b;

public class h {
    private boolean a;
    private long b;

    public h() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    private static java.lang.String a(java.lang.String r8) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = "get"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L2c
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L2c
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L2c
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2c
            r3[r6] = r8     // Catch: java.lang.Exception -> L2c
            java.lang.String r8 = "unknown"
            r3[r7] = r8     // Catch: java.lang.Exception -> L2c
            java.lang.Object r8 = r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L2c
            r0 = r8
        L2c:
            return r0
    }

    private void a(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "oaid_start"
            r1 = 0
            com.reyun.tracking.utils.c.a(r3, r0, r1)
            return
    }

    private void a(android.content.Context r3, java.lang.String r4, com.reyun.tracking.b.l r5) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.reyun.tracking.b.j r1 = new com.reyun.tracking.b.j
            r1.<init>(r2, r3, r5, r4)
            r0.<init>(r1)
            r0.start()
            return
    }

    private void a(android.content.Context r6, java.lang.String r7, java.lang.String r8) {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.b
            long r1 = r1 - r3
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "_oaid_interval_time"
            r0.put(r2, r1)
            java.lang.String r1 = "_oaid_code"
            r0.put(r1, r7)
            java.lang.String r7 = "_oaid_errmsg"
            r0.put(r7, r8)
            java.lang.String r7 = "oaid_end"
            com.reyun.tracking.utils.c.a(r6, r7, r0)
            return
    }

    private void a(android.content.Context r1, java.lang.String r2, boolean r3) {
            r0 = this;
            com.reyun.tracking.a.h.a(r1, r2, r3)
            return
    }

    static void a(com.reyun.tracking.b.h r0, android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.reyun.tracking.b.h r0, android.content.Context r1, java.lang.String r2, boolean r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.reyun.tracking.b.h r0, com.reyun.tracking.b.l r1, java.lang.String r2, boolean r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.reyun.tracking.b.l r2, java.lang.String r3, boolean r4) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Lc
            r0 = 1
            r1.a = r0
            if (r2 == 0) goto Lc
            r2.a(r3, r4)
        Lc:
            return
    }

    public static boolean a() {
            java.lang.String r0 = "ro.build.freeme.label"
            java.lang.String r0 = a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            java.lang.String r1 = "FREEMEOS"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    static boolean a(com.reyun.tracking.b.h r0) {
            boolean r0 = r0.a
            return r0
    }

    public static boolean b() {
            java.lang.String r0 = "ro.ssui.product"
            java.lang.String r0 = a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            java.lang.String r1 = "unknown"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    public void a(android.content.Context r21, com.reyun.tracking.b.l r22) {
            r20 = this;
            r1 = r20
            r2 = r21
            r3 = r22
            java.lang.String r0 = ""
            java.lang.String r4 = "unknown"
            java.lang.String r5 = "TrackingIO"
            r6 = 0
            java.lang.String r7 = "tracking_device_id_cache"
            java.lang.String r8 = "oaid"
            java.lang.String r7 = com.reyun.tracking.utils.f.a(r2, r7, r8, r0)     // Catch: java.lang.Throwable -> L15a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r8.<init>()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = "spOaid :"
            r8.append(r9)     // Catch: java.lang.Throwable -> L15a
            r8.append(r7)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L15a
            com.reyun.tracking.a.a.d(r5, r8)     // Catch: java.lang.Throwable -> L15a
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L15a
            if (r8 != 0) goto L51
            boolean r8 = r4.equals(r7)     // Catch: java.lang.Throwable -> L15a
            if (r8 != 0) goto L51
            java.lang.String r8 = "^[0]+-[0]+-[0]+-[0]+-[0]+$"
            boolean r8 = java.util.regex.Pattern.matches(r8, r7)     // Catch: java.lang.Throwable -> L15a
            if (r8 != 0) goto L51
            java.lang.String r8 = "^[0]+$"
            boolean r8 = java.util.regex.Pattern.matches(r8, r7)     // Catch: java.lang.Throwable -> L15a
            if (r8 != 0) goto L51
            java.lang.String r0 = "sp有oaid"
            com.reyun.tracking.a.a.d(r5, r0)     // Catch: java.lang.Throwable -> L15a
            r1.a(r2, r7, r6)     // Catch: java.lang.Throwable -> L15a
            r1.a(r3, r7, r6)     // Catch: java.lang.Throwable -> L15a
            return
        L51:
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L15a
            r1.b = r7     // Catch: java.lang.Throwable -> L15a
            r20.a(r21)     // Catch: java.lang.Throwable -> L15a
            com.reyun.tracking.b.m r7 = new com.reyun.tracking.b.m     // Catch: java.lang.Throwable -> L15a
            r7.<init>(r2)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r7 = r7.b     // Catch: java.lang.Throwable -> L15a
            com.reyun.tracking.sdk.a r8 = com.reyun.tracking.sdk.a.a()     // Catch: java.lang.Throwable -> L15a
            com.reyun.tracking.b.i r9 = new com.reyun.tracking.b.i     // Catch: java.lang.Throwable -> L15a
            r9.<init>(r1, r3)     // Catch: java.lang.Throwable -> L15a
            r10 = 5000(0x1388, double:2.4703E-320)
            r8.a(r9, r10)     // Catch: java.lang.Throwable -> L15a
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L15a
            if (r8 != 0) goto L95
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r8.<init>()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = "oaid realTime:"
            r8.append(r9)     // Catch: java.lang.Throwable -> L15a
            r8.append(r7)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L15a
            com.reyun.tracking.a.a.d(r5, r8)     // Catch: java.lang.Throwable -> L15a
            r1.a(r2, r7, r6)     // Catch: java.lang.Throwable -> L15a
            r1.a(r3, r7, r6)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r7 = "100001"
            r1.a(r2, r7, r0)     // Catch: java.lang.Throwable -> L15a
            return
        L95:
            java.lang.String r7 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> L15a
            boolean r8 = a()     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto La0
            java.lang.String r7 = "FERRMEOS"
            goto La8
        La0:
            boolean r8 = b()     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto La8
            java.lang.String r7 = "SSUI"
        La8:
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L15a
            if (r8 != 0) goto L14d
            java.lang.String r7 = r7.toUpperCase()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r8 = "ASUS"
            java.lang.String r9 = "HUAWEI"
            java.lang.String r10 = "HONOR"
            java.lang.String r11 = "OPPO"
            java.lang.String r12 = "ONEPLUS"
            java.lang.String r13 = "ZTE"
            java.lang.String r14 = "FERRMEOS"
            java.lang.String r15 = "SSUI"
            java.lang.String r16 = "SAMSUNG"
            java.lang.String r17 = "MEIZU"
            java.lang.String r18 = "MOTOLORA"
            java.lang.String r19 = "LENOVO"
            java.lang.String[] r8 = new java.lang.String[]{r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19}     // Catch: java.lang.Throwable -> L15a
            java.util.List r8 = java.util.Arrays.asList(r8)     // Catch: java.lang.Throwable -> L15a
            boolean r8 = r8.contains(r7)     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto Ldd
            r1.a(r2, r7, r3)     // Catch: java.lang.Throwable -> L15a
            goto L16b
        Ldd:
            java.lang.String r8 = "VIVO"
            boolean r8 = r8.equals(r7)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = "100002"
            if (r8 == 0) goto L10e
            com.reyun.tracking.b.a.m r7 = new com.reyun.tracking.b.a.m     // Catch: java.lang.Throwable -> L15a
            r7.<init>(r2)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r7 = r7.a()     // Catch: java.lang.Throwable -> L15a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r8.<init>()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r10 = "oaid vivo:"
            r8.append(r10)     // Catch: java.lang.Throwable -> L15a
            r8.append(r7)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L15a
            com.reyun.tracking.a.a.d(r5, r8)     // Catch: java.lang.Throwable -> L15a
            r1.a(r2, r7, r6)     // Catch: java.lang.Throwable -> L15a
            r1.a(r3, r7, r6)     // Catch: java.lang.Throwable -> L15a
        L10a:
            r1.a(r2, r9, r0)     // Catch: java.lang.Throwable -> L15a
            goto L16b
        L10e:
            java.lang.String r8 = "NUBIA"
            boolean r7 = r8.equals(r7)     // Catch: java.lang.Throwable -> L15a
            if (r7 == 0) goto L13a
            com.reyun.tracking.b.a.f r7 = new com.reyun.tracking.b.a.f     // Catch: java.lang.Throwable -> L15a
            r7.<init>(r2)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r7 = r7.a()     // Catch: java.lang.Throwable -> L15a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r8.<init>()     // Catch: java.lang.Throwable -> L15a
            java.lang.String r10 = "oaid NUBIA:"
            r8.append(r10)     // Catch: java.lang.Throwable -> L15a
            r8.append(r7)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L15a
            com.reyun.tracking.a.a.d(r5, r8)     // Catch: java.lang.Throwable -> L15a
            r1.a(r2, r7, r6)     // Catch: java.lang.Throwable -> L15a
            r1.a(r3, r7, r6)     // Catch: java.lang.Throwable -> L15a
            goto L10a
        L13a:
            java.lang.String r0 = "oaid error:unknown manufacturer"
            com.reyun.tracking.a.a.d(r5, r0)     // Catch: java.lang.Throwable -> L15a
            r1.a(r2, r4, r6)     // Catch: java.lang.Throwable -> L15a
            r1.a(r3, r4, r6)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r0 = "100006"
            java.lang.String r7 = "unknown manufacturer"
        L149:
            r1.a(r2, r0, r7)     // Catch: java.lang.Throwable -> L15a
            goto L16b
        L14d:
            java.lang.String r0 = "oaid error:manufacturer is empty"
            com.reyun.tracking.a.a.d(r5, r0)     // Catch: java.lang.Throwable -> L15a
            r1.a(r3, r4, r6)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r0 = "100007"
            java.lang.String r7 = "manufacturer is empty"
            goto L149
        L15a:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "oaid error:unknown"
            com.reyun.tracking.a.a.d(r5, r0)
            r1.a(r3, r4, r6)
            java.lang.String r0 = "100004"
            r1.a(r2, r0, r4)
        L16b:
            return
    }
}
