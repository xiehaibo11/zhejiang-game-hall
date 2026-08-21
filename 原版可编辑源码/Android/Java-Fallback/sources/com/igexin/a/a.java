package com.igexin.a;

public class a implements com.igexin.a.e {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private long a(java.io.InputStream r6, java.io.OutputStream r7) {
            r5 = this;
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            r1 = 0
        L6:
            int r3 = r6.read(r0)
            r4 = -1
            if (r3 != r4) goto L11
            r7.flush()
            return r1
        L11:
            r4 = 0
            r7.write(r0, r4, r3)
            long r3 = (long) r3
            long r1 = r1 + r3
            goto L6
    }

    private com.igexin.a.b a(android.content.Context r17, java.lang.String[] r18, java.lang.String r19, com.igexin.a.i r20) {
            r16 = this;
            r0 = r18
            java.lang.String[] r1 = r16.a(r17)
            int r2 = r1.length
            r3 = 0
            r4 = 0
            r6 = r3
            r5 = r4
        Lb:
            if (r5 >= r2) goto L87
            r7 = r1[r5]
            r8 = r4
        L10:
            int r9 = r8 + 1
            r10 = 5
            r11 = 1
            if (r8 >= r10) goto L24
            java.util.zip.ZipFile r8 = new java.util.zip.ZipFile     // Catch: java.io.IOException -> L22
            java.io.File r12 = new java.io.File     // Catch: java.io.IOException -> L22
            r12.<init>(r7)     // Catch: java.io.IOException -> L22
            r8.<init>(r12, r11)     // Catch: java.io.IOException -> L22
            r6 = r8
            goto L24
        L22:
            r8 = r9
            goto L10
        L24:
            if (r6 != 0) goto L2b
            r13 = r19
            r10 = r20
            goto L83
        L2b:
            r8 = r4
        L2c:
            int r9 = r8 + 1
            if (r8 >= r10) goto L7c
            int r8 = r0.length
            r12 = r4
        L32:
            if (r12 >= r8) goto L75
            r13 = r0[r12]
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = "lib"
            r14.append(r15)
            char r15 = java.io.File.separatorChar
            r14.append(r15)
            r14.append(r13)
            char r13 = java.io.File.separatorChar
            r14.append(r13)
            r13 = r19
            r14.append(r13)
            java.lang.String r14 = r14.toString()
            r15 = 2
            java.lang.Object[] r15 = new java.lang.Object[r15]
            r15[r4] = r14
            r15[r11] = r7
            java.lang.String r4 = "Looking for %s in APK %s..."
            r10 = r20
            r10.a(r4, r15)
            java.util.zip.ZipEntry r4 = r6.getEntry(r14)
            if (r4 == 0) goto L70
            com.igexin.a.b r0 = new com.igexin.a.b
            r0.<init>(r6, r4)
            return r0
        L70:
            int r12 = r12 + 1
            r4 = 0
            r10 = 5
            goto L32
        L75:
            r13 = r19
            r10 = r20
            r8 = r9
            r10 = 5
            goto L2c
        L7c:
            r13 = r19
            r10 = r20
            r6.close()     // Catch: java.io.IOException -> L83
        L83:
            int r5 = r5 + 1
            r4 = 0
            goto Lb
        L87:
            return r3
    }

    private void a(java.io.Closeable r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }

    private java.lang.String[] a(android.content.Context r5) {
            r4 = this;
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 1
            r3 = 21
            if (r0 < r3) goto L28
            java.lang.String[] r0 = r5.splitSourceDirs
            if (r0 == 0) goto L28
            java.lang.String[] r0 = r5.splitSourceDirs
            int r0 = r0.length
            if (r0 == 0) goto L28
            java.lang.String[] r0 = r5.splitSourceDirs
            int r0 = r0.length
            int r0 = r0 + r2
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r3 = r5.sourceDir
            r0[r1] = r3
            java.lang.String[] r3 = r5.splitSourceDirs
            java.lang.String[] r5 = r5.splitSourceDirs
            int r5 = r5.length
            java.lang.System.arraycopy(r3, r1, r0, r2, r5)
            return r0
        L28:
            java.lang.String[] r0 = new java.lang.String[r2]
            java.lang.String r5 = r5.sourceDir
            r0[r1] = r5
            return r0
    }

