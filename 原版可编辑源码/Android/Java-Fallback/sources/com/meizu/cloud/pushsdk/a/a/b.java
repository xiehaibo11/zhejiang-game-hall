package com.meizu.cloud.pushsdk.a.a;

public class b {
    private static final java.lang.String a = null;
    private static final java.lang.Object b = null;
    private static com.meizu.cloud.pushsdk.a.a.b c;

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.a.a.b> r0 = com.meizu.cloud.pushsdk.a.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.a.a.b.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.meizu.cloud.pushsdk.a.a.b.b = r0
            return
    }

    private b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "sun.net.http.allowRestrictedHeaders"
            java.lang.String r1 = "true"
            java.lang.System.setProperty(r0, r1)     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            com.meizu.cloud.pushsdk.a.a.a.a(r3)
            return
    }

    public static com.meizu.cloud.pushsdk.a.a.b a(android.content.Context r2) {
            com.meizu.cloud.pushsdk.a.a.b r0 = com.meizu.cloud.pushsdk.a.a.b.c
            if (r0 != 0) goto L17
            java.lang.Object r0 = com.meizu.cloud.pushsdk.a.a.b.b
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.a.a.b r1 = com.meizu.cloud.pushsdk.a.a.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.meizu.cloud.pushsdk.a.a.b r1 = new com.meizu.cloud.pushsdk.a.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.meizu.cloud.pushsdk.a.a.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.meizu.cloud.pushsdk.a.a.b r2 = com.meizu.cloud.pushsdk.a.a.b.c
            return r2
    }

    private java.util.Map<java.lang.String, java.lang.String> a(java.util.Map<java.lang.String, java.lang.String> r5) {
            r4 = this;
            if (r5 != 0) goto L8
            java.util.HashMap r5 = new java.util.HashMap
            r0 = 2
            r5.<init>(r0)
        L8:
            com.meizu.cloud.pushsdk.a.a.a r0 = com.meizu.cloud.pushsdk.a.a.a.a()
            byte[] r0 = r0.c()
            if (r0 == 0) goto L36
            int r1 = r0.length
            if (r1 <= 0) goto L36
            java.lang.String r1 = new java.lang.String
            r1.<init>(r0)
            java.lang.String r0 = com.meizu.cloud.pushsdk.a.a.b.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "attach x_s_key: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.d(r0, r2)
            java.lang.String r0 = "X-S-Key"
            r5.put(r0, r1)
            goto L6b
        L36:
            com.meizu.cloud.pushsdk.a.a.a r0 = com.meizu.cloud.pushsdk.a.a.a.a()
            byte[] r0 = r0.b()
            if (r0 == 0) goto L6b
            int r0 = r0.length
            if (r0 <= 0) goto L6b
            java.lang.String r0 = new java.lang.String
            com.meizu.cloud.pushsdk.a.a.a r1 = com.meizu.cloud.pushsdk.a.a.a.a()
            byte[] r1 = r1.b()
            r0.<init>(r1)
            java.lang.String r1 = com.meizu.cloud.pushsdk.a.a.b.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "attach x_a_key: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.d(r1, r2)
            java.lang.String r1 = "X-A-Key"
            r5.put(r1, r0)
        L6b:
            return r5
    }

    private void a(java.net.HttpURLConnection r3, byte[] r4) {
            r2 = this;
            r0 = 0
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L17
            java.io.OutputStream r3 = r3.getOutputStream()     // Catch: java.lang.Throwable -> L17
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L17
            r1.write(r4)     // Catch: java.lang.Throwable -> L14
            r1.flush()     // Catch: java.lang.Throwable -> L14
            r1.close()     // Catch: java.lang.Exception -> L13
        L13:
            return
        L14:
            r3 = move-exception
            r0 = r1
            goto L18
        L17:
            r3 = move-exception
        L18:
            if (r0 == 0) goto L1d
            r0.close()     // Catch: java.lang.Exception -> L1d
        L1d:
            throw r3
    }

    private void a(java.net.URLConnection r4) {
            r3 = this;
            java.lang.String r0 = "X-S-Key"
            java.lang.String r4 = r4.getHeaderField(r0)     // Catch: java.lang.NullPointerException -> L29
            java.lang.String r0 = com.meizu.cloud.pushsdk.a.a.b.a     // Catch: java.lang.NullPointerException -> L29
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NullPointerException -> L29
            r1.<init>()     // Catch: java.lang.NullPointerException -> L29
            java.lang.String r2 = "get x_s_key = "
            r1.append(r2)     // Catch: java.lang.NullPointerException -> L29
            r1.append(r4)     // Catch: java.lang.NullPointerException -> L29
            java.lang.String r1 = r1.toString()     // Catch: java.lang.NullPointerException -> L29
            com.meizu.cloud.pushinternal.DebugLogger.d(r0, r1)     // Catch: java.lang.NullPointerException -> L29
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.NullPointerException -> L29
            if (r0 != 0) goto L29
            com.meizu.cloud.pushsdk.a.a.a r0 = com.meizu.cloud.pushsdk.a.a.a.a()     // Catch: java.lang.NullPointerException -> L29
            r0.a(r4)     // Catch: java.lang.NullPointerException -> L29
        L29:
            return
    }

    private byte[] a(java.io.InputStream r4) {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
        L5:
            int r1 = r4.read()     // Catch: java.lang.Throwable -> L18
            r2 = -1
            if (r1 == r2) goto L10
            r0.write(r1)     // Catch: java.lang.Throwable -> L18
            goto L5
        L10:
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Throwable -> L18
            r0.close()     // Catch: java.io.IOException -> L17
        L17:
            return r4
        L18:
            r4 = move-exception
            r0.close()     // Catch: java.io.IOException -> L1c
        L1c:
            throw r4
    }

    private com.meizu.cloud.pushsdk.a.a.c b(java.lang.String r7, java.util.Map<java.lang.String, java.lang.String> r8, java.lang.String r9) {
            r6 = this;
            r0 = 0
            if (r9 == 0) goto L138
            com.meizu.cloud.pushsdk.a.a.a r1 = com.meizu.cloud.pushsdk.a.a.a.a()
            byte[] r9 = r9.getBytes()
            byte[] r9 = r1.a(r9)
            if (r9 == 0) goto L1c
            java.lang.String r1 = new java.lang.String
            r2 = 2
            byte[] r9 = android.util.Base64.encode(r9, r2)
            r1.<init>(r9)
            goto L1d
        L1c:
            r1 = r0
        L1d:
            java.net.URL r9 = new java.net.URL     // Catch: java.net.MalformedURLException -> L134
            java.lang.String r2 = "https://norma-external-collect.meizu.com/push/android/external/add.do"
            r9.<init>(r2)     // Catch: java.net.MalformedURLException -> L134
            java.net.URLConnection r9 = r9.openConnection()
            java.net.HttpURLConnection r9 = (java.net.HttpURLConnection) r9
            r9.setRequestMethod(r7)
            r7 = 1
            r9.setDoInput(r7)
            r9.setDoOutput(r7)
            r7 = 0
            r9.setUseCaches(r7)
            r7 = 30000(0x7530, float:4.2039E-41)
            r9.setConnectTimeout(r7)
            r9.setReadTimeout(r7)
            java.lang.String r7 = "Connection"
            java.lang.String r2 = "keep-alive"
            r9.setRequestProperty(r7, r2)
            java.lang.String r7 = "Charset"
            java.lang.String r2 = "UTF-8"
            r9.setRequestProperty(r7, r2)
            java.lang.String r7 = "Content-Type"
            java.lang.String r2 = "application/x-www-form-urlencoded"
            r9.setRequestProperty(r7, r2)
            java.lang.String r7 = "Content-Encoding"
            java.lang.String r2 = "gzip"
            r9.setRequestProperty(r7, r2)
            if (r8 == 0) goto L88
            int r7 = r8.size()
            if (r7 <= 0) goto L88
            java.util.Set r7 = r8.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L6c:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto L88
            java.lang.Object r8 = r7.next()
            java.util.Map$Entry r8 = (java.util.Map.Entry) r8
            java.lang.Object r2 = r8.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r8 = r8.getValue()
            java.lang.String r8 = (java.lang.String) r8
            r9.setRequestProperty(r2, r8)
            goto L6c
        L88:
            if (r1 == 0) goto L91
            byte[] r7 = r1.getBytes()     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            r6.a(r9, r7)     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
        L91:
            int r7 = r9.getResponseCode()     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            java.lang.String r8 = com.meizu.cloud.pushsdk.a.a.b.a     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            r1.<init>()     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            java.lang.String r2 = "code = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            r1.append(r7)     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            com.meizu.cloud.pushinternal.DebugLogger.d(r8, r1)     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            r6.a(r9)     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            r6.b(r9)     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            java.io.InputStream r8 = r9.getInputStream()     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a
            if (r8 == 0) goto Lea
            byte[] r1 = r6.a(r8)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            if (r1 == 0) goto Leb
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r2.<init>(r1)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            java.lang.String r3 = com.meizu.cloud.pushsdk.a.a.b.a     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r4.<init>()     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            java.lang.String r5 = "body = "
            r4.append(r5)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r4.append(r2)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            com.meizu.cloud.pushinternal.DebugLogger.d(r3, r4)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> Le3 java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r3.<init>(r2)     // Catch: org.json.JSONException -> Le3 java.lang.Exception -> Le8 java.lang.Throwable -> L129
            java.lang.String r2 = "code"
            r3.getInt(r2)     // Catch: org.json.JSONException -> Le3 java.lang.Exception -> Le8 java.lang.Throwable -> L129
            goto Leb
        Le3:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            goto Leb
        Le8:
            r7 = move-exception
            goto L10c
        Lea:
            r1 = r0
        Leb:
            if (r1 == 0) goto Lf9
            com.meizu.cloud.pushsdk.a.a.c r2 = new com.meizu.cloud.pushsdk.a.a.c     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r3.<init>(r1)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r2.<init>(r7, r3)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r0 = r2
            goto Lff
        Lf9:
            com.meizu.cloud.pushsdk.a.a.c r1 = new com.meizu.cloud.pushsdk.a.a.c     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r1.<init>(r7, r0)     // Catch: java.lang.Exception -> Le8 java.lang.Throwable -> L129
            r0 = r1
        Lff:
            if (r8 == 0) goto L104
        L101:
            r8.close()     // Catch: java.io.IOException -> L104
        L104:
            r9.disconnect()
            goto L138
        L108:
            r7 = move-exception
            goto L12b
        L10a:
            r7 = move-exception
            r8 = r0
        L10c:
            java.lang.String r1 = com.meizu.cloud.pushsdk.a.a.b.a     // Catch: java.lang.Throwable -> L129
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L129
            r2.<init>()     // Catch: java.lang.Throwable -> L129
            java.lang.String r3 = "realStringPartRequest error "
            r2.append(r3)     // Catch: java.lang.Throwable -> L129
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L129
            r2.append(r7)     // Catch: java.lang.Throwable -> L129
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L129
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r7)     // Catch: java.lang.Throwable -> L129
            if (r8 == 0) goto L104
            goto L101
        L129:
            r7 = move-exception
            r0 = r8
        L12b:
            if (r0 == 0) goto L130
            r0.close()     // Catch: java.io.IOException -> L130
        L130:
            r9.disconnect()
            throw r7
        L134:
            r7 = move-exception
            r7.printStackTrace()
        L138:
            return r0
    }

    private void b(java.net.URLConnection r4) {
            r3 = this;
            java.lang.String r0 = "Key-Timeout"
            java.lang.String r4 = r4.getHeaderField(r0)     // Catch: java.lang.NullPointerException -> L1c
            java.lang.String r0 = com.meizu.cloud.pushsdk.a.a.b.a     // Catch: java.lang.NullPointerException -> L1c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NullPointerException -> L1c
            r1.<init>()     // Catch: java.lang.NullPointerException -> L1c
            java.lang.String r2 = "get keyTimeout = "
            r1.append(r2)     // Catch: java.lang.NullPointerException -> L1c
            r1.append(r4)     // Catch: java.lang.NullPointerException -> L1c
            java.lang.String r4 = r1.toString()     // Catch: java.lang.NullPointerException -> L1c
            com.meizu.cloud.pushinternal.DebugLogger.d(r0, r4)     // Catch: java.lang.NullPointerException -> L1c
        L1c:
            return
    }

    public com.meizu.cloud.pushsdk.a.a.c a(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, java.lang.String r3) {
            r0 = this;
            java.util.Map r2 = r0.a(r2)
            com.meizu.cloud.pushsdk.a.a.c r1 = r0.b(r1, r2, r3)     // Catch: java.lang.Exception -> L9
            goto Le
        L9:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
        Le:
            return r1
    }
}
