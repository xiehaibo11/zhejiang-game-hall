package com.kuaishou.weapon.p0;

public class ad {
    public ad() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(java.lang.String r6) {
            r5 = this;
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L2f
            r1.<init>(r6)     // Catch: java.lang.Exception -> L2f
            boolean r6 = r1.exists()     // Catch: java.lang.Exception -> L2f
            if (r6 == 0) goto L2f
            boolean r6 = r1.canRead()     // Catch: java.lang.Exception -> L2f
            if (r6 == 0) goto L2f
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Exception -> L2f
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L2f
            r2.<init>(r1)     // Catch: java.lang.Exception -> L2f
            r1 = r0
        L1c:
            int r3 = r2.read(r6)     // Catch: java.lang.Exception -> L2f
            r4 = -1
            if (r3 == r4) goto L2b
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L2f
            r4 = 0
            r1.<init>(r6, r4, r3)     // Catch: java.lang.Exception -> L2f
            if (r3 <= 0) goto L1c
        L2b:
            r2.close()     // Catch: java.lang.Exception -> L2f
            r0 = r1
        L2f:
            return r0
    }

    public static boolean b() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r1 = "nokia"
            boolean r0 = r1.equalsIgnoreCase(r0)
            r1 = 0
            if (r0 == 0) goto L20
            java.lang.String r0 = android.os.Build.DEVICE
            java.lang.String r2 = "Nokia_N1"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 != 0) goto L1f
            java.lang.String r0 = android.os.Build.MODEL
            java.lang.String r2 = "N1"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 == 0) goto L20
        L1f:
            return r1
        L20:
            java.lang.ProcessBuilder r0 = new java.lang.ProcessBuilder     // Catch: java.io.IOException -> L7b
            java.lang.String r2 = "/system/bin/cat"
            java.lang.String r3 = "/proc/cpuinfo"
            java.lang.String[] r2 = new java.lang.String[]{r2, r3}     // Catch: java.io.IOException -> L7b
            r0.<init>(r2)     // Catch: java.io.IOException -> L7b
            java.lang.Process r0 = r0.start()     // Catch: java.io.IOException -> L7b
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.io.IOException -> L7b
            r2.<init>()     // Catch: java.io.IOException -> L7b
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.io.IOException -> L7b
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.io.IOException -> L7b
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.io.IOException -> L7b
            java.lang.String r5 = "utf-8"
            r4.<init>(r0, r5)     // Catch: java.io.IOException -> L7b
            r3.<init>(r4)     // Catch: java.io.IOException -> L7b
        L46:
            java.lang.String r0 = r3.readLine()     // Catch: java.io.IOException -> L7b
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.io.IOException -> L7b
            if (r4 != 0) goto L54
            r2.append(r0)     // Catch: java.io.IOException -> L7b
            goto L46
        L54:
            r3.close()     // Catch: java.io.IOException -> L7b
            java.lang.String r0 = r2.toString()     // Catch: java.io.IOException -> L7b
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.io.IOException -> L7b
            java.lang.String r2 = "intel"
            boolean r2 = r0.contains(r2)     // Catch: java.io.IOException -> L7b
            if (r2 != 0) goto L79
            java.lang.String r2 = "x86"
            boolean r2 = r0.contains(r2)     // Catch: java.io.IOException -> L7b
            if (r2 != 0) goto L79
            java.lang.String r2 = "amd"
            boolean r0 = r0.contains(r2)     // Catch: java.io.IOException -> L7b
            if (r0 == 0) goto L78
            goto L79
        L78:
            return r1
        L79:
            r0 = 1
            return r0
        L7b:
            return r1
    }

    public boolean a() {
            r6 = this;
            java.lang.String r0 = "/proc/tty/drivers"
            java.lang.String r1 = "/proc/cpuinfo"
            r2 = 0
            java.lang.String r0 = r6.a(r0)     // Catch: java.lang.Exception -> L30
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L30
            r4 = 1
            java.lang.String r5 = "goldfish"
            if (r3 != 0) goto L1a
            boolean r0 = r0.contains(r5)     // Catch: java.lang.Exception -> L30
            if (r0 == 0) goto L1a
            r0 = r4
            goto L1b
        L1a:
            r0 = r2
        L1b:
            if (r0 != 0) goto L2e
            java.lang.String r1 = r6.a(r1)     // Catch: java.lang.Exception -> L30
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L30
            if (r3 != 0) goto L2e
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L2e
            goto L2f
        L2e:
            r4 = r0
        L2f:
            return r4
        L30:
            return r2
    }
}
