package com.huawei.agconnect.config.a;

class i extends com.huawei.agconnect.config.a.h {
    private final java.util.Map<java.lang.String, java.lang.String> a;
    private final java.lang.Object b;
    private javax.crypto.SecretKey c;
    private boolean d;

    i(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r2.<init>(r3, r4)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r2.a = r3
            java.lang.Object r3 = new java.lang.Object
            r3.<init>()
            r2.b = r3
            r3 = 1
            r2.d = r3
            java.lang.String r3 = "/AD91D45E3E72DB6989DDCB13287E75061FABCB933D886E6C6ABEF0939B577138"
            java.lang.String r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = "/B314B3BF013DF5AC4134E880AF3D2B7C9FFBE8F0305EAC1C898145E2BCF1F21C"
            java.lang.String r4 = r2.a(r4)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r0 = "/C767BD8FDF53E53D059BE95B09E2A71056F5F180AECC62836B287ACA5793421B"
            java.lang.String r0 = r2.a(r0)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = "/DCB3E6D4C2CF80F30D89CDBC412C964DA8381BB84668769391FBCC3E329AD0FD"
            java.lang.String r1 = r2.a(r1)     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4b
            if (r4 == 0) goto L4b
            if (r0 == 0) goto L4b
            if (r1 == 0) goto L4b
            byte[] r3 = com.huawei.agconnect.config.a.e.a(r3)     // Catch: java.lang.Throwable -> L4f
            byte[] r4 = com.huawei.agconnect.config.a.e.a(r4)     // Catch: java.lang.Throwable -> L4f
            byte[] r0 = com.huawei.agconnect.config.a.e.a(r0)     // Catch: java.lang.Throwable -> L4f
            byte[] r1 = com.huawei.agconnect.config.a.e.a(r1)     // Catch: java.lang.Throwable -> L4f
            javax.crypto.SecretKey r3 = com.huawei.agconnect.config.a.g.a(r3, r4, r0, r1)     // Catch: java.lang.Throwable -> L4f
            r2.c = r3     // Catch: java.lang.Throwable -> L4f
            goto L59
        L4b:
            r3 = 0
            r2.d = r3     // Catch: java.lang.Throwable -> L4f
            goto L59
        L4f:
            java.lang.String r3 = "SecurityResourcesReader"
            java.lang.String r4 = "Exception when reading the 'K&I' for 'Config'."
            android.util.Log.e(r3, r4)
            r3 = 0
            r2.c = r3
        L59:
            return
    }

    private java.lang.String a(java.lang.String r2) {
            r1 = this;
            r0 = 0
            java.lang.String r2 = super.a(r2, r0)
            return r2
    }

    private static byte[] a(javax.crypto.SecretKey r5, byte[] r6) throws java.security.GeneralSecurityException {
            if (r5 == 0) goto L25
            if (r6 == 0) goto L25
            r0 = 17
            r1 = 1
            byte[] r0 = java.util.Arrays.copyOfRange(r6, r1, r0)
            java.lang.String r2 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)
            r3 = 2
            javax.crypto.spec.IvParameterSpec r4 = new javax.crypto.spec.IvParameterSpec
            r4.<init>(r0)
            r2.init(r3, r5, r4)
            int r5 = r0.length
            int r5 = r5 + r1
            int r3 = r6.length
            int r0 = r0.length
            int r3 = r3 - r0
            int r3 = r3 - r1
            byte[] r5 = r2.doFinal(r6, r5, r3)
            return r5
        L25:
            java.lang.NullPointerException r5 = new java.lang.NullPointerException
            java.lang.String r6 = "key or cipherText must not be null."
            r5.<init>(r6)
            throw r5
    }

    @Override
    public java.lang.String a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r4.d
            if (r0 != 0) goto Lc
            java.lang.String r5 = r4.a(r5)
            if (r5 == 0) goto Lb
            r6 = r5
        Lb:
            return r6
        Lc:
            javax.crypto.SecretKey r0 = r4.c
            if (r0 != 0) goto L18
            java.lang.String r5 = "SecurityResourcesReader"
            java.lang.String r0 = "KEY is null return def directly"
            android.util.Log.e(r5, r0)
            return r6
        L18:
            java.lang.Object r0 = r4.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.a     // Catch: java.lang.Throwable -> L50
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L50
            if (r1 == 0) goto L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
            return r1
        L27:
            java.lang.String r1 = r4.a(r5)     // Catch: java.lang.Throwable -> L50
            if (r1 != 0) goto L2f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
            return r6
        L2f:
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            javax.crypto.SecretKey r3 = r4.c     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            byte[] r1 = com.huawei.agconnect.config.a.e.a(r1)     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            byte[] r1 = a(r3, r1)     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            java.lang.String r3 = "UTF-8"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.a     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L47 java.lang.Throwable -> L50
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
            return r2
        L47:
            java.lang.String r5 = "SecurityResourcesReader"
            java.lang.String r1 = "Exception when reading the 'V' for 'Config'."
            android.util.Log.e(r5, r1)     // Catch: java.lang.Throwable -> L50
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
            return r6
        L50:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L50
            throw r5
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SecurityResourcesReader{mKey="
            r0.append(r1)
            javax.crypto.SecretKey r1 = r2.c
            int r1 = r1.hashCode()
            r0.append(r1)
            java.lang.String r1 = ", encrypt="
            r0.append(r1)
            boolean r1 = r2.d
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
