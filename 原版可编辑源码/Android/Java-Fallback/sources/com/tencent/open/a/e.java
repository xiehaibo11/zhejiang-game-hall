package com.tencent.open.a;

class e implements com.tencent.open.a.a {
    private okhttp3.OkHttpClient a;

    private static class a implements okhttp3.Interceptor {
        private final java.lang.String a;

        public a(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public okhttp3.Response intercept(okhttp3.Interceptor.Chain r4) throws java.io.IOException {
                r3 = this;
                okhttp3.Request r0 = r4.request()
                okhttp3.Request$Builder r0 = r0.newBuilder()
                java.lang.String r1 = r3.a
                java.lang.String r2 = "User-Agent"
                okhttp3.Request$Builder r0 = r0.header(r2, r1)
                okhttp3.Request r0 = r0.build()
                okhttp3.Response r4 = r4.proceed(r0)
                return r4
        }
    }

    public e(java.lang.String r1) throws java.lang.NoClassDefFoundError {
            r0 = this;
            r0.<init>()
            r0.a(r1)
            return
    }

    private void a(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = okhttp3.internal.Version.userAgent()
            if (r0 == 0) goto L56
            java.lang.String r1 = "okhttp/3"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L56
            com.tencent.open.a.e$a r0 = new com.tencent.open.a.e$a
            r0.<init>(r5)
            okhttp3.OkHttpClient$Builder r5 = new okhttp3.OkHttpClient$Builder
            r5.<init>()
            r1 = 2
            okhttp3.ConnectionSpec[] r1 = new okhttp3.ConnectionSpec[r1]
            r2 = 0
            okhttp3.ConnectionSpec r3 = okhttp3.ConnectionSpec.MODERN_TLS
            r1[r2] = r3
            r2 = 1
            okhttp3.ConnectionSpec r3 = okhttp3.ConnectionSpec.COMPATIBLE_TLS
            r1[r2] = r3
            java.util.List r1 = java.util.Arrays.asList(r1)
            okhttp3.OkHttpClient$Builder r5 = r5.connectionSpecs(r1)
            r1 = 15000(0x3a98, double:7.411E-320)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r5 = r5.connectTimeout(r1, r3)
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            r2 = 30000(0x7530, double:1.4822E-319)
            okhttp3.OkHttpClient$Builder r5 = r5.readTimeout(r2, r1)
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r5 = r5.writeTimeout(r2, r1)
            r1 = 0
            okhttp3.OkHttpClient$Builder r5 = r5.cache(r1)
            okhttp3.OkHttpClient$Builder r5 = r5.addInterceptor(r0)
            r4.a(r5)
            okhttp3.OkHttpClient r5 = r5.build()
            r4.a = r5
            return
        L56:
            java.lang.NoClassDefFoundError r5 = new java.lang.NoClassDefFoundError
            r5.<init>()
            throw r5
    }

