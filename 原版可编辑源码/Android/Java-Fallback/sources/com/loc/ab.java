package com.loc;

public final class ab {
    public static java.lang.String a() {
            java.lang.String r0 = ""
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L18
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L18
            java.lang.String r3 = "/proc/sys/kernel/random/boot_id"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = r1.readLine()     // Catch: java.lang.Throwable -> L18
            if (r2 == 0) goto L15
            r0 = r2
        L15:
            r1.close()     // Catch: java.lang.Throwable -> L18
        L18:
            return r0
    }

    public static java.lang.String a(android.content.Context r2) {
            java.lang.String r0 = com.loc.y.a(r2)     // Catch: java.lang.Throwable -> L16
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L18
            java.util.UUID r1 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L18
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L18
            com.loc.y.a(r2, r0)     // Catch: java.lang.Throwable -> L18
            goto L18
        L16:
            java.lang.String r0 = ""
        L18:
            return r0
    }

    private static java.util.Date a(java.lang.String r2) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)
            java.util.Date r2 = r0.parse(r2)     // Catch: java.lang.Throwable -> Lc
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    public static byte[] a(byte[] r3, byte[] r4) {
            if (r3 == 0) goto L20
            int r0 = r3.length
            if (r0 == 0) goto L20
            if (r4 == 0) goto L20
            int r0 = r4.length
            if (r0 != 0) goto Lb
            goto L20
        Lb:
            r0 = 0
        Lc:
            int r1 = r3.length
            if (r0 >= r1) goto L20
            r1 = r3[r0]
            int r2 = r4.length
            int r2 = r0 % r2
            r2 = r4[r2]
            r1 = r1 ^ r2
            r2 = r0 & 255(0xff, float:3.57E-43)
            r1 = r1 ^ r2
            byte r1 = (byte) r1
            r3[r0] = r1
            int r0 = r0 + 1
            goto Lc
        L20:
            return r3
    }

    public static java.lang.String b() {
            java.lang.String r0 = ""
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "stat -c %z /data/app"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L74
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L74
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L74
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L74
            if (r1 == 0) goto L71
            java.lang.String r3 = "\\."
            java.lang.String[] r1 = r1.split(r3)     // Catch: java.lang.Throwable -> L74
            r3 = 0
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.util.Date r4 = a(r4)     // Catch: java.lang.Throwable -> L74
            r5 = 1
            r6 = r1[r5]     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L41
            r1 = r1[r5]     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "\\+"
            java.lang.String[] r1 = r1.split(r5)     // Catch: java.lang.Throwable -> L74
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L74
            goto L42
        L41:
            r1 = r0
        L42:
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L74
            r5 = 1000(0x3e8, double:4.94E-321)
            if (r3 != 0) goto L68
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r3.<init>()     // Catch: java.lang.Throwable -> L74
            long r7 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r7 = r7 / r5
            r3.append(r7)     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = "."
            r3.append(r4)     // Catch: java.lang.Throwable -> L74
            int r1 = c(r1)     // Catch: java.lang.Throwable -> L74
            r3.append(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L74
            goto L71
        L68:
            long r3 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r3 = r3 / r5
            java.lang.String r0 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L74
        L71:
            r2.close()     // Catch: java.lang.Throwable -> L74
        L74:
            return r0
    }

    private static java.lang.String b(java.lang.String r3) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Throwable -> L2d
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L2d
            r0.update(r3)     // Catch: java.lang.Throwable -> L2d
            byte[] r3 = r0.digest()     // Catch: java.lang.Throwable -> L2d
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            r1 = 0
        L17:
            int r2 = r3.length     // Catch: java.lang.Throwable -> L2d
            if (r1 >= r2) goto L28
            r2 = r3[r1]     // Catch: java.lang.Throwable -> L2d
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)     // Catch: java.lang.Throwable -> L2d
            r0.append(r2)     // Catch: java.lang.Throwable -> L2d
            int r1 = r1 + 1
            goto L17
        L28:
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L2d
            return r3
        L2d:
            java.lang.String r3 = ""
            return r3
    }

    private static int c(java.lang.String r2) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc
            if (r1 != 0) goto Lc
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> Lc
            r0 = r2
        Lc:
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = ""
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "stat -c %z /data/"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L74
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L74
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L74
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L74
            if (r1 == 0) goto L71
            java.lang.String r3 = "\\."
            java.lang.String[] r1 = r1.split(r3)     // Catch: java.lang.Throwable -> L74
            r3 = 0
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.util.Date r4 = a(r4)     // Catch: java.lang.Throwable -> L74
            r5 = 1
            r6 = r1[r5]     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L41
            r1 = r1[r5]     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "\\+"
            java.lang.String[] r1 = r1.split(r5)     // Catch: java.lang.Throwable -> L74
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L74
            goto L42
        L41:
            r1 = r0
        L42:
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L74
            r5 = 1000(0x3e8, double:4.94E-321)
            if (r3 != 0) goto L68
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r3.<init>()     // Catch: java.lang.Throwable -> L74
            long r7 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r7 = r7 / r5
            r3.append(r7)     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = "."
            r3.append(r4)     // Catch: java.lang.Throwable -> L74
            int r1 = c(r1)     // Catch: java.lang.Throwable -> L74
            r3.append(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L74
            goto L71
        L68:
            long r3 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r3 = r3 / r5
            java.lang.String r0 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L74
        L71:
            r2.close()     // Catch: java.lang.Throwable -> L74
        L74:
            return r0
    }

    public static java.lang.String d() {
            java.lang.String r0 = ""
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "stat -c %x /data/data"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L74
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L74
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L74
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L74
            if (r1 == 0) goto L71
            java.lang.String r3 = "\\."
            java.lang.String[] r1 = r1.split(r3)     // Catch: java.lang.Throwable -> L74
            r3 = 0
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.util.Date r4 = a(r4)     // Catch: java.lang.Throwable -> L74
            r5 = 1
            r6 = r1[r5]     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L41
            r1 = r1[r5]     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "\\+"
            java.lang.String[] r1 = r1.split(r5)     // Catch: java.lang.Throwable -> L74
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L74
            goto L42
        L41:
            r1 = r0
        L42:
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L74
            r5 = 1000(0x3e8, double:4.94E-321)
            if (r3 != 0) goto L68
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r3.<init>()     // Catch: java.lang.Throwable -> L74
            long r7 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r7 = r7 / r5
            r3.append(r7)     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = "."
            r3.append(r4)     // Catch: java.lang.Throwable -> L74
            int r1 = c(r1)     // Catch: java.lang.Throwable -> L74
            r3.append(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L74
            goto L71
        L68:
            long r3 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r3 = r3 / r5
            java.lang.String r0 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L74
        L71:
            r2.close()     // Catch: java.lang.Throwable -> L74
        L74:
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = ""
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "stat -c %x /data/app"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L74
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L74
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L74
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L74
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L74
            if (r1 == 0) goto L71
            java.lang.String r3 = "\\."
            java.lang.String[] r1 = r1.split(r3)     // Catch: java.lang.Throwable -> L74
            r3 = 0
            r4 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.util.Date r4 = a(r4)     // Catch: java.lang.Throwable -> L74
            r5 = 1
            r6 = r1[r5]     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L41
            r1 = r1[r5]     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "\\+"
            java.lang.String[] r1 = r1.split(r5)     // Catch: java.lang.Throwable -> L74
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L74
            goto L42
        L41:
            r1 = r0
        L42:
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L74
            r5 = 1000(0x3e8, double:4.94E-321)
            if (r3 != 0) goto L68
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r3.<init>()     // Catch: java.lang.Throwable -> L74
            long r7 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r7 = r7 / r5
            r3.append(r7)     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = "."
            r3.append(r4)     // Catch: java.lang.Throwable -> L74
            int r1 = c(r1)     // Catch: java.lang.Throwable -> L74
            r3.append(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L74
            goto L71
        L68:
            long r3 = r4.getTime()     // Catch: java.lang.Throwable -> L74
            long r3 = r3 / r5
            java.lang.String r0 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L74
        L71:
            r2.close()     // Catch: java.lang.Throwable -> L74
        L74:
            return r0
    }

    public static java.lang.String f() {
            java.lang.String r0 = ""
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = "stat -c %i /data/data"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L24
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L24
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L24
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L24
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L24
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L24
            if (r1 == 0) goto L21
            r0 = r1
        L21:
            r2.close()     // Catch: java.lang.Throwable -> L24
        L24:
            return r0
    }

    public static java.lang.String g() {
            java.lang.String r0 = ""
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = "stat -c %i /data/app"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L24
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L24
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L24
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L24
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L24
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L24
            if (r1 == 0) goto L21
            r0 = r1
        L21:
            r2.close()     // Catch: java.lang.Throwable -> L24
        L24:
            return r0
    }

    public static java.lang.String h() {
            r0 = 0
            java.lang.Class<android.os.Build> r1 = android.os.Build.class
            java.lang.String r2 = "getString"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L30
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L30
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Exception -> L30
            r1.setAccessible(r3)     // Catch: java.lang.Exception -> L30
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = "net.hostname"
            r2[r6] = r3     // Catch: java.lang.Exception -> L30
            java.lang.Object r1 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L30
            if (r0 == 0) goto L30
            java.lang.String r1 = ""
            boolean r1 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Exception -> L30
            if (r1 != 0) goto L30
            java.lang.String r0 = b(r0)     // Catch: java.lang.Exception -> L30
        L30:
            return r0
    }
}
