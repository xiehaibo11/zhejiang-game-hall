package com.meizu.cloud.pushsdk.b;

public class c {
    private static java.lang.String a = "";

    static {
            return
    }

    public static java.lang.String a(android.content.Context r1) {
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.c.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r1 = com.meizu.cloud.pushsdk.b.c.a
            return r1
        Lb:
            boolean r0 = a()
            if (r0 != 0) goto L16
            java.lang.String r1 = d(r1)
            goto L1a
        L16:
            java.lang.String r1 = b(r1)
        L1a:
            com.meizu.cloud.pushsdk.b.c.a = r1
            java.lang.String r1 = com.meizu.cloud.pushsdk.b.c.a
            return r1
    }

    public static boolean a() {
            java.lang.String r0 = "ro.target.product"
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.i.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "DeviceUtils"
            if (r1 != 0) goto L24
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "current product is "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            r0 = 0
            return r0
        L24:
            java.lang.String r0 = "current product is phone"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            r0 = 1
            return r0
    }

    public static java.lang.String b(android.content.Context r5) {
            r0 = 0
            java.lang.String r1 = "android.telephony.MzTelephonyManager"
            com.meizu.cloud.pushsdk.b.b.a r1 = com.meizu.cloud.pushsdk.b.b.a.a(r1)     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "getDeviceId"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L39
            com.meizu.cloud.pushsdk.b.b.c r1 = r1.a(r2, r4)     // Catch: java.lang.Exception -> L39
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L39
            com.meizu.cloud.pushsdk.b.b.d r1 = r1.a(r2)     // Catch: java.lang.Exception -> L39
            boolean r2 = r1.a     // Catch: java.lang.Exception -> L39
            if (r2 == 0) goto L29
            T r2 = r1.b     // Catch: java.lang.Exception -> L39
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2     // Catch: java.lang.Exception -> L39
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L39
            if (r2 != 0) goto L29
            T r5 = r1.b     // Catch: java.lang.Exception -> L39
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L39
            goto L37
        L29:
            java.lang.String r1 = "phone"
            java.lang.Object r5 = r5.getSystemService(r1)     // Catch: java.lang.Exception -> L39
            android.telephony.TelephonyManager r5 = (android.telephony.TelephonyManager) r5     // Catch: java.lang.Exception -> L39
            if (r5 == 0) goto L3d
            java.lang.String r5 = r5.getDeviceId()     // Catch: java.lang.Exception -> L39
        L37:
            r0 = r5
            goto L3d
        L39:
            r5 = move-exception
            r5.printStackTrace()
        L3d:
            return r0
    }

    public static java.lang.String c(android.content.Context r0) {
            r0 = 0
            return r0
    }

    private static java.lang.String d(android.content.Context r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.SERIAL
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "device serial "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "DeviceUtils"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            r4 = 0
            if (r2 != 0) goto L59
            r0.append(r1)
            java.lang.String r5 = c(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "mac address "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L59
            java.lang.String r1 = ":"
            java.lang.String r2 = ""
            java.lang.String r5 = r5.replace(r1, r2)
            java.lang.String r5 = r5.toUpperCase()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            return r5
        L59:
            return r4
    }
}
