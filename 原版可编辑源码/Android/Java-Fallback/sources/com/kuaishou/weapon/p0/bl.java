package com.kuaishou.weapon.p0;

public class bl {
    public bl() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Exception -> Ld
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()     // Catch: java.lang.Exception -> Ld
            if (r0 == 0) goto Ld
            int r0 = r0.densityDpi     // Catch: java.lang.Exception -> Ld
            return r0
        Ld:
            r0 = -1
            return r0
    }

    public static org.json.JSONObject a() {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c
            r0.<init>()     // Catch: java.lang.Exception -> L2c
            java.util.Calendar r1 = java.util.Calendar.getInstance()     // Catch: java.lang.Exception -> L2c
            java.util.TimeZone r1 = r1.getTimeZone()     // Catch: java.lang.Exception -> L2c
            if (r1 == 0) goto L2c
            java.lang.String r2 = "0"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L2c
            int r3 = r1.getOffset(r3)     // Catch: java.lang.Exception -> L2c
            int r3 = r3 / 1000
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L2c
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = "1"
            java.lang.String r1 = r1.getID()     // Catch: java.lang.Exception -> L2c
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L2c
            return r0
        L2c:
            r0 = 0
            return r0
    }

    public static java.lang.String b() {
            r0 = 0
            java.lang.String r2 = "mounted"
            java.lang.String r3 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L27
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L27
            if (r2 == 0) goto L27
            android.os.StatFs r2 = new android.os.StatFs     // Catch: java.lang.Throwable -> L27
            java.io.File r3 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = r3.getPath()     // Catch: java.lang.Throwable -> L27
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L27
            int r3 = r2.getBlockSize()     // Catch: java.lang.Throwable -> L27
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L27
            int r0 = r2.getBlockCount()     // Catch: java.lang.Throwable -> L27
            long r0 = (long) r0
            long r3 = r3 * r0
            r0 = r3
        L27:
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = ""
            java.util.Locale r1 = java.util.Locale.getDefault()     // Catch: java.lang.Throwable -> Lb
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb
            goto Lc
        Lb:
            r1 = r0
        Lc:
            if (r1 != 0) goto Lf
            return r0
        Lf:
            return r1
    }

    public static org.json.JSONObject d() {
            java.lang.String r0 = ";"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r2 = 0
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L64
            java.lang.String r4 = "lsmod"
            java.lang.Process r3 = r3.exec(r4)     // Catch: java.lang.Throwable -> L64
            java.io.DataInputStream r4 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L64
            java.io.InputStream r3 = r3.getInputStream()     // Catch: java.lang.Throwable -> L64
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L64
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L61
            java.io.InputStreamReader r5 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L61
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L61
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L61
        L25:
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L62
            if (r2 == 0) goto L5a
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L62
            if (r5 != 0) goto L25
            java.lang.String r2 = com.kuaishou.weapon.p0.bn.a(r2)     // Catch: java.lang.Throwable -> L62
            java.lang.String r5 = "-"
            boolean r5 = r2.contains(r5)     // Catch: java.lang.Throwable -> L62
            if (r5 == 0) goto L25
            boolean r5 = r2.contains(r0)     // Catch: java.lang.Throwable -> L62
            if (r5 == 0) goto L25
            java.lang.String r5 = ";;;"
            java.lang.String r2 = r2.replace(r5, r0)     // Catch: java.lang.Throwable -> L62
            java.lang.String[] r2 = r2.split(r0)     // Catch: java.lang.Throwable -> L62
            int r5 = r2.length     // Catch: java.lang.Throwable -> L62
            r6 = 1
            if (r5 <= r6) goto L25
            r5 = 0
            r5 = r2[r5]     // Catch: java.lang.Throwable -> L62
            r2 = r2[r6]     // Catch: java.lang.Throwable -> L62
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L62
            goto L25
        L5a:
            r4.close()     // Catch: java.io.IOException -> L5d
        L5d:
            r3.close()     // Catch: java.io.IOException -> L6d
            goto L6d
        L61:
            r3 = r2
        L62:
            r2 = r4
            goto L65
        L64:
            r3 = r2
        L65:
            if (r2 == 0) goto L6a
            r2.close()     // Catch: java.io.IOException -> L6a
        L6a:
            if (r3 == 0) goto L6d
            goto L5d
        L6d:
            return r1
    }
}
