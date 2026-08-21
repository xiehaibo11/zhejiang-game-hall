package com.tencent.bugly.proguard;

public final class ap {
    private static java.util.Map<java.lang.String, java.lang.String> a;

    static {
            return
    }

    public static android.content.Context a(android.content.Context r1) {
            if (r1 != 0) goto L3
            return r1
        L3:
            android.content.Context r0 = r1.getApplicationContext()
            if (r0 != 0) goto La
            return r1
        La:
            return r0
    }

    public static android.content.SharedPreferences a(java.lang.String r1, android.content.Context r2) {
            if (r2 == 0) goto L8
            r0 = 0
            android.content.SharedPreferences r1 = r2.getSharedPreferences(r1, r0)
            return r1
        L8:
            r1 = 0
            return r1
    }

    public static java.io.BufferedReader a(java.io.File r4) {
            boolean r0 = r4.exists()
            r1 = 0
            if (r0 == 0) goto L24
            boolean r0 = r4.canRead()
            if (r0 != 0) goto Le
            goto L24
        Le:
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L20
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L20
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L20
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L20
            java.lang.String r4 = "utf-8"
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L20
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L20
            return r0
        L20:
            r4 = move-exception
            com.tencent.bugly.proguard.al.a(r4)
        L24:
            return r1
    }

    public static java.lang.Object a(java.lang.String r1, java.lang.String r2, java.lang.Class<?>[] r3, java.lang.Object[] r4) {
            r0 = 0
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L12
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.Exception -> L12
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Exception -> L12
            java.lang.Object r1 = r1.invoke(r0, r4)     // Catch: java.lang.Exception -> L12
            return r1
        L12:
            return r0
    }

    public static <T> T a(byte[] r3, android.os.Parcelable.Creator<T> r4) {
            android.os.Parcel r0 = android.os.Parcel.obtain()
            int r1 = r3.length
            r2 = 0
            r0.unmarshall(r3, r2, r1)
            r0.setDataPosition(r2)
            java.lang.Object r3 = r4.createFromParcel(r0)     // Catch: java.lang.Throwable -> L16 java.lang.Throwable -> L18
            if (r0 == 0) goto L15
            r0.recycle()
        L15:
            return r3
        L16:
            r3 = move-exception
            goto L23
        L18:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L21
            r0.recycle()
        L21:
            r3 = 0
            return r3
        L23:
            if (r0 == 0) goto L28
            r0.recycle()
        L28:
            throw r3
    }

    public static java.lang.String a() {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = a(r0)
            return r0
    }

    public static java.lang.String a(int r6, java.lang.String r7) {
            java.lang.String r0 = "threadtime"
            java.lang.String r1 = "-v"
            java.lang.String r2 = "-d"
            java.lang.String r3 = "logcat"
            r4 = 0
            if (r7 != 0) goto L10
            java.lang.String[] r7 = new java.lang.String[]{r3, r2, r1, r0}
            goto L27
        L10:
            r5 = 6
            java.lang.String[] r5 = new java.lang.String[r5]
            r5[r4] = r3
            r3 = 1
            r5[r3] = r2
            r2 = 2
            r5[r2] = r1
            r1 = 3
            r5[r1] = r0
            r0 = 4
            java.lang.String r1 = "-s"
            r5[r0] = r1
            r0 = 5
            r5[r0] = r7
            r7 = r5
        L27:
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Runtime r2 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            java.lang.Process r0 = r2.exec(r7)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            java.io.BufferedReader r7 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            java.io.InputStream r3 = r0.getInputStream()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            r7.<init>(r2)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
        L43:
            java.lang.String r2 = r7.readLine()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            if (r2 == 0) goto L62
            r1.append(r2)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            java.lang.String r2 = "\n"
            r1.append(r2)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            if (r6 <= 0) goto L43
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            if (r2 <= r6) goto L43
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            int r2 = r2 - r6
            r1.delete(r4, r2)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            goto L43
        L62:
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L8f
            if (r0 == 0) goto L8c
            java.io.OutputStream r7 = r0.getOutputStream()     // Catch: java.io.IOException -> L70
            r7.close()     // Catch: java.io.IOException -> L70
            goto L74
        L70:
            r7 = move-exception
            r7.printStackTrace()
        L74:
            java.io.InputStream r7 = r0.getInputStream()     // Catch: java.io.IOException -> L7c
            r7.close()     // Catch: java.io.IOException -> L7c
            goto L80
        L7c:
            r7 = move-exception
            r7.printStackTrace()
        L80:
            java.io.InputStream r7 = r0.getErrorStream()     // Catch: java.io.IOException -> L88
            r7.close()     // Catch: java.io.IOException -> L88
            goto L8c
        L88:
            r7 = move-exception
            r7.printStackTrace()
        L8c:
            return r6
        L8d:
            r6 = move-exception
            goto Ld5
        L8f:
            r6 = move-exception
            boolean r7 = com.tencent.bugly.proguard.al.a(r6)     // Catch: java.lang.Throwable -> L8d
            if (r7 != 0) goto L99
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L8d
        L99:
            java.lang.String r7 = "\n[error:"
            r1.append(r7)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L8d
            r1.append(r6)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r6 = "]"
            r1.append(r6)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L8d
            if (r0 == 0) goto Ld4
            java.io.OutputStream r7 = r0.getOutputStream()     // Catch: java.io.IOException -> Lb8
            r7.close()     // Catch: java.io.IOException -> Lb8
            goto Lbc
        Lb8:
            r7 = move-exception
            r7.printStackTrace()
        Lbc:
            java.io.InputStream r7 = r0.getInputStream()     // Catch: java.io.IOException -> Lc4
            r7.close()     // Catch: java.io.IOException -> Lc4
            goto Lc8
        Lc4:
            r7 = move-exception
            r7.printStackTrace()
        Lc8:
            java.io.InputStream r7 = r0.getErrorStream()     // Catch: java.io.IOException -> Ld0
            r7.close()     // Catch: java.io.IOException -> Ld0
            goto Ld4
        Ld0:
            r7 = move-exception
            r7.printStackTrace()
        Ld4:
            return r6
        Ld5:
            if (r0 == 0) goto Lfb
            java.io.OutputStream r7 = r0.getOutputStream()     // Catch: java.io.IOException -> Ldf
            r7.close()     // Catch: java.io.IOException -> Ldf
            goto Le3
        Ldf:
            r7 = move-exception
            r7.printStackTrace()
        Le3:
            java.io.InputStream r7 = r0.getInputStream()     // Catch: java.io.IOException -> Leb
            r7.close()     // Catch: java.io.IOException -> Leb
            goto Lef
        Leb:
            r7 = move-exception
            r7.printStackTrace()
        Lef:
            java.io.InputStream r7 = r0.getErrorStream()     // Catch: java.io.IOException -> Lf7
            r7.close()     // Catch: java.io.IOException -> Lf7
            goto Lfb
        Lf7:
            r7 = move-exception
            r7.printStackTrace()
        Lfb:
            throw r6
    }

