package com.kwad.sdk.utils;

public final class d {
    private static final java.util.Map<java.lang.String, java.lang.String> aHI = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.utils.d.aHI = r0
            java.lang.String r1 = "com.huawei.appmarket"
            java.lang.String r2 = "HUAWEI"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r2 = "com.oppo.market"
            java.lang.String r3 = "OPPO"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r3 = "vivo"
            java.lang.String r4 = "com.bbk.appstore"
            r0.put(r3, r4)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r3 = "xiaomi"
            java.lang.String r4 = "com.xiaomi.market"
            r0.put(r3, r4)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r3 = "OnePlus"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r3 = "Meizu"
            java.lang.String r4 = "com.meizu.mstore"
            r0.put(r3, r4)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r3 = "samsung"
            java.lang.String r4 = "com.sec.android.app.samsungapps"
            r0.put(r3, r4)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r3 = "SMARTISAN"
            java.lang.String r4 = "com.smartisanos.appstore"
            r0.put(r3, r4)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r3 = "Realme"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.utils.d.aHI
            java.lang.String r2 = "HONOR"
            r0.put(r2, r1)
            return
    }

    private static boolean G(android.content.Context r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r4 = android.net.Uri.parse(r4)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r2 = "android.intent.action.VIEW"
            r0.<init>(r2, r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)
            r3.startActivity(r0)     // Catch: java.lang.Exception -> L1d
            r3 = 1
            return r3
        L1d:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    public static boolean a(android.content.Context r2, java.lang.String r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            boolean r0 = com.kwad.sdk.utils.as.IT()
            if (r0 == 0) goto L1b
            com.kwad.sdk.internal.api.SceneImpl r0 = r4.mAdScene
            if (r0 == 0) goto L1b
            com.kwad.sdk.internal.api.SceneImpl r0 = r4.mAdScene
            int r0 = r0.adStyle
            r1 = 4
            if (r0 == r1) goto L1b
            int r2 = com.kwad.sdk.core.download.a.b.j(r2, r3)
            r3 = 1
            if (r2 != r3) goto L1b
            r4.mXiaomiAppStoreDetailViewOpen = r3
            return r3
        L1b:
            r2 = 0
            return r2
    }

    private static boolean a(android.content.pm.ResolveInfo r1) {
            if (r1 == 0) goto L13
            android.content.pm.ActivityInfo r0 = r1.activityInfo
            if (r0 == 0) goto L13
            android.content.pm.ActivityInfo r1 = r1.activityInfo
            java.lang.String r1 = r1.packageName
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            return r1
        L13:
            r1 = 1
            return r1
    }

    public static boolean f(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            r0 = 0
            if (r5 == 0) goto L8c
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto Lb
            goto L8c
        Lb:
            java.lang.String r1 = android.os.Build.BRAND
            java.lang.String r2 = "samsung"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L23
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r1 = "http://apps.samsung.com/appquery/appDetail.as?appId="
            r6.<init>(r1)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
        L23:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.kwad.sdk.utils.d.aHI     // Catch: java.lang.Exception -> L87
            java.lang.String r1 = android.os.Build.BRAND     // Catch: java.lang.Exception -> L87
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Exception -> L87
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L87
            android.net.Uri r1 = android.net.Uri.parse(r6)     // Catch: java.lang.Exception -> L87
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L87
            r2.<init>()     // Catch: java.lang.Exception -> L87
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.setAction(r3)     // Catch: java.lang.Exception -> L87
            r2.setData(r1)     // Catch: java.lang.Exception -> L87
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r1)     // Catch: java.lang.Exception -> L87
            android.content.pm.PackageManager r1 = r5.getPackageManager()     // Catch: java.lang.Exception -> L87
            java.util.List r0 = r1.queryIntentActivities(r2, r0)     // Catch: java.lang.Exception -> L87
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L87
        L4f:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L87
            if (r1 == 0) goto L82
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L87
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1     // Catch: java.lang.Exception -> L87
            boolean r3 = a(r1)     // Catch: java.lang.Exception -> L87
            if (r3 != 0) goto L4f
            android.content.pm.ActivityInfo r3 = r1.activityInfo     // Catch: java.lang.Exception -> L87
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L87
            boolean r4 = r3.equals(r7)     // Catch: java.lang.Exception -> L87
            if (r4 != 0) goto L71
            boolean r4 = fo(r3)     // Catch: java.lang.Exception -> L87
            if (r4 == 0) goto L4f
        L71:
            android.content.ComponentName r7 = new android.content.ComponentName     // Catch: java.lang.Exception -> L87
            android.content.pm.ActivityInfo r0 = r1.activityInfo     // Catch: java.lang.Exception -> L87
            java.lang.String r0 = r0.name     // Catch: java.lang.Exception -> L87
            r7.<init>(r3, r0)     // Catch: java.lang.Exception -> L87
            r2.setComponent(r7)     // Catch: java.lang.Exception -> L87
            r5.startActivity(r2)     // Catch: java.lang.Exception -> L87
            r5 = 1
            return r5
        L82:
            boolean r5 = G(r5, r6)
            return r5
        L87:
            boolean r5 = G(r5, r6)
            return r5
        L8c:
            return r0
    }

    private static boolean fo(java.lang.String r2) {
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "OPPO"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L14
            java.lang.String r0 = "com.heytap.market"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L14
            r2 = 1
            goto L15
        L14:
            r2 = 0
        L15:
            return r2
    }
}
