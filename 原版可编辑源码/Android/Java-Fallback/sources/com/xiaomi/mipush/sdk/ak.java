package com.xiaomi.mipush.sdk;

public class ak {
    public static com.xiaomi.mipush.sdk.AbstractPushManager a(android.content.Context r0, com.xiaomi.mipush.sdk.e r1) {
            com.xiaomi.mipush.sdk.AbstractPushManager r0 = b(r0, r1)
            return r0
    }

    private static com.xiaomi.mipush.sdk.AbstractPushManager b(android.content.Context r3, com.xiaomi.mipush.sdk.e r4) {
            com.xiaomi.mipush.sdk.l$a r4 = com.xiaomi.mipush.sdk.l.a(r4)
            if (r4 == 0) goto L27
            java.lang.String r0 = r4.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            java.lang.String r0 = r4.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            java.lang.String r0 = r4.a
            java.lang.String r4 = r4.b
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            java.lang.Object r3 = com.xiaomi.push.bk.a(r0, r4, r1)
            com.xiaomi.mipush.sdk.AbstractPushManager r3 = (com.xiaomi.mipush.sdk.AbstractPushManager) r3
            return r3
        L27:
            r3 = 0
            return r3
    }
}