    @Override
    public void a(android.content.Context r10, java.lang.String[] r11, java.lang.String r12, java.io.File r13, com.igexin.a.i r14) {
            r9 = this;
            r0 = 0
            com.igexin.a.b r10 = r9.a(r10, r11, r12, r14)     // Catch: java.lang.Throwable -> La3
            if (r10 == 0) goto L9a
            r11 = 0
            r1 = r11
        L9:
            int r2 = r1 + 1
            r3 = 5
            if (r1 >= r3) goto L89
            java.lang.String r1 = "Found %s! Extracting..."
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> La0
            r4[r11] = r12     // Catch: java.lang.Throwable -> La0
            r14.a(r1, r4)     // Catch: java.lang.Throwable -> La0
            boolean r1 = r13.exists()     // Catch: java.io.IOException -> L87 java.lang.Throwable -> La0
            if (r1 != 0) goto L26
            boolean r1 = r13.createNewFile()     // Catch: java.io.IOException -> L87 java.lang.Throwable -> La0
            if (r1 != 0) goto L26
            goto L87
        L26:
            java.util.zip.ZipFile r1 = r10.a     // Catch: java.lang.Throwable -> L72 java.io.IOException -> L7b java.io.FileNotFoundException -> L81
            java.util.zip.ZipEntry r4 = r10.b     // Catch: java.lang.Throwable -> L72 java.io.IOException -> L7b java.io.FileNotFoundException -> L81
            java.io.InputStream r1 = r1.getInputStream(r4)     // Catch: java.lang.Throwable -> L72 java.io.IOException -> L7b java.io.FileNotFoundException -> L81
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6e java.io.FileNotFoundException -> L70
            r4.<init>(r13)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6e java.io.FileNotFoundException -> L70
            long r5 = r9.a(r1, r4)     // Catch: java.lang.Throwable -> L68 java.io.IOException -> L7d java.io.FileNotFoundException -> L83
            java.io.FileDescriptor r7 = r4.getFD()     // Catch: java.lang.Throwable -> L68 java.io.IOException -> L7d java.io.FileNotFoundException -> L83
            r7.sync()     // Catch: java.lang.Throwable -> L68 java.io.IOException -> L7d java.io.FileNotFoundException -> L83
            long r7 = r13.length()     // Catch: java.lang.Throwable -> L68 java.io.IOException -> L7d java.io.FileNotFoundException -> L83
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 == 0) goto L4d
            r9.a(r1)     // Catch: java.lang.Throwable -> La0
        L49:
            r9.a(r4)     // Catch: java.lang.Throwable -> La0
            goto L87
        L4d:
            r9.a(r1)     // Catch: java.lang.Throwable -> La0
            r9.a(r4)     // Catch: java.lang.Throwable -> La0
            r13.setReadable(r3, r11)     // Catch: java.lang.Throwable -> La0
            r13.setExecutable(r3, r11)     // Catch: java.lang.Throwable -> La0
            r13.setWritable(r3)     // Catch: java.lang.Throwable -> La0
            if (r10 == 0) goto L67
            java.util.zip.ZipFile r11 = r10.a     // Catch: java.io.IOException -> L67
            if (r11 == 0) goto L67
            java.util.zip.ZipFile r10 = r10.a     // Catch: java.io.IOException -> L67
            r10.close()     // Catch: java.io.IOException -> L67
        L67:
            return
        L68:
            r11 = move-exception
            goto L6c
        L6a:
            r11 = move-exception
            r4 = r0
        L6c:
            r0 = r1
            goto L74
        L6e:
            r4 = r0
            goto L7d
        L70:
            r4 = r0
            goto L83
        L72:
            r11 = move-exception
            r4 = r0
        L74:
            r9.a(r0)     // Catch: java.lang.Throwable -> La0
            r9.a(r4)     // Catch: java.lang.Throwable -> La0
            throw r11     // Catch: java.lang.Throwable -> La0
        L7b:
            r1 = r0
            r4 = r1
        L7d:
            r9.a(r1)     // Catch: java.lang.Throwable -> La0
            goto L49
        L81:
            r1 = r0
            r4 = r1
        L83:
            r9.a(r1)     // Catch: java.lang.Throwable -> La0
            goto L49
        L87:
            r1 = r2
            goto L9
        L89:
            java.lang.String r11 = "FATAL! Couldn't extract the library from the APK!"
            r14.a(r11)     // Catch: java.lang.Throwable -> La0
            if (r10 == 0) goto L99
            java.util.zip.ZipFile r11 = r10.a     // Catch: java.io.IOException -> L99
            if (r11 == 0) goto L99
            java.util.zip.ZipFile r10 = r10.a     // Catch: java.io.IOException -> L99
            r10.close()     // Catch: java.io.IOException -> L99
        L99:
            return
        L9a:
            com.igexin.a.c r11 = new com.igexin.a.c     // Catch: java.lang.Throwable -> La0
            r11.<init>(r12)     // Catch: java.lang.Throwable -> La0
            throw r11     // Catch: java.lang.Throwable -> La0
        La0:
            r11 = move-exception
            r0 = r10
            goto La4
        La3:
            r11 = move-exception
        La4:
            if (r0 == 0) goto Laf
            java.util.zip.ZipFile r10 = r0.a     // Catch: java.io.IOException -> Laf
            if (r10 == 0) goto Laf
            java.util.zip.ZipFile r10 = r0.a     // Catch: java.io.IOException -> Laf
            r10.close()     // Catch: java.io.IOException -> Laf
        Laf:
            throw r11
    }
}
