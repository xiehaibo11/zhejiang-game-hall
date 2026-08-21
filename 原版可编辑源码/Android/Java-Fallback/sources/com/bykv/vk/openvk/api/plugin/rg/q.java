package com.bykv.vk.openvk.api.plugin.rg;

public class q {

    static class 1 {
    }

    private static final class rg {
        private static final com.bykv.vk.openvk.api.plugin.rg.q rg = null;

        static {
                com.bykv.vk.openvk.api.plugin.rg.q r0 = new com.bykv.vk.openvk.api.plugin.rg.q
                r1 = 0
                r0.<init>(r1)
                com.bykv.vk.openvk.api.plugin.rg.q.rg.rg = r0
                return
        }

        static com.bykv.vk.openvk.api.plugin.rg.q rg() {
                com.bykv.vk.openvk.api.plugin.rg.q r0 = com.bykv.vk.openvk.api.plugin.rg.q.rg.rg
                return r0
        }
    }

    private q() {
            r0 = this;
            r0.<init>()
            return
    }

    q(com.bykv.vk.openvk.api.plugin.rg.q.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private javax.net.ssl.X509TrustManager df() throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = javax.net.ssl.TrustManagerFactory.getDefaultAlgorithm()     // Catch: java.security.GeneralSecurityException -> L3d
            javax.net.ssl.TrustManagerFactory r0 = javax.net.ssl.TrustManagerFactory.getInstance(r0)     // Catch: java.security.GeneralSecurityException -> L3d
            r1 = 0
            java.security.KeyStore r1 = (java.security.KeyStore) r1     // Catch: java.security.GeneralSecurityException -> L3d
            r0.init(r1)     // Catch: java.security.GeneralSecurityException -> L3d
            javax.net.ssl.TrustManager[] r0 = r0.getTrustManagers()     // Catch: java.security.GeneralSecurityException -> L3d
            int r1 = r0.length     // Catch: java.security.GeneralSecurityException -> L3d
            r2 = 1
            if (r1 != r2) goto L22
            r1 = 0
            r2 = r0[r1]     // Catch: java.security.GeneralSecurityException -> L3d
            boolean r2 = r2 instanceof javax.net.ssl.X509TrustManager     // Catch: java.security.GeneralSecurityException -> L3d
            if (r2 == 0) goto L22
            r0 = r0[r1]     // Catch: java.security.GeneralSecurityException -> L3d
            javax.net.ssl.X509TrustManager r0 = (javax.net.ssl.X509TrustManager) r0     // Catch: java.security.GeneralSecurityException -> L3d
            return r0
        L22:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.security.GeneralSecurityException -> L3d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.security.GeneralSecurityException -> L3d
            r2.<init>()     // Catch: java.security.GeneralSecurityException -> L3d
            java.lang.String r3 = "Unexpected default trust managers:"
            r2.append(r3)     // Catch: java.security.GeneralSecurityException -> L3d
            java.lang.String r0 = java.util.Arrays.toString(r0)     // Catch: java.security.GeneralSecurityException -> L3d
            r2.append(r0)     // Catch: java.security.GeneralSecurityException -> L3d
            java.lang.String r0 = r2.toString()     // Catch: java.security.GeneralSecurityException -> L3d
            r1.<init>(r0)     // Catch: java.security.GeneralSecurityException -> L3d
            throw r1     // Catch: java.security.GeneralSecurityException -> L3d
        L3d:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "No System TLS"
            r1.<init>(r2, r0)
            throw r1
    }

    public static com.bykv.vk.openvk.api.plugin.rg.q rg() {
            com.bykv.vk.openvk.api.plugin.rg.q r0 = com.bykv.vk.openvk.api.plugin.rg.q.rg.rg()
            return r0
    }

    private static java.lang.String rg(java.lang.String r6, java.lang.String r7) {
            if (r6 == 0) goto L2e
            r0 = 0
            java.lang.String r1 = ";"
            java.lang.String[] r6 = r6.split(r1, r0)
            r1 = 1
            r2 = r1
        Lb:
            int r3 = r6.length
            if (r2 >= r3) goto L2e
            r3 = r6[r2]
            java.lang.String r3 = r3.trim()
            java.lang.String r4 = "="
            java.lang.String[] r3 = r3.split(r4, r0)
            int r4 = r3.length
            r5 = 2
            if (r4 != r5) goto L2b
            r4 = r3[r0]
            java.lang.String r5 = "charset"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L2b
            r6 = r3[r1]
            return r6
        L2b:
            int r2 = r2 + 1
            goto Lb
        L2e:
            return r7
    }

