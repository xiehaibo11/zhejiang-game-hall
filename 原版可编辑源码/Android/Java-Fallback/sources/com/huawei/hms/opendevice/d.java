package com.huawei.hms.opendevice;

public abstract class d {

    private enum a extends java.lang.Enum<com.huawei.hms.opendevice.d.a> {
        public static final com.huawei.hms.opendevice.d.a a = null;
        public static final com.huawei.hms.opendevice.d.a b = null;
        public static final com.huawei.hms.opendevice.d.a[] c = null;
        public java.lang.String d;

        static {
                com.huawei.hms.opendevice.d$a r0 = new com.huawei.hms.opendevice.d$a
                r1 = 0
                java.lang.String r2 = "GET"
                r0.<init>(r2, r1, r2)
                com.huawei.hms.opendevice.d.a.a = r0
                com.huawei.hms.opendevice.d$a r0 = new com.huawei.hms.opendevice.d$a
                r2 = 1
                java.lang.String r3 = "POST"
                r0.<init>(r3, r2, r3)
                com.huawei.hms.opendevice.d.a.b = r0
                r3 = 2
                com.huawei.hms.opendevice.d$a[] r3 = new com.huawei.hms.opendevice.d.a[r3]
                com.huawei.hms.opendevice.d$a r4 = com.huawei.hms.opendevice.d.a.a
                r3[r1] = r4
                r3[r2] = r0
                com.huawei.hms.opendevice.d.a.c = r3
                return
        }

        a(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.d = r3
                return
        }

        public static com.huawei.hms.opendevice.d.a valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.hms.opendevice.d$a> r0 = com.huawei.hms.opendevice.d.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.hms.opendevice.d$a r1 = (com.huawei.hms.opendevice.d.a) r1
                return r1
        }

