package com.meizu.cloud.pushsdk.util;

public class MinSdkChecker {
    public MinSdkChecker() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isSupportBigTextStyleAndAction() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportDeviceDefaultLight() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 14
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportKeyguardState() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportNotificationBuild() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportNotificationChannel() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportNotificationSort() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportSendNotification() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportSetDrawableSmallIcon() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean isSupportTransmitMessageValue(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "com.meizu.flyme.push.intent.PUSH_SYSTEM"
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.findReceiver(r1, r0, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r1 = r1 ^ 1
            return r1
    }

    public static boolean isSupportVideoNotification() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }
}
