package com.huawei.secure.android.common.ssl;

public class SecureX509TrustManager implements javax.net.ssl.X509TrustManager {
    private static final java.lang.String c = null;
    public static final java.lang.String d = "hmsrootcas.bks";
    private static final java.lang.String e = "";
    private static final java.lang.String f = "X509";
    private static final java.lang.String g = "bks";
    private static final java.lang.String h = "AndroidCAStore";
    protected java.util.List<javax.net.ssl.X509TrustManager> a;
    private java.security.cert.X509Certificate[] b;

    static {
            java.lang.Class<com.huawei.secure.android.common.ssl.SecureX509TrustManager> r0 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.class
            java.lang.String r0 = r0.getSimpleName()
            com.huawei.secure.android.common.ssl.SecureX509TrustManager.c = r0
            return
    }

    public SecureX509TrustManager(android.content.Context r2) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.lang.IllegalArgumentException {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public SecureX509TrustManager(android.content.Context r2, boolean r3) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.lang.IllegalArgumentException {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            if (r2 == 0) goto L28
            com.huawei.secure.android.common.ssl.util.c.a(r2)
            if (r3 == 0) goto L14
            r1.a()
        L14:
            r1.a(r2)
            java.util.List<javax.net.ssl.X509TrustManager> r2 = r1.a
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L20
            return
        L20:
            java.security.cert.CertificateException r2 = new java.security.cert.CertificateException
            java.lang.String r3 = "X509TrustManager is empty"
            r2.<init>(r3)
            throw r2
        L28:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "context is null"
            r2.<init>(r3)
            throw r2
    }

    public SecureX509TrustManager(java.io.InputStream r2, java.lang.String r3) throws java.lang.IllegalArgumentException {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            r1.a(r2, r3)
            return
    }

    public SecureX509TrustManager(java.io.InputStream r2, java.lang.String r3, boolean r4) throws java.lang.IllegalArgumentException {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            if (r4 == 0) goto Lf
            r1.a()
        Lf:
            r1.a(r2, r3)
            return
    }

    public SecureX509TrustManager(java.lang.String r2) throws java.lang.IllegalArgumentException, java.io.FileNotFoundException {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public SecureX509TrustManager(java.lang.String r2, boolean r3) throws java.lang.IllegalArgumentException, java.io.FileNotFoundException {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L1f
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r2 = ""
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L1d
            com.huawei.secure.android.common.ssl.util.f.a(r0)
            if (r3 == 0) goto L1c
            r1.a()
        L1c:
            return
        L1d:
            r2 = move-exception
            goto L21
        L1f:
            r2 = move-exception
            r0 = 0
        L21:
            com.huawei.secure.android.common.ssl.util.f.a(r0)
            throw r2
    }

    private void a() {
            r6 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.String r1 = "loadSystemCA"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "AndroidCAStore"
            java.security.KeyStore r2 = java.security.KeyStore.getInstance(r2)     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            r3 = 0
            r2.load(r3, r3)     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            java.lang.String r3 = "X509"
            javax.net.ssl.TrustManagerFactory r3 = javax.net.ssl.TrustManagerFactory.getInstance(r3)     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            r3.init(r2)     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            javax.net.ssl.TrustManager[] r2 = r3.getTrustManagers()     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            r3 = 0
        L23:
            int r4 = r2.length     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            if (r3 >= r4) goto L59
            r4 = r2[r3]     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            boolean r4 = r4 instanceof javax.net.ssl.X509TrustManager     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            if (r4 == 0) goto L35
            java.util.List<javax.net.ssl.X509TrustManager> r4 = r6.a     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            r5 = r2[r3]     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            javax.net.ssl.X509TrustManager r5 = (javax.net.ssl.X509TrustManager) r5     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
            r4.add(r5)     // Catch: java.security.NoSuchAlgorithmException -> L38 java.io.IOException -> L3a java.security.cert.CertificateException -> L3c java.security.KeyStoreException -> L3e
        L35:
            int r3 = r3 + 1
            goto L23
        L38:
            r2 = move-exception
            goto L3f
        L3a:
            r2 = move-exception
            goto L3f
        L3c:
            r2 = move-exception
            goto L3f
        L3e:
            r2 = move-exception
        L3f:
            java.lang.String r3 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "loadSystemCA: exception : "
            r4.append(r5)
            java.lang.String r2 = r2.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r3, r2)
        L59:
            java.lang.String r2 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "loadSystemCA: cost : "
            r3.append(r4)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r0
            r3.append(r4)
            java.lang.String r0 = " ms"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r2, r0)
            return
    }

