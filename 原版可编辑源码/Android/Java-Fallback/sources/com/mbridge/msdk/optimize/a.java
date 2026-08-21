package com.mbridge.msdk.optimize;

public final class a {
    public static void a(java.io.File r10, java.lang.String r11, java.lang.String r12, com.mbridge.msdk.optimize.b r13) {
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L81
            r1.<init>()     // Catch: java.lang.Throwable -> L81
            r1.append(r11)     // Catch: java.lang.Throwable -> L81
            java.lang.String r11 = ".apk"
            r1.append(r11)     // Catch: java.lang.Throwable -> L81
            java.lang.String r11 = r1.toString()     // Catch: java.lang.Throwable -> L81
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L81
            r1.<init>(r10, r11)     // Catch: java.lang.Throwable -> L81
            boolean r10 = r1.exists()     // Catch: java.lang.Throwable -> L81
            if (r10 == 0) goto L20
            r1.delete()     // Catch: java.lang.Throwable -> L81
        L20:
            if (r13 == 0) goto L25
            r13.a()     // Catch: java.lang.Throwable -> L81
        L25:
            java.net.URL r10 = new java.net.URL     // Catch: java.lang.Throwable -> L81
            r10.<init>(r12)     // Catch: java.lang.Throwable -> L81
            java.net.URLConnection r10 = r10.openConnection()     // Catch: java.lang.Throwable -> L81
            r11 = 8000(0x1f40, float:1.121E-41)
            r10.setConnectTimeout(r11)     // Catch: java.lang.Throwable -> L81
            int r11 = r10.getContentLength()     // Catch: java.lang.Throwable -> L81
            r2 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r4 = (double) r11     // Catch: java.lang.Throwable -> L81
            double r2 = r2 / r4
            java.io.InputStream r10 = r10.getInputStream()     // Catch: java.lang.Throwable -> L81
            r12 = 1024(0x400, float:1.435E-42)
            byte[] r12 = new byte[r12]     // Catch: java.lang.Throwable -> L82
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L82
            r5 = 1
            r4.<init>(r1, r5)     // Catch: java.lang.Throwable -> L82
            r0 = 0
            r6 = r0
            r7 = r6
        L4c:
            int r8 = r10.read(r12)     // Catch: java.lang.Throwable -> L7f
            r9 = -1
            if (r8 == r9) goto L6a
            r4.write(r12, r0, r8)     // Catch: java.lang.Throwable -> L7f
            int r6 = r6 + r8
            double r8 = (double) r6     // Catch: java.lang.Throwable -> L7f
            double r8 = r8 * r2
            int r8 = (int) r8     // Catch: java.lang.Throwable -> L7f
            r9 = 512(0x200, float:7.17E-43)
            if (r7 >= r9) goto L62
            r9 = 100
            if (r8 != r9) goto L68
        L62:
            if (r13 == 0) goto L67
            r13.a(r8)     // Catch: java.lang.Throwable -> L7f
        L67:
            r7 = r0
        L68:
            int r7 = r7 + r5
            goto L4c
        L6a:
            if (r6 != r11) goto L71
            if (r13 == 0) goto L71
            r13.a(r1)     // Catch: java.lang.Throwable -> L7f
        L71:
            r4.close()     // Catch: java.io.IOException -> L75
            goto L79
        L75:
            r11 = move-exception
            r11.printStackTrace()
        L79:
            if (r10 == 0) goto Lb2
            r10.close()     // Catch: java.io.IOException -> Lae
            goto Lb2
        L7f:
            r0 = r4
            goto L82
        L81:
            r10 = r0
        L82:
            if (r13 == 0) goto L9e
            r13.b()     // Catch: java.lang.Throwable -> L88
            goto L9e
        L88:
            r11 = move-exception
            if (r0 == 0) goto L93
            r0.close()     // Catch: java.io.IOException -> L8f
            goto L93
        L8f:
            r12 = move-exception
            r12.printStackTrace()
        L93:
            if (r10 == 0) goto L9d
            r10.close()     // Catch: java.io.IOException -> L99
            goto L9d
        L99:
            r10 = move-exception
            r10.printStackTrace()
        L9d:
            throw r11
        L9e:
            if (r0 == 0) goto La8
            r0.close()     // Catch: java.io.IOException -> La4
            goto La8
        La4:
            r11 = move-exception
            r11.printStackTrace()
        La8:
            if (r10 == 0) goto Lb2
            r10.close()     // Catch: java.io.IOException -> Lae
            goto Lb2
        Lae:
            r10 = move-exception
            r10.printStackTrace()
        Lb2:
            return
    }
}
