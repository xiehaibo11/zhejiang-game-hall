package com.kuaishou.weapon.p0;

public class ab {
    public ab() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = ""
            r1 = 0
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            java.lang.String r5 = "/proc/"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            int r5 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            r4.append(r5)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            java.lang.String r5 = "/status"
            r4.append(r5)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4d
        L24:
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            java.lang.String r3 = "TracerPid"
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            if (r3 == 0) goto L31
            goto L35
        L31:
            if (r1 == 0) goto L34
            goto L24
        L34:
            r1 = r0
        L35:
            java.lang.String r3 = "\t"
            java.lang.String r4 = " "
            java.lang.String r0 = r1.replace(r3, r4)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L44
            r2.close()     // Catch: java.lang.Exception -> L40
        L40:
            return r0
        L41:
            r0 = move-exception
            r1 = r2
            goto L47
        L44:
            r1 = r2
            goto L4d
        L46:
            r0 = move-exception
        L47:
            if (r1 == 0) goto L4c
            r1.close()     // Catch: java.lang.Exception -> L4c
        L4c:
            throw r0
        L4d:
            if (r1 == 0) goto L52
            r1.close()     // Catch: java.lang.Exception -> L52
        L52:
            return r0
    }

    public static boolean a(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L17
            r2 = 8192(0x2000, float:1.148E-41)
            android.content.pm.ApplicationInfo r3 = r1.getApplicationInfo(r3, r2)     // Catch: java.lang.Throwable -> L17
            int r3 = r3.flags     // Catch: java.lang.Throwable -> L17
            r3 = r3 & 2
            r1 = 1
            if (r3 != r1) goto L17
            return r1
        L17:
            return r0
    }

    public static boolean b() {
            boolean r0 = android.os.Debug.isDebuggerConnected()     // Catch: java.lang.Throwable -> Ld
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Throwable -> Ld
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public static boolean b(android.content.Context r5) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L30
            r2 = 24
            r3 = 8192(0x2000, float:1.148E-41)
            r4 = 1
            if (r1 < r2) goto L1d
            android.content.pm.PackageManager r1 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L30
            android.content.pm.ApplicationInfo r5 = r1.getApplicationInfo(r5, r3)     // Catch: java.lang.Throwable -> L30
            int r5 = r5.flags     // Catch: java.lang.Throwable -> L30
            r5 = r5 & 2
            if (r5 != r4) goto L30
            return r4
        L1d:
            android.content.pm.PackageManager r1 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L30
            android.content.pm.ApplicationInfo r5 = r1.getApplicationInfo(r5, r3)     // Catch: java.lang.Throwable -> L30
            int r5 = r5.flags     // Catch: java.lang.Throwable -> L30
            r5 = r5 & 2
            if (r5 != r4) goto L30
            return r4
        L30:
            return r0
    }
}
