package com.meizu.cloud.pushsdk.notification.c;

public class d {
    private static com.meizu.cloud.pushsdk.notification.c.d a;
    private android.content.res.AssetManager b;

    private d(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.b(r1)
            return
    }

    public static com.meizu.cloud.pushsdk.notification.c.d a(android.content.Context r1) {
            com.meizu.cloud.pushsdk.notification.c.d r0 = com.meizu.cloud.pushsdk.notification.c.d.a
            if (r0 != 0) goto Lb
            com.meizu.cloud.pushsdk.notification.c.d r0 = new com.meizu.cloud.pushsdk.notification.c.d
            r0.<init>(r1)
            com.meizu.cloud.pushsdk.notification.c.d.a = r0
        Lb:
            com.meizu.cloud.pushsdk.notification.c.d r1 = com.meizu.cloud.pushsdk.notification.c.d.a
            return r1
    }

    private void b(android.content.Context r1) {
            r0 = this;
            android.content.res.AssetManager r1 = r1.getAssets()
            r0.b = r1
            return
    }

    public int a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Get resource type "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = " "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ResourceReader"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            android.content.pm.ApplicationInfo r0 = r3.getApplicationInfo()
            android.content.res.Resources r3 = r3.getResources()
            java.lang.String r0 = r0.packageName
            int r3 = r3.getIdentifier(r4, r5, r0)
            return r3
    }
}
