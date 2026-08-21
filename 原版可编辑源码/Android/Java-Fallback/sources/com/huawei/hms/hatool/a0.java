package com.huawei.hms.hatool;

public abstract class a0 {

    public static class a extends java.lang.Exception {
        public a(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public static com.huawei.hms.hatool.b0 a(java.lang.String r1, byte[] r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = "POST"
            com.huawei.hms.hatool.b0 r1 = a(r1, r2, r3, r0)
            return r1
    }

    public static com.huawei.hms.hatool.b0 a(java.lang.String r6, byte[] r7, java.util.Map<java.lang.String, java.lang.String> r8, java.lang.String r9) {
            java.lang.String r0 = "hmsSdk"
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r2 = ""
            if (r1 == 0) goto L12
            com.huawei.hms.hatool.b0 r6 = new com.huawei.hms.hatool.b0
            r7 = -100
            r6.<init>(r7, r2)
            return r6
        L12:
            r1 = -102(0xffffffffffffff9a, float:NaN)
            r3 = -101(0xffffffffffffff9b, float:NaN)
            r4 = 0
            int r5 = r7.length     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L98 java.net.UnknownHostException -> Lb0 java.net.ConnectException -> Lc8 javax.net.ssl.SSLHandshakeException -> Le0 javax.net.ssl.SSLPeerUnverifiedException -> Lf8 java.lang.SecurityException -> L110 com.huawei.hms.hatool.a0.a -> L128
            java.net.HttpURLConnection r6 = a(r6, r5, r8, r9)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L98 java.net.UnknownHostException -> Lb0 java.net.ConnectException -> Lc8 javax.net.ssl.SSLHandshakeException -> Le0 javax.net.ssl.SSLPeerUnverifiedException -> Lf8 java.lang.SecurityException -> L110 com.huawei.hms.hatool.a0.a -> L128
            if (r6 != 0) goto L2f
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7e java.io.IOException -> L82 java.net.UnknownHostException -> L84 java.net.ConnectException -> L86 javax.net.ssl.SSLHandshakeException -> L88 javax.net.ssl.SSLPeerUnverifiedException -> L8a java.lang.SecurityException -> L8d com.huawei.hms.hatool.a0.a -> L90
            r7.<init>(r3, r2)     // Catch: java.lang.Throwable -> L7e java.io.IOException -> L82 java.net.UnknownHostException -> L84 java.net.ConnectException -> L86 javax.net.ssl.SSLHandshakeException -> L88 javax.net.ssl.SSLPeerUnverifiedException -> L8a java.lang.SecurityException -> L8d com.huawei.hms.hatool.a0.a -> L90
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r4)
            if (r6 == 0) goto L2e
            com.huawei.hms.hatool.r0.a(r6)
        L2e:
            return r7
        L2f:
            java.io.OutputStream r8 = r6.getOutputStream()     // Catch: java.lang.Throwable -> L7e java.io.IOException -> L82 java.net.UnknownHostException -> L84 java.net.ConnectException -> L86 javax.net.ssl.SSLHandshakeException -> L88 javax.net.ssl.SSLPeerUnverifiedException -> L8a java.lang.SecurityException -> L8d com.huawei.hms.hatool.a0.a -> L90
            java.io.BufferedOutputStream r9 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L7b java.io.IOException -> L9a java.net.UnknownHostException -> Lb2 java.net.ConnectException -> Lca javax.net.ssl.SSLHandshakeException -> Le2 javax.net.ssl.SSLPeerUnverifiedException -> Lfa java.lang.SecurityException -> L112 com.huawei.hms.hatool.a0.a -> L12a
            r9.<init>(r8)     // Catch: java.lang.Throwable -> L7b java.io.IOException -> L9a java.net.UnknownHostException -> Lb2 java.net.ConnectException -> Lca javax.net.ssl.SSLHandshakeException -> Le2 javax.net.ssl.SSLPeerUnverifiedException -> Lfa java.lang.SecurityException -> L112 com.huawei.hms.hatool.a0.a -> L12a
            r9.write(r7)     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L67 java.net.UnknownHostException -> L69 java.net.ConnectException -> L6c javax.net.ssl.SSLHandshakeException -> L6f javax.net.ssl.SSLPeerUnverifiedException -> L72 java.lang.SecurityException -> L75 com.huawei.hms.hatool.a0.a -> L78
            r9.flush()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L67 java.net.UnknownHostException -> L69 java.net.ConnectException -> L6c javax.net.ssl.SSLHandshakeException -> L6f javax.net.ssl.SSLPeerUnverifiedException -> L72 java.lang.SecurityException -> L75 com.huawei.hms.hatool.a0.a -> L78
            int r7 = r6.getResponseCode()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L67 java.net.UnknownHostException -> L69 java.net.ConnectException -> L6c javax.net.ssl.SSLHandshakeException -> L6f javax.net.ssl.SSLPeerUnverifiedException -> L72 java.lang.SecurityException -> L75 com.huawei.hms.hatool.a0.a -> L78
            java.lang.String r1 = b(r6)     // Catch: java.io.IOException -> L57 java.net.UnknownHostException -> L59 java.net.ConnectException -> L5b javax.net.ssl.SSLHandshakeException -> L5d javax.net.ssl.SSLPeerUnverifiedException -> L5f java.lang.SecurityException -> L61 java.lang.Throwable -> L63 com.huawei.hms.hatool.a0.a -> L78
            com.huawei.hms.hatool.b0 r4 = new com.huawei.hms.hatool.b0     // Catch: java.io.IOException -> L57 java.net.UnknownHostException -> L59 java.net.ConnectException -> L5b javax.net.ssl.SSLHandshakeException -> L5d javax.net.ssl.SSLPeerUnverifiedException -> L5f java.lang.SecurityException -> L61 java.lang.Throwable -> L63 com.huawei.hms.hatool.a0.a -> L78
            r4.<init>(r7, r1)     // Catch: java.io.IOException -> L57 java.net.UnknownHostException -> L59 java.net.ConnectException -> L5b javax.net.ssl.SSLHandshakeException -> L5d javax.net.ssl.SSLPeerUnverifiedException -> L5f java.lang.SecurityException -> L61 java.lang.Throwable -> L63 com.huawei.hms.hatool.a0.a -> L78
            com.huawei.hms.hatool.r0.a(r9)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto L56
            com.huawei.hms.hatool.r0.a(r6)
        L56:
            return r4
        L57:
            r1 = r7
            goto L67
        L59:
            r1 = r7
            goto L69
        L5b:
            r1 = r7
            goto L6c
        L5d:
            r1 = r7
            goto L6f
        L5f:
            r1 = r7
            goto L72
        L61:
            r1 = r7
            goto L75
        L63:
            r7 = move-exception
            r4 = r9
            goto L140
        L67:
            r4 = r9
            goto L9a
        L69:
            r4 = r9
            goto Lb2
        L6c:
            r4 = r9
            goto Lca
        L6f:
            r4 = r9
            goto Le2
        L72:
            r4 = r9
            goto Lfa
        L75:
            r4 = r9
            goto L112
        L78:
            r4 = r9
            goto L12a
        L7b:
            r7 = move-exception
            goto L140
        L7e:
            r7 = move-exception
            r8 = r4
            goto L140
        L82:
            r8 = r4
            goto L9a
        L84:
            r8 = r4
            goto Lb2
        L86:
            r8 = r4
            goto Lca
        L88:
            r8 = r4
            goto Le2
        L8a:
            r8 = r4
            goto Lfa
        L8d:
            r8 = r4
            goto L112
        L90:
            r8 = r4
            goto L12a
        L93:
            r7 = move-exception
            r6 = r4
            r8 = r6
            goto L140
        L98:
            r6 = r4
            r8 = r6
        L9a:
            java.lang.String r7 = "events PostRequest(byte[]): IOException occurred."
            com.huawei.hms.hatool.y.f(r0, r7)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r1, r2)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto Laf
            com.huawei.hms.hatool.r0.a(r6)
        Laf:
            return r7
        Lb0:
            r6 = r4
            r8 = r6
        Lb2:
            java.lang.String r7 = "No address associated with hostname or No network"
            com.huawei.hms.hatool.y.f(r0, r7)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r1, r2)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto Lc7
            com.huawei.hms.hatool.r0.a(r6)
        Lc7:
            return r7
        Lc8:
            r6 = r4
            r8 = r6
        Lca:
            java.lang.String r7 = "Network is unreachable or Connection refused"
            com.huawei.hms.hatool.y.f(r0, r7)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r1, r2)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto Ldf
            com.huawei.hms.hatool.r0.a(r6)
        Ldf:
            return r7
        Le0:
            r6 = r4
            r8 = r6
        Le2:
            java.lang.String r7 = "Chain validation failed,Certificate expired"
            com.huawei.hms.hatool.y.f(r0, r7)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r1, r2)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto Lf7
            com.huawei.hms.hatool.r0.a(r6)
        Lf7:
            return r7
        Lf8:
            r6 = r4
            r8 = r6
        Lfa:
            java.lang.String r7 = "Certificate has not been verified,Request is restricted!"
            com.huawei.hms.hatool.y.f(r0, r7)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r1, r2)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto L10f
            com.huawei.hms.hatool.r0.a(r6)
        L10f:
            return r7
        L110:
            r6 = r4
            r8 = r6
        L112:
            java.lang.String r7 = "SecurityException with HttpClient. Please check INTERNET permission."
            com.huawei.hms.hatool.y.f(r0, r7)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r1, r2)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto L127
            com.huawei.hms.hatool.r0.a(r6)
        L127:
            return r7
        L128:
            r6 = r4
            r8 = r6
        L12a:
            java.lang.String r7 = "PostRequest(byte[]): No ssl socket factory set!"
            com.huawei.hms.hatool.y.f(r0, r7)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.b0 r7 = new com.huawei.hms.hatool.b0     // Catch: java.lang.Throwable -> L7b
            r7.<init>(r3, r2)     // Catch: java.lang.Throwable -> L7b
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto L13f
            com.huawei.hms.hatool.r0.a(r6)
        L13f:
            return r7
        L140:
            com.huawei.hms.hatool.r0.a(r4)
            com.huawei.hms.hatool.r0.a(r8)
            if (r6 == 0) goto L14b
            com.huawei.hms.hatool.r0.a(r6)
        L14b:
            throw r7
    }

    public static java.net.HttpURLConnection a(java.lang.String r2, int r3, java.util.Map<java.lang.String, java.lang.String> r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lf
            java.lang.String r2 = "hmsSdk"
            java.lang.String r3 = "CreateConnection: invalid urlPath."
            com.huawei.hms.hatool.y.b(r2, r3)
            r2 = 0
            return r2
        Lf:
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            java.net.URLConnection r2 = r0.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            a(r2)
            r2.setRequestMethod(r5)
            r5 = 15000(0x3a98, float:2.102E-41)
            r2.setConnectTimeout(r5)
            r2.setReadTimeout(r5)
            r5 = 1
            r2.setDoOutput(r5)
            java.lang.String r0 = "Content-Type"
            java.lang.String r1 = "application/json; charset=UTF-8"
            r2.setRequestProperty(r0, r1)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "Content-Length"
            r2.setRequestProperty(r0, r3)
            java.lang.String r3 = "Connection"
            java.lang.String r0 = "close"
            r2.setRequestProperty(r3, r0)
            if (r4 == 0) goto L79
            int r3 = r4.size()
            if (r3 >= r5) goto L4c
            goto L79
        L4c:
            java.util.Set r3 = r4.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L54:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L79
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r5 = r4.getKey()
            java.lang.String r5 = (java.lang.String) r5
            if (r5 == 0) goto L54
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L6f
            goto L54
        L6f:
            java.lang.Object r4 = r4.getValue()
            java.lang.String r4 = (java.lang.String) r4
            r2.setRequestProperty(r5, r4)
            goto L54
        L79:
            return r2
    }

    public static void a(java.net.HttpURLConnection r3) {
            java.lang.String r0 = "hmsSdk"
            boolean r1 = r3 instanceof javax.net.ssl.HttpsURLConnection
            if (r1 == 0) goto L39
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3
            r1 = 0
            android.content.Context r2 = com.huawei.hms.hatool.b.f()     // Catch: java.lang.IllegalAccessException -> L12 java.io.IOException -> L15 java.security.GeneralSecurityException -> L18 java.security.KeyStoreException -> L1b java.security.NoSuchAlgorithmException -> L1e
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r1 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.getInstance(r2)     // Catch: java.lang.IllegalAccessException -> L12 java.io.IOException -> L15 java.security.GeneralSecurityException -> L18 java.security.KeyStoreException -> L1b java.security.NoSuchAlgorithmException -> L1e
            goto L23
        L12:
            java.lang.String r2 = "getSocketFactory(): Illegal Access Exception "
            goto L20
        L15:
            java.lang.String r2 = "getSocketFactory(): IO Exception!"
            goto L20
        L18:
            java.lang.String r2 = "getSocketFactory(): General Security Exception"
            goto L20
        L1b:
            java.lang.String r2 = "getSocketFactory(): Key Store exception"
            goto L20
        L1e:
            java.lang.String r2 = "getSocketFactory(): Algorithm Exception!"
        L20:
            com.huawei.hms.hatool.y.f(r0, r2)
        L23:
            if (r1 == 0) goto L31
            r3.setSSLSocketFactory(r1)
            com.huawei.secure.android.common.ssl.hostname.StrictHostnameVerifier r0 = new com.huawei.secure.android.common.ssl.hostname.StrictHostnameVerifier
            r0.<init>()
            r3.setHostnameVerifier(r0)
            goto L39
        L31:
            com.huawei.hms.hatool.a0$a r3 = new com.huawei.hms.hatool.a0$a
            java.lang.String r0 = "No ssl socket factory set"
            r3.<init>(r0)
            throw r3
        L39:
            return
    }

    public static java.lang.String b(java.net.HttpURLConnection r4) {
            r0 = 0
            java.io.InputStream r0 = r4.getInputStream()     // Catch: java.lang.Throwable -> Ld java.io.IOException -> Lf
            java.lang.String r4 = com.huawei.hms.hatool.r0.a(r0)     // Catch: java.lang.Throwable -> Ld java.io.IOException -> Lf
            com.huawei.hms.hatool.r0.a(r0)
            return r4
        Ld:
            r4 = move-exception
            goto L2f
        Lf:
            int r4 = r4.getResponseCode()     // Catch: java.lang.Throwable -> Ld
            java.lang.String r1 = "hmsSdk"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld
            r2.<init>()     // Catch: java.lang.Throwable -> Ld
            java.lang.String r3 = "When Response Content From Connection inputStream operation exception! "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld
            r2.append(r4)     // Catch: java.lang.Throwable -> Ld
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> Ld
            com.huawei.hms.hatool.y.f(r1, r4)     // Catch: java.lang.Throwable -> Ld
            com.huawei.hms.hatool.r0.a(r0)
            java.lang.String r4 = ""
            return r4
        L2f:
            com.huawei.hms.hatool.r0.a(r0)
            throw r4
    }
}