    public static java.lang.String a(long r3) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> L13
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            java.util.Locale r2 = java.util.Locale.US     // Catch: java.lang.Exception -> L13
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L13
            java.util.Date r1 = new java.util.Date     // Catch: java.lang.Exception -> L13
            r1.<init>(r3)     // Catch: java.lang.Exception -> L13
            java.lang.String r3 = r0.format(r1)     // Catch: java.lang.Exception -> L13
            return r3
        L13:
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static java.lang.String a(java.io.File r5, int r6, boolean r7) {
            r0 = 0
            if (r5 == 0) goto L7f
            boolean r1 = r5.exists()
            if (r1 == 0) goto L7f
            boolean r1 = r5.canRead()
            if (r1 != 0) goto L11
            goto L7f
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            r1.<init>()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            java.lang.String r5 = "utf-8"
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L63
        L27:
            java.lang.String r5 = r2.readLine()     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            if (r5 == 0) goto L51
            r1.append(r5)     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            java.lang.String r5 = "\n"
            r1.append(r5)     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            if (r6 <= 0) goto L27
            int r5 = r1.length()     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            if (r5 <= r6) goto L27
            if (r7 == 0) goto L47
            int r5 = r1.length()     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            r1.delete(r6, r5)     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            goto L51
        L47:
            r5 = 0
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            int r3 = r3 - r6
            r1.delete(r5, r3)     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            goto L27
        L51:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L5e java.lang.Throwable -> L73
            r2.close()     // Catch: java.lang.Exception -> L59
            goto L5d
        L59:
            r6 = move-exception
            com.tencent.bugly.proguard.al.a(r6)
        L5d:
            return r5
        L5e:
            r5 = move-exception
            goto L65
        L60:
            r5 = move-exception
            r2 = r0
            goto L74
        L63:
            r5 = move-exception
            r2 = r0
        L65:
            com.tencent.bugly.proguard.al.a(r5)     // Catch: java.lang.Throwable -> L73
            if (r2 == 0) goto L72
            r2.close()     // Catch: java.lang.Exception -> L6e
            goto L72
        L6e:
            r5 = move-exception
            com.tencent.bugly.proguard.al.a(r5)
        L72:
            return r0
        L73:
            r5 = move-exception
        L74:
            if (r2 == 0) goto L7e
            r2.close()     // Catch: java.lang.Exception -> L7a
            goto L7e
        L7a:
            r6 = move-exception
            com.tencent.bugly.proguard.al.a(r6)
        L7e:
            throw r5
        L7f:
            return r0
    }

    public static java.lang.String a(java.lang.String r3) {
            java.lang.String r0 = "fail"
            java.lang.String r1 = r3.trim()
            java.lang.String r2 = ""
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Lf
            return r2
        Lf:
            java.util.Map<java.lang.String, java.lang.String> r1 = com.tencent.bugly.proguard.ap.a     // Catch: java.lang.Throwable -> L45
            if (r1 != 0) goto L1a
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L45
            r1.<init>()     // Catch: java.lang.Throwable -> L45
            com.tencent.bugly.proguard.ap.a = r1     // Catch: java.lang.Throwable -> L45
        L1a:
            java.util.Map<java.lang.String, java.lang.String> r1 = com.tencent.bugly.proguard.ap.a     // Catch: java.lang.Throwable -> L45
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L2b
            java.util.Map<java.lang.String, java.lang.String> r1 = com.tencent.bugly.proguard.ap.a     // Catch: java.lang.Throwable -> L45
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L45
            return r3
        L2b:
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r1 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()     // Catch: java.lang.Throwable -> L45
            java.lang.String r1 = r1.getSystemProperty(r3)     // Catch: java.lang.Throwable -> L45
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L45
            if (r2 != 0) goto L44
            boolean r2 = r1.equals(r0)     // Catch: java.lang.Throwable -> L45
            if (r2 != 0) goto L44
            java.util.Map<java.lang.String, java.lang.String> r2 = com.tencent.bugly.proguard.ap.a     // Catch: java.lang.Throwable -> L45
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L45
        L44:
            return r1
        L45:
            r3 = move-exception
            com.tencent.bugly.proguard.al.b(r3)
            return r0
    }

