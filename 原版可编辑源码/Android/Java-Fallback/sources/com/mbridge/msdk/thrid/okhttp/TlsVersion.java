package com.mbridge.msdk.thrid.okhttp;

public enum TlsVersion extends java.lang.Enum<com.mbridge.msdk.thrid.okhttp.TlsVersion> {
    private static final com.mbridge.msdk.thrid.okhttp.TlsVersion[] $VALUES = null;
    public static final com.mbridge.msdk.thrid.okhttp.TlsVersion SSL_3_0 = null;
    public static final com.mbridge.msdk.thrid.okhttp.TlsVersion TLS_1_0 = null;
    public static final com.mbridge.msdk.thrid.okhttp.TlsVersion TLS_1_1 = null;
    public static final com.mbridge.msdk.thrid.okhttp.TlsVersion TLS_1_2 = null;
    public static final com.mbridge.msdk.thrid.okhttp.TlsVersion TLS_1_3 = null;
    final java.lang.String javaName;

    static {
            com.mbridge.msdk.thrid.okhttp.TlsVersion r0 = new com.mbridge.msdk.thrid.okhttp.TlsVersion
            r1 = 0
            java.lang.String r2 = "TLS_1_3"
            java.lang.String r3 = "TLSv1.3"
            r0.<init>(r2, r1, r3)
            com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_3 = r0
            com.mbridge.msdk.thrid.okhttp.TlsVersion r0 = new com.mbridge.msdk.thrid.okhttp.TlsVersion
            r2 = 1
            java.lang.String r3 = "TLS_1_2"
            java.lang.String r4 = "TLSv1.2"
            r0.<init>(r3, r2, r4)
            com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_2 = r0
            com.mbridge.msdk.thrid.okhttp.TlsVersion r0 = new com.mbridge.msdk.thrid.okhttp.TlsVersion
            r3 = 2
            java.lang.String r4 = "TLS_1_1"
            java.lang.String r5 = "TLSv1.1"
            r0.<init>(r4, r3, r5)
            com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_1 = r0
            com.mbridge.msdk.thrid.okhttp.TlsVersion r0 = new com.mbridge.msdk.thrid.okhttp.TlsVersion
            r4 = 3
            java.lang.String r5 = "TLS_1_0"
            java.lang.String r6 = "TLSv1"
            r0.<init>(r5, r4, r6)
            com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_0 = r0
            com.mbridge.msdk.thrid.okhttp.TlsVersion r0 = new com.mbridge.msdk.thrid.okhttp.TlsVersion
            r5 = 4
            java.lang.String r6 = "SSL_3_0"
            java.lang.String r7 = "SSLv3"
            r0.<init>(r6, r5, r7)
            com.mbridge.msdk.thrid.okhttp.TlsVersion.SSL_3_0 = r0
            r6 = 5
            com.mbridge.msdk.thrid.okhttp.TlsVersion[] r6 = new com.mbridge.msdk.thrid.okhttp.TlsVersion[r6]
            com.mbridge.msdk.thrid.okhttp.TlsVersion r7 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_3
            r6[r1] = r7
            com.mbridge.msdk.thrid.okhttp.TlsVersion r1 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_2
            r6[r2] = r1
            com.mbridge.msdk.thrid.okhttp.TlsVersion r1 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_1
            r6[r3] = r1
            com.mbridge.msdk.thrid.okhttp.TlsVersion r1 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_0
            r6[r4] = r1
            r6[r5] = r0
            com.mbridge.msdk.thrid.okhttp.TlsVersion.$VALUES = r6
            return
    }

    TlsVersion(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.javaName = r3
            return
    }

    public static com.mbridge.msdk.thrid.okhttp.TlsVersion forJavaName(java.lang.String r6) {
            int r0 = r6.hashCode()
            r1 = 79201641(0x4b88569, float:4.338071E-36)
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            if (r0 == r1) goto L3e
            r1 = 79923350(0x4c38896, float:4.5969714E-36)
            if (r0 == r1) goto L34
            switch(r0) {
                case -503070503: goto L2a;
                case -503070502: goto L20;
                case -503070501: goto L16;
                default: goto L15;
            }
        L15:
            goto L48
        L16:
            java.lang.String r0 = "TLSv1.3"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L48
            r0 = 0
            goto L49
        L20:
            java.lang.String r0 = "TLSv1.2"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L48
            r0 = r5
            goto L49
        L2a:
            java.lang.String r0 = "TLSv1.1"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L48
            r0 = r4
            goto L49
        L34:
            java.lang.String r0 = "TLSv1"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L48
            r0 = r3
            goto L49
        L3e:
            java.lang.String r0 = "SSLv3"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L48
            r0 = r2
            goto L49
        L48:
            r0 = -1
        L49:
            if (r0 == 0) goto L76
            if (r0 == r5) goto L73
            if (r0 == r4) goto L70
            if (r0 == r3) goto L6d
            if (r0 != r2) goto L56
            com.mbridge.msdk.thrid.okhttp.TlsVersion r6 = com.mbridge.msdk.thrid.okhttp.TlsVersion.SSL_3_0
            return r6
        L56:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected TLS version: "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L6d:
            com.mbridge.msdk.thrid.okhttp.TlsVersion r6 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_0
            return r6
        L70:
            com.mbridge.msdk.thrid.okhttp.TlsVersion r6 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_1
            return r6
        L73:
            com.mbridge.msdk.thrid.okhttp.TlsVersion r6 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_2
            return r6
        L76:
            com.mbridge.msdk.thrid.okhttp.TlsVersion r6 = com.mbridge.msdk.thrid.okhttp.TlsVersion.TLS_1_3
            return r6
    }

    static java.util.List<com.mbridge.msdk.thrid.okhttp.TlsVersion> forJavaNames(java.lang.String... r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r4.length
            r0.<init>(r1)
            int r1 = r4.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L16
            r3 = r4[r2]
            com.mbridge.msdk.thrid.okhttp.TlsVersion r3 = forJavaName(r3)
            r0.add(r3)
            int r2 = r2 + 1
            goto L8
        L16:
            java.util.List r4 = java.util.Collections.unmodifiableList(r0)
            return r4
    }

    public static com.mbridge.msdk.thrid.okhttp.TlsVersion valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.thrid.okhttp.TlsVersion> r0 = com.mbridge.msdk.thrid.okhttp.TlsVersion.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.thrid.okhttp.TlsVersion r1 = (com.mbridge.msdk.thrid.okhttp.TlsVersion) r1
            return r1
    }

    public static com.mbridge.msdk.thrid.okhttp.TlsVersion[] values() {
            com.mbridge.msdk.thrid.okhttp.TlsVersion[] r0 = com.mbridge.msdk.thrid.okhttp.TlsVersion.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.thrid.okhttp.TlsVersion[] r0 = (com.mbridge.msdk.thrid.okhttp.TlsVersion[]) r0
            return r0
    }

    public java.lang.String javaName() {
            r1 = this;
            java.lang.String r0 = r1.javaName
            return r0
    }
}
