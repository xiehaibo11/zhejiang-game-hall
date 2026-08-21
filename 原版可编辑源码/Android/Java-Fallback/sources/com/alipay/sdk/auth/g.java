package com.alipay.sdk.auth;

public class g {
    private static final java.lang.String a = "com.eg.android.AlipayGphone";
    private static final int b = 65;
    private static com.alipay.sdk.widget.a c;
    private static java.lang.String d;

    static {
            return
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.alipay.sdk.widget.a a() {
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.c
            return r0
    }

    static com.alipay.sdk.widget.a a(com.alipay.sdk.widget.a r0) {
            com.alipay.sdk.auth.g.c = r0
            return r0
    }

    static java.lang.String a(java.lang.String r0) {
            com.alipay.sdk.auth.g.d = r0
            return r0
    }

    public static void a(android.app.Activity r2, com.alipay.sdk.auth.APAuthInfo r3) {
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            com.alipay.sdk.data.c r1 = com.alipay.sdk.data.c.b()
            r0.a(r2, r1)
            boolean r0 = a(r2)
            if (r0 == 0) goto L15
            b(r2, r3)
            goto L18
        L15:
            c(r2, r3)
        L18:
            return
    }

    public static void a(android.app.Activity r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent     // Catch: android.content.ActivityNotFoundException -> L11
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1)     // Catch: android.content.ActivityNotFoundException -> L11
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: android.content.ActivityNotFoundException -> L11
            r0.setData(r3)     // Catch: android.content.ActivityNotFoundException -> L11
            r2.startActivity(r0)     // Catch: android.content.ActivityNotFoundException -> L11
        L11:
            return
    }

    private static boolean a(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            java.lang.String r1 = "com.eg.android.AlipayGphone"
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            if (r3 != 0) goto L10
            return r0
        L10:
            int r3 = r3.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            r1 = 65
            if (r3 >= r1) goto L17
            return r0
        L17:
            r3 = 1
            return r3
        L19:
            return r0
    }

    static java.lang.String b() {
            java.lang.String r0 = com.alipay.sdk.auth.g.d
            return r0
    }

    private static void b(android.app.Activity r2, com.alipay.sdk.auth.APAuthInfo r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "alipayauth://platformapi/startapp"
            r0.append(r1)
            java.lang.String r1 = "?appId=20000122"
            r0.append(r1)
            java.lang.String r1 = "&approveType=005"
            r0.append(r1)
            java.lang.String r1 = "&scope=kuaijie"
            r0.append(r1)
            java.lang.String r1 = "&productId="
            r0.append(r1)
            java.lang.String r1 = r3.getProductId()
            r0.append(r1)
            java.lang.String r1 = "&thirdpartyId="
            r0.append(r1)
            java.lang.String r1 = r3.getAppId()
            r0.append(r1)
            java.lang.String r1 = "&redirectUri="
            r0.append(r1)
            java.lang.String r3 = r3.getRedirectUri()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            a(r2, r3)
            return
    }

    private static void c(android.app.Activity r3, com.alipay.sdk.auth.APAuthInfo r4) {
            if (r3 == 0) goto L1a
            boolean r0 = r3.isFinishing()     // Catch: java.lang.Exception -> L17
            if (r0 != 0) goto L1a
            com.alipay.sdk.widget.a r0 = new com.alipay.sdk.widget.a     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = "正在加载"
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L17
            com.alipay.sdk.auth.g.c = r0     // Catch: java.lang.Exception -> L17
            com.alipay.sdk.widget.a r0 = com.alipay.sdk.auth.g.c     // Catch: java.lang.Exception -> L17
            r0.b()     // Catch: java.lang.Exception -> L17
            goto L1a
        L17:
            r0 = 0
            com.alipay.sdk.auth.g.c = r0
        L1a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "app_id="
            r0.append(r1)
            java.lang.String r1 = r4.getAppId()
            r0.append(r1)
            java.lang.String r1 = "&partner="
            r0.append(r1)
            java.lang.String r1 = r4.getPid()
            r0.append(r1)
            java.lang.String r1 = "&scope=kuaijie"
            r0.append(r1)
            java.lang.String r1 = "&login_goal=auth"
            r0.append(r1)
            java.lang.String r1 = "&redirect_url="
            r0.append(r1)
            java.lang.String r1 = r4.getRedirectUri()
            r0.append(r1)
            java.lang.String r1 = "&view=wap"
            r0.append(r1)
            java.lang.String r1 = "&prod_code="
            r0.append(r1)
            java.lang.String r1 = r4.getProductId()
            r0.append(r1)
            java.lang.Thread r1 = new java.lang.Thread
            com.alipay.sdk.auth.h r2 = new com.alipay.sdk.auth.h
            r2.<init>(r3, r0, r4)
            r1.<init>(r2)
            r1.start()
            return
    }
}