    private void a(okhttp3.OkHttpClient.Builder r5) {
            r4 = this;
            java.lang.String r0 = "enableTls2: failed."
            java.lang.String r1 = "OkHttpServiceImpl"
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r2 < r3) goto L35
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r2 >= r3) goto L35
            com.tencent.open.a.h r2 = new com.tencent.open.a.h     // Catch: java.security.KeyStoreException -> L27 java.security.NoSuchAlgorithmException -> L2c java.security.KeyManagementException -> L31
            r2.<init>()     // Catch: java.security.KeyStoreException -> L27 java.security.NoSuchAlgorithmException -> L2c java.security.KeyManagementException -> L31
            javax.net.ssl.TrustManager r3 = r2.a()     // Catch: java.security.KeyStoreException -> L27 java.security.NoSuchAlgorithmException -> L2c java.security.KeyManagementException -> L31
            if (r3 != 0) goto L1c
            return
        L1c:
            javax.net.ssl.X509TrustManager r3 = (javax.net.ssl.X509TrustManager) r3     // Catch: java.security.KeyStoreException -> L27 java.security.NoSuchAlgorithmException -> L2c java.security.KeyManagementException -> L31
            r5.sslSocketFactory(r2, r3)     // Catch: java.security.KeyStoreException -> L27 java.security.NoSuchAlgorithmException -> L2c java.security.KeyManagementException -> L31
            java.lang.String r5 = "enableTls2: enabled."
            com.tencent.open.log.SLog.i(r1, r5)     // Catch: java.security.KeyStoreException -> L27 java.security.NoSuchAlgorithmException -> L2c java.security.KeyManagementException -> L31
            goto L35
        L27:
            r5 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r5)
            goto L35
        L2c:
            r5 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r5)
            goto L35
        L31:
            r5 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r5)
        L35:
            return
    }

    @Override
    public com.tencent.open.a.g a(java.lang.String r4, java.lang.String r5) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "OkHttpServiceImpl"
            java.lang.String r1 = "get."
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L4e
            java.lang.String r0 = "?"
            int r1 = r5.indexOf(r0)
            r2 = -1
            if (r1 != r2) goto L26
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            goto L3f
        L26:
            int r0 = r4.length()
            int r0 = r0 + (-1)
            if (r1 == r0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "&"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L3f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = r0.toString()
        L4e:
            okhttp3.Request$Builder r0 = new okhttp3.Request$Builder
            r0.<init>()
            okhttp3.Request$Builder r4 = r0.url(r4)
            okhttp3.Request$Builder r4 = r4.get()
            okhttp3.Request r4 = r4.build()
            okhttp3.OkHttpClient r0 = r3.a
            okhttp3.Call r4 = r0.newCall(r4)
            okhttp3.Response r4 = r4.execute()
            com.tencent.open.a.d r0 = new com.tencent.open.a.d
            int r5 = r5.length()
            r0.<init>(r4, r5)
            return r0
    }

    @Override
    public com.tencent.open.a.g a(java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "OkHttpServiceImpl"
            java.lang.String r1 = "post data"
            com.tencent.open.log.SLog.i(r0, r1)
            okhttp3.FormBody$Builder r0 = new okhttp3.FormBody$Builder
            r0.<init>()
            if (r6 == 0) goto L34
            int r1 = r6.size()
            if (r1 <= 0) goto L34
            java.util.Set r1 = r6.keySet()
            java.util.Iterator r1 = r1.iterator()
        L1c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L34
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r6.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto L1c
            r0.add(r2, r3)
            goto L1c
        L34:
            okhttp3.FormBody r6 = r0.build()
            okhttp3.Request$Builder r0 = new okhttp3.Request$Builder
            r0.<init>()
            okhttp3.Request$Builder r5 = r0.url(r5)
            okhttp3.Request$Builder r5 = r5.post(r6)
            okhttp3.Request r5 = r5.build()
            okhttp3.OkHttpClient r0 = r4.a
            okhttp3.Call r5 = r0.newCall(r5)
            okhttp3.Response r5 = r5.execute()
            com.tencent.open.a.d r0 = new com.tencent.open.a.d
            long r1 = r6.contentLength()
            int r6 = (int) r1
            r0.<init>(r5, r6)
            return r0
    }

    @Override
    public com.tencent.open.a.g a(java.lang.String r6, java.util.Map<java.lang.String, java.lang.String> r7, java.util.Map<java.lang.String, byte[]> r8) throws java.io.IOException {
            r5 = this;
            if (r8 == 0) goto L9a
            int r0 = r8.size()
            if (r0 != 0) goto La
            goto L9a
        La:
            java.lang.String r0 = "OkHttpServiceImpl"
            java.lang.String r1 = "post data, has byte data"
            com.tencent.open.log.SLog.i(r0, r1)
            okhttp3.MultipartBody$Builder r1 = new okhttp3.MultipartBody$Builder
            r1.<init>()
            if (r7 == 0) goto L3e
            int r2 = r7.size()
            if (r2 <= 0) goto L3e
            java.util.Set r2 = r7.keySet()
            java.util.Iterator r2 = r2.iterator()
        L26:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L3e
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r4 = r7.get(r3)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L26
            r1.addFormDataPart(r3, r4)
            goto L26
        L3e:
            java.util.Set r7 = r8.keySet()
            java.util.Iterator r7 = r7.iterator()
        L46:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L70
            java.lang.Object r2 = r7.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r8.get(r2)
            byte[] r3 = (byte[]) r3
            if (r3 == 0) goto L46
            int r4 = r3.length
            if (r4 <= 0) goto L46
            java.lang.String r4 = "content/unknown"
            okhttp3.MediaType r4 = okhttp3.MediaType.get(r4)
            okhttp3.RequestBody r3 = okhttp3.RequestBody.create(r4, r3)
            r1.addFormDataPart(r2, r2, r3)
            java.lang.String r2 = "post byte data."
            com.tencent.open.log.SLog.w(r0, r2)
            goto L46
        L70:
            okhttp3.MultipartBody r7 = r1.build()
            okhttp3.Request$Builder r8 = new okhttp3.Request$Builder
            r8.<init>()
            okhttp3.Request$Builder r6 = r8.url(r6)
            okhttp3.Request$Builder r6 = r6.post(r7)
            okhttp3.Request r6 = r6.build()
            okhttp3.OkHttpClient r8 = r5.a
            okhttp3.Call r6 = r8.newCall(r6)
            okhttp3.Response r6 = r6.execute()
            com.tencent.open.a.d r8 = new com.tencent.open.a.d
            long r0 = r7.contentLength()
            int r7 = (int) r0
            r8.<init>(r6, r7)
            return r8
        L9a:
            com.tencent.open.a.g r6 = r5.a(r6, r7)
            return r6
    }

    @Override
    public void a(long r4, long r6) {
            r3 = this;
            r0 = 0
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L46
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 > 0) goto Lb
            goto L46
        Lb:
            okhttp3.OkHttpClient r0 = r3.a
            int r0 = r0.connectTimeoutMillis()
            long r0 = (long) r0
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 != 0) goto L21
            okhttp3.OkHttpClient r0 = r3.a
            int r0 = r0.readTimeoutMillis()
            long r0 = (long) r0
            int r2 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r2 == 0) goto L46
        L21:
            java.lang.String r0 = "OkHttpServiceImpl"
            java.lang.String r1 = "setTimeout changed."
            com.tencent.open.log.SLog.i(r0, r1)
            okhttp3.OkHttpClient r0 = r3.a
            okhttp3.OkHttpClient$Builder r0 = r0.newBuilder()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r4 = r0.connectTimeout(r4, r1)
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r4 = r4.readTimeout(r6, r5)
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            okhttp3.OkHttpClient$Builder r4 = r4.writeTimeout(r6, r5)
            okhttp3.OkHttpClient r4 = r4.build()
            r3.a = r4
        L46:
            return
    }
}
