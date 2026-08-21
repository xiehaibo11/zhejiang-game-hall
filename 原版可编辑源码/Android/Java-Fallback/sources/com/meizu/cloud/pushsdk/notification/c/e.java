package com.meizu.cloud.pushsdk.notification.c;

public class e {
    private final java.io.File a;
    private final java.io.File b;
    private final java.lang.String c;

    public e(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r1.a = r0
            java.io.File r2 = new java.io.File
            r2.<init>(r3)
            r1.b = r2
            java.lang.String r2 = r2.getAbsolutePath()
            r1.c = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Extract mInput file = "
            r2.append(r3)
            java.io.File r3 = r1.a
            java.lang.String r3 = r3.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ZipExtractTask"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "Extract mOutput file = "
            r2.append(r0)
            java.io.File r0 = r1.b
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            return
    }

    private int a(java.io.InputStream r10, java.io.OutputStream r11) {
            r9 = this;
            java.lang.String r0 = "in.close() IOException e="
            java.lang.String r1 = "out.close() IOException e="
            java.lang.String r2 = "ZipExtractTask"
            r3 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r3]
            java.io.BufferedInputStream r5 = new java.io.BufferedInputStream
            r5.<init>(r10, r3)
            java.io.BufferedOutputStream r10 = new java.io.BufferedOutputStream
            r10.<init>(r11, r3)
            r11 = 0
            r6 = r11
        L16:
            int r7 = r5.read(r4, r11, r3)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            r8 = -1
            if (r7 == r8) goto L22
            r10.write(r4, r11, r7)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            int r6 = r6 + r7
            goto L16
        L22:
            r10.flush()     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            r10.close()     // Catch: java.io.IOException -> L29
            goto L40
        L29:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r1)
            java.lang.String r10 = r10.toString()
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r10)
        L40:
            r5.close()     // Catch: java.io.IOException -> L44
            goto L9d
        L44:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
        L4a:
            r11.append(r0)
            java.lang.String r10 = r10.toString()
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r10)
            goto L9d
        L5c:
            r11 = move-exception
            goto L9e
        L5e:
            r11 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r3.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = "Extracted IOException:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L5c
            r3.append(r11)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r11 = r3.toString()     // Catch: java.lang.Throwable -> L5c
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r11)     // Catch: java.lang.Throwable -> L5c
            r10.close()     // Catch: java.io.IOException -> L7b
            goto L92
        L7b:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r1)
            java.lang.String r10 = r10.toString()
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r10)
        L92:
            r5.close()     // Catch: java.io.IOException -> L96
            goto L9d
        L96:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            goto L4a
        L9d:
            return r6
        L9e:
            r10.close()     // Catch: java.io.IOException -> La2
            goto Lb9
        La2:
            r10 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r10 = r10.toString()
            r3.append(r10)
            java.lang.String r10 = r3.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r10)
        Lb9:
            r5.close()     // Catch: java.io.IOException -> Lbd
            goto Ld4
        Lbd:
            r10 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r10 = r10.toString()
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r10)
        Ld4:
            throw r11
    }

    private void b() {
            r4 = this;
            java.io.File r0 = r4.a
            if (r0 == 0) goto L3b
            boolean r0 = r0.exists()
            if (r0 == 0) goto L3b
            java.io.File r0 = r4.a
            boolean r0 = r0.delete()
            java.lang.String r1 = " after extracted."
            java.lang.String r2 = "ZipExtractTask"
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "Delete file:"
            goto L25
        L1e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "Can't delete file:"
        L25:
            r0.append(r3)
            java.io.File r3 = r4.a
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
        L3b:
            return
    }

    private long c() {
            r18 = this;
            r1 = r18
            java.lang.String r2 = "/"
            java.lang.String r3 = "Extracted IOException:"
            java.lang.String r4 = "ZipExtractTask"
            long r5 = android.os.SystemClock.currentThreadTimeMillis()
            r7 = 0
            r8 = 0
            r9 = 0
            java.util.zip.ZipFile r11 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135 java.io.IOException -> L15f java.util.zip.ZipException -> L186
            java.io.File r0 = r1.a     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135 java.io.IOException -> L15f java.util.zip.ZipException -> L186
            r11.<init>(r0)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L135 java.io.IOException -> L15f java.util.zip.ZipException -> L186
            java.util.Enumeration r0 = r11.entries()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
        L1b:
            boolean r12 = r0.hasMoreElements()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            if (r12 == 0) goto Ld3
            java.lang.Object r12 = r0.nextElement()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.util.zip.ZipEntry r12 = (java.util.zip.ZipEntry) r12     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            boolean r13 = r12.isDirectory()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            if (r13 == 0) goto L2e
            goto L1b
        L2e:
            java.lang.String r13 = r12.getName()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            if (r13 == 0) goto L45
            java.lang.String r14 = "../"
            boolean r14 = r13.contains(r14)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            if (r14 != 0) goto L3d
            goto L45
        L3d:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r12 = "Unsafe zip file"
            r0.<init>(r12)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            throw r0     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
        L45:
            if (r7 != 0) goto L6b
            if (r13 == 0) goto L6b
            java.lang.String[] r14 = r13.split(r2)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r7 = r14[r8]     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r14.<init>()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r15 = "Extract temp directory="
            r14.append(r15)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.io.File r15 = r1.b     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r14.append(r15)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r14.append(r2)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r14.append(r7)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r14)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
        L6b:
            if (r13 == 0) goto L1b
            java.io.File r14 = new java.io.File     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.io.File r15 = r1.b     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r14.<init>(r15, r13)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.io.File r13 = r14.getParentFile()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            boolean r13 = r13.exists()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            if (r13 != 0) goto Lbf
            java.io.File r13 = r14.getParentFile()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            boolean r13 = r13.mkdirs()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            if (r13 == 0) goto La5
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r13.<init>()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r15 = "Make Destination directory="
            r13.append(r15)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.io.File r15 = r14.getParentFile()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r15 = r15.getAbsolutePath()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r13.append(r15)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
        La1:
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r13)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            goto Lbf
        La5:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r13.<init>()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r15 = "Can't make destination directory="
            r13.append(r15)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.io.File r15 = r14.getParentFile()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r15 = r15.getAbsolutePath()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r13.append(r15)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            goto La1
        Lbf:
            java.io.FileOutputStream r13 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r13.<init>(r14)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.io.InputStream r12 = r11.getInputStream(r12)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            int r12 = r1.a(r12, r13)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            long r14 = (long) r12     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            long r9 = r9 + r14
            r13.close()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            goto L1b
        Ld3:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r0.<init>()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.io.File r12 = r1.b     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r0.append(r12)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r0.append(r2)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r0.append(r7)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            java.lang.String r12 = r1.c     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            boolean r12 = r12.equals(r0)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            if (r12 != 0) goto Lf5
            java.lang.String r12 = r1.c     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            com.meizu.cloud.pushsdk.notification.c.a.a(r0, r12)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119 java.io.IOException -> L121 java.util.zip.ZipException -> L129
            r8 = 1
        Lf5:
            r11.close()     // Catch: java.io.IOException -> Lfa
            goto L1c1
        Lfa:
            r0 = move-exception
            r11 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = r11.toString()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)
            goto L1c1
        L114:
            r0 = move-exception
            r2 = r0
            r7 = r11
            goto L201
        L119:
            r0 = move-exception
            r16 = r9
            r9 = r7
            r7 = r11
            r10 = r16
            goto L138
        L121:
            r0 = move-exception
            r16 = r9
            r9 = r7
            r7 = r11
            r10 = r16
            goto L162
        L129:
            r0 = move-exception
            r16 = r9
            r9 = r7
            r7 = r11
            r10 = r16
            goto L189
        L131:
            r0 = move-exception
            r2 = r0
            goto L201
        L135:
            r0 = move-exception
            r10 = r9
            r9 = r7
        L138:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L131
            r12.<init>()     // Catch: java.lang.Throwable -> L131
            java.lang.String r13 = "Extracted Exception "
            r12.append(r13)     // Catch: java.lang.Throwable -> L131
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L131
            r12.append(r0)     // Catch: java.lang.Throwable -> L131
            java.lang.String r0 = r12.toString()     // Catch: java.lang.Throwable -> L131
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)     // Catch: java.lang.Throwable -> L131
            if (r7 == 0) goto L1bf
            r7.close()     // Catch: java.io.IOException -> L157
            goto L1bf
        L157:
            r0 = move-exception
            r7 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            goto L1ae
        L15f:
            r0 = move-exception
            r10 = r9
            r9 = r7
        L162:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L131
            r12.<init>()     // Catch: java.lang.Throwable -> L131
            r12.append(r3)     // Catch: java.lang.Throwable -> L131
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L131
            r12.append(r0)     // Catch: java.lang.Throwable -> L131
            java.lang.String r0 = r12.toString()     // Catch: java.lang.Throwable -> L131
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)     // Catch: java.lang.Throwable -> L131
            if (r7 == 0) goto L1bf
            r7.close()     // Catch: java.io.IOException -> L17e
            goto L1bf
        L17e:
            r0 = move-exception
            r7 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            goto L1ae
        L186:
            r0 = move-exception
            r10 = r9
            r9 = r7
        L189:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L131
            r12.<init>()     // Catch: java.lang.Throwable -> L131
            java.lang.String r13 = "ZipException :"
            r12.append(r13)     // Catch: java.lang.Throwable -> L131
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L131
            r12.append(r0)     // Catch: java.lang.Throwable -> L131
            java.lang.String r0 = r12.toString()     // Catch: java.lang.Throwable -> L131
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)     // Catch: java.lang.Throwable -> L131
            if (r7 == 0) goto L1bf
            r7.close()     // Catch: java.io.IOException -> L1a7
            goto L1bf
        L1a7:
            r0 = move-exception
            r7 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L1ae:
            r0.append(r3)
            java.lang.String r3 = r7.toString()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)
        L1bf:
            r7 = r9
            r9 = r10
        L1c1:
            long r11 = android.os.SystemClock.currentThreadTimeMillis()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "Extract file "
            r0.append(r3)
            java.io.File r3 = r1.a
            r0.append(r3)
            java.lang.String r3 = ", UseTime ="
            r0.append(r3)
            long r11 = r11 - r5
            r0.append(r11)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r4, r0)
            if (r8 == 0) goto L1fd
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r3 = r1.b
            r0.append(r3)
            r0.append(r2)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushsdk.notification.c.a.b(r0)
        L1fd:
            r18.b()
            return r9
        L201:
            if (r7 == 0) goto L21f
            r7.close()     // Catch: java.io.IOException -> L207
            goto L21f
        L207:
            r0 = move-exception
            r5 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = r5.toString()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r0)
        L21f:
            throw r2
    }

    public boolean a() {
            r4 = this;
            long r0 = r4.c()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }
}