        public static com.huawei.hms.opendevice.d.a[] values() {
                com.huawei.hms.opendevice.d$a[] r0 = com.huawei.hms.opendevice.d.a.c
                java.lang.Object r0 = r0.clone()
                com.huawei.hms.opendevice.d$a[] r0 = (com.huawei.hms.opendevice.d.a[]) r0
                return r0
        }

        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.d
                return r0
        }
    }

    public static java.lang.String a(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.util.Map<java.lang.String, java.lang.String> r10) {
            java.lang.String r0 = "close connection"
            java.lang.String r1 = "PushHttpClient"
            r2 = 0
            if (r9 == 0) goto L124
            boolean r3 = android.text.TextUtils.isEmpty(r8)
            if (r3 != 0) goto L124
            boolean r3 = android.text.TextUtils.isEmpty(r9)
            if (r3 == 0) goto L15
            goto L124
        L15:
            r3 = -1
            com.huawei.hms.opendevice.d$a r4 = com.huawei.hms.opendevice.d.a.b     // Catch: java.lang.Throwable -> Lb0 java.lang.Exception -> Lb6 java.lang.RuntimeException -> Lcf java.io.IOException -> Le8
            java.lang.String r4 = r4.a()     // Catch: java.lang.Throwable -> Lb0 java.lang.Exception -> Lb6 java.lang.RuntimeException -> Lcf java.io.IOException -> Le8
            java.net.HttpURLConnection r7 = a(r7, r8, r10, r4)     // Catch: java.lang.Throwable -> Lb0 java.lang.Exception -> Lb6 java.lang.RuntimeException -> Lcf java.io.IOException -> Le8
            if (r7 != 0) goto L32
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r2)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r2)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r2)
            com.huawei.hms.opendevice.s.a(r7)
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            return r2
        L32:
            java.io.BufferedOutputStream r8 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> Laa java.lang.RuntimeException -> Lac java.io.IOException -> Lae
            java.io.OutputStream r10 = r7.getOutputStream()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> Laa java.lang.RuntimeException -> Lac java.io.IOException -> Lae
            r8.<init>(r10)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> Laa java.lang.RuntimeException -> Lac java.io.IOException -> Lae
            java.lang.String r10 = "UTF-8"
            byte[] r9 = r9.getBytes(r10)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            r8.write(r9)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            r8.flush()     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            int r3 = r7.getResponseCode()     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            r9.<init>()     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            java.lang.String r10 = "http post response code: "
            r9.append(r10)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            r9.append(r3)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            com.huawei.hms.support.log.HMSLog.d(r1, r9)     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            r9 = 400(0x190, float:5.6E-43)
            if (r3 < r9) goto L68
            java.io.InputStream r9 = r7.getErrorStream()     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
            goto L6c
        L68:
            java.io.InputStream r9 = r7.getInputStream()     // Catch: java.lang.Throwable -> L94 java.lang.Exception -> L9b java.lang.RuntimeException -> L9d java.io.IOException -> L9f
        L6c:
            java.io.BufferedInputStream r10 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L85 java.lang.Exception -> L8c java.lang.RuntimeException -> L8e java.io.IOException -> L91
            r10.<init>(r9)     // Catch: java.lang.Throwable -> L85 java.lang.Exception -> L8c java.lang.RuntimeException -> L8e java.io.IOException -> L91
            java.lang.String r2 = com.huawei.hms.opendevice.s.a(r10)     // Catch: java.lang.Exception -> Lba java.lang.RuntimeException -> Ld3 java.io.IOException -> Lec java.lang.Throwable -> L110
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r8)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r9)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r10)
            com.huawei.hms.opendevice.s.a(r7)
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            return r2
        L85:
            r10 = move-exception
            r6 = r2
            r2 = r7
            r7 = r10
            r10 = r6
            goto L114
        L8c:
            r10 = r2
            goto Lba
        L8e:
            r10 = r2
            goto Ld3
        L91:
            r10 = r2
            goto Lec
        L94:
            r9 = move-exception
            r10 = r2
            r2 = r7
            r7 = r9
            r9 = r10
            goto L114
        L9b:
            r9 = r2
            goto Lb9
        L9d:
            r9 = r2
            goto Ld2
        L9f:
            r9 = r2
            goto Leb
        La2:
            r8 = move-exception
            r9 = r2
            r10 = r9
            r2 = r7
            r7 = r8
            r8 = r10
            goto L114
        Laa:
            r8 = r2
            goto Lb8
        Lac:
            r8 = r2
            goto Ld1
        Lae:
            r8 = r2
            goto Lea
        Lb0:
            r7 = move-exception
            r8 = r2
            r9 = r8
            r10 = r9
            goto L114
        Lb6:
            r7 = r2
            r8 = r7
        Lb8:
            r9 = r8
        Lb9:
            r10 = r9
        Lba:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L110
            r4.<init>()     // Catch: java.lang.Throwable -> L110
            java.lang.String r5 = "http execute encounter unknown exception - http code:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L110
            r4.append(r3)     // Catch: java.lang.Throwable -> L110
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L110
            com.huawei.hms.support.log.HMSLog.w(r1, r3)     // Catch: java.lang.Throwable -> L110
            goto L100
        Lcf:
            r7 = r2
            r8 = r7
        Ld1:
            r9 = r8
        Ld2:
            r10 = r9
        Ld3:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L110
            r4.<init>()     // Catch: java.lang.Throwable -> L110
            java.lang.String r5 = "http execute encounter RuntimeException - http code:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L110
            r4.append(r3)     // Catch: java.lang.Throwable -> L110
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L110
            com.huawei.hms.support.log.HMSLog.w(r1, r3)     // Catch: java.lang.Throwable -> L110
            goto L100
        Le8:
            r7 = r2
            r8 = r7
        Lea:
            r9 = r8
        Leb:
            r10 = r9
        Lec:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L110
            r4.<init>()     // Catch: java.lang.Throwable -> L110
            java.lang.String r5 = "http execute encounter IOException - http code:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L110
            r4.append(r3)     // Catch: java.lang.Throwable -> L110
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L110
            com.huawei.hms.support.log.HMSLog.w(r1, r3)     // Catch: java.lang.Throwable -> L110
        L100:
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r8)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r9)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r10)
            com.huawei.hms.opendevice.s.a(r7)
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            return r2
        L110:
            r2 = move-exception
            r6 = r2
            r2 = r7
            r7 = r6
        L114:
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r8)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r9)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r10)
            com.huawei.hms.opendevice.s.a(r2)
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            throw r7
        L124:
            return r2
    }

    public static java.net.HttpURLConnection a(android.content.Context r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, java.lang.String r4) throws java.lang.Exception {
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            java.net.URLConnection r2 = r0.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            a(r1, r2)
            r2.setRequestMethod(r4)
            r1 = 15000(0x3a98, float:2.102E-41)
            r2.setConnectTimeout(r1)
            r2.setReadTimeout(r1)
            r1 = 1
            r2.setDoOutput(r1)
            r2.setDoInput(r1)
            java.lang.String r4 = "Content-type"
            java.lang.String r0 = "application/json; charset=UTF-8"
            r2.setRequestProperty(r4, r0)
            java.lang.String r4 = "Connection"
            java.lang.String r0 = "close"
            r2.setRequestProperty(r4, r0)
            if (r3 == 0) goto L73
            int r4 = r3.size()
            if (r4 >= r1) goto L37
            goto L73
        L37:
            java.util.Set r1 = r3.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L3f:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L73
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L3f
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L5a
            goto L3f
        L5a:
            java.lang.Object r0 = r3.getValue()
            if (r0 != 0) goto L63
            java.lang.String r3 = ""
            goto L69
        L63:
            java.lang.Object r3 = r3.getValue()
            java.lang.String r3 = (java.lang.String) r3
        L69:
            java.lang.String r0 = "UTF-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r0)
            r2.setRequestProperty(r4, r3)
            goto L3f
        L73:
            return r2
    }

    public static void a(android.content.Context r2, java.net.HttpURLConnection r3) throws java.lang.Exception {
            java.lang.String r0 = "PushHttpClient"
            boolean r1 = r3 instanceof javax.net.ssl.HttpsURLConnection
            if (r1 == 0) goto L44
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3
            r1 = 0
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r1 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.getInstance(r2)     // Catch: java.lang.IllegalArgumentException -> Le java.lang.IllegalAccessException -> L14 java.io.IOException -> L1a java.security.GeneralSecurityException -> L20 java.security.KeyStoreException -> L26 java.security.NoSuchAlgorithmException -> L2c
            goto L31
        Le:
            java.lang.String r2 = "Get SocketFactory Illegal Argument Exception."
            com.huawei.hms.support.log.HMSLog.w(r0, r2)
            goto L31
        L14:
            java.lang.String r2 = "Get SocketFactory Illegal Access Exception."
            com.huawei.hms.support.log.HMSLog.w(r0, r2)
            goto L31
        L1a:
            java.lang.String r2 = "Get SocketFactory IO Exception."
            com.huawei.hms.support.log.HMSLog.w(r0, r2)
            goto L31
        L20:
            java.lang.String r2 = "Get SocketFactory General Security Exception."
            com.huawei.hms.support.log.HMSLog.w(r0, r2)
            goto L31
        L26:
            java.lang.String r2 = "Get SocketFactory Key Store exception."
            com.huawei.hms.support.log.HMSLog.w(r0, r2)
            goto L31
        L2c:
            java.lang.String r2 = "Get SocketFactory Algorithm Exception."
            com.huawei.hms.support.log.HMSLog.w(r0, r2)
        L31:
            if (r1 == 0) goto L3c
            r3.setSSLSocketFactory(r1)
            org.apache.http.conn.ssl.X509HostnameVerifier r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.STRICT_HOSTNAME_VERIFIER
            r3.setHostnameVerifier(r2)
            goto L44
        L3c:
            java.lang.Exception r2 = new java.lang.Exception
            java.lang.String r3 = "No ssl socket factory set."
            r2.<init>(r3)
            throw r2
        L44:
            return
    }
}
