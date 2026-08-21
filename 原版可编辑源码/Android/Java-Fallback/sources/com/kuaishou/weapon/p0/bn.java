package com.kuaishou.weapon.p0;

public class bn {
    public bn() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.Context r4) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L38
            r2 = 23
            if (r1 >= r2) goto L8
            return r0
        L8:
            java.lang.String r1 = "sensor"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L38
            android.hardware.SensorManager r4 = (android.hardware.SensorManager) r4     // Catch: java.lang.Exception -> L38
            if (r4 == 0) goto L38
            r1 = -1
            java.util.List r4 = r4.getSensorList(r1)     // Catch: java.lang.Exception -> L38
            int r1 = r4.size()     // Catch: java.lang.Exception -> L38
            if (r1 <= 0) goto L38
            r1 = 1
            java.util.ListIterator r4 = r4.listIterator()     // Catch: java.lang.Exception -> L38
        L22:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L37
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Exception -> L38
            android.hardware.Sensor r2 = (android.hardware.Sensor) r2     // Catch: java.lang.Exception -> L38
            int r2 = r2.getType()     // Catch: java.lang.Exception -> L38
            r3 = 9
            if (r2 != r3) goto L22
            goto L38
        L37:
            r0 = r1
        L38:
            return r0
    }

    public static long a() {
            r0 = 0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L57
            java.lang.String r2 = "cat /proc/uptime"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L57
            java.io.DataInputStream r2 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L57
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L57
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L57
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L54
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L54
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L54
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L54
            r3 = 0
        L20:
            java.lang.String r0 = r1.readLine()     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L41
            java.lang.String r0 = a(r0)     // Catch: java.lang.Throwable -> L55
            java.lang.String r5 = ";"
            java.lang.String[] r0 = r0.split(r5)     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L20
            int r5 = r0.length     // Catch: java.lang.Throwable -> L55
            if (r5 == 0) goto L20
            r3 = 0
            r0 = r0[r3]     // Catch: java.lang.Throwable -> L55
            java.lang.Double r0 = java.lang.Double.valueOf(r0)     // Catch: java.lang.Throwable -> L55
            double r3 = r0.doubleValue()     // Catch: java.lang.Throwable -> L55
            goto L20
        L41:
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L55
            r7 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r3 = r3 * r7
            long r3 = (long) r3
            long r5 = r5 - r3
            r2.close()     // Catch: java.io.IOException -> L50
        L50:
            r1.close()     // Catch: java.io.IOException -> L64
            goto L64
        L54:
            r1 = r0
        L55:
            r0 = r2
            goto L58
        L57:
            r1 = r0
        L58:
            if (r0 == 0) goto L5d
            r0.close()     // Catch: java.io.IOException -> L5d
        L5d:
            if (r1 == 0) goto L62
            r1.close()     // Catch: java.io.IOException -> L62
        L62:
            r5 = -1
        L64:
            return r5
    }

    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = ";"
            java.lang.String r1 = "      "
            java.lang.String r2 = r2.replace(r1, r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "     "
            java.lang.String r2 = r2.replace(r1, r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "    "
            java.lang.String r2 = r2.replace(r1, r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "   "
            java.lang.String r2 = r2.replace(r1, r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "  "
            java.lang.String r2 = r2.replace(r1, r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = " "
            java.lang.String r2 = r2.replace(r1, r0)     // Catch: java.lang.Throwable -> L27
            goto L28
        L27:
            r2 = 0
        L28:
            return r2
    }

    public static long b() {
            r0 = 0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = "cat /proc/uptime"
            java.lang.Process r1 = r1.exec(r2)     // Catch: java.lang.Throwable -> L55
            java.io.DataInputStream r2 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L55
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Throwable -> L55
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L55
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L52
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L52
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L52
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L52
            r3 = 0
        L20:
            java.lang.String r0 = r1.readLine()     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L41
            java.lang.String r0 = a(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.String r5 = ";"
            java.lang.String[] r0 = r0.split(r5)     // Catch: java.lang.Throwable -> L53
            if (r0 == 0) goto L20
            int r5 = r0.length     // Catch: java.lang.Throwable -> L53
            if (r5 == 0) goto L20
            r3 = 0
            r0 = r0[r3]     // Catch: java.lang.Throwable -> L53
            java.lang.Double r0 = java.lang.Double.valueOf(r0)     // Catch: java.lang.Throwable -> L53
            double r3 = r0.doubleValue()     // Catch: java.lang.Throwable -> L53
            goto L20
        L41:
            java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L53
            r5 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r3 = r3 * r5
            long r3 = (long) r3
            r2.close()     // Catch: java.io.IOException -> L4e
        L4e:
            r1.close()     // Catch: java.io.IOException -> L62
            goto L62
        L52:
            r1 = r0
        L53:
            r0 = r2
            goto L56
        L55:
            r1 = r0
        L56:
            if (r0 == 0) goto L5b
            r0.close()     // Catch: java.io.IOException -> L5b
        L5b:
            if (r1 == 0) goto L60
            r1.close()     // Catch: java.io.IOException -> L60
        L60:
            r3 = -1
        L62:
            return r3
    }
}
