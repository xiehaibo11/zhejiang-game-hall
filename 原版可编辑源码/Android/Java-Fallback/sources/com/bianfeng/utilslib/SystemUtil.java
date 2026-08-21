package com.bianfeng.utilslib;

public class SystemUtil {
    private static com.bianfeng.utilslib.SystemUtil util;

    private SystemUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String createTransactionId() {
            com.bianfeng.utilslib.SignMd5Utils r0 = com.bianfeng.utilslib.SignMd5Utils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = getUuid()
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            r2 = 3
            java.lang.String r2 = getRandom(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = r0.md5(r1)
            return r0
    }

    public static com.bianfeng.utilslib.SystemUtil getInstance() {
            com.bianfeng.utilslib.SystemUtil r0 = com.bianfeng.utilslib.SystemUtil.util
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.SystemUtil r0 = new com.bianfeng.utilslib.SystemUtil
            r0.<init>()
            com.bianfeng.utilslib.SystemUtil.util = r0
        Lb:
            com.bianfeng.utilslib.SystemUtil r0 = com.bianfeng.utilslib.SystemUtil.util
            return r0
    }

    public static java.lang.String getRandom(int r7) {
            java.lang.String r0 = ""
            r1 = 0
        L3:
            if (r1 >= r7) goto L24
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            double r3 = java.lang.Math.random()
            r5 = 4621819117588971520(0x4024000000000000, double:10.0)
            double r3 = r3 * r5
            int r0 = (int) r3
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L3
        L24:
            return r0
    }

    private static java.lang.String getUuid() {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "-"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.replaceAll(r1, r2)
            return r0
    }

    public java.lang.String getSystemCurrentTime() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void hideVirtualKey(android.app.Activity r4) {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 11
            if (r0 <= r2) goto L1a
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L1a
            android.view.Window r4 = r4.getWindow()
            android.view.View r4 = r4.getDecorView()
            r0 = 8
            r4.setSystemUiVisibility(r0)
            goto L2b
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L2b
            r0 = 4102(0x1006, float:5.748E-42)
            android.view.Window r4 = r4.getWindow()
            android.view.View r4 = r4.getDecorView()
            r4.setSystemUiVisibility(r0)
        L2b:
            return
    }
}