    public static java.lang.String a(java.lang.Thread r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StackTraceElement[] r4 = r4.getStackTrace()
            int r1 = r4.length
            r2 = 0
        L10:
            if (r2 >= r1) goto L23
            r3 = r4[r2]
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = "\n"
            r0.append(r3)
            int r2 = r2 + 1
            goto L10
        L23:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static java.lang.String a(java.lang.Throwable r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            java.io.StringWriter r0 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L1b
            r0.<init>()     // Catch: java.lang.Throwable -> L1b
            java.io.PrintWriter r1 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L1b
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1b
            r2.printStackTrace(r1)     // Catch: java.lang.Throwable -> L1b
            java.lang.StringBuffer r2 = r0.getBuffer()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            r2 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r2)
            if (r0 != 0) goto L25
            r2.printStackTrace()
        L25:
            java.lang.String r2 = "fail"
            return r2
    }

    public static java.lang.String a(java.util.Date r3) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            java.util.Locale r2 = java.util.Locale.US     // Catch: java.lang.Exception -> Le
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> Le
            java.lang.String r3 = r0.format(r3)     // Catch: java.lang.Exception -> Le
            return r3
        Le:
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static java.lang.Thread a(java.lang.Runnable r1, java.lang.String r2) {
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> Lc
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lc
            r0.setName(r2)     // Catch: java.lang.Throwable -> Lc
            r0.start()     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            r1 = move-exception
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r0 = 0
            java.lang.String r1 = r1.getMessage()
            r2[r0] = r1
            java.lang.String r1 = "[Util] Failed to start a thread to execute task with message: %s"
            com.tencent.bugly.proguard.al.e(r1, r2)
            r1 = 0
            return r1
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(int r9) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 12
            r0.<init>(r1)
            java.util.Map r1 = java.lang.Thread.getAllStackTraces()
            if (r1 != 0) goto Lf
            r9 = 0
            return r9
        Lf:
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            java.lang.Thread r2 = r2.getThread()
            boolean r3 = r1.containsKey(r2)
            if (r3 != 0) goto L24
            java.lang.StackTraceElement[] r3 = r2.getStackTrace()
            r1.put(r2, r3)
        L24:
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            r2.getId()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L38:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto Lc6
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            r4 = 0
            r2.setLength(r4)
            java.lang.Object r5 = r3.getValue()
            if (r5 == 0) goto L38
            java.lang.Object r5 = r3.getValue()
            java.lang.StackTraceElement[] r5 = (java.lang.StackTraceElement[]) r5
            int r5 = r5.length
            if (r5 == 0) goto L38
            java.lang.Object r5 = r3.getValue()
            java.lang.StackTraceElement[] r5 = (java.lang.StackTraceElement[]) r5
            int r6 = r5.length
        L5e:
            if (r4 >= r6) goto L90
            r7 = r5[r4]
            if (r9 <= 0) goto L81
            int r8 = r2.length()
            if (r8 < r9) goto L81
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "\n[Stack over limit size :"
            r4.<init>(r5)
            r4.append(r9)
            java.lang.String r5 = " , has been cut!]"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r2.append(r4)
            goto L90
        L81:
            java.lang.String r7 = r7.toString()
            r2.append(r7)
            java.lang.String r7 = "\n"
            r2.append(r7)
            int r4 = r4 + 1
            goto L5e
        L90:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.Object r5 = r3.getKey()
            java.lang.Thread r5 = (java.lang.Thread) r5
            java.lang.String r5 = r5.getName()
            r4.append(r5)
            java.lang.String r5 = "("
            r4.append(r5)
            java.lang.Object r3 = r3.getKey()
            java.lang.Thread r3 = (java.lang.Thread) r3
            long r5 = r3.getId()
            r4.append(r5)
            java.lang.String r3 = ")"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = r2.toString()
            r0.put(r3, r4)
            goto L38
        Lc6:
            return r0
    }

