package com.igexin.push.config;

public class k {
    private static java.lang.String a = "FileConfig";

    static {
            return
    }

    public static void a() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.d.e
            r0.append(r1)
            java.lang.String r1 = ".properties"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.content.Context r2 = com.igexin.push.core.d.g
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.AssetManager r2 = r2.getAssets()
            r3 = 0
            java.io.InputStream r0 = r2.open(r0)     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2e
            a(r0)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L2f
            goto L2f
        L26:
            r1 = move-exception
            r3 = r0
            goto L2a
        L29:
            r1 = move-exception
        L2a:
            com.igexin.push.util.h.a(r3)
            throw r1
        L2e:
            r0 = r3
        L2f:
            com.igexin.push.util.h.a(r0)
            java.io.File r2 = new java.io.File
            java.lang.String r4 = com.igexin.push.core.d.Q
            r2.<init>(r4)
            boolean r2 = r2.exists()
            if (r2 != 0) goto L69
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r4 = com.igexin.push.core.d.g
            java.lang.String r4 = com.igexin.push.util.c.c(r4)
            r2.append(r4)
            java.lang.String r4 = com.igexin.push.core.d.e
            r2.append(r4)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.igexin.push.core.d.Q = r1
            java.io.File r1 = new java.io.File
            java.lang.String r2 = com.igexin.push.core.d.Q
            r1.<init>(r2)
            boolean r1 = r1.exists()
            if (r1 != 0) goto L69
            return
        L69:
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lcc
            java.lang.String r2 = com.igexin.push.core.d.Q     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lcc
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lcc
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Lbf java.lang.Exception -> Lc2
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Lbf java.lang.Exception -> Lc2
            java.lang.String r4 = "UTF-8"
            r2.<init>(r1, r4)     // Catch: java.lang.Throwable -> Lbf java.lang.Exception -> Lc2
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Lbf java.lang.Exception -> Lc2
        L7c:
            java.lang.String r2 = r0.readLine()     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            if (r2 == 0) goto Lb3
            java.lang.String r3 = "#"
            boolean r3 = r2.startsWith(r3)     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            if (r3 == 0) goto L8b
            goto L7c
        L8b:
            java.lang.String r3 = "="
            java.lang.String[] r2 = r2.split(r3)     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            int r3 = r2.length     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            r4 = 2
            if (r3 >= r4) goto L96
            goto L7c
        L96:
            r3 = 0
            r3 = r2[r3]     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            java.lang.String r3 = r3.trim()     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            r4 = 1
            r2 = r2[r4]     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            java.lang.String r2 = r2.trim()     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            java.lang.String r4 = "sdk.debug"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            if (r3 == 0) goto L7c
            boolean r2 = java.lang.Boolean.parseBoolean(r2)     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            com.igexin.b.a.c.b.a = r2     // Catch: java.lang.Throwable -> Lba java.lang.Exception -> Lbd
            goto L7c
        Lb3:
            com.igexin.push.util.h.a(r0)
            com.igexin.push.util.h.a(r1)
            goto Ld2
        Lba:
            r2 = move-exception
            r3 = r0
            goto Lc0
        Lbd:
            r3 = r0
            goto Lc2
        Lbf:
            r2 = move-exception
        Lc0:
            r0 = r1
            goto Lc5
        Lc2:
            r0 = r1
            goto Lcc
        Lc4:
            r2 = move-exception
        Lc5:
            com.igexin.push.util.h.a(r3)
            com.igexin.push.util.h.a(r0)
            throw r2
        Lcc:
            com.igexin.push.util.h.a(r3)
            com.igexin.push.util.h.a(r0)
        Ld2:
            return
    }

    public static void a(java.io.InputStream r4) {
            r0 = 0
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L7a
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L7a
            java.lang.String r3 = "UTF-8"
            r2.<init>(r4, r3)     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L7a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L6e java.lang.Exception -> L7a
        Ld:
            java.lang.String r4 = r1.readLine()     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            if (r4 == 0) goto L65
            java.lang.String r0 = "#"
            boolean r0 = r4.startsWith(r0)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            if (r0 == 0) goto L1c
            goto Ld
        L1c:
            java.lang.String r0 = "="
            java.lang.String[] r4 = r4.split(r0)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            int r0 = r4.length     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            r2 = 2
            if (r0 >= r2) goto L27
            goto Ld
        L27:
            r0 = 0
            r0 = r4[r0]     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            java.lang.String r0 = r0.trim()     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            r2 = 1
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            java.lang.String r2 = "sdk.cm_address"
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            java.lang.String r3 = ","
            if (r2 == 0) goto L47
            java.lang.String[] r4 = r4.split(r3)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            com.igexin.push.config.SDKUrlConfig.setXfrAddressIps(r4)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            goto Ld
        L47:
            java.lang.String r2 = "sdk.cm_address_backup"
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            if (r2 == 0) goto L56
            java.lang.String[] r4 = r4.split(r3)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK = r4     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            goto Ld
        L56:
            java.lang.String r2 = "sdk.debug"
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            if (r0 == 0) goto Ld
            boolean r4 = java.lang.Boolean.parseBoolean(r4)     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            com.igexin.b.a.c.b.a = r4     // Catch: java.lang.Throwable -> L69 java.lang.Exception -> L6c
            goto Ld
        L65:
            r1.close()     // Catch: java.lang.Exception -> L80
            goto L84
        L69:
            r4 = move-exception
            r0 = r1
            goto L6f
        L6c:
            r0 = r1
            goto L7a
        L6e:
            r4 = move-exception
        L6f:
            if (r0 == 0) goto L79
            r0.close()     // Catch: java.lang.Exception -> L75
            goto L79
        L75:
            r0 = move-exception
            r0.printStackTrace()
        L79:
            throw r4
        L7a:
            if (r0 == 0) goto L84
            r0.close()     // Catch: java.lang.Exception -> L80
            goto L84
        L80:
            r4 = move-exception
            r4.printStackTrace()
        L84:
            return
    }
}
