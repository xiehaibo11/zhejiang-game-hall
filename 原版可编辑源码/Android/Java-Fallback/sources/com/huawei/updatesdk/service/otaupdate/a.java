package com.huawei.updatesdk.service.otaupdate;

public abstract class a {
    public static void a(android.content.Context r1, android.content.BroadcastReceiver r2) {
            if (r2 == 0) goto L24
            if (r1 != 0) goto L5
            goto L24
        L5:
            r1.unregisterReceiver(r2)     // Catch: java.lang.IllegalArgumentException -> L9
            goto L24
        L9:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "unregisterReceiver error:"
            r2.append(r0)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "ActivityUtil"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r2, r1)
        L24:
            return
    }

    public static void a(android.content.Context r1, android.content.IntentFilter r2, android.content.BroadcastReceiver r3) {
            if (r2 == 0) goto L2b
            if (r3 != 0) goto L5
            goto L2b
        L5:
            boolean r0 = a(r1)
            if (r0 == 0) goto Lc
            return
        Lc:
            r1.registerReceiver(r3, r2)     // Catch: java.lang.IllegalArgumentException -> L10
            goto L2b
        L10:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "registerReceiver error:"
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "ActivityUtil"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r2, r1)
        L2b:
            return
    }

    public static boolean a(android.content.Context r3) {
            r0 = 1
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof android.app.Activity
            if (r1 == 0) goto L33
            android.app.Activity r3 = (android.app.Activity) r3
            boolean r1 = r3.isFinishing()
            if (r1 != 0) goto L1c
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r1 < r2) goto L33
            boolean r1 = r3.isDestroyed()
            if (r1 == 0) goto L33
        L1c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "activity has bean finished, cannot instance:"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "ActivityUtil"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r3)
            return r0
        L33:
            r3 = 0
            return r3
    }
}
