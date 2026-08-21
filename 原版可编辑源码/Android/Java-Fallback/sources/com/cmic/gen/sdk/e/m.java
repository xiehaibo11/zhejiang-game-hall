package com.cmic.gen.sdk.e;

public class m {
    private static final java.lang.String a = null;
    private static final java.lang.String b = null;
    private static final java.lang.String c = null;
    private static final boolean d = false;
    private static final java.lang.String e = null;

    static {
            java.lang.String r0 = android.os.Build.BRAND
            com.cmic.gen.sdk.e.m.a = r0
            java.lang.String r0 = android.os.Build.MODEL
            com.cmic.gen.sdk.e.m.b = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "android"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.cmic.gen.sdk.e.m.c = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 > r1) goto L25
            r0 = 1
            goto L26
        L25:
            r0 = 0
        L26:
            com.cmic.gen.sdk.e.m.d = r0
            java.lang.String r0 = android.os.Build.MANUFACTURER
            com.cmic.gen.sdk.e.m.e = r0
            return
    }

    public static int a(android.content.Context r6, boolean r7, com.cmic.gen.sdk.a r8) {
            r0 = 0
            android.content.Context r1 = r6.getApplicationContext()     // Catch: java.lang.Exception -> L61
            java.lang.String r2 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Exception -> L61
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L61
            r2 = 0
            if (r1 == 0) goto L14
            android.net.NetworkInfo r2 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L61
        L14:
            if (r2 == 0) goto L60
            boolean r3 = r2.isAvailable()     // Catch: java.lang.Exception -> L61
            if (r3 != 0) goto L1d
            goto L60
        L1d:
            int r2 = r2.getType()     // Catch: java.lang.Exception -> L61
            r3 = 1
            java.lang.String r4 = "TelephonyUtils"
            if (r2 != r3) goto L58
            java.lang.String r2 = "WIFI"
            com.cmic.gen.sdk.e.c.b(r4, r2)     // Catch: java.lang.Exception -> L61
            java.lang.String r2 = "android.permission.CHANGE_NETWORK_STATE"
            boolean r2 = com.cmic.gen.sdk.e.g.a(r6, r2)     // Catch: java.lang.Exception -> L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r3.<init>()     // Catch: java.lang.Exception -> L61
            java.lang.String r5 = "CHANGE_NETWORK_STATE="
            r3.append(r5)     // Catch: java.lang.Exception -> L61
            r3.append(r2)     // Catch: java.lang.Exception -> L61
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L61
            com.cmic.gen.sdk.e.c.a(r4, r3)     // Catch: java.lang.Exception -> L61
            if (r2 == 0) goto L56
            if (r7 == 0) goto L56
            boolean r6 = a(r1, r6, r8)     // Catch: java.lang.Exception -> L61
            if (r6 == 0) goto L56
            java.lang.String r6 = "流量数据 WIFI 同开"
            com.cmic.gen.sdk.e.c.b(r4, r6)     // Catch: java.lang.Exception -> L61
            r6 = 3
            return r6
        L56:
            r6 = 2
            return r6
        L58:
            if (r2 != 0) goto L65
            java.lang.String r6 = "流量"
            com.cmic.gen.sdk.e.c.b(r4, r6)     // Catch: java.lang.Exception -> L61
            return r3
        L60:
            return r0
        L61:
            r6 = move-exception
            r6.printStackTrace()
        L65:
            return r0
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.cmic.gen.sdk.e.m.a
            return r0
    }

    public static boolean a(android.content.Context r1) {
            java.lang.String r0 = "phone"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1
            r0 = 1
            if (r1 == 0) goto L13
            int r1 = r1.getSimState()
            if (r0 == r1) goto L12
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    private static boolean a(android.net.ConnectivityManager r5, android.content.Context r6, com.cmic.gen.sdk.a r7) {
            java.lang.String r0 = "TelephonyUtils"
            r1 = 0
            java.lang.Class<android.net.ConnectivityManager> r2 = android.net.ConnectivityManager.class
            java.lang.String r3 = "getMobileDataEnabled"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L63
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L63
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Exception -> L63
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L63
            java.lang.Object r5 = r2.invoke(r5, r3)     // Catch: java.lang.Exception -> L63
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Exception -> L63
            boolean r1 = r5.booleanValue()     // Catch: java.lang.Exception -> L63
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L63
            r5.<init>()     // Catch: java.lang.Exception -> L63
            java.lang.String r2 = "data is on ---------"
            r5.append(r2)     // Catch: java.lang.Exception -> L63
            r5.append(r1)     // Catch: java.lang.Exception -> L63
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L63
            com.cmic.gen.sdk.e.c.b(r0, r5)     // Catch: java.lang.Exception -> L63
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L63
            r2 = 26
            java.lang.String r3 = "networkTypeByAPI"
            if (r5 < r2) goto L5d
            java.lang.String r5 = "phone"
            java.lang.Object r5 = r6.getSystemService(r5)     // Catch: java.lang.Exception -> L63
            android.telephony.TelephonyManager r5 = (android.telephony.TelephonyManager) r5     // Catch: java.lang.Exception -> L63
            if (r5 == 0) goto L62
            int r6 = android.telephony.SubscriptionManager.getDefaultSubscriptionId()     // Catch: java.lang.Exception -> L63
            android.telephony.TelephonyManager r5 = r5.createForSubscriptionId(r6)     // Catch: java.lang.Exception -> L63
            boolean r5 = r5.isDataEnabled()     // Catch: java.lang.Exception -> L63
            if (r5 == 0) goto L57
            java.lang.String r5 = "1"
            r7.a(r3, r5)     // Catch: java.lang.Exception -> L63
            goto L62
        L57:
            java.lang.String r5 = "0"
            r7.a(r3, r5)     // Catch: java.lang.Exception -> L63
            goto L62
        L5d:
            java.lang.String r5 = "-1"
            r7.a(r3, r5)     // Catch: java.lang.Exception -> L63
        L62:
            return r1
        L63:
            java.lang.String r5 = "isMobileEnabled ----反射出错-----"
            com.cmic.gen.sdk.e.c.a(r0, r5)
            return r1
    }

    public static java.lang.String b() {
            java.lang.String r0 = com.cmic.gen.sdk.e.m.b
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = com.cmic.gen.sdk.e.m.c
            return r0
    }

    public static boolean d() {
            boolean r0 = com.cmic.gen.sdk.e.m.d
            return r0
    }

    public static boolean e() {
            java.lang.String r0 = com.cmic.gen.sdk.e.m.e
            java.lang.String r1 = "brand"
            com.cmic.gen.sdk.e.c.a(r1, r0)
            java.lang.String r1 = "HUAWEI"
            boolean r0 = r1.equalsIgnoreCase(r0)
            return r0
    }
}
