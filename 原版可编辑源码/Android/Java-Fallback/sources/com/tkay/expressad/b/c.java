package com.tkay.expressad.b;

public final class c {
    private static final java.lang.String a = "UnzipUtility";
    private static final int b = 4096;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r12, java.lang.String r13) {
            java.lang.String r0 = "../"
            java.lang.String r1 = ".."
            r2 = -1
            if (r12 == 0) goto L161
            if (r13 != 0) goto Lb
            goto L161
        Lb:
            java.lang.String r3 = "/"
            boolean r4 = r13.endsWith(r3)
            if (r4 != 0) goto L22
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r13)
            r4.append(r3)
            java.lang.String r13 = r4.toString()
        L22:
            java.io.File r3 = new java.io.File
            r3.<init>(r12)
            boolean r12 = r3.exists()
            if (r12 != 0) goto L2f
            r12 = 1
            return r12
        L2f:
            r12 = 0
            java.util.zip.ZipFile r4 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L12d java.io.IOException -> L130
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L12d java.io.IOException -> L130
            java.util.Enumeration r3 = r4.entries()     // Catch: java.lang.Throwable -> L12d java.io.IOException -> L130
            r5 = r12
        L3a:
            boolean r6 = r3.hasMoreElements()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r7 = 0
            if (r6 == 0) goto L113
            java.lang.Object r6 = r3.nextElement()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            java.util.zip.ZipEntry r6 = (java.util.zip.ZipEntry) r6     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r8 = 2
            if (r6 != 0) goto L5f
            if (r12 == 0) goto L54
            r12.close()     // Catch: java.io.IOException -> L50
            goto L54
        L50:
            r12 = move-exception
            r12.getMessage()
        L54:
            if (r5 == 0) goto L5e
            r5.close()     // Catch: java.io.IOException -> L5a
            goto L5e
        L5a:
            r12 = move-exception
            r12.getMessage()
        L5e:
            return r8
        L5f:
            java.lang.String r9 = r6.getName()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r10 != 0) goto Lfe
            boolean r10 = r9.startsWith(r1)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r10 != 0) goto Lfe
            boolean r10 = r9.startsWith(r0)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r10 == 0) goto L77
            goto Lfe
        L77:
            java.io.File r10 = new java.io.File     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r11.<init>()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r11.append(r13)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r11.append(r9)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            java.lang.String r9 = r11.toString()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r10.<init>(r9)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            java.lang.String r9 = r10.getCanonicalPath()     // Catch: java.io.IOException -> L90 java.lang.Throwable -> L14b
            goto L92
        L90:
            java.lang.String r9 = ""
        L92:
            boolean r11 = android.text.TextUtils.isEmpty(r9)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r11 != 0) goto Le9
            boolean r11 = r9.startsWith(r1)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r11 != 0) goto Le9
            boolean r11 = r9.startsWith(r0)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r11 != 0) goto Le9
            boolean r9 = r9.startsWith(r13)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r9 == 0) goto Le9
            boolean r8 = r6.isDirectory()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r8 == 0) goto Lb4
            r10.mkdirs()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            goto L3a
        Lb4:
            java.io.File r8 = r10.getParentFile()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            boolean r8 = r8.exists()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r8 != 0) goto Lc5
            java.io.File r8 = r10.getParentFile()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r8.mkdirs()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
        Lc5:
            java.io.FileOutputStream r8 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            r8.<init>(r10)     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            java.io.InputStream r12 = r4.getInputStream(r6)     // Catch: java.lang.Throwable -> Le2 java.io.IOException -> Le6
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r5]     // Catch: java.lang.Throwable -> Le2 java.io.IOException -> Le6
        Ld2:
            int r9 = r12.read(r6, r7, r5)     // Catch: java.lang.Throwable -> Le2 java.io.IOException -> Le6
            if (r9 == r2) goto Ldf
            r8.write(r6, r7, r9)     // Catch: java.lang.Throwable -> Le2 java.io.IOException -> Le6
            r8.flush()     // Catch: java.lang.Throwable -> Le2 java.io.IOException -> Le6
            goto Ld2
        Ldf:
            r5 = r8
            goto L3a
        Le2:
            r13 = move-exception
            r5 = r8
            goto L14c
        Le6:
            r13 = move-exception
            r5 = r8
            goto L132
        Le9:
            if (r12 == 0) goto Lf3
            r12.close()     // Catch: java.io.IOException -> Lef
            goto Lf3
        Lef:
            r12 = move-exception
            r12.getMessage()
        Lf3:
            if (r5 == 0) goto Lfd
            r5.close()     // Catch: java.io.IOException -> Lf9
            goto Lfd
        Lf9:
            r12 = move-exception
            r12.getMessage()
        Lfd:
            return r8
        Lfe:
            if (r12 == 0) goto L108
            r12.close()     // Catch: java.io.IOException -> L104
            goto L108
        L104:
            r12 = move-exception
            r12.getMessage()
        L108:
            if (r5 == 0) goto L112
            r5.close()     // Catch: java.io.IOException -> L10e
            goto L112
        L10e:
            r12 = move-exception
            r12.getMessage()
        L112:
            return r8
        L113:
            r4.close()     // Catch: java.io.IOException -> L12b java.lang.Throwable -> L14b
            if (r12 == 0) goto L120
            r12.close()     // Catch: java.io.IOException -> L11c
            goto L120
        L11c:
            r12 = move-exception
            r12.getMessage()
        L120:
            if (r5 == 0) goto L12a
            r5.close()     // Catch: java.io.IOException -> L126
            goto L12a
        L126:
            r12 = move-exception
            r12.getMessage()
        L12a:
            return r7
        L12b:
            r13 = move-exception
            goto L132
        L12d:
            r13 = move-exception
            r5 = r12
            goto L14c
        L130:
            r13 = move-exception
            r5 = r12
        L132:
            r13.getMessage()     // Catch: java.lang.Throwable -> L14b
            if (r12 == 0) goto L13f
            r12.close()     // Catch: java.io.IOException -> L13b
            goto L13f
        L13b:
            r12 = move-exception
            r12.getMessage()
        L13f:
            if (r5 == 0) goto L149
            r5.close()     // Catch: java.io.IOException -> L145
            goto L149
        L145:
            r12 = move-exception
            r12.getMessage()
        L149:
            r12 = 3
            return r12
        L14b:
            r13 = move-exception
        L14c:
            if (r12 == 0) goto L156
            r12.close()     // Catch: java.io.IOException -> L152
            goto L156
        L152:
            r12 = move-exception
            r12.getMessage()
        L156:
            if (r5 == 0) goto L160
            r5.close()     // Catch: java.io.IOException -> L15c
            goto L160
        L15c:
            r12 = move-exception
            r12.getMessage()
        L160:
            throw r13
        L161:
            return r2
    }

    private static void a(java.util.zip.ZipInputStream r3, java.lang.String r4) {
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            java.io.File r4 = r0.getParentFile()
            boolean r4 = r4.exists()
            if (r4 != 0) goto L16
            java.io.File r4 = r0.getParentFile()
            r4.mkdirs()
        L16:
            r4 = 0
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r4 = 4096(0x1000, float:5.74E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38
        L25:
            int r0 = r3.read(r4)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38
            r2 = -1
            if (r0 == r2) goto L31
            r2 = 0
            r1.write(r4, r2, r0)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38
            goto L25
        L31:
            r1.close()
            return
        L35:
            r3 = move-exception
            r4 = r1
            goto L44
        L38:
            r3 = move-exception
            r4 = r1
            goto L3e
        L3b:
            r3 = move-exception
            goto L44
        L3d:
            r3 = move-exception
        L3e:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L3b
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L3b
            throw r0     // Catch: java.lang.Throwable -> L3b
        L44:
            if (r4 == 0) goto L49
            r4.close()
        L49:
            throw r3
    }
}
