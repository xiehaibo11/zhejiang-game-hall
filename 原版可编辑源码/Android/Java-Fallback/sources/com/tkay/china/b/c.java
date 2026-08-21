package com.tkay.china.b;

public final class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "imei"
            boolean r0 = r0.c(r1)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lf
            return r1
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L31
            r2 = 23
            if (r0 >= r2) goto L1a
            java.lang.String r1 = b(r3)     // Catch: java.lang.Throwable -> L31
            goto L31
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L31
            r2 = 26
            if (r0 >= r2) goto L29
            java.util.Map r3 = c(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = a(r3)     // Catch: java.lang.Throwable -> L31
            goto L31
        L29:
            java.util.Map r3 = d(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = a(r3)     // Catch: java.lang.Throwable -> L31
        L31:
            return r1
    }

    private static java.lang.String a(java.util.Map r1) {
            if (r1 == 0) goto Lb
            java.lang.String r0 = "imei1"
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            goto Ld
        Lb:
            java.lang.String r1 = ""
        Ld:
            return r1
    }

    private static java.lang.String b(android.content.Context r1) {
            java.lang.String r0 = "phone"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.getDeviceId()     // Catch: java.lang.Throwable -> Lf
            return r1
        Lf:
            r1 = 0
            return r1
    }

    private static java.util.Map c(android.content.Context r9) {
            java.lang.String r0 = ""
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = "phone"
            java.lang.Object r9 = r9.getSystemService(r2)
            android.telephony.TelephonyManager r9 = (android.telephony.TelephonyManager) r9
            java.lang.String r2 = "android.os.SystemProperties"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L92
            java.lang.String r3 = "get"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L92
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Throwable -> L92
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Throwable -> L92
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L92
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L92
            java.lang.String r5 = "ril.gsm.imei"
            r3[r7] = r5     // Catch: java.lang.Throwable -> L92
            r3[r8] = r0     // Catch: java.lang.Throwable -> L92
            r5 = 0
            java.lang.Object r3 = r2.invoke(r5, r3)     // Catch: java.lang.Throwable -> L92
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L92
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L92
            java.lang.String r6 = "ril.cdma.meid"
            r4[r7] = r6     // Catch: java.lang.Throwable -> L92
            r4[r8] = r0     // Catch: java.lang.Throwable -> L92
            java.lang.Object r0 = r2.invoke(r5, r4)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "meid"
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L92
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "imei1"
            java.lang.String r4 = "imei2"
            if (r0 != 0) goto L84
            java.lang.String r0 = ","
            java.lang.String[] r0 = r3.split(r0)
            if (r0 == 0) goto L75
            int r3 = r0.length
            if (r3 <= 0) goto L75
            r3 = r0[r7]
            r1.put(r2, r3)
            int r2 = r0.length
            if (r2 <= r8) goto L6d
            r9 = r0[r8]
            r1.put(r4, r9)
            goto L92
        L6d:
            java.lang.String r9 = r9.getDeviceId(r8)
            r1.put(r4, r9)
            goto L92
        L75:
            java.lang.String r0 = r9.getDeviceId(r7)
            r1.put(r2, r0)
            java.lang.String r9 = r9.getDeviceId(r8)
            r1.put(r4, r9)
            goto L92
        L84:
            java.lang.String r0 = r9.getDeviceId(r7)
            r1.put(r2, r0)
            java.lang.String r9 = r9.getDeviceId(r8)
            r1.put(r4, r9)
        L92:
            return r1
    }

    private static java.util.Map d(android.content.Context r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "phone"
            java.lang.Object r5 = r5.getSystemService(r1)     // Catch: java.lang.Throwable -> L35
            android.telephony.TelephonyManager r5 = (android.telephony.TelephonyManager) r5     // Catch: java.lang.Throwable -> L35
            r1 = 0
            java.lang.String r1 = r5.getImei(r1)     // Catch: java.lang.Throwable -> L35
            r2 = 1
            java.lang.String r2 = r5.getImei(r2)     // Catch: java.lang.Throwable -> L35
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "imei1"
            if (r3 == 0) goto L2d
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L35
            if (r3 == 0) goto L2d
            java.lang.String r5 = r5.getMeid()     // Catch: java.lang.Throwable -> L35
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L35
            goto L35
        L2d:
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = "imei2"
            r0.put(r5, r2)     // Catch: java.lang.Throwable -> L35
        L35:
            return r0
    }
}
