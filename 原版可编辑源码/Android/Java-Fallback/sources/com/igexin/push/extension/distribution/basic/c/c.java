package com.igexin.push.extension.distribution.basic.c;

public class c {
    private static final java.lang.String a = null;
    private static com.igexin.push.extension.distribution.basic.c.c d;
    private com.igexin.push.extension.distribution.basic.e.a b;
    private android.content.Context c;
    private final java.lang.String e;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EXT-"
            r0.append(r1)
            java.lang.Class<com.igexin.push.extension.distribution.basic.c.c> r1 = com.igexin.push.extension.distribution.basic.c.c.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.extension.distribution.basic.c.c.a = r0
            return
    }

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            java.lang.String r1 = "/sdcard/libs//com.getui.sdk.deviceId.db"
            r0.e = r1
            return
    }

    public static com.igexin.push.extension.distribution.basic.c.c a() {
            com.igexin.push.extension.distribution.basic.c.c r0 = com.igexin.push.extension.distribution.basic.c.c.d
            if (r0 != 0) goto Ld
            com.igexin.push.extension.distribution.basic.c.c r0 = new com.igexin.push.extension.distribution.basic.c.c
            android.content.Context r1 = com.igexin.push.extension.distribution.basic.c.e.a
            r0.<init>(r1)
            com.igexin.push.extension.distribution.basic.c.c.d = r0
        Ld:
            com.igexin.push.extension.distribution.basic.c.c r0 = com.igexin.push.extension.distribution.basic.c.c.d
            return r0
    }

    private void a(java.io.File r6) {
            r5 = this;
            java.io.File[] r0 = r6.listFiles()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L27
            r3 = r0[r2]
        La:
            boolean r4 = r3.exists()
            if (r4 == 0) goto L24
            boolean r4 = r3.isFile()
            if (r4 == 0) goto L1a
            r3.delete()
            goto La
        L1a:
            boolean r4 = r3.delete()
            if (r4 != 0) goto La
            r5.a(r3)
            goto La
        L24:
            int r2 = r2 + 1
            goto L6
        L27:
            r6.delete()
            return
    }

    private void b(java.lang.String r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.c.c.a
            r0.append(r1)
            java.lang.String r1 = "|save deviceId = "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = " to "
            r0.append(r1)
            java.lang.String r1 = r5.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            java.util.concurrent.locks.ReentrantReadWriteLock r0 = new java.util.concurrent.locks.ReentrantReadWriteLock
            r0.<init>()
            java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock r0 = r0.writeLock()
            r2 = 0
            boolean r3 = r0.tryLock()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            if (r3 == 0) goto L9e
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.String r4 = r5.e     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r3.<init>(r4)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            boolean r4 = r3.exists()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            if (r4 != 0) goto L71
            boolean r4 = r3.createNewFile()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            if (r4 != 0) goto L71
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r6.<init>()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.String r4 = com.igexin.push.extension.distribution.basic.c.c.a     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r6.append(r4)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.String r4 = "|create file "
            r6.append(r4)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r6.append(r3)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.String r3 = " failed"
            r6.append(r3)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            com.igexin.b.a.c.b.a(r6, r3)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r0.unlock()
            return
        L71:
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.String r4 = r5.e     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            r3.<init>(r4)     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> La9
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            r2.<init>()     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            java.lang.String r4 = "V1|"
            r2.append(r4)     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            r2.append(r6)     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            java.lang.String r2 = "utf-8"
            byte[] r6 = r6.getBytes(r2)     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            byte[] r6 = com.igexin.b.b.a.b(r6)     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            r3.write(r6)     // Catch: java.lang.Throwable -> L98 java.lang.Exception -> L9b
            r2 = r3
            goto L9e
        L98:
            r6 = move-exception
            r2 = r3
            goto Lcd
        L9b:
            r6 = move-exception
            r2 = r3
            goto Laa
        L9e:
            if (r2 == 0) goto La3
        La0:
            r2.close()     // Catch: java.lang.Exception -> La3
        La3:
            r0.unlock()
            goto Lcc
        La7:
            r6 = move-exception
            goto Lcd
        La9:
            r6 = move-exception
        Laa:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
            r3.<init>()     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = com.igexin.push.extension.distribution.basic.c.c.a     // Catch: java.lang.Throwable -> La7
            r3.append(r4)     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = "|"
            r3.append(r4)     // Catch: java.lang.Throwable -> La7
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> La7
            r3.append(r6)     // Catch: java.lang.Throwable -> La7
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> La7
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> La7
            com.igexin.b.a.c.b.a(r6, r1)     // Catch: java.lang.Throwable -> La7
            if (r2 == 0) goto La3
            goto La0
        Lcc:
            return
        Lcd:
            if (r2 == 0) goto Ld2
            r2.close()     // Catch: java.lang.Exception -> Ld2
        Ld2:
            r0.unlock()
            throw r6
    }

    private void c(java.lang.String r4) {
            r3 = this;
            com.igexin.push.extension.distribution.basic.e.b r0 = com.igexin.push.extension.distribution.basic.c.e.l     // Catch: java.lang.Throwable -> L29
            boolean r0 = r0.a()     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L29
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L29
            r0.<init>()     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = "id"
            r2 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L29
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = "value"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L29
            com.igexin.push.extension.distribution.basic.e.b r4 = com.igexin.push.extension.distribution.basic.c.e.l     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = "runtime"
            r2 = 0
            r4.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L29
            com.igexin.push.extension.distribution.basic.e.b r4 = com.igexin.push.extension.distribution.basic.c.e.l     // Catch: java.lang.Throwable -> L29
            r4.close()     // Catch: java.lang.Throwable -> L29
        L29:
            return
    }

    private java.lang.String g() {
            r7 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r7.e
            r0.<init>(r1)
            boolean r0 = r0.exists()
            r1 = 0
            if (r0 == 0) goto L76
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L6c
            java.lang.String r3 = r7.e     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L6c
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L6c
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5d
            r3.<init>()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5d
        L1e:
            int r4 = r2.read(r0)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            r5 = -1
            r6 = 0
            if (r4 == r5) goto L2a
            r3.write(r0, r6, r4)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            goto L1e
        L2a:
            byte[] r0 = r3.toByteArray()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            byte[] r0 = com.igexin.b.b.a.c(r0)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            java.lang.String r5 = "utf-8"
            r4.<init>(r0, r5)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            java.lang.String r0 = "\\|"
            java.lang.String[] r0 = r4.split(r0)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            int r4 = r0.length     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            r5 = 1
            if (r4 <= r5) goto L50
            java.lang.String r4 = "V1"
            r6 = r0[r6]     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            if (r4 == 0) goto L50
            r0 = r0[r5]     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            r1 = r0
        L50:
            r2.close()     // Catch: java.lang.Exception -> L53
        L53:
            r3.close()     // Catch: java.lang.Exception -> L76
            goto L76
        L57:
            r0 = move-exception
            goto L5b
        L59:
            r0 = move-exception
            r3 = r1
        L5b:
            r1 = r2
            goto L61
        L5d:
            r3 = r1
            goto L6e
        L5f:
            r0 = move-exception
            r3 = r1
        L61:
            if (r1 == 0) goto L66
            r1.close()     // Catch: java.lang.Exception -> L66
        L66:
            if (r3 == 0) goto L6b
            r3.close()     // Catch: java.lang.Exception -> L6b
        L6b:
            throw r0
        L6c:
            r2 = r1
            r3 = r2
        L6e:
            if (r2 == 0) goto L73
            r2.close()     // Catch: java.lang.Exception -> L73
        L73:
            if (r3 == 0) goto L76
            goto L53
        L76:
            return r1
    }

    public java.lang.String a(java.lang.String r12) {
            r11 = this;
            java.lang.String r0 = "imageurl"
            java.lang.String r1 = ""
            com.igexin.push.extension.distribution.basic.e.a r2 = r11.b()
            r11.b = r2
            r8 = 0
            java.lang.String r3 = "image"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r9 = 1
            java.lang.String[] r5 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r10 = 0
            r5[r10] = r12     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r6 = 0
            r7 = 0
            android.database.Cursor r8 = r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            if (r8 == 0) goto L82
        L1f:
            r2 = r1
        L20:
            boolean r3 = r8.moveToNext()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            if (r3 == 0) goto L7e
            java.lang.String r3 = "imagesrc"
            int r3 = r8.getColumnIndexOrThrow(r3)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            java.lang.String r2 = r8.getString(r3)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            r3.<init>(r2)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            boolean r4 = r3.exists()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            if (r4 == 0) goto L41
            boolean r3 = r3.canRead()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            if (r3 != 0) goto L20
        L41:
            com.igexin.push.extension.distribution.basic.e.a r2 = r11.b     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r3 = "image"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String[] r5 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r5[r10] = r12     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r2.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            android.content.Context r2 = r11.c     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r3 = "android.permission.WRITE_EXTERNAL_STORAGE"
            android.content.Context r4 = r11.c     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            int r2 = r2.checkPermission(r3, r4)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            if (r2 == 0) goto L1f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r2.<init>()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            android.content.Context r3 = r11.c     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.io.File r3 = r3.getCacheDir()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r3 = "/ImgCache/"
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            com.igexin.push.extension.distribution.basic.c.e.k = r2     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            goto L1f
        L7e:
            r1 = r2
            goto L82
        L80:
            r1 = r2
            goto L8f
        L82:
            if (r8 == 0) goto L92
        L84:
            r8.close()
            goto L92
        L88:
            r12 = move-exception
            if (r8 == 0) goto L8e
            r8.close()
        L8e:
            throw r12
        L8f:
            if (r8 == 0) goto L92
            goto L84
        L92:
            return r1
    }

    public com.igexin.push.extension.distribution.basic.e.a b() {
            r2 = this;
            com.igexin.push.extension.distribution.basic.e.a r0 = r2.b
            if (r0 != 0) goto Ld
            com.igexin.push.extension.distribution.basic.e.a r0 = new com.igexin.push.extension.distribution.basic.e.a
            android.content.Context r1 = r2.c
            r0.<init>(r1)
            r2.b = r0
        Ld:
            com.igexin.push.extension.distribution.basic.e.a r0 = r2.b
            return r0
    }

    public void c() {
            r9 = this;
            java.lang.String r0 = "image"
            java.lang.String r1 = "taskid"
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 604800000(0x240c8400, double:2.988109026E-315)
            long r2 = r2 - r4
            r4 = 0
            com.igexin.push.extension.distribution.basic.e.a r5 = r9.b()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String[] r6 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r7.<init>()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String r8 = "createtime <= "
            r7.append(r8)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r7.append(r2)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            android.database.Cursor r4 = r5.a(r0, r6, r2)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            if (r4 == 0) goto L6f
        L30:
            boolean r2 = r4.moveToNext()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            if (r2 == 0) goto L6f
            int r2 = r4.getColumnIndexOrThrow(r1)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            com.igexin.push.extension.distribution.basic.e.a r3 = r9.b()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String[] r5 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r7 = 0
            r6[r7] = r2     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r3.a(r0, r5, r6)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r3.<init>()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String r5 = com.igexin.push.extension.distribution.basic.c.e.k     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r3.append(r5)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r3.append(r2)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            boolean r2 = r3.exists()     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            if (r2 == 0) goto L30
            r9.a(r3)     // Catch: java.lang.Throwable -> L72 java.lang.Exception -> L79
            goto L30
        L6f:
            if (r4 == 0) goto L7e
            goto L7b
        L72:
            r0 = move-exception
            if (r4 == 0) goto L78
            r4.close()
        L78:
            throw r0
        L79:
            if (r4 == 0) goto L7e
        L7b:
            r4.close()
        L7e:
            return
    }

    public void d() {
            r5 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.igexin.push.core.CoreConsts.q
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Le
            return
        Le:
            com.igexin.push.extension.distribution.basic.c.d r1 = new com.igexin.push.extension.distribution.basic.c.d
            r1.<init>(r5)
            java.io.File[] r0 = r0.listFiles(r1)
            int r1 = r0.length
            r2 = 0
        L19:
            if (r2 >= r1) goto L29
            r3 = r0[r2]
            boolean r4 = r3.exists()
            if (r4 == 0) goto L26
            r5.a(r3)
        L26:
            int r2 = r2 + 1
            goto L19
        L29:
            return
    }

    public void e() {
            r4 = this;
            java.lang.String r0 = r4.g()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.c.c.a
            r1.append(r2)
            java.lang.String r2 = "|read from com.getui.sdk.deviceId.db = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = "; CoreRuntimeInfo.deviceId = "
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.A
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r3)
            if (r0 == 0) goto L3a
            java.lang.String r1 = com.igexin.push.core.d.A
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L5c
            com.igexin.push.core.d.A = r0
            r4.c(r0)
            goto L5c
        L3a:
            java.lang.String r0 = com.igexin.push.core.d.A
            if (r0 == 0) goto L44
            java.lang.String r0 = com.igexin.push.core.d.A
            r4.b(r0)
            goto L5c
        L44:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.c.c.a
            r0.append(r1)
            java.lang.String r1 = "|updateDeviceId new file deviceId and CoreRuntimeInfo deviceId is null return"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r0, r1)
        L5c:
            return
    }

    public void f() {
            r0 = this;
            return
    }
}
