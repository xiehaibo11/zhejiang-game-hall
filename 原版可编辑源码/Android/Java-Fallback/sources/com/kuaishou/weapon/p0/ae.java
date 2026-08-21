package com.kuaishou.weapon.p0;

public class ae {
    public ae() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L1c
            r1 = 64
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L1c
            android.content.pm.Signature[] r2 = r2.signatures     // Catch: java.lang.Exception -> L1c
            r0 = 0
            r2 = r2[r0]     // Catch: java.lang.Exception -> L1c
            byte[] r2 = r2.toByteArray()     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = com.kuaishou.weapon.p0.f.b(r2)     // Catch: java.lang.Exception -> L1c
            return r2
        L1c:
            r2 = 0
            return r2
    }

    public org.json.JSONObject a() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L37
            r0.<init>()     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = "/data"
            r2 = 1
            boolean r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = "0"
            r4 = 0
            if (r1 == 0) goto L13
            r1 = r2
            goto L14
        L13:
            r1 = r4
        L14:
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = "/system/bin"
            boolean r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = "1"
            if (r1 == 0) goto L23
            r1 = r2
            goto L24
        L23:
            r1 = r4
        L24:
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = "/system/lib"
            boolean r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = "2"
            if (r1 == 0) goto L32
            goto L33
        L32:
            r2 = r4
        L33:
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L37
            return r0
        L37:
            r0 = 0
            return r0
    }

    public boolean a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "proc"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.canWrite()
            return r3
    }

    public boolean a(java.lang.String r4, boolean r5) {
            r3 = this;
            java.lang.String r0 = ""
            if (r5 == 0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r0.<init>()     // Catch: java.lang.Throwable -> L50
            r0.append(r4)     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = "/-"
            r0.append(r4)     // Catch: java.lang.Throwable -> L50
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L50
            r0.append(r1)     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r0.<init>()     // Catch: java.lang.Throwable -> L50
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L50
            r0.append(r1)     // Catch: java.lang.Throwable -> L50
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L50
        L2c:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L50
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L50
            r1.exists()     // Catch: java.lang.Throwable -> L50
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L50
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L50
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L51
            r4.write(r0)     // Catch: java.lang.Throwable -> L51
            r4.flush()     // Catch: java.lang.Throwable -> L51
            r4.close()     // Catch: java.lang.Throwable -> L51
            if (r5 == 0) goto L4b
            r1.delete()     // Catch: java.lang.Throwable -> L51
        L4b:
            r4.close()     // Catch: java.lang.Exception -> L4e
        L4e:
            r4 = 1
            return r4
        L50:
            r4 = 0
        L51:
            if (r4 == 0) goto L56
            r4.close()     // Catch: java.lang.Exception -> L56
        L56:
            r4 = 0
            return r4
    }

    public org.json.JSONObject b() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L47
            r0.<init>()     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = "/sys"
            r2 = 1
            boolean r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = "0"
            r4 = 0
            if (r1 == 0) goto L13
            r1 = r2
            goto L14
        L13:
            r1 = r4
        L14:
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = "/sbin"
            boolean r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = "1"
            if (r1 == 0) goto L23
            r1 = r2
            goto L24
        L23:
            r1 = r4
        L24:
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = "/etc"
            boolean r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = "2"
            if (r1 == 0) goto L33
            r1 = r2
            goto L34
        L33:
            r1 = r4
        L34:
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = "/dev"
            boolean r1 = r5.a(r1, r2)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = "3"
            if (r1 == 0) goto L42
            goto L43
        L42:
            r2 = r4
        L43:
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L47
            return r0
        L47:
            r0 = 0
            return r0
    }

    public boolean b(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.a(r2, r0)
            return r2
    }
}
