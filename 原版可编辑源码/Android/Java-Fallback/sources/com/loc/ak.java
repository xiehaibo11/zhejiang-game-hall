package com.loc;

public final class ak {
    public static final java.lang.String a = null;
    public static final java.lang.String b = null;
    public static final java.lang.String c = null;

    static {
            java.lang.String r0 = "SYmFja3Vwcw"
            java.lang.String r0 = com.loc.x.c(r0)
            com.loc.ak.a = r0
            java.lang.String r0 = "SLmFkaXU"
            java.lang.String r0 = com.loc.x.c(r0)
            com.loc.ak.b = r0
            java.lang.String r0 = "JIw"
            java.lang.String r0 = com.loc.x.c(r0)
            com.loc.ak.c = r0
            return
    }

    private static java.lang.String a(android.content.Context r9) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 31
            if (r0 >= r1) goto L8f
            android.content.pm.ApplicationInfo r0 = r9.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 30
            if (r0 < r1) goto L16
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L16
            goto L8f
        L16:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 9
            r2 = 0
            if (r0 < r1) goto L26
            java.lang.String r0 = "storage"
            java.lang.Object r9 = r9.getSystemService(r0)
            android.os.storage.StorageManager r9 = (android.os.storage.StorageManager) r9
            goto L27
        L26:
            r9 = r2
        L27:
            java.lang.String r0 = "SYW5kcm9pZC5vcy5zdG9yYWdlLlN0b3JhZ2VWb2x1bWU"
            java.lang.String r0 = com.loc.x.c(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.Class r1 = r9.getClass()     // Catch: java.lang.Throwable -> L86
            java.lang.String r3 = "FZ2V0Vm9sdW1lTGlzdA"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L86
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L86
            java.lang.reflect.Method r1 = r1.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L86
            java.lang.String r3 = "ZZ2V0UGF0aA"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L86
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L86
            java.lang.reflect.Method r3 = r0.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L86
            java.lang.String r5 = "AaXNSZW1vdmFibGUK"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> L86
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L86
            java.lang.reflect.Method r0 = r0.getMethod(r5, r6)     // Catch: java.lang.Throwable -> L86
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L86
            java.lang.Object r9 = r1.invoke(r9, r5)     // Catch: java.lang.Throwable -> L86
            int r1 = java.lang.reflect.Array.getLength(r9)     // Catch: java.lang.Throwable -> L86
            r5 = 0
        L65:
            if (r5 >= r1) goto L85
            java.lang.Object r6 = java.lang.reflect.Array.get(r9, r5)     // Catch: java.lang.Throwable -> L86
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L86
            java.lang.Object r7 = r3.invoke(r6, r7)     // Catch: java.lang.Throwable -> L86
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L86
            java.lang.Object[] r8 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L86
            java.lang.Object r6 = r0.invoke(r6, r8)     // Catch: java.lang.Throwable -> L86
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L86
            boolean r6 = r6.booleanValue()     // Catch: java.lang.Throwable -> L86
            if (r6 != 0) goto L82
            return r7
        L82:
            int r5 = r5 + 1
            goto L65
        L85:
            return r2
        L86:
            java.io.File r9 = android.os.Environment.getExternalStorageDirectory()
        L8a:
            java.lang.String r9 = r9.getAbsolutePath()
            return r9
        L8f:
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r0 = ""
            java.io.File r9 = r9.getExternalFilesDir(r0)
            goto L8a
    }

    public static synchronized void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.loc.ak> r0 = com.loc.ak.class
            monitor-enter(r0)
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lc0
            r2 = 19
            if (r1 < r2) goto L25
            if (r3 == 0) goto L23
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLldSSVRFX0VYVEVSTkFMX1NUT1JBR0U="
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> Lc0
            int r1 = r3.checkCallingOrSelfPermission(r1)     // Catch: java.lang.Throwable -> Lc0
            if (r1 != 0) goto L23
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfRVhURVJOQUxfU1RPUkFHRQ=="
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> Lc0
            int r1 = r3.checkCallingOrSelfPermission(r1)     // Catch: java.lang.Throwable -> Lc0
            if (r1 == 0) goto L25
        L23:
            monitor-exit(r0)
            return
        L25:
            java.lang.String r3 = a(r3)     // Catch: java.lang.Throwable -> Lc0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc0
            if (r1 == 0) goto L31
            monitor-exit(r0)
            return
        L31:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0
            r1.<init>()     // Catch: java.lang.Throwable -> Lc0
            r1.append(r4)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = com.loc.ak.c     // Catch: java.lang.Throwable -> Lc0
            r1.append(r4)     // Catch: java.lang.Throwable -> Lc0
            r1.append(r5)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> Lc0
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0
            r5.<init>()     // Catch: java.lang.Throwable -> Lc0
            r5.append(r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Throwable -> Lc0
            r5.append(r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r3 = com.loc.ak.a     // Catch: java.lang.Throwable -> Lc0
            r5.append(r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Lc0
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> Lc0
            r5.<init>(r3)     // Catch: java.lang.Throwable -> Lc0
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = com.loc.ak.b     // Catch: java.lang.Throwable -> Lc0
            r3.<init>(r5, r1)     // Catch: java.lang.Throwable -> Lc0
            r1 = 0
            boolean r2 = r5.exists()     // Catch: java.lang.Throwable -> Lad
            if (r2 == 0) goto L74
            boolean r2 = r5.isDirectory()     // Catch: java.lang.Throwable -> Lad
            if (r2 == 0) goto L77
        L74:
            r5.mkdirs()     // Catch: java.lang.Throwable -> Lad
        L77:
            r3.createNewFile()     // Catch: java.lang.Throwable -> Lad
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> Lad
            java.lang.String r2 = "rws"
            r5.<init>(r3, r2)     // Catch: java.lang.Throwable -> Lad
            java.nio.channels.FileChannel r3 = r5.getChannel()     // Catch: java.lang.Throwable -> Lab
            java.nio.channels.FileLock r1 = r3.tryLock()     // Catch: java.lang.Throwable -> La9
            if (r1 == 0) goto L98
            java.lang.String r2 = "UTF-8"
            byte[] r4 = r4.getBytes(r2)     // Catch: java.lang.Throwable -> La9
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.wrap(r4)     // Catch: java.lang.Throwable -> La9
            r3.write(r4)     // Catch: java.lang.Throwable -> La9
        L98:
            if (r1 == 0) goto L9f
            r1.release()     // Catch: java.io.IOException -> L9e java.lang.Throwable -> Lc0
            goto L9f
        L9e:
        L9f:
            if (r3 == 0) goto La4
            r3.close()     // Catch: java.io.IOException -> La4 java.lang.Throwable -> Lc0
        La4:
            a(r5)     // Catch: java.lang.Throwable -> Lc0
            monitor-exit(r0)
            return
        La9:
            goto Laf
        Lab:
            r3 = r1
            goto Laf
        Lad:
            r3 = r1
            r5 = r3
        Laf:
            if (r1 == 0) goto Lb6
            r1.release()     // Catch: java.io.IOException -> Lb5 java.lang.Throwable -> Lc0
            goto Lb6
        Lb5:
        Lb6:
            if (r3 == 0) goto Lbb
            r3.close()     // Catch: java.io.IOException -> Lbb java.lang.Throwable -> Lc0
        Lbb:
            a(r5)     // Catch: java.lang.Throwable -> Lc0
            monitor-exit(r0)
            return
        Lc0:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }
}