    private javax.net.ssl.SSLSocketFactory rg(javax.net.ssl.X509TrustManager r4) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)     // Catch: java.security.GeneralSecurityException -> L15
            r1 = 1
            javax.net.ssl.TrustManager[] r1 = new javax.net.ssl.TrustManager[r1]     // Catch: java.security.GeneralSecurityException -> L15
            r2 = 0
            r1[r2] = r4     // Catch: java.security.GeneralSecurityException -> L15
            r4 = 0
            r0.init(r4, r1, r4)     // Catch: java.security.GeneralSecurityException -> L15
            javax.net.ssl.SSLSocketFactory r4 = r0.getSocketFactory()     // Catch: java.security.GeneralSecurityException -> L15
            return r4
        L15:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "No System TLS"
            r0.<init>(r1, r4)
            throw r0
    }

    private static byte[] rg(java.io.InputStream r3, int r4) throws java.io.IOException {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            r0 = 1
            if (r4 >= r0) goto L8
            r4 = r0
        L8:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            byte[] r4 = new byte[r4]
        Lf:
            int r1 = r3.read(r4)
            r2 = -1
            if (r1 == r2) goto L1b
            r2 = 0
            r0.write(r4, r2, r1)
            goto Lf
        L1b:
            r0.close()
            r3.close()
            byte[] r3 = r0.toByteArray()
            return r3
    }

    public java.lang.String rg(boolean r4, java.lang.String r5, byte[] r6) {
            r3 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            javax.net.ssl.X509TrustManager r5 = r3.df()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            javax.net.ssl.SSLSocketFactory r5 = r3.rg(r5)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            javax.net.ssl.HttpsURLConnection.setDefaultSSLSocketFactory(r5)     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            java.net.URLConnection r5 = r1.openConnection()     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            javax.net.ssl.HttpsURLConnection r5 = (javax.net.ssl.HttpsURLConnection) r5     // Catch: java.lang.Throwable -> L82 java.lang.Exception -> L84
            r1 = 5000(0x1388, float:7.006E-42)
            r5.setConnectTimeout(r1)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            com.bykv.vk.openvk.api.plugin.rg.rg r1 = com.bykv.vk.openvk.api.plugin.rg.rg.rg     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r5.setHostnameVerifier(r1)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            if (r4 == 0) goto L48
            if (r6 == 0) goto L48
            int r4 = r6.length     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            if (r4 == 0) goto L48
            r4 = 1
            r5.setDoOutput(r4)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            int r4 = r6.length     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r5.setFixedLengthStreamingMode(r4)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            java.io.BufferedOutputStream r4 = new java.io.BufferedOutputStream     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            java.io.OutputStream r1 = r5.getOutputStream()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r4.<init>(r1)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r4.write(r6)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r4.flush()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r4.close()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            java.lang.String r4 = "POST"
            r5.setRequestMethod(r4)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            goto L4d
        L48:
            java.lang.String r4 = "GET"
            r5.setRequestMethod(r4)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
        L4d:
            int r4 = r5.getResponseCode()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r6 = 200(0xc8, float:2.8E-43)
            if (r4 < r6) goto L7a
            r6 = 300(0x12c, float:4.2E-43)
            if (r4 >= r6) goto L7a
            java.lang.String r4 = "Content-Type"
            java.lang.String r4 = r5.getHeaderField(r4)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            java.lang.String r6 = "utf-8"
            java.lang.String r4 = rg(r4, r6)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            java.io.InputStream r1 = r5.getInputStream()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r2 = 1024(0x400, float:1.435E-42)
            byte[] r1 = rg(r1, r2)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            r6.<init>(r1, r4)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L8d
            if (r5 == 0) goto L79
            r5.disconnect()     // Catch: java.lang.Exception -> L79
        L79:
            return r6
        L7a:
            if (r5 == 0) goto L8c
        L7c:
            r5.disconnect()     // Catch: java.lang.Exception -> L8c
            goto L8c
        L80:
            r4 = move-exception
            goto L86
        L82:
            r4 = move-exception
            goto L8f
        L84:
            r4 = move-exception
            r5 = r0
        L86:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L8d
            if (r5 == 0) goto L8c
            goto L7c
        L8c:
            return r0
        L8d:
            r4 = move-exception
            r0 = r5
        L8f:
            if (r0 == 0) goto L94
            r0.disconnect()     // Catch: java.lang.Exception -> L94
        L94:
            throw r4
    }
}
