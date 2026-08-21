package com.meizu.cloud.pushsdk;

public class a {
    public static void a(android.content.Context r2) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isWatch()
            if (r0 == 0) goto L9
            java.lang.String r0 = "com.meizu.wearable.cloud"
            goto Lb
        L9:
            java.lang.String r0 = "com.meizu.cloud"
        Lb:
            java.lang.String r1 = r2.getPackageName()
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L16
            return
        L16:
            b(r2)
            c(r2)
            return
    }

    private static void b(android.content.Context r7) {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isWatch()
            if (r0 == 0) goto L9
            java.lang.String r0 = "com.meizu.wearable.cloud"
            goto Lb
        L9:
            java.lang.String r0 = "com.meizu.cloud"
        Lb:
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getAppVersionName(r7, r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r7.getPackageName()
            r2.append(r3)
            java.lang.String r3 = " start register cloudVersion_name "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "PullUpPush"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getMzPushServicePackageName(r7)
            boolean r4 = r0.equals(r4)
            java.lang.String r5 = "com.meizu.cloud.pushsdk.pushservice.MzPushService"
            java.lang.String r6 = "com.meizu.pushservice.action.START"
            if (r4 == 0) goto L4c
            java.lang.String r1 = "cloud pushService start"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            r2.setAction(r6)
            r2.setClassName(r0, r5)
            goto Lc4
        L4c:
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L77
            java.lang.String r4 = "4.5.7"
            boolean r4 = com.meizu.cloud.pushsdk.util.MzSystemUtils.compareVersion(r1, r4)
            if (r4 == 0) goto L77
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "flyme 4.x start register cloud versionName "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            r2.setPackage(r0)
            java.lang.String r0 = "com.meizu.flyme.push.intent.REGISTER"
            r2.setAction(r0)
            goto Lc4
        L77:
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto La2
            java.lang.String r4 = "3"
            boolean r4 = r1.startsWith(r4)
            if (r4 == 0) goto La2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "flyme 3.x start register cloud versionName "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            java.lang.String r1 = "com.meizu.c2dm.intent.REGISTER"
            r2.setAction(r1)
            r2.setPackage(r0)
            goto Lc4
        La2:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r7.getPackageName()
            r0.append(r1)
            java.lang.String r1 = " start register "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)
            java.lang.String r0 = r7.getPackageName()
            r2.setClassName(r0, r5)
            r2.setAction(r6)
        Lc4:
            r7.startService(r2)     // Catch: java.lang.Exception -> Lc8
            goto Le1
        Lc8:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "start service error "
            r0.append(r1)
            java.lang.String r7 = r7.getMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r7)
        Le1:
            return
    }

    private static void c(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 <= r1) goto L7
            return
        L7:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.meizu.cloud.pushservice.action.PUSH_TRACKER_SERVICE"
            r0.<init>(r1)
            android.content.pm.PackageManager r1 = r3.getPackageManager()
            r2 = 0
            java.util.List r0 = r1.queryIntentServices(r0, r2)
            if (r0 == 0) goto L1f
            int r0 = r0.size()
            if (r0 != 0) goto L26
        L1f:
            com.meizu.cloud.pushsdk.d.e.a r3 = com.meizu.cloud.pushsdk.d.a.a(r3, r2)
            r3.a()
        L26:
            return
    }
}
