package com.huawei.secure.android.common.ssl;

public abstract class SSLUtil {
    private static final java.lang.String a = "SSLUtil";
    private static final java.lang.String b = "TLSv1.3";
    private static final java.lang.String c = "TLSv1.2";
    private static final java.lang.String d = "TLS";
    private static final java.lang.String e = "TLSv1";
    private static final java.lang.String[] f = null;
    private static final java.lang.String[] g = null;
    private static final java.lang.String[] h = null;

    static {
            java.lang.String r0 = "TLS_DHE_DSS_WITH_AES_128_CBC_SHA"
            java.lang.String r1 = "TLS_DHE_RSA_WITH_AES_128_CBC_SHA"
            java.lang.String r2 = "TLS_DHE_DSS_WITH_AES_256_CBC_SHA"
            java.lang.String r3 = "TLS_DHE_RSA_WITH_AES_256_CBC_SHA"
            java.lang.String r4 = "TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA"
            java.lang.String r5 = "TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA"
            java.lang.String r6 = "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"
            java.lang.String r7 = "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7}
            com.huawei.secure.android.common.ssl.SSLUtil.f = r0
            java.lang.String r1 = "TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256"
            java.lang.String r2 = "TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384"
            java.lang.String r3 = "TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256"
            java.lang.String r4 = "TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"
            java.lang.String r5 = "TLS_DHE_RSA_WITH_AES_128_GCM_SHA256"
            java.lang.String r6 = "TLS_DHE_RSA_WITH_AES_256_GCM_SHA384"
            java.lang.String r7 = "TLS_DHE_DSS_WITH_AES_128_GCM_SHA256"
            java.lang.String r8 = "TLS_DHE_DSS_WITH_AES_256_GCM_SHA384"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8}
            com.huawei.secure.android.common.ssl.SSLUtil.g = r0
            java.lang.String r1 = "TLS_RSA"
            java.lang.String r2 = "CBC"
            java.lang.String r3 = "TEA"
            java.lang.String r4 = "SHA0"
            java.lang.String r5 = "MD2"
            java.lang.String r6 = "MD4"
            java.lang.String r7 = "RIPEMD"
            java.lang.String r8 = "NULL"
            java.lang.String r9 = "RC4"
            java.lang.String r10 = "DES"
            java.lang.String r11 = "DESX"
            java.lang.String r12 = "DES40"
            java.lang.String r13 = "RC2"
            java.lang.String r14 = "MD5"
            java.lang.String r15 = "ANON"
            java.lang.String r16 = "TLS_EMPTY_RENEGOTIATION_INFO_SCSV"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16}
            com.huawei.secure.android.common.ssl.SSLUtil.h = r0
            return
    }

    public SSLUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String[] getEnabledCipherSuites(javax.net.ssl.SSLSocket r0) {
            java.lang.String[] r0 = r0.getEnabledCipherSuites()
            return r0
    }

    public static java.lang.String[] getEnabledProtocols(javax.net.ssl.SSLSocket r0) {
            java.lang.String[] r0 = r0.getEnabledProtocols()
            return r0
    }

    public static void printTLSAndCipher(javax.net.ssl.SSLSocket r8) {
            java.lang.String[] r0 = r8.getEnabledProtocols()
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L7:
            java.lang.String r4 = "SSLUtil"
            if (r3 >= r1) goto L24
            r5 = r0[r3]
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "new enable protocols is : "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.huawei.secure.android.common.ssl.util.g.c(r4, r5)
            int r3 = r3 + 1
            goto L7
        L24:
            java.lang.String[] r8 = r8.getEnabledCipherSuites()
            int r0 = r8.length
        L29:
            if (r2 >= r0) goto L44
            r1 = r8[r2]
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "new cipher suites is : "
            r3.append(r5)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            com.huawei.secure.android.common.ssl.util.g.c(r4, r1)
            int r2 = r2 + 1
            goto L29
        L44:
            return
    }

    public static boolean setBlackListCipherSuites(javax.net.ssl.SSLSocket r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String[] r0 = com.huawei.secure.android.common.ssl.SSLUtil.h
            boolean r1 = setBlackListCipherSuites(r1, r0)
            return r1
    }

    public static boolean setBlackListCipherSuites(javax.net.ssl.SSLSocket r12, java.lang.String[] r13) {
            r0 = 0
            if (r12 != 0) goto L4
            return r0
        L4:
            java.lang.String[] r1 = r12.getEnabledCipherSuites()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            int r3 = r1.length
            r4 = r0
        Lf:
            r5 = 1
            if (r4 >= r3) goto L39
            r6 = r1[r4]
            java.util.Locale r7 = java.util.Locale.ENGLISH
            java.lang.String r7 = r6.toUpperCase(r7)
            int r8 = r13.length
            r9 = r0
        L1c:
            if (r9 >= r8) goto L30
            r10 = r13[r9]
            java.util.Locale r11 = java.util.Locale.ENGLISH
            java.lang.String r10 = r10.toUpperCase(r11)
            boolean r10 = r7.contains(r10)
            if (r10 == 0) goto L2d
            goto L31
        L2d:
            int r9 = r9 + 1
            goto L1c
        L30:
            r5 = r0
        L31:
            if (r5 != 0) goto L36
            r2.add(r6)
        L36:
            int r4 = r4 + 1
            goto Lf
        L39:
            boolean r13 = r2.isEmpty()
            if (r13 != 0) goto L4f
            int r13 = r2.size()
            java.lang.String[] r13 = new java.lang.String[r13]
            java.lang.Object[] r13 = r2.toArray(r13)
            java.lang.String[] r13 = (java.lang.String[]) r13
            r12.setEnabledCipherSuites(r13)
            return r5
        L4f:
            return r0
    }

    public static void setEnableSafeCipherSuites(javax.net.ssl.SSLSocket r1) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r0 = setWhiteListCipherSuites(r1)
            if (r0 != 0) goto Lc
            setBlackListCipherSuites(r1)
        Lc:
            return
    }

    public static void setEnabledProtocols(javax.net.ssl.SSLSocket r4) {
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "TLSv1.2"
            r2 = 29
            if (r0 < r2) goto L14
            java.lang.String r0 = "TLSv1.3"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            r4.setEnabledProtocols(r0)
        L14:
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r0 < r3) goto L24
            if (r0 >= r2) goto L24
            java.lang.String[] r0 = new java.lang.String[]{r1}
            r4.setEnabledProtocols(r0)
            goto L31
        L24:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r3) goto L31
            java.lang.String r0 = "TLSv1"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            r4.setEnabledProtocols(r0)
        L31:
            return
    }

    public static boolean setEnabledProtocols(javax.net.ssl.SSLSocket r2, java.lang.String[] r3) {
            r0 = 0
            if (r2 == 0) goto L26
            if (r3 != 0) goto L6
            goto L26
        L6:
            r2.setEnabledProtocols(r3)     // Catch: java.lang.Exception -> Lb
            r2 = 1
            return r2
        Lb:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "setEnabledProtocols: exception : "
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "SSLUtil"
            com.huawei.secure.android.common.ssl.util.g.b(r3, r2)
        L26:
            return r0
    }

    public static javax.net.ssl.SSLContext setSSLContext() throws java.security.NoSuchAlgorithmException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 < r1) goto Ld
            java.lang.String r0 = "TLSv1.3"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)
            goto L1e
        Ld:
            r1 = 16
            if (r0 < r1) goto L18
            java.lang.String r0 = "TLSv1.2"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)
            goto L1e
        L18:
            java.lang.String r0 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)
        L1e:
            return r0
    }

    public static void setSSLSocketOptions(javax.net.ssl.SSLSocket r0) {
            if (r0 != 0) goto L3
            return
        L3:
            setEnabledProtocols(r0)
            setEnableSafeCipherSuites(r0)
            return
    }

    public static boolean setWhiteListCipherSuites(javax.net.ssl.SSLSocket r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 <= r1) goto L11
            java.lang.String[] r0 = com.huawei.secure.android.common.ssl.SSLUtil.g
            boolean r2 = setWhiteListCipherSuites(r2, r0)
            return r2
        L11:
            java.lang.String[] r0 = com.huawei.secure.android.common.ssl.SSLUtil.f
            boolean r2 = setWhiteListCipherSuites(r2, r0)
            return r2
    }

    public static boolean setWhiteListCipherSuites(javax.net.ssl.SSLSocket r7, java.lang.String[] r8) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            java.lang.String[] r1 = r7.getEnabledCipherSuites()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r8 = java.util.Arrays.asList(r8)
            int r3 = r1.length
            r4 = r0
        L13:
            if (r4 >= r3) goto L29
            r5 = r1[r4]
            java.util.Locale r6 = java.util.Locale.ENGLISH
            java.lang.String r6 = r5.toUpperCase(r6)
            boolean r6 = r8.contains(r6)
            if (r6 == 0) goto L26
            r2.add(r5)
        L26:
            int r4 = r4 + 1
            goto L13
        L29:
            boolean r8 = r2.isEmpty()
            if (r8 != 0) goto L40
            int r8 = r2.size()
            java.lang.String[] r8 = new java.lang.String[r8]
            java.lang.Object[] r8 = r2.toArray(r8)
            java.lang.String[] r8 = (java.lang.String[]) r8
            r7.setEnabledCipherSuites(r8)
            r7 = 1
            return r7
        L40:
            return r0
    }
}
