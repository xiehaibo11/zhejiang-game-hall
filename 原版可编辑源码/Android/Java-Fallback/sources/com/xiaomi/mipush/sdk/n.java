package com.xiaomi.mipush.sdk;

public class n {
    private static int a = -1;

    static {
            return
    }

    public static com.xiaomi.mipush.sdk.ag a(android.content.Context r3) {
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L21
            android.content.ComponentName r0 = new android.content.ComponentName     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = "com.huawei.hwid"
            java.lang.String r2 = "com.huawei.hms.core.service.HMSCoreService"
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L21
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ServiceInfo r3 = r3.getServiceInfo(r0, r1)     // Catch: java.lang.Exception -> L21
            if (r3 == 0) goto L1e
            boolean r3 = a()     // Catch: java.lang.Exception -> L21
            if (r3 == 0) goto L1e
            com.xiaomi.mipush.sdk.ag r3 = com.xiaomi.mipush.sdk.ag.a     // Catch: java.lang.Exception -> L21
            return r3
        L1e:
            com.xiaomi.mipush.sdk.ag r3 = com.xiaomi.mipush.sdk.ag.f
            return r3
        L21:
            com.xiaomi.mipush.sdk.ag r3 = com.xiaomi.mipush.sdk.ag.f
            return r3
    }

    private static boolean a() {
            r0 = 0
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.String r2 = "get"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = "ro.build.hw_emui_api_level"
            r3[r0] = r4     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = ""
            r5 = 1
            r3[r5] = r4     // Catch: java.lang.Exception -> L26
            java.lang.Object r1 = com.xiaomi.push.bk.a(r1, r2, r3)     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L26
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L26
            if (r2 != 0) goto L2a
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L26
            r2 = 9
            if (r1 < r2) goto L2a
            return r5
        L26:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L2a:
            return r0
    }

    public static boolean a(android.content.Context r5) {
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "com.google.android.gms.common.GoogleApiAvailability"
            java.lang.String r3 = "getInstance"
            java.lang.Object r1 = com.xiaomi.push.bk.a(r2, r3, r1)
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]
            r3[r0] = r5
            java.lang.String r5 = "isGooglePlayServicesAvailable"
            java.lang.Object r5 = com.xiaomi.push.bk.a(r1, r5, r3)
            java.lang.String r1 = "com.google.android.gms.common.ConnectionResult"
            java.lang.String r3 = "SUCCESS"
            java.lang.Object r1 = com.xiaomi.push.bk.a(r1, r3)
            java.lang.String r3 = "google service is not avaliable"
            if (r1 == 0) goto L72
            boolean r4 = r1 instanceof java.lang.Integer
            if (r4 == 0) goto L72
            java.lang.Class<java.lang.Integer> r4 = java.lang.Integer.class
            java.lang.Object r1 = r4.cast(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            if (r5 == 0) goto L51
            boolean r4 = r5 instanceof java.lang.Integer
            if (r4 == 0) goto L4c
            java.lang.Class<java.lang.Integer> r3 = java.lang.Integer.class
            java.lang.Object r5 = r3.cast(r5)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            if (r5 != r1) goto L48
            r5 = r2
            goto L49
        L48:
            r5 = r0
        L49:
            com.xiaomi.mipush.sdk.n.a = r5
            goto L51
        L4c:
            com.xiaomi.mipush.sdk.n.a = r0
            com.xiaomi.channel.commonutils.logger.b.c(r3)
        L51:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "is google service can be used"
            r5.append(r1)
            int r1 = com.xiaomi.mipush.sdk.n.a
            if (r1 <= 0) goto L61
            r1 = r2
            goto L62
        L61:
            r1 = r0
        L62:
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r5)
            int r5 = com.xiaomi.mipush.sdk.n.a
            if (r5 <= 0) goto L71
            r0 = r2
        L71:
            return r0
        L72:
            com.xiaomi.channel.commonutils.logger.b.c(r3)
            com.xiaomi.mipush.sdk.n.a = r0
            return r0
    }

    public static boolean b(android.content.Context r3) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "com.xiaomi.assemble.control.COSPushManager"
            java.lang.String r2 = "isSupportPush"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r2, r0)
            if (r3 == 0) goto L20
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L20
            java.lang.Class<java.lang.Boolean> r0 = java.lang.Boolean.class
            java.lang.Object r3 = r0.cast(r3)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r1 = r3.booleanValue()
        L20:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "color os push  is avaliable ? :"
            r3.append(r0)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r3)
            return r1
    }

    public static boolean c(android.content.Context r3) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "com.xiaomi.assemble.control.FTOSPushManager"
            java.lang.String r2 = "isSupportPush"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r2, r0)
            if (r3 == 0) goto L20
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L20
            java.lang.Class<java.lang.Boolean> r0 = java.lang.Boolean.class
            java.lang.Object r3 = r0.cast(r3)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r1 = r3.booleanValue()
        L20:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "fun touch os push  is avaliable ? :"
            r3.append(r0)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r3)
            return r1
    }
}
