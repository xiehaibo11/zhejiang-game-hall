package com.huawei.hms.push;

public class m {
    public static com.huawei.hms.push.n a(com.huawei.hms.push.k r3) {
            com.huawei.hms.push.n r0 = com.huawei.hms.push.n.a
            int r1 = r3.w()
            if (r1 < 0) goto L1d
            int r1 = r3.w()
            com.huawei.hms.push.n[] r2 = com.huawei.hms.push.n.values()
            int r2 = r2.length
            if (r1 >= r2) goto L1d
            com.huawei.hms.push.n[] r0 = com.huawei.hms.push.n.values()
            int r3 = r3.w()
            r0 = r0[r3]
        L1d:
            return r0
    }

    public static void a(android.app.Notification.Builder r2, java.lang.String r3, com.huawei.hms.push.k r4) {
            android.app.Notification$BigTextStyle r0 = new android.app.Notification$BigTextStyle
            r0.<init>()
            java.lang.String r1 = r4.h()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L16
            java.lang.String r4 = r4.h()
            r0.setBigContentTitle(r4)
        L16:
            r4 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L1e
            goto L1f
        L1e:
            r3 = r4
        L1f:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L28
            r0.bigText(r3)
        L28:
            r2.setStyle(r0)
            return
    }
}
