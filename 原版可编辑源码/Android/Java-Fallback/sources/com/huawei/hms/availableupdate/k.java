package com.huawei.hms.availableupdate;

public class k implements com.huawei.hms.availableupdate.l {
    public javax.net.ssl.HttpsURLConnection a;
    public volatile int b;

    public k() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.b = r0
            return
    }

    @Override
    public int a(java.lang.String r4, java.io.OutputStream r5, int r6, int r7, android.content.Context r8) throws java.io.IOException, com.huawei.hms.availableupdate.j {
            r3 = this;
            r0 = 0
            r3.a(r4, r8)     // Catch: java.lang.Throwable -> L66
            javax.net.ssl.HttpsURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> L66
            if (r4 != 0) goto L14
            java.lang.String r4 = "HttpRequestHelper"
            java.lang.String r5 = "mConnection is null"
            com.huawei.hms.support.log.HMSLog.i(r4, r5)     // Catch: java.lang.Throwable -> L66
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            r4 = -1
            return r4
        L14:
            javax.net.ssl.HttpsURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> L66
            java.lang.String r8 = "GET"
            r4.setRequestMethod(r8)     // Catch: java.lang.Throwable -> L66
            if (r6 <= 0) goto L3d
            javax.net.ssl.HttpsURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> L66
            java.lang.String r8 = "Range"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L66
            r1.<init>()     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = "bytes="
            r1.append(r2)     // Catch: java.lang.Throwable -> L66
            r1.append(r6)     // Catch: java.lang.Throwable -> L66
            java.lang.String r2 = "-"
            r1.append(r2)     // Catch: java.lang.Throwable -> L66
            r1.append(r7)     // Catch: java.lang.Throwable -> L66
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L66
            r4.addRequestProperty(r8, r7)     // Catch: java.lang.Throwable -> L66
        L3d:
            javax.net.ssl.HttpsURLConnection r4 = r3.a     // Catch: java.lang.Throwable -> L66
            int r4 = r4.getResponseCode()     // Catch: java.lang.Throwable -> L66
            if (r6 <= 0) goto L49
            r7 = 206(0xce, float:2.89E-43)
            if (r4 == r7) goto L4f
        L49:
            if (r6 > 0) goto L62
            r6 = 200(0xc8, float:2.8E-43)
            if (r4 != r6) goto L62
        L4f:
            javax.net.ssl.HttpsURLConnection r6 = r3.a     // Catch: java.lang.Throwable -> L66
            java.io.InputStream r0 = r6.getInputStream()     // Catch: java.lang.Throwable -> L66
            java.io.BufferedInputStream r6 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L66
            r7 = 4096(0x1000, float:5.74E-42)
            r6.<init>(r0, r7)     // Catch: java.lang.Throwable -> L66
            r3.a(r6, r5)     // Catch: java.lang.Throwable -> L66
            r5.flush()     // Catch: java.lang.Throwable -> L66
        L62:
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            return r4
        L66:
            r4 = move-exception
            com.huawei.hms.utils.IOUtils.closeQuietly(r0)
            throw r4
    }

    @Override
    public void a() {
            r1 = this;
            r0 = 1
            r1.b = r0
            return
    }

    public final void a(java.io.InputStream r4, java.io.OutputStream r5) throws java.io.IOException, com.huawei.hms.availableupdate.j {
            r3 = this;
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
        L4:
            int r1 = r4.read(r0)
            r2 = -1
            if (r2 == r1) goto L1d
            r2 = 0
            r5.write(r0, r2, r1)
            int r1 = r3.b
            r2 = 1
            if (r1 == r2) goto L15
            goto L4
        L15:
            com.huawei.hms.availableupdate.j r4 = new com.huawei.hms.availableupdate.j
            java.lang.String r5 = "HTTP(s) request was canceled."
            r4.<init>(r5)
            throw r4
        L1d:
            return
    }

    public final void a(java.lang.String r3, android.content.Context r4) throws java.io.IOException {
            r2 = this;
            int r0 = r2.b
            java.lang.String r1 = "HttpRequestHelper"
            if (r0 != 0) goto Lb
            java.lang.String r0 = "Not allowed to repeat open http(s) connection."
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
        Lb:
            java.net.URL r0 = new java.net.URL
            r0.<init>(r3)
            java.net.URLConnection r3 = r0.openConnection()
            if (r3 != 0) goto L1c
            java.lang.String r3 = "urlConnection is null"
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
            return
        L1c:
            boolean r0 = r3 instanceof javax.net.ssl.HttpsURLConnection
            if (r0 == 0) goto L86
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3
            r2.a = r3
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r3 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.getInstance(r4)     // Catch: java.lang.IllegalAccessException -> L59 java.lang.IllegalArgumentException -> L5b java.security.KeyStoreException -> L5d java.security.cert.CertificateException -> L5f java.io.IOException -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.KeyManagementException -> L65
            if (r3 == 0) goto L2f
            javax.net.ssl.HttpsURLConnection r4 = r2.a     // Catch: java.lang.IllegalAccessException -> L59 java.lang.IllegalArgumentException -> L5b java.security.KeyStoreException -> L5d java.security.cert.CertificateException -> L5f java.io.IOException -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.KeyManagementException -> L65
            r4.setSSLSocketFactory(r3)     // Catch: java.lang.IllegalAccessException -> L59 java.lang.IllegalArgumentException -> L5b java.security.KeyStoreException -> L5d java.security.cert.CertificateException -> L5f java.io.IOException -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.KeyManagementException -> L65
        L2f:
            javax.net.ssl.HttpsURLConnection r4 = r2.a     // Catch: java.lang.IllegalAccessException -> L59 java.lang.IllegalArgumentException -> L5b java.security.KeyStoreException -> L5d java.security.cert.CertificateException -> L5f java.io.IOException -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.KeyManagementException -> L65
            r4.setSSLSocketFactory(r3)     // Catch: java.lang.IllegalAccessException -> L59 java.lang.IllegalArgumentException -> L5b java.security.KeyStoreException -> L5d java.security.cert.CertificateException -> L5f java.io.IOException -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.KeyManagementException -> L65
            javax.net.ssl.HttpsURLConnection r3 = r2.a
            r4 = 30000(0x7530, float:4.2039E-41)
            r3.setConnectTimeout(r4)
            javax.net.ssl.HttpsURLConnection r3 = r2.a
            r3.setReadTimeout(r4)
            javax.net.ssl.HttpsURLConnection r3 = r2.a
            r4 = 1
            r3.setDoInput(r4)
            javax.net.ssl.HttpsURLConnection r3 = r2.a
            r3.setDoOutput(r4)
            javax.net.ssl.HttpsURLConnection r3 = r2.a
            r0 = 0
            r3.setUseCaches(r0)
            javax.net.ssl.HttpsURLConnection r3 = r2.a
            r3.setInstanceFollowRedirects(r4)
            r2.b = r0
            return
        L59:
            r3 = move-exception
            goto L66
        L5b:
            r3 = move-exception
            goto L66
        L5d:
            r3 = move-exception
            goto L66
        L5f:
            r3 = move-exception
            goto L66
        L61:
            r3 = move-exception
            goto L66
        L63:
            r3 = move-exception
            goto L66
        L65:
            r3 = move-exception
        L66:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Failed to new TLSSocketFactory instance."
            r4.append(r0)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r3)
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r4 = "Failed to create SSLSocketFactory."
            r3.<init>(r4)
            throw r3
        L86:
            java.lang.String r3 = "current request is http not allow connection"
            com.huawei.hms.support.log.HMSLog.i(r1, r3)
            r3 = 0
            r2.a = r3
            return
    }

    @Override
    public void close() {
            r1 = this;
            r0 = -1
            r1.b = r0
            javax.net.ssl.HttpsURLConnection r0 = r1.a
            if (r0 == 0) goto La
            r0.disconnect()
        La:
            return
    }
}
