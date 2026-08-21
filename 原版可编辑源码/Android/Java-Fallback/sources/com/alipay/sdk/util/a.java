package com.alipay.sdk.util;

public class a {
    private static final java.lang.String a = "00:00:00:00:00:00";
    private static com.alipay.sdk.util.a e;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;

    static {
            return
    }

    private a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "00:00:00:00:00:00"
            r3.<init>()
            android.content.Context r1 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r2 = "phone"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r2 = r1.getDeviceId()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r3.b(r2)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r1 = r1.getSubscriberId()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r3.a(r1)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r1 = "wifi"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            android.net.wifi.WifiManager r4 = (android.net.wifi.WifiManager) r4     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            android.net.wifi.WifiInfo r4 = r4.getConnectionInfo()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r4 = r4.getMacAddress()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r3.d = r4     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.String r4 = r3.d
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L4e
            goto L4c
        L3e:
            r4 = move-exception
            goto L4f
        L40:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = r3.d
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L4e
        L4c:
            r3.d = r0
        L4e:
            return
        L4f:
            java.lang.String r1 = r3.d
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L59
            r3.d = r0
        L59:
            throw r4
    }

    public static com.alipay.sdk.util.a a(android.content.Context r1) {
            com.alipay.sdk.util.a r0 = com.alipay.sdk.util.a.e
            if (r0 != 0) goto Lb
            com.alipay.sdk.util.a r0 = new com.alipay.sdk.util.a
            r0.<init>(r1)
            com.alipay.sdk.util.a.e = r0
        Lb:
            com.alipay.sdk.util.a r1 = com.alipay.sdk.util.a.e
            return r1
    }

    public static com.alipay.sdk.util.d b(android.content.Context r1) {
            android.content.Context r1 = r1.getApplicationContext()
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L21
            int r0 = r1.getType()     // Catch: java.lang.Exception -> L30
            if (r0 != 0) goto L21
            int r1 = r1.getSubtype()     // Catch: java.lang.Exception -> L30
            com.alipay.sdk.util.d r1 = com.alipay.sdk.util.d.a(r1)     // Catch: java.lang.Exception -> L30
            return r1
        L21:
            if (r1 == 0) goto L2d
            int r1 = r1.getType()     // Catch: java.lang.Exception -> L30
            r0 = 1
            if (r1 != r0) goto L2d
            com.alipay.sdk.util.d r1 = com.alipay.sdk.util.d.a     // Catch: java.lang.Exception -> L30
            return r1
        L2d:
            com.alipay.sdk.util.d r1 = com.alipay.sdk.util.d.o     // Catch: java.lang.Exception -> L30
            return r1
        L30:
            com.alipay.sdk.util.d r1 = com.alipay.sdk.util.d.o
            return r1
    }

    public static java.lang.String c(android.content.Context r2) {
            com.alipay.sdk.util.a r2 = a(r2)
            java.lang.String r2 = r2.c()
            r0 = 0
            r1 = 8
            java.lang.String r2 = r2.substring(r0, r1)
            return r2
    }

    public static java.lang.String d(android.content.Context r1) {
            java.lang.String r0 = ""
            if (r1 != 0) goto L5
            return r0
        L5:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L14
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> L14
            java.util.Locale r1 = r1.locale     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L14
            return r1
        L14:
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = "000000000000000"
            r1.b = r0
        Lc:
            java.lang.String r0 = r1.b
            return r0
    }

    public void a(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "000000000000000"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            r1 = 15
            java.lang.String r3 = r3.substring(r0, r1)
        L1a:
            r2.b = r3
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = "000000000000000"
            r1.c = r0
        Lc:
            java.lang.String r0 = r1.c
            return r0
    }

    public void b(java.lang.String r6) {
            r5 = this;
            if (r6 == 0) goto L39
            byte[] r6 = r6.getBytes()
            r0 = 0
            r1 = 0
        L8:
            int r2 = r6.length
            if (r1 >= r2) goto L1d
            r2 = r6[r1]
            r3 = 48
            if (r2 < r3) goto L18
            r2 = r6[r1]
            r4 = 57
            if (r2 > r4) goto L18
            goto L1a
        L18:
            r6[r1] = r3
        L1a:
            int r1 = r1 + 1
            goto L8
        L1d:
            java.lang.String r1 = new java.lang.String
            r1.<init>(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            java.lang.String r1 = "000000000000000"
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            r1 = 15
            java.lang.String r6 = r6.substring(r0, r1)
        L39:
            r5.c = r6
            return
    }

    public java.lang.String c() {
            r3 = this;
            java.lang.String r0 = r3.b()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "|"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = r3.a()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L31
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "000000000000000"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            goto L40
        L31:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
        L40:
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }
}
