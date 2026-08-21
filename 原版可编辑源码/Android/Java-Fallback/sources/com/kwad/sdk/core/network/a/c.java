package com.kwad.sdk.core.network.a;

public final class c {
    private static final java.util.regex.Pattern apN = null;
    public static java.lang.String apO;
    private static okhttp3.OkHttpClient apP;
    public static okhttp3.OkHttpClient apQ;


    static {
            java.lang.String r0 = "Unexpected response code for CONNECT: ([0-9]+)"
            r1 = 2
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0, r1)
            com.kwad.sdk.core.network.a.c.apN = r0
            java.lang.String r0 = "UTF-8"
            com.kwad.sdk.core.network.a.c.apO = r0
            r0 = 0
            com.kwad.sdk.core.network.a.c.apP = r0
            okhttp3.OkHttpClient r0 = Bn()
            com.kwad.sdk.core.network.a.c.apQ = r0
            return
    }

    public static okhttp3.OkHttpClient Bm() {
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L1b
            okhttp3.OkHttpClient r0 = com.kwad.sdk.core.network.a.c.apP
            if (r0 != 0) goto L18
            okhttp3.OkHttpClient r0 = com.kwad.sdk.core.network.a.c.apQ
            okhttp3.OkHttpClient$Builder r0 = r0.newBuilder()
            okhttp3.OkHttpClient r0 = r0.build()
            com.kwad.sdk.core.network.a.c.apP = r0
        L18:
            okhttp3.OkHttpClient r0 = com.kwad.sdk.core.network.a.c.apP
            return r0
        L1b:
            okhttp3.OkHttpClient r0 = com.kwad.sdk.core.network.a.c.apQ
            return r0
    }

    private static okhttp3.OkHttpClient Bn() {
            okhttp3.OkHttpClient r0 = com.kwad.sdk.core.network.a.c.apQ
            if (r0 != 0) goto L46
            okhttp3.OkHttpClient$Builder r0 = new okhttp3.OkHttpClient$Builder
            r0.<init>()
            r1 = 3000(0xbb8, double:1.482E-320)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r0 = r0.connectTimeout(r1, r3)
            r1 = 6000(0x1770, double:2.9644E-320)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r0 = r0.readTimeout(r1, r3)
            r1 = 3
            okhttp3.ConnectionSpec[] r1 = new okhttp3.ConnectionSpec[r1]
            r2 = 0
            okhttp3.ConnectionSpec r3 = okhttp3.ConnectionSpec.MODERN_TLS
            r1[r2] = r3
            r2 = 1
            okhttp3.ConnectionSpec r3 = okhttp3.ConnectionSpec.COMPATIBLE_TLS
            r1[r2] = r3
            r2 = 2
            okhttp3.ConnectionSpec r3 = okhttp3.ConnectionSpec.CLEARTEXT
            r1[r2] = r3
            java.util.List r1 = java.util.Arrays.asList(r1)
            okhttp3.OkHttpClient$Builder r0 = r0.connectionSpecs(r1)
            com.kwad.sdk.core.network.a.d r1 = new com.kwad.sdk.core.network.a.d     // Catch: java.lang.Throwable -> L3c
            r1.<init>()     // Catch: java.lang.Throwable -> L3c
            r0.dns(r1)     // Catch: java.lang.Throwable -> L3c
            goto L40
        L3c:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L40:
            okhttp3.OkHttpClient r0 = r0.build()
            com.kwad.sdk.core.network.a.c.apQ = r0
        L46:
            okhttp3.OkHttpClient r0 = com.kwad.sdk.core.network.a.c.apQ
            return r0
    }

    public static com.kwad.sdk.core.network.c a(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, boolean r4) {
            com.kwad.sdk.core.network.c r0 = new com.kwad.sdk.core.network.c
            r0.<init>()
            okhttp3.Request$Builder r1 = new okhttp3.Request$Builder     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            okhttp3.Request$Builder r2 = r1.url(r2)     // Catch: java.lang.Exception -> L3a
            a(r2)     // Catch: java.lang.Exception -> L3a
            a(r2, r3)     // Catch: java.lang.Exception -> L3a
            okhttp3.Request r2 = r2.build()     // Catch: java.lang.Exception -> L3a
            okhttp3.OkHttpClient r3 = Bm()     // Catch: java.lang.Exception -> L3a
            okhttp3.Call r2 = r3.newCall(r2)     // Catch: java.lang.Exception -> L3a
            okhttp3.Response r2 = r2.execute()     // Catch: java.lang.Exception -> L3a
            int r3 = r2.code()     // Catch: java.lang.Exception -> L3a
            r0.code = r3     // Catch: java.lang.Exception -> L3a
            int r3 = r0.code     // Catch: java.lang.Exception -> L3a
            r0.aoK = r3     // Catch: java.lang.Exception -> L3a
            if (r4 == 0) goto L35
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> L3a
            goto L37
        L35:
            java.lang.String r2 = ""
        L37:
            r0.aoM = r2     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r2 = move-exception
            a(r0, r2)
        L3e:
            return r0
    }

    private static java.lang.String a(okhttp3.Response r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            okhttp3.ResponseBody r2 = r6.body()     // Catch: java.lang.Throwable -> L70
            java.io.InputStream r2 = r2.byteStream()     // Catch: java.lang.Throwable -> L70
            java.lang.String r3 = "Content-Encoding"
            java.util.List r6 = r6.headers(r3)     // Catch: java.lang.Throwable -> L6d
            r3 = 0
            if (r6 == 0) goto L30
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L6d
        L1b:
            boolean r4 = r6.hasNext()     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L30
            java.lang.Object r4 = r6.next()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L6d
            java.lang.String r5 = "gzip"
            boolean r4 = r5.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L1b
            r3 = 1
        L30:
            if (r3 == 0) goto L39
            java.util.zip.GZIPInputStream r6 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L6d
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L6d
            r3 = r6
            goto L3b
        L39:
            r3 = r1
            r6 = r2
        L3b:
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = com.kwad.sdk.core.network.a.c.apO     // Catch: java.lang.Throwable -> L6a
            r4.<init>(r6, r5)     // Catch: java.lang.Throwable -> L6a
            java.io.BufferedReader r6 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L68
            r5 = 8
            r6.<init>(r4, r5)     // Catch: java.lang.Throwable -> L68
        L49:
            java.lang.String r1 = r6.readLine()     // Catch: java.lang.Throwable -> L64
            if (r1 == 0) goto L53
            r0.append(r1)     // Catch: java.lang.Throwable -> L64
            goto L49
        L53:
            com.kwad.sdk.crash.utils.b.closeQuietly(r6)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            java.lang.String r6 = r0.toString()
            return r6
        L64:
            r0 = move-exception
            r1 = r6
            r6 = r0
            goto L74
        L68:
            r6 = move-exception
            goto L74
        L6a:
            r6 = move-exception
            r4 = r1
            goto L74
        L6d:
            r6 = move-exception
            r3 = r1
            goto L73
        L70:
            r6 = move-exception
            r2 = r1
            r3 = r2
        L73:
            r4 = r3
        L74:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r6
    }

    private static void a(com.kwad.sdk.core.network.c r2, java.lang.Exception r3) {
            r2.aoL = r3
            int r0 = r2.aoK
            r1 = -1
            if (r0 != r1) goto L28
            boolean r0 = r3 instanceof java.io.IOException
            if (r0 == 0) goto L28
            java.lang.String r0 = r3.getMessage()
            if (r0 == 0) goto L28
            java.util.regex.Pattern r1 = com.kwad.sdk.core.network.a.c.apN
            java.util.regex.Matcher r0 = r1.matcher(r0)
            boolean r1 = r0.find()
            if (r1 == 0) goto L28
            r1 = 1
            java.lang.String r0 = r0.group(r1)     // Catch: java.lang.Exception -> L28
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L28
            r2.aoK = r0     // Catch: java.lang.Exception -> L28
        L28:
            boolean r0 = r3 instanceof java.net.SocketTimeoutException
            if (r0 == 0) goto L39
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoP
            int r0 = r0.errorCode
            r2.code = r0
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoP
            java.lang.String r0 = r0.msg
            r2.aoM = r0
            goto L5d
        L39:
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoQ
            int r0 = r0.errorCode
            r2.code = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5d
            r0.<init>()     // Catch: java.lang.Exception -> L5d
            com.kwad.sdk.core.network.f r1 = com.kwad.sdk.core.network.f.aoQ     // Catch: java.lang.Exception -> L5d
            java.lang.String r1 = r1.msg     // Catch: java.lang.Exception -> L5d
            r0.append(r1)     // Catch: java.lang.Exception -> L5d
            java.lang.String r1 = "/n"
            r0.append(r1)     // Catch: java.lang.Exception -> L5d
            java.lang.String r1 = android.util.Log.getStackTraceString(r3)     // Catch: java.lang.Exception -> L5d
            r0.append(r1)     // Catch: java.lang.Exception -> L5d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L5d
            r2.aoM = r0     // Catch: java.lang.Exception -> L5d
        L5d:
            java.lang.Boolean r2 = com.kwad.framework.a.a.ml
            boolean r2 = r2.booleanValue()
            if (r2 == 0) goto L68
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L68:
            return
    }

    private static void a(okhttp3.Request.Builder r2) {
            java.lang.String r0 = com.kwad.sdk.core.network.q.getUserAgent()
            java.lang.String r1 = "User-Agent"
            r2.addHeader(r1, r0)
            java.lang.String r0 = com.kwad.sdk.core.network.q.Bj()
            java.lang.String r1 = "BrowserUa"
            r2.addHeader(r1, r0)
            java.lang.String r0 = com.kwad.sdk.core.network.q.Bi()
            java.lang.String r1 = "SystemUa"
            r2.addHeader(r1, r0)
            return
    }

    private static void a(okhttp3.Request.Builder r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r2 == 0) goto L39
            if (r3 == 0) goto L39
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L39
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L12:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L39
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            if (r0 == 0) goto L12
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L12
            r2.removeHeader(r1)     // Catch: java.lang.Exception -> L12
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L12
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Exception -> L12
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L12
            r2.addHeader(r1, r0)     // Catch: java.lang.Exception -> L12
            goto L12
        L39:
            return
    }

    private static void a(okhttp3.Request.Builder r1, org.json.JSONObject r2) {
            java.lang.String r0 = "application/json; charset=utf-8"
            okhttp3.MediaType r0 = okhttp3.MediaType.parse(r0)
            java.lang.String r2 = r2.toString()
            okhttp3.RequestBody r2 = okhttp3.RequestBody.create(r0, r2)
            r1.post(r2)
            return
    }

    private static boolean a(okhttp3.Response r11, java.io.OutputStream r12, int r13) {
            r0 = 0
            okhttp3.ResponseBody r1 = r11.body()     // Catch: java.lang.Throwable -> L85
            java.io.InputStream r1 = r1.byteStream()     // Catch: java.lang.Throwable -> L85
            java.lang.String r2 = "Content-Encoding"
            java.util.List r11 = r11.headers(r2)     // Catch: java.lang.Throwable -> L81
            r2 = 1
            r3 = 0
            if (r11 == 0) goto L2d
            java.util.Iterator r11 = r11.iterator()     // Catch: java.lang.Throwable -> L81
        L17:
            boolean r4 = r11.hasNext()     // Catch: java.lang.Throwable -> L81
            if (r4 == 0) goto L2d
            java.lang.Object r4 = r11.next()     // Catch: java.lang.Throwable -> L81
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L81
            java.lang.String r5 = "gzip"
            boolean r4 = r5.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L81
            if (r4 == 0) goto L17
            r11 = r2
            goto L2e
        L2d:
            r11 = r3
        L2e:
            if (r11 == 0) goto L37
            java.util.zip.GZIPInputStream r11 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L81
            r11.<init>(r1)     // Catch: java.lang.Throwable -> L81
            r4 = r11
            goto L39
        L37:
            r4 = r0
            r11 = r1
        L39:
            java.io.BufferedInputStream r5 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L7e
            r5.<init>(r11)     // Catch: java.lang.Throwable -> L7e
            r11 = 1024(0x400, float:1.435E-42)
            byte[] r11 = new byte[r11]     // Catch: java.lang.Throwable -> L7a
            r6 = 0
            r8 = -1
            if (r13 <= 0) goto L55
        L47:
            int r12 = r5.read(r11)     // Catch: java.lang.Throwable -> L7a
            if (r12 == r8) goto L6d
            long r9 = (long) r12     // Catch: java.lang.Throwable -> L7a
            long r6 = r6 + r9
            long r9 = (long) r13     // Catch: java.lang.Throwable -> L7a
            int r12 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r12 <= 0) goto L47
            goto L6d
        L55:
            if (r13 >= 0) goto L6d
            java.io.BufferedOutputStream r13 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L7a
            r13.<init>(r12)     // Catch: java.lang.Throwable -> L7a
        L5c:
            int r12 = r5.read(r11)     // Catch: java.lang.Throwable -> L6b
            if (r12 == r8) goto L66
            r13.write(r11, r3, r12)     // Catch: java.lang.Throwable -> L6b
            goto L5c
        L66:
            r13.flush()     // Catch: java.lang.Throwable -> L6b
            r0 = r13
            goto L6d
        L6b:
            r11 = move-exception
            goto L7c
        L6d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r2
        L7a:
            r11 = move-exception
            r13 = r0
        L7c:
            r0 = r5
            goto L89
        L7e:
            r11 = move-exception
            r13 = r0
            goto L89
        L81:
            r11 = move-exception
            r13 = r0
            r4 = r13
            goto L89
        L85:
            r11 = move-exception
            r13 = r0
            r1 = r13
            r4 = r1
        L89:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r13)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r11
    }

    private static void b(okhttp3.Request.Builder r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            if (r4 == 0) goto L3c
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L3c
            okhttp3.FormBody$Builder r0 = new okhttp3.FormBody$Builder
            r0.<init>()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L15:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            if (r1 == 0) goto L15
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Exception -> L15
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L15
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = encode(r1)     // Catch: java.lang.Exception -> L15
            r0.addEncoded(r2, r1)     // Catch: java.lang.Exception -> L15
            goto L15
        L37:
            okhttp3.FormBody r4 = r0.build()
            goto L3d
        L3c:
            r4 = 0
        L3d:
            if (r3 == 0) goto L44
            if (r4 == 0) goto L44
            r3.post(r4)
        L44:
            return
    }

    public static com.kwad.sdk.core.network.c doGet(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = 1
            com.kwad.sdk.core.network.c r1 = a(r1, r2, r0)
            return r1
    }

    public static com.kwad.sdk.core.network.c doPost(java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4, com.kwad.sdk.export.proxy.AdHttpBodyBuilder r5) {
            com.kwad.sdk.core.network.c r0 = new com.kwad.sdk.core.network.c
            r0.<init>()
            okhttp3.MultipartBody$Builder r1 = new okhttp3.MultipartBody$Builder     // Catch: java.lang.Exception -> L4f
            r1.<init>()     // Catch: java.lang.Exception -> L4f
            okhttp3.MediaType r2 = okhttp3.MultipartBody.FORM     // Catch: java.lang.Exception -> L4f
            okhttp3.MultipartBody$Builder r1 = r1.setType(r2)     // Catch: java.lang.Exception -> L4f
            if (r5 == 0) goto L1a
            com.kwad.sdk.core.network.a.c$1 r2 = new com.kwad.sdk.core.network.a.c$1     // Catch: java.lang.Exception -> L4f
            r2.<init>(r1)     // Catch: java.lang.Exception -> L4f
            r5.buildFormData(r2)     // Catch: java.lang.Exception -> L4f
        L1a:
            okhttp3.MultipartBody r5 = r1.build()     // Catch: java.lang.Exception -> L4f
            okhttp3.Request$Builder r1 = new okhttp3.Request$Builder     // Catch: java.lang.Exception -> L4f
            r1.<init>()     // Catch: java.lang.Exception -> L4f
            okhttp3.Request$Builder r3 = r1.url(r3)     // Catch: java.lang.Exception -> L4f
            okhttp3.Request$Builder r3 = r3.post(r5)     // Catch: java.lang.Exception -> L4f
            a(r3, r4)     // Catch: java.lang.Exception -> L4f
            okhttp3.Request r3 = r3.build()     // Catch: java.lang.Exception -> L4f
            okhttp3.OkHttpClient r4 = Bm()     // Catch: java.lang.Exception -> L4f
            okhttp3.Call r3 = r4.newCall(r3)     // Catch: java.lang.Exception -> L4f
            okhttp3.Response r3 = r3.execute()     // Catch: java.lang.Exception -> L4f
            int r4 = r3.code()     // Catch: java.lang.Exception -> L4f
            r0.code = r4     // Catch: java.lang.Exception -> L4f
            int r4 = r0.code     // Catch: java.lang.Exception -> L4f
            r0.aoK = r4     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = a(r3)     // Catch: java.lang.Exception -> L4f
            r0.aoM = r3     // Catch: java.lang.Exception -> L4f
            goto L53
        L4f:
            r3 = move-exception
            a(r0, r3)
        L53:
            return r0
    }

    public static com.kwad.sdk.core.network.c doPost(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            com.kwad.sdk.core.network.c r0 = new com.kwad.sdk.core.network.c
            r0.<init>()
            okhttp3.Request$Builder r1 = new okhttp3.Request$Builder     // Catch: java.lang.Exception -> L38
            r1.<init>()     // Catch: java.lang.Exception -> L38
            okhttp3.Request$Builder r2 = r1.url(r2)     // Catch: java.lang.Exception -> L38
            a(r2)     // Catch: java.lang.Exception -> L38
            a(r2, r3)     // Catch: java.lang.Exception -> L38
            b(r2, r4)     // Catch: java.lang.Exception -> L38
            okhttp3.Request r2 = r2.build()     // Catch: java.lang.Exception -> L38
            okhttp3.OkHttpClient r3 = Bm()     // Catch: java.lang.Exception -> L38
            okhttp3.Call r2 = r3.newCall(r2)     // Catch: java.lang.Exception -> L38
            okhttp3.Response r2 = r2.execute()     // Catch: java.lang.Exception -> L38
            int r3 = r2.code()     // Catch: java.lang.Exception -> L38
            r0.code = r3     // Catch: java.lang.Exception -> L38
            int r3 = r0.code     // Catch: java.lang.Exception -> L38
            r0.aoK = r3     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> L38
            r0.aoM = r2     // Catch: java.lang.Exception -> L38
            goto L3c
        L38:
            r2 = move-exception
            a(r0, r2)
        L3c:
            return r0
    }

    public static com.kwad.sdk.core.network.c doPost(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, org.json.JSONObject r4) {
            com.kwad.sdk.core.network.c r0 = new com.kwad.sdk.core.network.c
            r0.<init>()
            okhttp3.Request$Builder r1 = new okhttp3.Request$Builder     // Catch: java.lang.Exception -> L38
            r1.<init>()     // Catch: java.lang.Exception -> L38
            okhttp3.Request$Builder r2 = r1.url(r2)     // Catch: java.lang.Exception -> L38
            a(r2)     // Catch: java.lang.Exception -> L38
            a(r2, r3)     // Catch: java.lang.Exception -> L38
            a(r2, r4)     // Catch: java.lang.Exception -> L38
            okhttp3.Request r2 = r2.build()     // Catch: java.lang.Exception -> L38
            okhttp3.OkHttpClient r3 = Bm()     // Catch: java.lang.Exception -> L38
            okhttp3.Call r2 = r3.newCall(r2)     // Catch: java.lang.Exception -> L38
            okhttp3.Response r2 = r2.execute()     // Catch: java.lang.Exception -> L38
            int r3 = r2.code()     // Catch: java.lang.Exception -> L38
            r0.code = r3     // Catch: java.lang.Exception -> L38
            int r3 = r0.code     // Catch: java.lang.Exception -> L38
            r0.aoK = r3     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> L38
            r0.aoM = r2     // Catch: java.lang.Exception -> L38
            goto L3c
        L38:
            r2 = move-exception
            a(r0, r2)
        L3c:
            return r0
    }

    public static boolean downloadUrlToStream(java.lang.String r4, java.io.OutputStream r5, int r6) {
            com.kwad.sdk.core.network.c r0 = new com.kwad.sdk.core.network.c
            r0.<init>()
            okhttp3.Request$Builder r1 = new okhttp3.Request$Builder
            r1.<init>()
            okhttp3.Request$Builder r4 = r1.url(r4)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = "Accept-Language"
            java.lang.String r3 = "zh-CN"
            r1.put(r2, r3)
            java.lang.String r2 = "Connection"
            java.lang.String r3 = "keep-alive"
            r1.put(r2, r3)
            java.lang.String r2 = "Charset"
            java.lang.String r3 = "UTF-8"
            r1.put(r2, r3)
            a(r4)
            a(r4, r1)
            okhttp3.Request r4 = r4.build()
            okhttp3.OkHttpClient r1 = Bm()
            okhttp3.Call r4 = r1.newCall(r4)
            okhttp3.Response r4 = r4.execute()
            int r1 = r4.code()
            r0.code = r1
            int r1 = r0.code
            r0.aoK = r1
            a(r4, r5, r6)
            r4 = 1
            return r4
    }

    private static java.lang.String encode(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r0 = "UTF-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L10
            return r2
        L10:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return r1
    }
}
