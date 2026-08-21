package com.kwad.sdk.core.network.a;

public final class b {
    private static com.kwad.sdk.core.network.c a(java.lang.String r4, java.util.Map<java.lang.String, java.lang.String> r5, java.lang.String r6, boolean r7) {
            com.kwad.sdk.core.network.c r0 = new com.kwad.sdk.core.network.c
            r0.<init>()
            r1 = 0
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L7f java.lang.Exception -> L82
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L7f java.lang.Exception -> L82
            java.net.URLConnection r4 = r2.openConnection()     // Catch: java.lang.Throwable -> L7f java.lang.Exception -> L82
            java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4     // Catch: java.lang.Throwable -> L7f java.lang.Exception -> L82
            com.kwad.sdk.core.network.s.wrapHttpURLConnection(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r2 = 1
            r4.setDoInput(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r4.setDoOutput(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            java.lang.String r2 = "POST"
            r4.setRequestMethod(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            java.lang.String r2 = "Content-Type"
            if (r7 == 0) goto L2a
            java.lang.String r7 = "application/json"
        L26:
            r4.setRequestProperty(r2, r7)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            goto L2d
        L2a:
            java.lang.String r7 = "application/x-www-form-urlencoded"
            goto L26
        L2d:
            com.kwad.sdk.core.network.q.b(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            a(r4, r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r5 = 5000(0x1388, float:7.006E-42)
            r4.setConnectTimeout(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r4.setReadTimeout(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r5 = 0
            r4.setUseCaches(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r4.connect()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            if (r5 != 0) goto L56
            java.io.OutputStream r1 = r4.getOutputStream()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            byte[] r5 = r6.getBytes()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r1.write(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r1.flush()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
        L56:
            int r5 = r4.getResponseCode()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r0.code = r5     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            int r6 = r0.code     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r0.aoK = r6     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r6 = 200(0xc8, float:2.8E-43)
            if (r5 != r6) goto L6e
            java.io.InputStream r5 = r4.getInputStream()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            java.lang.String r5 = a(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
            r0.aoM = r5     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L7a
        L6e:
            com.kwad.sdk.crash.utils.b.a(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            goto L8d
        L75:
            r5 = move-exception
            r3 = r1
            r1 = r4
            r4 = r3
            goto L8f
        L7a:
            r5 = move-exception
            r3 = r1
            r1 = r4
            r4 = r3
            goto L84
        L7f:
            r5 = move-exception
            r4 = r1
            goto L8f
        L82:
            r5 = move-exception
            r4 = r1
        L84:
            a(r0, r5)     // Catch: java.lang.Throwable -> L8e
            com.kwad.sdk.crash.utils.b.a(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
        L8d:
            return r0
        L8e:
            r5 = move-exception
        L8f:
            com.kwad.sdk.crash.utils.b.a(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            throw r5
    }

    public static com.kwad.sdk.core.network.c a(java.lang.String r6, java.util.Map<java.lang.String, java.lang.String> r7, boolean r8) {
            com.kwad.sdk.core.network.c r0 = new com.kwad.sdk.core.network.c
            r0.<init>()
            r1 = 0
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            java.net.URLConnection r6 = r2.openConnection()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            java.net.HttpURLConnection r6 = (java.net.HttpURLConnection) r6     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            com.kwad.sdk.core.network.s.wrapHttpURLConnection(r6)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            a(r6, r7)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            java.lang.String r7 = "GET"
            r6.setRequestMethod(r7)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            java.lang.String r7 = "Accept"
            java.lang.String r2 = "application/json"
            r6.setRequestProperty(r7, r2)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            com.kwad.sdk.core.network.q.b(r6)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            int r7 = r6.getResponseCode()     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r0.code = r7     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            int r7 = r0.code     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r0.aoK = r7     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r7.<init>()     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            if (r8 == 0) goto L50
            java.io.InputStream r1 = r6.getInputStream()     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r8 = 1024(0x400, float:1.435E-42)
            byte[] r8 = new byte[r8]     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
        L3f:
            int r2 = r1.read(r8)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r3 = -1
            if (r2 == r3) goto L50
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r4 = 0
            r3.<init>(r8, r4, r2)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r7.append(r3)     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            goto L3f
        L50:
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            r0.aoM = r7     // Catch: java.lang.Throwable -> L5d java.lang.Exception -> L62
            com.kwad.sdk.crash.utils.b.a(r6)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            goto L75
        L5d:
            r7 = move-exception
            r5 = r1
            r1 = r6
            r6 = r5
            goto L77
        L62:
            r7 = move-exception
            r5 = r1
            r1 = r6
            r6 = r5
            goto L6c
        L67:
            r7 = move-exception
            r6 = r1
            goto L77
        L6a:
            r7 = move-exception
            r6 = r1
        L6c:
            a(r0, r7)     // Catch: java.lang.Throwable -> L76
            com.kwad.sdk.crash.utils.b.a(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r6)
        L75:
            return r0
        L76:
            r7 = move-exception
        L77:
            com.kwad.sdk.crash.utils.b.a(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r6)
            throw r7
    }

    private static java.lang.String a(java.io.InputStream r1) {
            java.lang.String r0 = com.kwad.sdk.crash.utils.h.c(r1)     // Catch: java.lang.Throwable -> L8 java.io.IOException -> La
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L8:
            r0 = move-exception
            goto L13
        La:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)     // Catch: java.lang.Throwable -> L8
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            r1 = 0
            return r1
        L13:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }

    private static void a(com.kwad.sdk.core.network.c r2, java.lang.Exception r3) {
            int r0 = r2.code
            if (r0 != 0) goto L6
            r0 = -1
            goto L8
        L6:
            int r0 = r2.code
        L8:
            r2.aoK = r0
            r2.aoL = r3
            boolean r0 = r3 instanceof java.net.SocketTimeoutException
            if (r0 == 0) goto L1d
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoP
            int r0 = r0.errorCode
            r2.code = r0
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoP
            java.lang.String r0 = r0.msg
            r2.aoM = r0
            goto L41
        L1d:
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoQ
            int r0 = r0.errorCode
            r2.code = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r0.<init>()     // Catch: java.lang.Exception -> L41
            com.kwad.sdk.core.network.f r1 = com.kwad.sdk.core.network.f.aoQ     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = r1.msg     // Catch: java.lang.Exception -> L41
            r0.append(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = "/n"
            r0.append(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = android.util.Log.getStackTraceString(r3)     // Catch: java.lang.Exception -> L41
            r0.append(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L41
            r2.aoM = r0     // Catch: java.lang.Exception -> L41
        L41:
            java.lang.Boolean r2 = com.kwad.framework.a.a.ml
            boolean r2 = r2.booleanValue()
            if (r2 == 0) goto L4c
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L4c:
            return
    }

    private static void a(java.net.HttpURLConnection r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r3 == 0) goto L28
            if (r2 == 0) goto L28
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        Lc:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L28
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.setRequestProperty(r1, r0)
            goto Lc
        L28:
            return
    }

    public static com.kwad.sdk.core.network.c doGet(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2) {
            r0 = 1
            com.kwad.sdk.core.network.c r1 = a(r1, r2, r0)
            return r1
    }

    public static com.kwad.sdk.core.network.c doPost(java.lang.String r4, java.util.Map<java.lang.String, java.lang.String> r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            r0 = 0
            if (r6 == 0) goto L48
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L10:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r6.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r3 = encode(r3)
            java.lang.Object r2 = r2.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r1.append(r2)
            java.lang.String r2 = "="
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = "&"
            r1.append(r2)
            goto L10
        L3d:
            int r6 = r1.length()
            int r6 = r6 + (-1)
            java.lang.String r6 = r1.substring(r0, r6)
            goto L49
        L48:
            r6 = 0
        L49:
            com.kwad.sdk.core.network.c r4 = a(r4, r5, r6, r0)
            return r4
    }

    public static com.kwad.sdk.core.network.c doPost(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, org.json.JSONObject r3) {
            if (r3 == 0) goto L7
            java.lang.String r3 = r3.toString()
            goto L8
        L7:
            r3 = 0
        L8:
            r0 = 1
            com.kwad.sdk.core.network.c r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static boolean downloadUrlToStream(java.lang.String r10, java.io.OutputStream r11, int r12) {
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L84
            r1.<init>(r10)     // Catch: java.lang.Throwable -> L84
            java.net.URLConnection r10 = r1.openConnection()     // Catch: java.lang.Throwable -> L84
            java.net.HttpURLConnection r10 = (java.net.HttpURLConnection) r10     // Catch: java.lang.Throwable -> L84
            com.kwad.sdk.core.network.s.wrapHttpURLConnection(r10)     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "Accept-Language"
            java.lang.String r2 = "zh-CN"
            r10.setRequestProperty(r1, r2)     // Catch: java.lang.Throwable -> L81
            r1 = 10000(0x2710, float:1.4013E-41)
            r10.setConnectTimeout(r1)     // Catch: java.lang.Throwable -> L81
            r1 = 120000(0x1d4c0, float:1.68156E-40)
            r10.setReadTimeout(r1)     // Catch: java.lang.Throwable -> L81
            r1 = 0
            r10.setUseCaches(r1)     // Catch: java.lang.Throwable -> L81
            r2 = 1
            r10.setDoInput(r2)     // Catch: java.lang.Throwable -> L81
            java.lang.String r3 = "Connection"
            java.lang.String r4 = "keep-alive"
            r10.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> L81
            java.lang.String r3 = "Charset"
            java.lang.String r4 = "UTF-8"
            r10.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> L81
            com.kwad.sdk.core.network.q.b(r10)     // Catch: java.lang.Throwable -> L81
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L81
            java.io.InputStream r4 = r10.getInputStream()     // Catch: java.lang.Throwable -> L81
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L81
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L7f
            r5 = 0
            r7 = -1
            if (r12 <= 0) goto L5a
        L4c:
            int r11 = r3.read(r4)     // Catch: java.lang.Throwable -> L7f
            if (r11 == r7) goto L73
            long r8 = (long) r11     // Catch: java.lang.Throwable -> L7f
            long r5 = r5 + r8
            long r8 = (long) r12     // Catch: java.lang.Throwable -> L7f
            int r11 = (r5 > r8 ? 1 : (r5 == r8 ? 0 : -1))
            if (r11 <= 0) goto L4c
            goto L73
        L5a:
            if (r12 >= 0) goto L73
            java.io.BufferedOutputStream r12 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L7f
            r12.<init>(r11)     // Catch: java.lang.Throwable -> L7f
        L61:
            int r11 = r3.read(r4)     // Catch: java.lang.Throwable -> L70
            if (r11 == r7) goto L6b
            r12.write(r4, r1, r11)     // Catch: java.lang.Throwable -> L70
            goto L61
        L6b:
            r12.flush()     // Catch: java.lang.Throwable -> L70
            r0 = r12
            goto L73
        L70:
            r11 = move-exception
            r0 = r12
            goto L87
        L73:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            if (r10 == 0) goto L7e
            r10.disconnect()
        L7e:
            return r2
        L7f:
            r11 = move-exception
            goto L87
        L81:
            r11 = move-exception
            r3 = r0
            goto L87
        L84:
            r11 = move-exception
            r10 = r0
            r3 = r10
        L87:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            if (r10 == 0) goto L92
            r10.disconnect()
        L92:
            throw r11
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
