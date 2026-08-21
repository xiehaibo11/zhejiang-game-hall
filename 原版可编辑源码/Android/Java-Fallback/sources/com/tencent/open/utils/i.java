package com.tencent.open.utils;

public class i {
    private static java.util.Map<java.lang.String, com.tencent.open.utils.i> a;
    private static java.lang.String b;
    private android.content.Context c;
    private java.lang.String d;
    private org.json.JSONObject e;
    private long f;
    private int g;
    private boolean h;


    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            com.tencent.open.utils.i.a = r0
            r0 = 0
            com.tencent.open.utils.i.b = r0
            return
    }

    private i(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r2.d = r0
            r2.e = r0
            r0 = 0
            r2.f = r0
            r0 = 0
            r2.g = r0
            r0 = 1
            r2.h = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.c = r3
            r2.d = r4
            r2.a()
            r2.b()
            return
    }

    static int a(com.tencent.open.utils.i r0, int r1) {
            r0.g = r1
            return r1
    }

    public static com.tencent.open.utils.i a(android.content.Context r3, java.lang.String r4) {
            java.util.Map<java.lang.String, com.tencent.open.utils.i> r0 = com.tencent.open.utils.i.a
            monitor-enter(r0)
            java.lang.String r1 = "openSDK_LOG.OpenConfig"
            java.lang.String r2 = "getInstance begin"
            com.tencent.open.log.SLog.v(r1, r2)     // Catch: java.lang.Throwable -> L36
            if (r4 == 0) goto Le
            com.tencent.open.utils.i.b = r4     // Catch: java.lang.Throwable -> L36
        Le:
            if (r4 != 0) goto L19
            java.lang.String r4 = com.tencent.open.utils.i.b     // Catch: java.lang.Throwable -> L36
            if (r4 == 0) goto L17
            java.lang.String r4 = com.tencent.open.utils.i.b     // Catch: java.lang.Throwable -> L36
            goto L19
        L17:
            java.lang.String r4 = "0"
        L19:
            java.util.Map<java.lang.String, com.tencent.open.utils.i> r1 = com.tencent.open.utils.i.a     // Catch: java.lang.Throwable -> L36
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L36
            com.tencent.open.utils.i r1 = (com.tencent.open.utils.i) r1     // Catch: java.lang.Throwable -> L36
            if (r1 != 0) goto L2d
            com.tencent.open.utils.i r1 = new com.tencent.open.utils.i     // Catch: java.lang.Throwable -> L36
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L36
            java.util.Map<java.lang.String, com.tencent.open.utils.i> r3 = com.tencent.open.utils.i.a     // Catch: java.lang.Throwable -> L36
            r3.put(r4, r1)     // Catch: java.lang.Throwable -> L36
        L2d:
            java.lang.String r3 = "openSDK_LOG.OpenConfig"
            java.lang.String r4 = "getInstance end"
            com.tencent.open.log.SLog.v(r3, r4)     // Catch: java.lang.Throwable -> L36
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            return r1
        L36:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            throw r3
    }

    private void a() {
            r2 = this;
            java.lang.String r0 = "com.tencent.open.config.json"
            java.lang.String r0 = r2.c(r0)
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Le
            r1.<init>(r0)     // Catch: org.json.JSONException -> Le
            r2.e = r1     // Catch: org.json.JSONException -> Le
            goto L15
        Le:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r2.e = r0
        L15:
            return
    }

    static void a(com.tencent.open.utils.i r0, org.json.JSONObject r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = r2.d     // Catch: java.io.IOException -> L36
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L36
            r0.<init>()     // Catch: java.io.IOException -> L36
            r0.append(r3)     // Catch: java.io.IOException -> L36
            java.lang.String r3 = "."
            r0.append(r3)     // Catch: java.io.IOException -> L36
            java.lang.String r3 = r2.d     // Catch: java.io.IOException -> L36
            r0.append(r3)     // Catch: java.io.IOException -> L36
            java.lang.String r3 = r0.toString()     // Catch: java.io.IOException -> L36
        L1a:
            android.content.Context r0 = r2.c     // Catch: java.io.IOException -> L36
            r1 = 0
            java.io.FileOutputStream r3 = r0.openFileOutput(r3, r1)     // Catch: java.io.IOException -> L36
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter     // Catch: java.io.IOException -> L36
            java.lang.String r1 = "UTF-8"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)     // Catch: java.io.IOException -> L36
            r0.<init>(r3, r1)     // Catch: java.io.IOException -> L36
            r0.write(r4)     // Catch: java.io.IOException -> L36
            r0.flush()     // Catch: java.io.IOException -> L36
            r0.close()     // Catch: java.io.IOException -> L36
            goto L3a
        L36:
            r3 = move-exception
            r3.printStackTrace()
        L3a:
            return
    }

    private void a(org.json.JSONObject r3) {
            r2 = this;
            java.lang.String r0 = "cgi back, do update"
            r2.d(r0)
            r2.e = r3
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "com.tencent.open.config.json"
            r2.a(r0, r3)
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.f = r0
            return
    }

    private void b() {
            r3 = this;
            int r0 = r3.g
            if (r0 == 0) goto La
            java.lang.String r0 = "update thread is running, return"
            r3.d(r0)
            return
        La:
            r0 = 1
            r3.g = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.d
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            java.lang.String r2 = "status_os"
            r0.put(r2, r1)
            com.tencent.open.utils.f r1 = com.tencent.open.utils.f.a()
            android.content.Context r2 = com.tencent.open.utils.g.a()
            java.lang.String r1 = r1.c(r2)
            java.lang.String r2 = "status_machine"
            r0.put(r2, r1)
            java.lang.String r1 = android.os.Build.VERSION.SDK
            java.lang.String r2 = "status_version"
            r0.put(r2, r1)
            java.lang.String r1 = "sdkv"
            java.lang.String r2 = "3.5.14.lite"
            r0.put(r1, r2)
            java.lang.String r1 = "sdkp"
            java.lang.String r2 = "a"
            r0.put(r1, r2)
            com.tencent.open.utils.i$1 r1 = new com.tencent.open.utils.i$1
            r1.<init>(r3, r0)
            com.tencent.open.utils.l.a(r1)
            return
    }

    private java.lang.String c(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = r4.d     // Catch: java.io.FileNotFoundException -> L25
            if (r1 == 0) goto L1d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.FileNotFoundException -> L25
            r1.<init>()     // Catch: java.io.FileNotFoundException -> L25
            r1.append(r5)     // Catch: java.io.FileNotFoundException -> L25
            java.lang.String r2 = "."
            r1.append(r2)     // Catch: java.io.FileNotFoundException -> L25
            java.lang.String r2 = r4.d     // Catch: java.io.FileNotFoundException -> L25
            r1.append(r2)     // Catch: java.io.FileNotFoundException -> L25
            java.lang.String r1 = r1.toString()     // Catch: java.io.FileNotFoundException -> L25
            goto L1e
        L1d:
            r1 = r5
        L1e:
            android.content.Context r2 = r4.c     // Catch: java.io.FileNotFoundException -> L25
            java.io.FileInputStream r5 = r2.openFileInput(r1)     // Catch: java.io.FileNotFoundException -> L25
            goto L2f
        L25:
            android.content.Context r1 = r4.c     // Catch: java.io.IOException -> L77
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.io.IOException -> L77
            java.io.InputStream r5 = r1.open(r5)     // Catch: java.io.IOException -> L77
        L2f:
            java.io.BufferedReader r1 = new java.io.BufferedReader
            java.io.InputStreamReader r2 = new java.io.InputStreamReader
            java.lang.String r3 = "UTF-8"
            java.nio.charset.Charset r3 = java.nio.charset.Charset.forName(r3)
            r2.<init>(r5, r3)
            r1.<init>(r2)
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r2.<init>()
        L44:
            java.lang.String r3 = r1.readLine()     // Catch: java.lang.Throwable -> L5e java.io.IOException -> L60
            if (r3 == 0) goto L4e
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e java.io.IOException -> L60
            goto L44
        L4e:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L5e java.io.IOException -> L60
            r5.close()     // Catch: java.io.IOException -> L59
            r1.close()     // Catch: java.io.IOException -> L59
            goto L6a
        L59:
            r5 = move-exception
            r5.printStackTrace()
            goto L6a
        L5e:
            r0 = move-exception
            goto L6b
        L60:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L5e
            r5.close()     // Catch: java.io.IOException -> L59
            r1.close()     // Catch: java.io.IOException -> L59
        L6a:
            return r0
        L6b:
            r5.close()     // Catch: java.io.IOException -> L72
            r1.close()     // Catch: java.io.IOException -> L72
            goto L76
        L72:
            r5 = move-exception
            r5.printStackTrace()
        L76:
            throw r0
        L77:
            r5 = move-exception
            r5.printStackTrace()
            return r0
    }

    private void c() {
            r6 = this;
            org.json.JSONObject r0 = r6.e
            java.lang.String r1 = "Common_frequency"
            int r0 = r0.optInt(r1)
            if (r0 != 0) goto Lb
            r0 = 1
        Lb:
            r1 = 3600000(0x36ee80, float:5.044674E-39)
            int r0 = r0 * r1
            long r0 = (long) r0
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r4 = r6.f
            long r2 = r2 - r4
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 < 0) goto L1f
            r6.b()
        L1f:
            return
    }

    private void d(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.h
            if (r0 == 0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "; appid: "
            r0.append(r2)
            java.lang.String r2 = r1.d
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "openSDK_LOG.OpenConfig"
            com.tencent.open.log.SLog.v(r0, r2)
        L1f:
            return
    }

    public int a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "get "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r2.d(r0)
            r2.c()
            org.json.JSONObject r0 = r2.e
            int r3 = r0.optInt(r3)
            return r3
    }

    public boolean b(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "get "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r2.d(r0)
            r2.c()
            org.json.JSONObject r0 = r2.e
            java.lang.Object r3 = r0.opt(r3)
            r0 = 0
            if (r3 != 0) goto L21
            return r0
        L21:
            boolean r1 = r3 instanceof java.lang.Integer
            if (r1 == 0) goto L30
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            boolean r3 = r3.equals(r0)
            r3 = r3 ^ 1
            return r3
        L30:
            boolean r1 = r3 instanceof java.lang.Boolean
            if (r1 == 0) goto L3b
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            return r3
        L3b:
            return r0
    }
}