    public static java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> a(android.os.Parcel r10) {
            android.os.Bundle r10 = r10.readBundle()
            r0 = 0
            if (r10 != 0) goto L8
            return r0
        L8:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r3 = "pluginNum"
            java.lang.Object r3 = r10.get(r3)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r4 = 0
            r5 = 0
        L20:
            if (r5 >= r3) goto L36
            java.lang.String r6 = java.lang.String.valueOf(r5)
            java.lang.String r7 = "pluginKey"
            java.lang.String r6 = r7.concat(r6)
            java.lang.String r6 = r10.getString(r6)
            r1.add(r6)
            int r5 = r5 + 1
            goto L20
        L36:
            r5 = 0
        L37:
            if (r5 >= r3) goto L85
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "pluginVal"
            r6.<init>(r7)
            r6.append(r5)
            java.lang.String r8 = "plugInId"
            r6.append(r8)
            java.lang.String r6 = r6.toString()
            java.lang.String r6 = r10.getString(r6)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>(r7)
            r8.append(r5)
            java.lang.String r9 = "plugInUUID"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.String r8 = r10.getString(r8)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>(r7)
            r9.append(r5)
            java.lang.String r7 = "plugInVersion"
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            java.lang.String r7 = r10.getString(r7)
            com.tencent.bugly.crashreport.common.info.PlugInBean r9 = new com.tencent.bugly.crashreport.common.info.PlugInBean
            r9.<init>(r6, r7, r8)
            r2.add(r9)
            int r5 = r5 + 1
            goto L37
        L85:
            int r10 = r1.size()
            int r3 = r2.size()
            if (r10 != r3) goto Lb2
            java.util.HashMap r0 = new java.util.HashMap
            int r10 = r1.size()
            r0.<init>(r10)
        L98:
            int r10 = r1.size()
            if (r4 >= r10) goto Lb9
            java.lang.Object r10 = r1.get(r4)
            java.lang.Class<com.tencent.bugly.crashreport.common.info.PlugInBean> r3 = com.tencent.bugly.crashreport.common.info.PlugInBean.class
            java.lang.Object r5 = r2.get(r4)
            java.lang.Object r3 = r3.cast(r5)
            r0.put(r10, r3)
            int r4 = r4 + 1
            goto L98
        Lb2:
            java.lang.Object[] r10 = new java.lang.Object[r4]
            java.lang.String r1 = "map plugin parcel error!"
            com.tencent.bugly.proguard.al.e(r1, r10)
        Lb9:
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(boolean r0, int r1) {
            if (r0 != 0) goto L10
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "get all thread stack not enable"
            com.tencent.bugly.proguard.al.c(r1, r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
        L10:
            java.util.Map r0 = a(r1)
            if (r0 != 0) goto L1b
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
        L1b:
            return r0
    }

    public static void a(android.os.Parcel r6, java.util.Map<java.lang.String, com.tencent.bugly.crashreport.common.info.PlugInBean> r7) {
            if (r7 == 0) goto Lca
            int r0 = r7.size()
            if (r0 > 0) goto La
            goto Lca
        La:
            int r0 = r7.size()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r0)
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L20:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L3b
            java.lang.Object r0 = r7.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r3 = r0.getKey()
            r1.add(r3)
            java.lang.Object r0 = r0.getValue()
            r2.add(r0)
            goto L20
        L3b:
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            int r0 = r1.size()
            java.lang.String r3 = "pluginNum"
            r7.putInt(r3, r0)
            r0 = 0
            r3 = 0
        L4b:
            int r4 = r1.size()
            if (r3 >= r4) goto L67
            java.lang.String r4 = java.lang.String.valueOf(r3)
            java.lang.String r5 = "pluginKey"
            java.lang.String r4 = r5.concat(r4)
            java.lang.Object r5 = r1.get(r3)
            java.lang.String r5 = (java.lang.String) r5
            r7.putString(r4, r5)
            int r3 = r3 + 1
            goto L4b
        L67:
            int r3 = r1.size()
            if (r0 >= r3) goto Lc6
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "pluginVal"
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r5 = "plugInId"
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            java.lang.Object r5 = r2.get(r0)
            com.tencent.bugly.crashreport.common.info.PlugInBean r5 = (com.tencent.bugly.crashreport.common.info.PlugInBean) r5
            java.lang.String r5 = r5.a
            r7.putString(r3, r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r5 = "plugInUUID"
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            java.lang.Object r5 = r2.get(r0)
            com.tencent.bugly.crashreport.common.info.PlugInBean r5 = (com.tencent.bugly.crashreport.common.info.PlugInBean) r5
            java.lang.String r5 = r5.c
            r7.putString(r3, r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r4 = "plugInVersion"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.Object r4 = r2.get(r0)
            com.tencent.bugly.crashreport.common.info.PlugInBean r4 = (com.tencent.bugly.crashreport.common.info.PlugInBean) r4
            java.lang.String r4 = r4.b
            r7.putString(r3, r4)
            int r0 = r0 + 1
            goto L67
        Lc6:
            r6.writeBundle(r7)
            return
        Lca:
            r7 = 0
            r6.writeBundle(r7)
            return
    }

    public static void a(java.lang.Class<?> r0, java.lang.String r1, java.lang.Object r2) {
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Exception -> Lc
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> Lc
            r1 = 0
            r0.set(r1, r2)     // Catch: java.lang.Exception -> Lc
        Lc:
            return
    }

    public static boolean a(android.content.Context r10, java.lang.String r11) {
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r11
            int r3 = android.os.Process.myPid()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4 = 1
            r1[r4] = r3
            int r3 = android.os.Process.myTid()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r5 = 2
            r1[r5] = r3
            java.lang.String r3 = "[Util] Try to lock file:%s (pid=%d | tid=%d)"
            com.tencent.bugly.proguard.al.c(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2
            r1.<init>()     // Catch: java.lang.Throwable -> La2
            java.io.File r3 = r10.getFilesDir()     // Catch: java.lang.Throwable -> La2
            r1.append(r3)     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Throwable -> La2
            r1.append(r3)     // Catch: java.lang.Throwable -> La2
            r1.append(r11)     // Catch: java.lang.Throwable -> La2
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La2
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> La2
            r3.<init>(r1)     // Catch: java.lang.Throwable -> La2
            boolean r1 = r3.exists()     // Catch: java.lang.Throwable -> La2
            if (r1 == 0) goto L60
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La2
            long r8 = r3.lastModified()     // Catch: java.lang.Throwable -> La2
            long r6 = r6 - r8
            r8 = 10000(0x2710, double:4.9407E-320)
            int r1 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r1 >= 0) goto L54
            return r2
        L54:
            java.lang.String r1 = "[Util] Lock file (%s) is expired, unlock it."
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> La2
            r6[r2] = r11     // Catch: java.lang.Throwable -> La2
            com.tencent.bugly.proguard.al.c(r1, r6)     // Catch: java.lang.Throwable -> La2
            b(r10, r11)     // Catch: java.lang.Throwable -> La2
        L60:
            boolean r10 = r3.createNewFile()     // Catch: java.lang.Throwable -> La2
            if (r10 == 0) goto L84
            java.lang.String r10 = "[Util] Successfully locked file: %s (pid=%d | tid=%d)"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> La2
            r0[r2] = r11     // Catch: java.lang.Throwable -> La2
            int r11 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> La2
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> La2
            r0[r4] = r11     // Catch: java.lang.Throwable -> La2
            int r11 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> La2
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> La2
            r0[r5] = r11     // Catch: java.lang.Throwable -> La2
            com.tencent.bugly.proguard.al.c(r10, r0)     // Catch: java.lang.Throwable -> La2
            return r4
        L84:
            java.lang.String r10 = "[Util] Failed to locked file: %s (pid=%d | tid=%d)"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> La2
            r0[r2] = r11     // Catch: java.lang.Throwable -> La2
            int r11 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> La2
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> La2
            r0[r4] = r11     // Catch: java.lang.Throwable -> La2
            int r11 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> La2
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> La2
            r0[r5] = r11     // Catch: java.lang.Throwable -> La2
            com.tencent.bugly.proguard.al.c(r10, r0)     // Catch: java.lang.Throwable -> La2
            return r2
        La2:
            r10 = move-exception
            com.tencent.bugly.proguard.al.a(r10)
            return r2
    }

    public static boolean a(java.io.File r7, java.io.File r8) {
            java.lang.String r0 = "rqdp{  ZF end}"
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = "rqdp{  ZF start}"
            com.tencent.bugly.proguard.al.c(r3, r2)
            boolean r2 = b(r7, r8)
            if (r2 != 0) goto L11
            return r1
        L11:
            r2 = 0
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L77
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L77
            java.util.zip.ZipOutputStream r4 = new java.util.zip.ZipOutputStream     // Catch: java.lang.Throwable -> L6c java.lang.Throwable -> L6f
            java.io.BufferedOutputStream r5 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L6c java.lang.Throwable -> L6f
            java.io.FileOutputStream r6 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L6c java.lang.Throwable -> L6f
            r6.<init>(r8)     // Catch: java.lang.Throwable -> L6c java.lang.Throwable -> L6f
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L6c java.lang.Throwable -> L6f
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L6c java.lang.Throwable -> L6f
            r8 = 8
            r4.setMethod(r8)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            java.util.zip.ZipEntry r8 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            r8.<init>(r7)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            r4.putNextEntry(r8)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            r7 = 5000(0x1388, float:7.006E-42)
            r8 = 1000(0x3e8, float:1.401E-42)
            int r7 = java.lang.Math.max(r7, r8)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            byte[] r7 = new byte[r7]     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
        L41:
            int r8 = r3.read(r7)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            if (r8 <= 0) goto L4b
            r4.write(r7, r1, r8)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            goto L41
        L4b:
            r4.flush()     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            r4.closeEntry()     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L6a
            r3.close()     // Catch: java.io.IOException -> L55
            goto L59
        L55:
            r7 = move-exception
            r7.printStackTrace()
        L59:
            r4.close()     // Catch: java.io.IOException -> L5d
            goto L61
        L5d:
            r7 = move-exception
            r7.printStackTrace()
        L61:
            java.lang.Object[] r7 = new java.lang.Object[r1]
            com.tencent.bugly.proguard.al.c(r0, r7)
            r7 = 1
            return r7
        L68:
            r7 = move-exception
            goto L9e
        L6a:
            r7 = move-exception
            goto L71
        L6c:
            r7 = move-exception
            r4 = r2
            goto L9e
        L6f:
            r7 = move-exception
            r4 = r2
        L71:
            r2 = r3
            goto L79
        L73:
            r7 = move-exception
            r3 = r2
            r4 = r3
            goto L9e
        L77:
            r7 = move-exception
            r4 = r2
        L79:
            boolean r8 = com.tencent.bugly.proguard.al.a(r7)     // Catch: java.lang.Throwable -> L9c
            if (r8 != 0) goto L82
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L9c
        L82:
            if (r2 == 0) goto L8c
            r2.close()     // Catch: java.io.IOException -> L88
            goto L8c
        L88:
            r7 = move-exception
            r7.printStackTrace()
        L8c:
            if (r4 == 0) goto L96
            r4.close()     // Catch: java.io.IOException -> L92
            goto L96
        L92:
            r7 = move-exception
            r7.printStackTrace()
        L96:
            java.lang.Object[] r7 = new java.lang.Object[r1]
            com.tencent.bugly.proguard.al.c(r0, r7)
            return r1
        L9c:
            r7 = move-exception
            r3 = r2
        L9e:
            if (r3 == 0) goto La8
            r3.close()     // Catch: java.io.IOException -> La4
            goto La8
        La4:
            r8 = move-exception
            r8.printStackTrace()
        La8:
            if (r4 == 0) goto Lb2
            r4.close()     // Catch: java.io.IOException -> Lae
            goto Lb2
        Lae:
            r8 = move-exception
            r8.printStackTrace()
        Lb2:
            java.lang.Object[] r8 = new java.lang.Object[r1]
            com.tencent.bugly.proguard.al.c(r0, r8)
            throw r7
    }

    public static boolean a(java.lang.Runnable r3) {
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            if (r0 == 0) goto Lb
            boolean r3 = r0.a(r3)
            return r3
        Lb:
            java.lang.Class r0 = r3.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "\\."
            java.lang.String[] r0 = r0.split(r1)
            int r1 = r0.length
            r2 = 1
            int r1 = r1 - r2
            r0 = r0[r1]
            java.lang.Thread r3 = a(r3, r0)
            if (r3 == 0) goto L25
            return r2
        L25:
            r3 = 0
            return r3
    }

    public static byte[] a(android.os.Parcelable r2) {
            android.os.Parcel r0 = android.os.Parcel.obtain()
            r1 = 0
            r2.writeToParcel(r0, r1)
            byte[] r2 = r0.marshall()
            r0.recycle()
            return r2
    }

    public static byte[] a(java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "rqdp{  ZF end}"
            r1 = 0
            if (r6 == 0) goto L91
            int r2 = r6.length()
            if (r2 != 0) goto Ld
            goto L91
        Ld:
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = "rqdp{  ZF start}"
            com.tencent.bugly.proguard.al.c(r4, r3)
            java.lang.String r3 = "UTF-8"
            byte[] r6 = r6.getBytes(r3)     // Catch: java.lang.Throwable -> L62 java.lang.Throwable -> L65
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L62 java.lang.Throwable -> L65
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L62 java.lang.Throwable -> L65
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L62 java.lang.Throwable -> L65
            r6.<init>()     // Catch: java.lang.Throwable -> L62 java.lang.Throwable -> L65
            java.util.zip.ZipOutputStream r4 = new java.util.zip.ZipOutputStream     // Catch: java.lang.Throwable -> L62 java.lang.Throwable -> L65
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L62 java.lang.Throwable -> L65
            r5 = 8
            r4.setMethod(r5)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            java.util.zip.ZipEntry r5 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            r5.<init>(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            r4.putNextEntry(r5)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            r7 = 1024(0x400, float:1.435E-42)
            byte[] r7 = new byte[r7]     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
        L3b:
            int r5 = r3.read(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            if (r5 <= 0) goto L45
            r4.write(r7, r2, r5)     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            goto L3b
        L45:
            r4.closeEntry()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            r4.flush()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            r4.finish()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            byte[] r6 = r6.toByteArray()     // Catch: java.lang.Throwable -> L60 java.lang.Throwable -> L80
            r4.close()     // Catch: java.io.IOException -> L56
            goto L5a
        L56:
            r7 = move-exception
            r7.printStackTrace()
        L5a:
            java.lang.Object[] r7 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r0, r7)
            return r6
        L60:
            r6 = move-exception
            goto L67
        L62:
            r6 = move-exception
            r4 = r1
            goto L81
        L65:
            r6 = move-exception
            r4 = r1
        L67:
            boolean r7 = com.tencent.bugly.proguard.al.a(r6)     // Catch: java.lang.Throwable -> L80
            if (r7 != 0) goto L70
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L80
        L70:
            if (r4 == 0) goto L7a
            r4.close()     // Catch: java.io.IOException -> L76
            goto L7a
        L76:
            r6 = move-exception
            r6.printStackTrace()
        L7a:
            java.lang.Object[] r6 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r0, r6)
            return r1
        L80:
            r6 = move-exception
        L81:
            if (r4 == 0) goto L8b
            r4.close()     // Catch: java.io.IOException -> L87
            goto L8b
        L87:
            r7 = move-exception
            r7.printStackTrace()
        L8b:
            java.lang.Object[] r7 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.c(r0, r7)
            throw r6
        L91:
            return r1
    }

    public static byte[] a(byte[] r3) {
            if (r3 != 0) goto L3
            return r3
        L3:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            int r2 = r3.length
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            r1 = 1
            java.lang.String r2 = "Gzip"
            r0[r1] = r2
            java.lang.String r1 = "[Util] Zip %d bytes data with type %s"
            com.tencent.bugly.proguard.al.c(r1, r0)
            com.tencent.bugly.proguard.bi r0 = com.tencent.bugly.proguard.bh.a()     // Catch: java.lang.Throwable -> L21
            byte[] r3 = r0.a(r3)     // Catch: java.lang.Throwable -> L21
            return r3
        L21:
            r3 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r3)
            if (r0 != 0) goto L2b
            r3.printStackTrace()
        L2b:
            r3 = 0
            return r3
    }

    public static long b() {
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1f
            java.util.TimeZone r2 = java.util.TimeZone.getDefault()     // Catch: java.lang.Throwable -> L1f
            int r2 = r2.getRawOffset()     // Catch: java.lang.Throwable -> L1f
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L1f
            long r0 = r0 + r2
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            long r0 = r0 / r2
            long r0 = r0 * r2
            java.util.TimeZone r2 = java.util.TimeZone.getDefault()     // Catch: java.lang.Throwable -> L1f
            int r2 = r2.getRawOffset()     // Catch: java.lang.Throwable -> L1f
            long r2 = (long) r2
            long r0 = r0 - r2
            return r0
        L1f:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L29
            r0.printStackTrace()
        L29:
            r0 = -1
            return r0
    }

    public static java.io.BufferedReader b(java.lang.String r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.io.File r1 = new java.io.File     // Catch: java.lang.NullPointerException -> L1c
            r1.<init>(r2, r3)     // Catch: java.lang.NullPointerException -> L1c
            boolean r2 = r1.exists()     // Catch: java.lang.NullPointerException -> L1c
            if (r2 == 0) goto L1b
            boolean r2 = r1.canRead()     // Catch: java.lang.NullPointerException -> L1c
            if (r2 != 0) goto L16
            goto L1b
        L16:
            java.io.BufferedReader r2 = a(r1)     // Catch: java.lang.NullPointerException -> L1c
            return r2
        L1b:
            return r0
        L1c:
            r2 = move-exception
            com.tencent.bugly.proguard.al.a(r2)
            return r0
    }

    public static java.lang.String b(java.lang.Throwable r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.PrintWriter r1 = new java.io.PrintWriter
            r1.<init>(r0)
            r2.printStackTrace(r1)
            r1.flush()
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(android.os.Parcel r5) {
            android.os.Bundle r5 = r5.readBundle()
            r0 = 0
            if (r5 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "keys"
            java.util.ArrayList r1 = r5.getStringArrayList(r1)
            java.lang.String r2 = "values"
            java.util.ArrayList r5 = r5.getStringArrayList(r2)
            r2 = 0
            if (r1 == 0) goto L40
            if (r5 == 0) goto L40
            int r3 = r1.size()
            int r4 = r5.size()
            if (r3 != r4) goto L40
            java.util.HashMap r0 = new java.util.HashMap
            int r3 = r1.size()
            r0.<init>(r3)
        L2c:
            int r3 = r1.size()
            if (r2 >= r3) goto L47
            java.lang.Object r3 = r1.get(r2)
            java.lang.Object r4 = r5.get(r2)
            r0.put(r3, r4)
            int r2 = r2 + 1
            goto L2c
        L40:
            java.lang.Object[] r5 = new java.lang.Object[r2]
            java.lang.String r1 = "map parcel error!"
            com.tencent.bugly.proguard.al.e(r1, r5)
        L47:
            return r0
    }

    public static void b(long r0) {
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L4
            return
        L4:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public static void b(android.os.Parcel r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            if (r5 == 0) goto L4d
            int r0 = r5.size()
            if (r0 > 0) goto L9
            goto L4d
        L9:
            int r0 = r5.size()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r0)
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L1f:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L3a
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r3 = r0.getKey()
            r1.add(r3)
            java.lang.Object r0 = r0.getValue()
            r2.add(r0)
            goto L1f
        L3a:
            android.os.Bundle r5 = new android.os.Bundle
            r5.<init>()
            java.lang.String r0 = "keys"
            r5.putStringArrayList(r0, r1)
            java.lang.String r0 = "values"
            r5.putStringArrayList(r0, r2)
            r4.writeBundle(r5)
            return
        L4d:
            r5 = 0
            r4.writeBundle(r5)
            return
    }

    public static boolean b(android.content.Context r6, java.lang.String r7) {
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r7
            int r3 = android.os.Process.myPid()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r4 = 1
            r1[r4] = r3
            int r3 = android.os.Process.myTid()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r5 = 2
            r1[r5] = r3
            java.lang.String r3 = "[Util] Try to unlock file: %s (pid=%d | tid=%d)"
            com.tencent.bugly.proguard.al.c(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            r1.<init>()     // Catch: java.lang.Throwable -> L6a
            java.io.File r6 = r6.getFilesDir()     // Catch: java.lang.Throwable -> L6a
            r1.append(r6)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r6 = java.io.File.separator     // Catch: java.lang.Throwable -> L6a
            r1.append(r6)     // Catch: java.lang.Throwable -> L6a
            r1.append(r7)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L6a
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L6a
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L6a
            boolean r6 = r1.exists()     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L69
            boolean r6 = r1.delete()     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L68
            java.lang.String r6 = "[Util] Successfully unlocked file: %s (pid=%d | tid=%d)"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L6a
            r0[r2] = r7     // Catch: java.lang.Throwable -> L6a
            int r7 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L6a
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L6a
            r0[r4] = r7     // Catch: java.lang.Throwable -> L6a
            int r7 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> L6a
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L6a
            r0[r5] = r7     // Catch: java.lang.Throwable -> L6a
            com.tencent.bugly.proguard.al.c(r6, r0)     // Catch: java.lang.Throwable -> L6a
            return r4
        L68:
            return r2
        L69:
            return r4
        L6a:
            r6 = move-exception
            com.tencent.bugly.proguard.al.a(r6)
            return r2
    }

    private static boolean b(java.io.File r2, java.io.File r3) {
            r0 = 0
            if (r2 == 0) goto L5b
            if (r3 == 0) goto L5b
            boolean r1 = r2.equals(r3)
            if (r1 == 0) goto Lc
            goto L5b
        Lc:
            boolean r1 = r2.exists()
            if (r1 == 0) goto L53
            boolean r2 = r2.canRead()
            if (r2 != 0) goto L19
            goto L53
        L19:
            java.io.File r2 = r3.getParentFile()     // Catch: java.lang.Throwable -> L3a
            if (r2 == 0) goto L30
            java.io.File r2 = r3.getParentFile()     // Catch: java.lang.Throwable -> L3a
            boolean r2 = r2.exists()     // Catch: java.lang.Throwable -> L3a
            if (r2 != 0) goto L30
            java.io.File r2 = r3.getParentFile()     // Catch: java.lang.Throwable -> L3a
            r2.mkdirs()     // Catch: java.lang.Throwable -> L3a
        L30:
            boolean r2 = r3.exists()     // Catch: java.lang.Throwable -> L3a
            if (r2 != 0) goto L44
            r3.createNewFile()     // Catch: java.lang.Throwable -> L3a
            goto L44
        L3a:
            r2 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r2)
            if (r1 != 0) goto L44
            r2.printStackTrace()
        L44:
            boolean r2 = r3.exists()
            if (r2 == 0) goto L52
            boolean r2 = r3.canWrite()
            if (r2 == 0) goto L52
            r2 = 1
            return r2
        L52:
            return r0
        L53:
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "rqdp{  !sFile.exists() || !sFile.canRead(),pls check ,return!}"
            com.tencent.bugly.proguard.al.d(r3, r2)
            return r0
        L5b:
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "rqdp{  err ZF 1R!}"
            com.tencent.bugly.proguard.al.d(r3, r2)
            return r0
    }

    public static boolean b(java.lang.String r0) {
            if (r0 == 0) goto Le
            java.lang.String r0 = r0.trim()
            int r0 = r0.length()
            if (r0 <= 0) goto Le
            r0 = 0
            return r0
        Le:
            r0 = 1
            return r0
    }

    public static byte[] b(byte[] r4) {
            if (r4 != 0) goto L3
            return r4
        L3:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r4.length
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            r1 = 1
            java.lang.String r3 = "Gzip"
            r0[r1] = r3
            java.lang.String r1 = "[Util] Unzip %d bytes data with type %s"
            com.tencent.bugly.proguard.al.c(r1, r0)
            com.tencent.bugly.proguard.bi r0 = com.tencent.bugly.proguard.bh.a()     // Catch: java.lang.Throwable -> L21
            byte[] r4 = r0.b(r4)     // Catch: java.lang.Throwable -> L21
            return r4
        L21:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            if (r0 == 0) goto L3e
            java.lang.String r0 = r4.getMessage()
            java.lang.String r1 = "Not in GZIP format"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L3e
            java.lang.String r4 = r4.getMessage()
            java.lang.Object[] r0 = new java.lang.Object[r2]
            com.tencent.bugly.proguard.al.d(r4, r0)
            goto L47
        L3e:
            boolean r0 = com.tencent.bugly.proguard.al.a(r4)
            if (r0 != 0) goto L47
            r4.printStackTrace()
        L47:
            r4 = 0
            return r4
    }

    public static java.lang.String c(byte[] r5) {
            if (r5 == 0) goto L50
            int r0 = r5.length
            if (r0 != 0) goto L6
            goto L50
        L6:
            java.lang.String r0 = "SHA-1"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Throwable -> L44
            r0.update(r5)     // Catch: java.lang.Throwable -> L44
            byte[] r5 = r0.digest()     // Catch: java.lang.Throwable -> L44
            if (r5 != 0) goto L18
            java.lang.String r5 = ""
            return r5
        L18:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L44
            r0.<init>()     // Catch: java.lang.Throwable -> L44
            r1 = 0
        L1e:
            int r2 = r5.length     // Catch: java.lang.Throwable -> L44
            if (r1 >= r2) goto L3b
            r2 = r5[r1]     // Catch: java.lang.Throwable -> L44
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)     // Catch: java.lang.Throwable -> L44
            int r3 = r2.length()     // Catch: java.lang.Throwable -> L44
            r4 = 1
            if (r3 != r4) goto L35
            java.lang.String r3 = "0"
            r0.append(r3)     // Catch: java.lang.Throwable -> L44
        L35:
            r0.append(r2)     // Catch: java.lang.Throwable -> L44
            int r1 = r1 + 1
            goto L1e
        L3b:
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = r5.toUpperCase()     // Catch: java.lang.Throwable -> L44
            return r5
        L44:
            r5 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r5)
            if (r0 != 0) goto L4e
            r5.printStackTrace()
        L4e:
            r5 = 0
            return r5
        L50:
            java.lang.String r5 = "NULL"
            return r5
    }

    public static void c(java.lang.String r1) {
            if (r1 != 0) goto L3
            return
        L3:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.isFile()
            if (r1 == 0) goto L1d
            boolean r1 = r0.exists()
            if (r1 == 0) goto L1d
            boolean r1 = r0.canWrite()
            if (r1 == 0) goto L1d
            r0.delete()
        L1d:
            return
    }

    public static void c(java.lang.String r1, java.lang.String r2) {
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            if (r0 == 0) goto L1f
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            android.content.SharedPreferences r0 = r0.O
            if (r0 == 0) goto L1f
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            android.content.SharedPreferences r0 = r0.O
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r1 = r0.putString(r1, r2)
            r1.apply()
        L1f:
            return
    }

    public static byte[] c(long r0) {
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.io.UnsupportedEncodingException -> Lb
            java.lang.String r1 = "utf-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static long d(byte[] r4) {
            r0 = -1
            if (r4 != 0) goto L5
            return r0
        L5:
            java.lang.String r2 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L11
            java.lang.String r3 = "utf-8"
            r2.<init>(r4, r3)     // Catch: java.io.UnsupportedEncodingException -> L11
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.io.UnsupportedEncodingException -> L11
            return r0
        L11:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    public static java.lang.String d(java.lang.String r1, java.lang.String r2) {
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            if (r0 == 0) goto L19
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            android.content.SharedPreferences r0 = r0.O
            if (r0 == 0) goto L19
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            android.content.SharedPreferences r0 = r0.O
            java.lang.String r1 = r0.getString(r1, r2)
            return r1
        L19:
            java.lang.String r1 = ""
            return r1
    }

    public static boolean d(java.lang.String r4) {
            boolean r0 = b(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            int r0 = r4.length()
            r2 = 255(0xff, float:3.57E-43)
            r3 = 1
            if (r0 <= r2) goto L1b
            java.lang.Object[] r0 = new java.lang.Object[r3]
            r0[r1] = r4
            java.lang.String r4 = "URL(%s)'s length is larger than 255."
            com.tencent.bugly.proguard.al.a(r4, r0)
            return r1
        L1b:
            java.lang.String r0 = r4.toLowerCase()
            java.lang.String r2 = "http"
            boolean r0 = r0.startsWith(r2)
            if (r0 != 0) goto L31
            java.lang.Object[] r0 = new java.lang.Object[r3]
            r0[r1] = r4
            java.lang.String r4 = "URL(%s) is not start with \"http\"."
            com.tencent.bugly.proguard.al.a(r4, r0)
            return r1
        L31:
            return r3
    }
}
