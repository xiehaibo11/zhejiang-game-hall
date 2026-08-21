package com.huawei.agconnect.config.a;

class h implements com.huawei.agconnect.config.a.d {
    private final android.content.Context a;
    private final java.lang.String b;

    h(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    private static java.lang.String a(java.lang.String r3) {
            java.lang.String r0 = ""
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L22
            r1.<init>()     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "agc_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "UTF-8"
            byte[] r3 = r3.getBytes(r2)     // Catch: java.lang.Throwable -> L22
            byte[] r3 = a(r3)     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = com.huawei.agconnect.config.a.e.a(r3)     // Catch: java.lang.Throwable -> L22
            r1.append(r3)     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L22
            return r3
        L22:
            return r0
    }

    private static byte[] a(byte[] r1) throws java.security.NoSuchAlgorithmException {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)
            byte[] r1 = r0.digest(r1)
            return r1
    }

    @Override
    public java.lang.String a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r4 = a(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lb
            return r5
        Lb:
            android.content.Context r0 = r3.a
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r1 = r3.b
            java.lang.String r2 = "string"
            int r4 = r0.getIdentifier(r4, r2, r1)
            if (r4 != 0) goto L1c
            return r5
        L1c:
            android.content.Context r0 = r3.a     // Catch: android.content.res.Resources.NotFoundException -> L27
            android.content.res.Resources r0 = r0.getResources()     // Catch: android.content.res.Resources.NotFoundException -> L27
            java.lang.String r4 = r0.getString(r4)     // Catch: android.content.res.Resources.NotFoundException -> L27
            return r4
        L27:
            return r5
    }
}
