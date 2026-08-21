package com.qq.e.comm.managers.plugin;

class g {
    private final java.io.File a;
    private final java.io.File b;
    private java.lang.String c;
    private int d;
    private java.lang.String e;

    public g(java.io.File r1, java.io.File r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    private java.lang.String a(java.io.File r6) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "Exception while close bufferreader"
            r1 = 0
            if (r6 == 0) goto L4f
            boolean r2 = r6.exists()
            if (r2 != 0) goto Lc
            goto L4f
        Lc:
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
            java.lang.String r6 = "UTF-8"
            r2.<init>(r3, r6)     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
            java.io.BufferedReader r6 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L38 java.lang.Throwable -> L41
            r1.<init>()     // Catch: java.io.IOException -> L38 java.lang.Throwable -> L41
        L22:
            java.lang.String r2 = r6.readLine()     // Catch: java.io.IOException -> L38 java.lang.Throwable -> L41
            if (r2 == 0) goto L2c
            r1.append(r2)     // Catch: java.io.IOException -> L38 java.lang.Throwable -> L41
            goto L22
        L2c:
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L38 java.lang.Throwable -> L41
            r6.close()     // Catch: java.lang.Exception -> L34
            goto L37
        L34:
            com.qq.e.comm.util.GDTLogger.d(r0)
        L37:
            return r1
        L38:
            r1 = move-exception
            goto L40
        L3a:
            r6 = move-exception
            goto L45
        L3c:
            r6 = move-exception
            r4 = r1
            r1 = r6
            r6 = r4
        L40:
            throw r1     // Catch: java.lang.Throwable -> L41
        L41:
            r1 = move-exception
            r4 = r1
            r1 = r6
            r6 = r4
        L45:
            if (r1 == 0) goto L4e
            r1.close()     // Catch: java.lang.Exception -> L4b
            goto L4e
        L4b:
            com.qq.e.comm.util.GDTLogger.d(r0)
        L4e:
            throw r6
        L4f:
            return r1
    }

    boolean a() {
            r6 = this;
            r0 = 0
            java.io.File r1 = r6.b     // Catch: java.lang.Throwable -> L47
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L46
            java.io.File r1 = r6.a     // Catch: java.lang.Throwable -> L47
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L46
            java.io.File r1 = r6.b     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = r6.a(r1)     // Catch: java.lang.Throwable -> L47
            r6.e = r1     // Catch: java.lang.Throwable -> L47
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L47
            if (r1 == 0) goto L20
            return r0
        L20:
            java.lang.String r1 = r6.e     // Catch: java.lang.Throwable -> L47
            java.lang.String r2 = "#####"
            java.lang.String[] r1 = r1.split(r2)     // Catch: java.lang.Throwable -> L47
            int r2 = r1.length     // Catch: java.lang.Throwable -> L47
            r3 = 2
            if (r2 != r3) goto L46
            r2 = 1
            r3 = r1[r2]     // Catch: java.lang.Throwable -> L47
            r1 = r1[r0]     // Catch: java.lang.Throwable -> L47
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L36
            goto L37
        L36:
            r1 = r0
        L37:
            com.qq.e.comm.managers.plugin.c r4 = com.qq.e.comm.managers.plugin.c.b.a     // Catch: java.lang.Throwable -> L47
            java.io.File r5 = r6.a     // Catch: java.lang.Throwable -> L47
            boolean r4 = r4.a(r3, r5)     // Catch: java.lang.Throwable -> L47
            if (r4 == 0) goto L46
            r6.c = r3     // Catch: java.lang.Throwable -> L47
            r6.d = r1     // Catch: java.lang.Throwable -> L47
            return r2
        L46:
            return r0
        L47:
            java.lang.String r1 = "Exception while checking plugin"
            com.qq.e.comm.util.GDTLogger.d(r1)
            return r0
    }

    boolean a(java.io.File r2, java.io.File r3) {
            r1 = this;
            java.io.File r0 = r1.a
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L10
            java.io.File r0 = r1.a
            boolean r2 = com.qq.e.comm.managers.plugin.h.a(r0, r2)
            if (r2 == 0) goto L21
        L10:
            java.io.File r2 = r1.b
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L23
            java.io.File r2 = r1.b
            boolean r2 = com.qq.e.comm.managers.plugin.h.a(r2, r3)
            if (r2 == 0) goto L21
            goto L23
        L21:
            r2 = 0
            goto L24
        L23:
            r2 = 1
        L24:
            return r2
    }

    java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    int c() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }
}
