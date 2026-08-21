package com.huawei.hms.framework.common;

public class ContextCompat {
    private static final java.lang.String TAG = "ContextCompat";

    public ContextCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean checkSelfPermission(android.content.Context r4, java.lang.String r5) {
            java.lang.String r0 = "ContextCompat"
            r1 = 0
            if (r4 == 0) goto L20
            if (r5 != 0) goto L8
            goto L20
        L8:
            int r2 = android.os.Process.myPid()     // Catch: java.lang.RuntimeException -> L19
            int r3 = android.os.Process.myUid()     // Catch: java.lang.RuntimeException -> L19
            int r4 = r4.checkPermission(r5, r2, r3)     // Catch: java.lang.RuntimeException -> L19
            if (r4 != 0) goto L1f
            r4 = 1
            r1 = r4
            goto L1f
        L19:
            r4 = move-exception
            java.lang.String r5 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r0, r5, r4)
        L1f:
            return r1
        L20:
            java.lang.String r4 = "param is null"
            com.huawei.hms.framework.common.Logger.w(r0, r4)
            return r1
    }

    public static android.content.Context getProtectedStorageContext(android.content.Context r2) {
            if (r2 != 0) goto Lb
            java.lang.String r2 = "ContextCompat"
            java.lang.String r0 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r2, r0)
            r2 = 0
            return r2
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 >= r1) goto L12
            return r2
        L12:
            android.content.Context r2 = r2.createDeviceProtectedStorageContext()
            return r2
    }

    public static java.lang.Object getSystemService(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "ContextCompat"
            r1 = 0
            if (r2 != 0) goto Lb
            java.lang.String r2 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            return r1
        Lb:
            java.lang.Object r1 = r2.getSystemService(r3)     // Catch: java.lang.RuntimeException -> L10
            goto L16
        L10:
            r2 = move-exception
            java.lang.String r3 = "SystemServer error:"
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
        L16:
            return r1
    }

    public static android.content.Intent registerReceiver(android.content.Context r2, android.content.BroadcastReceiver r3, android.content.IntentFilter r4) {
            java.lang.String r0 = "ContextCompat"
            r1 = 0
            if (r2 != 0) goto Lb
            java.lang.String r2 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            return r1
        Lb:
            android.content.Intent r1 = r2.registerReceiver(r3, r4)     // Catch: java.lang.RuntimeException -> L10
            goto L16
        L10:
            r2 = move-exception
            java.lang.String r3 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
        L16:
            return r1
    }

    public static android.content.Intent registerReceiver(android.content.Context r2, android.content.BroadcastReceiver r3, android.content.IntentFilter r4, java.lang.String r5, android.os.Handler r6) {
            java.lang.String r0 = "ContextCompat"
            r1 = 0
            if (r2 != 0) goto Lb
            java.lang.String r2 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            return r1
        Lb:
            android.content.Intent r1 = r2.registerReceiver(r3, r4, r5, r6)     // Catch: java.lang.RuntimeException -> L10
            goto L16
        L10:
            r2 = move-exception
            java.lang.String r3 = "dealType rethrowFromSystemServer:"
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
        L16:
            return r1
    }

    public static android.content.ComponentName startService(android.content.Context r2, android.content.Intent r3) {
            java.lang.String r0 = "ContextCompat"
            r1 = 0
            if (r2 != 0) goto Lb
            java.lang.String r2 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r2)
            return r1
        Lb:
            android.content.ComponentName r1 = r2.startService(r3)     // Catch: java.lang.RuntimeException -> L10
            goto L16
        L10:
            r2 = move-exception
            java.lang.String r3 = "SystemServer error:"
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
        L16:
            return r1
    }

    public static void unregisterReceiver(android.content.Context r1, android.content.BroadcastReceiver r2) {
            java.lang.String r0 = "ContextCompat"
            if (r1 != 0) goto La
            java.lang.String r1 = "context is null"
            com.huawei.hms.framework.common.Logger.w(r0, r1)
            return
        La:
            r1.unregisterReceiver(r2)     // Catch: java.lang.RuntimeException -> Le
            goto L14
        Le:
            r1 = move-exception
            java.lang.String r2 = "SystemServer error:"
            com.huawei.hms.framework.common.Logger.e(r0, r2, r1)
        L14:
            return
    }
}
