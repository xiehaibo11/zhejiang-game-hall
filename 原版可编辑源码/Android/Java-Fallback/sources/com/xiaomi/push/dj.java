package com.xiaomi.push;

public class dj implements com.xiaomi.channel.commonutils.logger.LoggerInterface {
    private static volatile com.xiaomi.push.dj a;
    public static java.lang.String a;
    private static final java.text.SimpleDateFormat a = null;
    private static java.util.List<android.util.Pair<java.lang.String, java.lang.Throwable>> a;
    private android.content.Context a;
    private android.os.Handler a;
    private java.lang.String b;
    private java.lang.String c;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss aaa"
            r0.<init>(r1)
            com.xiaomi.push.dj.a = r0
            java.lang.String r0 = "/MiPushLog"
            com.xiaomi.push.dj.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            com.xiaomi.push.dj.a = r0
            return
    }

    private dj(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.c = r0
            r1.a = r2
            android.content.Context r0 = r2.getApplicationContext()
            if (r0 == 0) goto L15
            android.content.Context r2 = r2.getApplicationContext()
            r1.a = r2
        L15:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r0 = r1.a
            java.lang.String r0 = r0.getPackageName()
            r2.append(r0)
            java.lang.String r0 = "-"
            r2.append(r0)
            int r0 = android.os.Process.myPid()
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.b = r2
            android.os.HandlerThread r2 = new android.os.HandlerThread
            java.lang.String r0 = "Log2FileHandlerThread"
            r2.<init>(r0)
            r2.start()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r2 = r2.getLooper()
            r0.<init>(r2)
            r1.a = r0
            return
    }

    public static com.xiaomi.push.dj a(android.content.Context r2) {
            com.xiaomi.push.dj r0 = com.xiaomi.push.dj.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.dj> r0 = com.xiaomi.push.dj.class
            monitor-enter(r0)
            com.xiaomi.push.dj r1 = com.xiaomi.push.dj.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.dj r1 = new com.xiaomi.push.dj     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.dj.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.dj r2 = com.xiaomi.push.dj.a
            return r2
    }

    static java.lang.String a(com.xiaomi.push.dj r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    static java.text.SimpleDateFormat a() {
            java.text.SimpleDateFormat r0 = com.xiaomi.push.dj.a
            return r0
    }

    static java.util.List a() {
            java.util.List<android.util.Pair<java.lang.String, java.lang.Throwable>> r0 = com.xiaomi.push.dj.a
            return r0
    }

    private void a() {
            r11 = this;
            java.lang.String r0 = "log1.txt"
            java.lang.String r1 = ""
            r2 = 0
            java.lang.String r3 = r11.c     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            if (r3 == 0) goto L2a
            android.content.Context r3 = r11.a     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.io.File r3 = r3.getExternalFilesDir(r2)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            if (r3 == 0) goto L2a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r4.<init>()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r3 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r4.append(r3)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r4.append(r1)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r11.c = r3     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
        L2a:
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r4.<init>()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r5 = r11.c     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r4.append(r5)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r5 = com.xiaomi.push.dj.a     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r4.append(r5)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            boolean r4 = r3.exists()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            if (r4 == 0) goto L4e
            boolean r4 = r3.isDirectory()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            if (r4 != 0) goto L5c
        L4e:
            boolean r4 = r3.mkdirs()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            if (r4 != 0) goto L5c
            java.lang.String r0 = r11.b     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r3 = "Create mipushlog directory fail."
            android.util.Log.w(r0, r3)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            return
        L5c:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r5 = "log.lock"
            r4.<init>(r3, r5)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            boolean r5 = r4.exists()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            if (r5 == 0) goto L6f
            boolean r5 = r4.isDirectory()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            if (r5 == 0) goto L72
        L6f:
            r4.createNewFile()     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
        L72:
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.lang.String r6 = "rw"
            r5.<init>(r4, r6)     // Catch: java.lang.Throwable -> L149 java.lang.Exception -> L14d
            java.nio.channels.FileChannel r4 = r5.getChannel()     // Catch: java.lang.Throwable -> L143 java.lang.Exception -> L146
            java.nio.channels.FileLock r4 = r4.lock()     // Catch: java.lang.Throwable -> L143 java.lang.Exception -> L146
            java.io.BufferedWriter r6 = new java.io.BufferedWriter     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            java.io.OutputStreamWriter r7 = new java.io.OutputStreamWriter     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            java.io.FileOutputStream r8 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            java.io.File r9 = new java.io.File     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            r9.<init>(r3, r0)     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            r10 = 1
            r8.<init>(r9, r10)     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            r7.<init>(r8)     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            r6.<init>(r7)     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
        L96:
            java.util.List<android.util.Pair<java.lang.String, java.lang.Throwable>> r7 = com.xiaomi.push.dj.a     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            boolean r7 = r7.isEmpty()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            if (r7 != 0) goto Lea
            java.util.List<android.util.Pair<java.lang.String, java.lang.Throwable>> r7 = com.xiaomi.push.dj.a     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r8 = 0
            java.lang.Object r7 = r7.remove(r8)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            android.util.Pair r7 = (android.util.Pair) r7     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.Object r8 = r7.first     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.Object r9 = r7.second     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r10 = "\n"
            if (r9 == 0) goto Ld7
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.append(r8)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.append(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.append(r8)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.Object r7 = r7.second     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.Throwable r7 = (java.lang.Throwable) r7     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r7 = android.util.Log.getStackTraceString(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r9.append(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
        Ld7:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r7.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r7.append(r8)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r7.append(r10)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r6.write(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            goto L96
        Lea:
            r6.flush()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            r6.close()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L13e
            java.io.File r6 = new java.io.File     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            r6.<init>(r3, r0)     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            long r7 = r6.length()     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            r9 = 1048576(0x100000, double:5.180654E-318)
            int r0 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r0 < 0) goto L119
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            java.lang.String r7 = "log0.txt"
            r0.<init>(r3, r7)     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            boolean r3 = r0.exists()     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            if (r3 == 0) goto L116
            boolean r3 = r0.isFile()     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
            if (r3 == 0) goto L116
            r0.delete()     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
        L116:
            r6.renameTo(r0)     // Catch: java.lang.Exception -> L141 java.lang.Throwable -> L180
        L119:
            if (r2 == 0) goto L125
            r2.close()     // Catch: java.io.IOException -> L11f
            goto L125
        L11f:
            r0 = move-exception
            java.lang.String r2 = r11.b
            android.util.Log.e(r2, r1, r0)
        L125:
            if (r4 == 0) goto L137
            boolean r0 = r4.isValid()
            if (r0 == 0) goto L137
            r4.release()     // Catch: java.io.IOException -> L131
            goto L137
        L131:
            r0 = move-exception
            java.lang.String r2 = r11.b
            android.util.Log.e(r2, r1, r0)
        L137:
            r5.close()     // Catch: java.io.IOException -> L179
            goto L17f
        L13b:
            r0 = move-exception
            r2 = r6
            goto L181
        L13e:
            r0 = move-exception
            r2 = r6
            goto L150
        L141:
            r0 = move-exception
            goto L150
        L143:
            r0 = move-exception
            r4 = r2
            goto L181
        L146:
            r0 = move-exception
            r4 = r2
            goto L150
        L149:
            r0 = move-exception
            r4 = r2
            r5 = r4
            goto L181
        L14d:
            r0 = move-exception
            r4 = r2
            r5 = r4
        L150:
            java.lang.String r3 = r11.b     // Catch: java.lang.Throwable -> L180
            android.util.Log.e(r3, r1, r0)     // Catch: java.lang.Throwable -> L180
            if (r2 == 0) goto L161
            r2.close()     // Catch: java.io.IOException -> L15b
            goto L161
        L15b:
            r0 = move-exception
            java.lang.String r2 = r11.b
            android.util.Log.e(r2, r1, r0)
        L161:
            if (r4 == 0) goto L173
            boolean r0 = r4.isValid()
            if (r0 == 0) goto L173
            r4.release()     // Catch: java.io.IOException -> L16d
            goto L173
        L16d:
            r0 = move-exception
            java.lang.String r2 = r11.b
            android.util.Log.e(r2, r1, r0)
        L173:
            if (r5 == 0) goto L17f
            r5.close()     // Catch: java.io.IOException -> L179
            goto L17f
        L179:
            r0 = move-exception
            java.lang.String r2 = r11.b
            android.util.Log.e(r2, r1, r0)
        L17f:
            return
        L180:
            r0 = move-exception
        L181:
            if (r2 == 0) goto L18d
            r2.close()     // Catch: java.io.IOException -> L187
            goto L18d
        L187:
            r2 = move-exception
            java.lang.String r3 = r11.b
            android.util.Log.e(r3, r1, r2)
        L18d:
            if (r4 == 0) goto L19f
            boolean r2 = r4.isValid()
            if (r2 == 0) goto L19f
            r4.release()     // Catch: java.io.IOException -> L199
            goto L19f
        L199:
            r2 = move-exception
            java.lang.String r3 = r11.b
            android.util.Log.e(r3, r1, r2)
        L19f:
            if (r5 == 0) goto L1ab
            r5.close()     // Catch: java.io.IOException -> L1a5
            goto L1ab
        L1a5:
            r2 = move-exception
            java.lang.String r3 = r11.b
            android.util.Log.e(r3, r1, r2)
        L1ab:
            throw r0
    }

    static void a(com.xiaomi.push.dj r0) {
            r0.a()
            return
    }

    @Override
    public final void log(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.log(r2, r0)
            return
    }

    @Override
    public final void log(java.lang.String r3, java.lang.Throwable r4) {
            r2 = this;
            android.os.Handler r0 = r2.a
            com.xiaomi.push.dk r1 = new com.xiaomi.push.dk
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    @Override
    public final void setTag(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