    private void a(android.content.Context r8) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.io.IOException {
            r7 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.String r1 = "loadBksCA"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            long r0 = java.lang.System.currentTimeMillis()
            java.io.InputStream r2 = com.huawei.secure.android.common.ssl.util.BksUtil.getFilesBksIS(r8)
            if (r2 == 0) goto L3f
            java.lang.String r3 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c     // Catch: java.io.IOException -> L1c java.security.cert.CertificateException -> L1e java.security.KeyStoreException -> L20 java.security.NoSuchAlgorithmException -> L22
            java.lang.String r4 = "get bks not from assets"
            com.huawei.secure.android.common.ssl.util.g.c(r3, r4)     // Catch: java.io.IOException -> L1c java.security.cert.CertificateException -> L1e java.security.KeyStoreException -> L20 java.security.NoSuchAlgorithmException -> L22
            r7.a(r2)     // Catch: java.io.IOException -> L1c java.security.cert.CertificateException -> L1e java.security.KeyStoreException -> L20 java.security.NoSuchAlgorithmException -> L22
            goto L3f
        L1c:
            r3 = move-exception
            goto L23
        L1e:
            r3 = move-exception
            goto L23
        L20:
            r3 = move-exception
            goto L23
        L22:
            r3 = move-exception
        L23:
            java.lang.String r4 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "loadBksCA: exception : "
            r5.append(r6)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r4, r3)
            r3 = 0
            goto L40
        L3f:
            r3 = 1
        L40:
            if (r3 == 0) goto L44
            if (r2 != 0) goto L58
        L44:
            java.lang.String r2 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.String r3 = " get bks from assets "
            com.huawei.secure.android.common.ssl.util.g.c(r2, r3)
            android.content.res.AssetManager r8 = r8.getAssets()
            java.lang.String r2 = "hmsrootcas.bks"
            java.io.InputStream r8 = r8.open(r2)
            r7.a(r8)
        L58:
            java.lang.String r8 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loadBksCA: cost : "
            r2.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            r2.append(r3)
            java.lang.String r0 = " ms"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r8, r0)
            return
    }

    private void a(java.io.InputStream r5) throws java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.security.cert.CertificateException, java.io.IOException {
            r4 = this;
            java.lang.String r0 = "X509"
            javax.net.ssl.TrustManagerFactory r0 = javax.net.ssl.TrustManagerFactory.getInstance(r0)     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "bks"
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = ""
            char[] r2 = r2.toCharArray()     // Catch: java.lang.Throwable -> L36
            r1.load(r5, r2)     // Catch: java.lang.Throwable -> L36
            r0.init(r1)     // Catch: java.lang.Throwable -> L36
            javax.net.ssl.TrustManager[] r0 = r0.getTrustManagers()     // Catch: java.lang.Throwable -> L36
            r1 = 0
        L1d:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L36
            if (r1 >= r2) goto L32
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L36
            boolean r2 = r2 instanceof javax.net.ssl.X509TrustManager     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto L2f
            java.util.List<javax.net.ssl.X509TrustManager> r2 = r4.a     // Catch: java.lang.Throwable -> L36
            r3 = r0[r1]     // Catch: java.lang.Throwable -> L36
            javax.net.ssl.X509TrustManager r3 = (javax.net.ssl.X509TrustManager) r3     // Catch: java.lang.Throwable -> L36
            r2.add(r3)     // Catch: java.lang.Throwable -> L36
        L2f:
            int r1 = r1 + 1
            goto L1d
        L32:
            com.huawei.secure.android.common.ssl.util.f.a(r5)
            return
        L36:
            r0 = move-exception
            com.huawei.secure.android.common.ssl.util.f.a(r5)
            throw r0
    }

    private void a(java.io.InputStream r6, java.lang.String r7) {
            r5 = this;
            if (r6 == 0) goto L87
            if (r7 == 0) goto L87
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "X509"
            javax.net.ssl.TrustManagerFactory r2 = javax.net.ssl.TrustManagerFactory.getInstance(r2)     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            java.lang.String r3 = "bks"
            java.security.KeyStore r3 = java.security.KeyStore.getInstance(r3)     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            char[] r7 = r7.toCharArray()     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            r3.load(r6, r7)     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            r2.init(r3)     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            javax.net.ssl.TrustManager[] r7 = r2.getTrustManagers()     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            r2 = 0
        L23:
            int r3 = r7.length     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            if (r2 >= r3) goto L38
            r3 = r7[r2]     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            boolean r3 = r3 instanceof javax.net.ssl.X509TrustManager     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            if (r3 == 0) goto L35
            java.util.List<javax.net.ssl.X509TrustManager> r3 = r5.a     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            r4 = r7[r2]     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            javax.net.ssl.X509TrustManager r4 = (javax.net.ssl.X509TrustManager) r4     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
            r3.add(r4)     // Catch: java.lang.Throwable -> L3c java.security.NoSuchAlgorithmException -> L3e java.io.IOException -> L40 java.security.cert.CertificateException -> L42 java.security.KeyStoreException -> L44
        L35:
            int r2 = r2 + 1
            goto L23
        L38:
            com.huawei.secure.android.common.ssl.util.f.a(r6)
            goto L62
        L3c:
            r7 = move-exception
            goto L83
        L3e:
            r7 = move-exception
            goto L45
        L40:
            r7 = move-exception
            goto L45
        L42:
            r7 = move-exception
            goto L45
        L44:
            r7 = move-exception
        L45:
            java.lang.String r2 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c     // Catch: java.lang.Throwable -> L3c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c
            r3.<init>()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r4 = "loadInputStream: exception : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L3c
            r3.append(r7)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L3c
            com.huawei.secure.android.common.ssl.util.g.b(r2, r7)     // Catch: java.lang.Throwable -> L3c
            com.huawei.secure.android.common.ssl.util.f.a(r6)
        L62:
            java.lang.String r6 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "loadInputStream: cost : "
            r7.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            r7.append(r2)
            java.lang.String r0 = " ms"
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r6, r7)
            return
        L83:
            com.huawei.secure.android.common.ssl.util.f.a(r6)
            throw r7
        L87:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "inputstream or trustPwd is null"
            r6.<init>(r7)
            throw r6
    }

    @Override
    public void checkClientTrusted(java.security.cert.X509Certificate[] r6, java.lang.String r7) throws java.security.cert.CertificateException {
            r5 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.String r1 = "checkClientTrusted: "
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            java.util.List<javax.net.ssl.X509TrustManager> r0 = r5.a
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            java.lang.String r2 = "checkServerTrusted CertificateException"
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()
            javax.net.ssl.X509TrustManager r1 = (javax.net.ssl.X509TrustManager) r1
            r1.checkServerTrusted(r6, r7)     // Catch: java.security.cert.CertificateException -> L1f
            return
        L1f:
            r1 = move-exception
            java.lang.String r3 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r1 = r1.getMessage()
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r3, r1)
            goto Ld
        L39:
            java.security.cert.CertificateException r6 = new java.security.cert.CertificateException
            r6.<init>(r2)
            throw r6
    }

    @Override
    public void checkServerTrusted(java.security.cert.X509Certificate[] r12, java.lang.String r13) throws java.security.cert.CertificateException {
            r11 = this;
            r11.setChain(r12)
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "checkServerTrusted begin ,server ca chain size is : "
            r1.append(r2)
            int r2 = r12.length
            r1.append(r2)
            java.lang.String r2 = " ,auth type is : "
            r1.append(r2)
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            long r0 = java.lang.System.currentTimeMillis()
            int r2 = r12.length
            r3 = 0
            r4 = r3
        L29:
            if (r4 >= r2) goto L7e
            r5 = r12[r4]
            java.lang.String r6 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "server ca chain: getSubjectDN is :"
            r7.append(r8)
            java.security.Principal r8 = r5.getSubjectDN()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r6, r7)
            java.lang.String r6 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "IssuerDN :"
            r7.append(r8)
            java.security.Principal r8 = r5.getIssuerDN()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r6, r7)
            java.lang.String r6 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "SerialNumber : "
            r7.append(r8)
            java.math.BigInteger r5 = r5.getSerialNumber()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r6, r5)
            int r4 = r4 + 1
            goto L29
        L7e:
            java.util.List<javax.net.ssl.X509TrustManager> r2 = r11.a
            int r2 = r2.size()
            r4 = r3
        L85:
            if (r4 >= r2) goto L158
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c     // Catch: java.security.cert.CertificateException -> L108
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.security.cert.CertificateException -> L108
            r6.<init>()     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r7 = "check server i : "
            r6.append(r7)     // Catch: java.security.cert.CertificateException -> L108
            r6.append(r4)     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r6 = r6.toString()     // Catch: java.security.cert.CertificateException -> L108
            com.huawei.secure.android.common.ssl.util.g.c(r5, r6)     // Catch: java.security.cert.CertificateException -> L108
            java.util.List<javax.net.ssl.X509TrustManager> r5 = r11.a     // Catch: java.security.cert.CertificateException -> L108
            java.lang.Object r5 = r5.get(r4)     // Catch: java.security.cert.CertificateException -> L108
            javax.net.ssl.X509TrustManager r5 = (javax.net.ssl.X509TrustManager) r5     // Catch: java.security.cert.CertificateException -> L108
            java.security.cert.X509Certificate[] r6 = r5.getAcceptedIssuers()     // Catch: java.security.cert.CertificateException -> L108
            if (r6 == 0) goto Le5
            java.lang.String r7 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c     // Catch: java.security.cert.CertificateException -> L108
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.security.cert.CertificateException -> L108
            r8.<init>()     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r9 = "client root ca size is : "
            r8.append(r9)     // Catch: java.security.cert.CertificateException -> L108
            int r9 = r6.length     // Catch: java.security.cert.CertificateException -> L108
            r8.append(r9)     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r8 = r8.toString()     // Catch: java.security.cert.CertificateException -> L108
            com.huawei.secure.android.common.ssl.util.g.c(r7, r8)     // Catch: java.security.cert.CertificateException -> L108
            r7 = r3
        Lc3:
            int r8 = r6.length     // Catch: java.security.cert.CertificateException -> L108
            if (r7 >= r8) goto Le5
            java.lang.String r8 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c     // Catch: java.security.cert.CertificateException -> L108
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.security.cert.CertificateException -> L108
            r9.<init>()     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r10 = "client root ca getIssuerDN :"
            r9.append(r10)     // Catch: java.security.cert.CertificateException -> L108
            r10 = r6[r7]     // Catch: java.security.cert.CertificateException -> L108
            java.security.Principal r10 = r10.getIssuerDN()     // Catch: java.security.cert.CertificateException -> L108
            r9.append(r10)     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r9 = r9.toString()     // Catch: java.security.cert.CertificateException -> L108
            com.huawei.secure.android.common.ssl.util.g.a(r8, r9)     // Catch: java.security.cert.CertificateException -> L108
            int r7 = r7 + 1
            goto Lc3
        Le5:
            r5.checkServerTrusted(r12, r13)     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c     // Catch: java.security.cert.CertificateException -> L108
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.security.cert.CertificateException -> L108
            r6.<init>()     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r7 = "checkServerTrusted succeed ,root ca issuer is : "
            r6.append(r7)     // Catch: java.security.cert.CertificateException -> L108
            int r7 = r12.length     // Catch: java.security.cert.CertificateException -> L108
            int r7 = r7 + (-1)
            r7 = r12[r7]     // Catch: java.security.cert.CertificateException -> L108
            java.security.Principal r7 = r7.getIssuerDN()     // Catch: java.security.cert.CertificateException -> L108
            r6.append(r7)     // Catch: java.security.cert.CertificateException -> L108
            java.lang.String r6 = r6.toString()     // Catch: java.security.cert.CertificateException -> L108
            com.huawei.secure.android.common.ssl.util.g.c(r5, r6)     // Catch: java.security.cert.CertificateException -> L108
            return
        L108:
            r5 = move-exception
            java.lang.String r6 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "checkServerTrusted error :"
            r7.append(r8)
            java.lang.String r8 = r5.getMessage()
            r7.append(r8)
            java.lang.String r8 = " , time : "
            r7.append(r8)
            r7.append(r4)
            java.lang.String r7 = r7.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r6, r7)
            int r6 = r2 + (-1)
            if (r4 != r6) goto L154
            if (r12 == 0) goto L153
            int r13 = r12.length
            if (r13 <= 0) goto L153
            java.lang.String r13 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "root ca issuer : "
            r0.append(r1)
            int r1 = r12.length
            int r1 = r1 + (-1)
            r12 = r12[r1]
            java.security.Principal r12 = r12.getIssuerDN()
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r13, r12)
        L153:
            throw r5
        L154:
            int r4 = r4 + 1
            goto L85
        L158:
            java.lang.String r12 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r2 = "checkServerTrusted: cost : "
            r13.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            r13.append(r2)
            java.lang.String r0 = " ms"
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r12, r13)
            return
    }

    @Override
    public java.security.cert.X509Certificate[] getAcceptedIssuers() {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.util.List<javax.net.ssl.X509TrustManager> r1 = r4.a     // Catch: java.lang.Exception -> L30
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L30
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L30
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L30
            javax.net.ssl.X509TrustManager r2 = (javax.net.ssl.X509TrustManager) r2     // Catch: java.lang.Exception -> L30
            java.security.cert.X509Certificate[] r2 = r2.getAcceptedIssuers()     // Catch: java.lang.Exception -> L30
            java.util.List r2 = java.util.Arrays.asList(r2)     // Catch: java.lang.Exception -> L30
            r0.addAll(r2)     // Catch: java.lang.Exception -> L30
            goto Lb
        L23:
            int r1 = r0.size()     // Catch: java.lang.Exception -> L30
            java.security.cert.X509Certificate[] r1 = new java.security.cert.X509Certificate[r1]     // Catch: java.lang.Exception -> L30
            java.lang.Object[] r0 = r0.toArray(r1)     // Catch: java.lang.Exception -> L30
            java.security.cert.X509Certificate[] r0 = (java.security.cert.X509Certificate[]) r0     // Catch: java.lang.Exception -> L30
            return r0
        L30:
            r0 = move-exception
            java.lang.String r1 = com.huawei.secure.android.common.ssl.SecureX509TrustManager.c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getAcceptedIssuers exception : "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r1, r0)
            r0 = 0
            java.security.cert.X509Certificate[] r0 = new java.security.cert.X509Certificate[r0]
            return r0
    }

    public java.security.cert.X509Certificate[] getChain() {
            r1 = this;
            java.security.cert.X509Certificate[] r0 = r1.b
            return r0
    }

    public java.util.List<javax.net.ssl.X509TrustManager> getX509TrustManagers() {
            r1 = this;
            java.util.List<javax.net.ssl.X509TrustManager> r0 = r1.a
            return r0
    }

    public void setChain(java.security.cert.X509Certificate[] r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setX509TrustManagers(java.util.List<javax.net.ssl.X509TrustManager> r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
