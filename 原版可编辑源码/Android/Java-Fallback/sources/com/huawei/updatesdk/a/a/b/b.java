package com.huawei.updatesdk.a.a.b;

public class b {
    private java.net.HttpURLConnection a;

    public static class a {
        private java.lang.String a;
        private int b;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        static int a(com.huawei.updatesdk.a.a.b.b.a r0, int r1) {
                r0.b = r1
                return r1
        }

        static java.lang.String a(com.huawei.updatesdk.a.a.b.b.a r0, java.lang.String r1) {
                r0.a = r1
                return r1
        }

        public int a() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        public java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }
    }

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    public static javax.net.ssl.HttpsURLConnection a(java.lang.String r1, android.content.Context r2) {
            java.net.URL r0 = new java.net.URL
            r0.<init>(r1)
            java.net.URLConnection r1 = r0.openConnection()
            javax.net.ssl.HttpsURLConnection r1 = (javax.net.ssl.HttpsURLConnection) r1
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.getInstance(r2)
            r1.setSSLSocketFactory(r2)
            org.apache.http.conn.ssl.X509HostnameVerifier r2 = org.apache.http.conn.ssl.SSLSocketFactory.STRICT_HOSTNAME_VERIFIER
            r1.setHostnameVerifier(r2)
            return r1
    }

    private byte[] a(byte[] r8) {
            r7 = this;
            java.lang.String r0 = "gzip error!"
            java.lang.String r1 = "HttpsUtil"
            r2 = 0
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L29 java.io.IOException -> L2b
            r3.<init>()     // Catch: java.lang.Throwable -> L29 java.io.IOException -> L2b
            java.io.DataOutputStream r4 = new java.io.DataOutputStream     // Catch: java.io.IOException -> L27 java.lang.Throwable -> L29
            java.util.zip.GZIPOutputStream r5 = new java.util.zip.GZIPOutputStream     // Catch: java.io.IOException -> L27 java.lang.Throwable -> L29
            int r6 = r8.length     // Catch: java.io.IOException -> L27 java.lang.Throwable -> L29
            r5.<init>(r3, r6)     // Catch: java.io.IOException -> L27 java.lang.Throwable -> L29
            r4.<init>(r5)     // Catch: java.io.IOException -> L27 java.lang.Throwable -> L29
            r2 = 0
            int r5 = r8.length     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L24
            r4.write(r8, r2, r5)     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L24
            r4.flush()     // Catch: java.lang.Throwable -> L21 java.io.IOException -> L24
            r4.close()     // Catch: java.io.IOException -> L36
            goto L3a
        L21:
            r8 = move-exception
            r2 = r4
            goto L3f
        L24:
            r8 = move-exception
            r2 = r4
            goto L2d
        L27:
            r8 = move-exception
            goto L2d
        L29:
            r8 = move-exception
            goto L3f
        L2b:
            r8 = move-exception
            r3 = r2
        L2d:
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r0, r8)     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L3a
            r2.close()     // Catch: java.io.IOException -> L36
            goto L3a
        L36:
            r8 = move-exception
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r0, r8)
        L3a:
            byte[] r8 = r3.toByteArray()
            return r8
        L3f:
            if (r2 == 0) goto L49
            r2.close()     // Catch: java.io.IOException -> L45
            goto L49
        L45:
            r2 = move-exception
            com.huawei.updatesdk.a.a.c.a.a.a.a(r1, r0, r2)
        L49:
            throw r8
    }

    public com.huawei.updatesdk.a.a.b.b.a a(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, android.content.Context r8) {
            r3 = this;
            com.huawei.updatesdk.a.a.b.b$a r0 = new com.huawei.updatesdk.a.a.b.b$a
            r0.<init>()
            r1 = 0
            javax.net.ssl.HttpsURLConnection r4 = a(r4, r8)     // Catch: java.lang.Throwable -> Lc6
            r3.a = r4     // Catch: java.lang.Throwable -> Lc6
            r8 = 1
            r4.setDoInput(r8)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            r4.setDoOutput(r8)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            r8 = 0
            r4.setUseCaches(r8)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            r8 = 5000(0x1388, float:7.006E-42)
            r4.setConnectTimeout(r8)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            r8 = 10000(0x2710, float:1.4013E-41)
            r4.setReadTimeout(r8)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r8 = "POST"
            r4.setRequestMethod(r8)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r8 = "Content-Type"
            java.lang.String r2 = "application/x-gzip"
            r4.setRequestProperty(r8, r2)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r8 = "Content-Encoding"
            java.lang.String r2 = "gzip"
            r4.setRequestProperty(r8, r2)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r8 = "Connection"
            java.lang.String r2 = "Keep-Alive"
            r4.setRequestProperty(r8, r2)     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r8 = "User-Agent"
            r4.setRequestProperty(r8, r7)     // Catch: java.lang.Throwable -> Lc6
            java.io.DataOutputStream r4 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> Lc6
            java.net.HttpURLConnection r7 = r3.a     // Catch: java.lang.Throwable -> Lc6
            java.io.OutputStream r7 = r7.getOutputStream()     // Catch: java.lang.Throwable -> Lc6
            r4.<init>(r7)     // Catch: java.lang.Throwable -> Lc6
            byte[] r5 = r5.getBytes(r6)     // Catch: java.lang.Throwable -> L84
            byte[] r5 = r3.a(r5)     // Catch: java.lang.Throwable -> L84
            r4.write(r5)     // Catch: java.lang.Throwable -> L84
            r4.flush()     // Catch: java.lang.Throwable -> L84
            java.net.HttpURLConnection r5 = r3.a     // Catch: java.lang.Throwable -> L84
            int r5 = r5.getResponseCode()     // Catch: java.lang.Throwable -> L84
            com.huawei.updatesdk.a.a.b.b.a.a(r0, r5)     // Catch: java.lang.Throwable -> L84
            r6 = 200(0xc8, float:2.8E-43)
            if (r5 != r6) goto L86
            java.io.BufferedInputStream r5 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L84
            java.net.HttpURLConnection r6 = r3.a     // Catch: java.lang.Throwable -> L84
            java.io.InputStream r6 = r6.getInputStream()     // Catch: java.lang.Throwable -> L84
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L84
            goto L91
        L84:
            r5 = move-exception
            goto Lc9
        L86:
            java.io.BufferedInputStream r5 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L84
            java.net.HttpURLConnection r6 = r3.a     // Catch: java.lang.Throwable -> L84
            java.io.InputStream r6 = r6.getErrorStream()     // Catch: java.lang.Throwable -> L84
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L84
        L91:
            r1 = r5
            com.huawei.updatesdk.a.a.d.b r5 = new com.huawei.updatesdk.a.a.d.b     // Catch: java.lang.Throwable -> L84
            r5.<init>()     // Catch: java.lang.Throwable -> L84
            com.huawei.updatesdk.a.a.b.a r6 = com.huawei.updatesdk.a.a.b.a.b()     // Catch: java.lang.Throwable -> L84
            byte[] r6 = r6.a()     // Catch: java.lang.Throwable -> L84
        L9f:
            int r7 = r1.read(r6)     // Catch: java.lang.Throwable -> L84
            r8 = -1
            if (r7 == r8) goto Laa
            r5.a(r6, r7)     // Catch: java.lang.Throwable -> L84
            goto L9f
        Laa:
            com.huawei.updatesdk.a.a.b.a r7 = com.huawei.updatesdk.a.a.b.a.b()     // Catch: java.lang.Throwable -> L84
            r7.a(r6)     // Catch: java.lang.Throwable -> L84
            java.lang.String r5 = r5.a()     // Catch: java.lang.Throwable -> L84
            com.huawei.updatesdk.a.a.b.b.a.a(r0, r5)     // Catch: java.lang.Throwable -> L84
            java.net.HttpURLConnection r5 = r3.a
            if (r5 == 0) goto Lbf
            r5.disconnect()
        Lbf:
            com.huawei.updatesdk.a.a.d.d.a(r4)
            com.huawei.updatesdk.a.a.d.d.a(r1)
            return r0
        Lc6:
            r4 = move-exception
            r5 = r4
            r4 = r1
        Lc9:
            java.net.HttpURLConnection r6 = r3.a
            if (r6 == 0) goto Ld0
            r6.disconnect()
        Ld0:
            com.huawei.updatesdk.a.a.d.d.a(r4)
            com.huawei.updatesdk.a.a.d.d.a(r1)
            throw r5
    }

    public void a() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.a
            if (r0 == 0) goto L7
            r0.disconnect()
        L7:
            return
    }
}
