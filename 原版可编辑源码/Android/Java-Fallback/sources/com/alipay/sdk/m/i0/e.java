package com.alipay.sdk.m.i0;

public final class e extends android.content.BroadcastReceiver {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void onReceive(android.content.Context r5, android.content.Intent r6) {
            r4 = this;
            if (r5 == 0) goto L85
            if (r6 != 0) goto L6
            goto L85
        L6:
            r0 = 0
            java.lang.String r1 = "openIdNotifyFlag"
            int r1 = r6.getIntExtra(r1, r0)
            java.lang.String r2 = java.lang.String.valueOf(r1)
            java.lang.String r3 = "shouldUpdateId, notifyFlag : "
            java.lang.String r2 = r3.concat(r2)
            com.alipay.sdk.m.i0.f.a(r2)
            r2 = 1
            if (r1 != r2) goto L2e
            java.lang.String r1 = "openIdPackage"
            java.lang.String r1 = r6.getStringExtra(r1)
            java.lang.String r5 = r5.getPackageName()
            boolean r5 = android.text.TextUtils.equals(r1, r5)
            if (r5 == 0) goto L45
            goto L44
        L2e:
            r3 = 2
            if (r1 != r3) goto L42
            java.lang.String r1 = "openIdPackageList"
            java.util.ArrayList r1 = r6.getStringArrayListExtra(r1)
            if (r1 == 0) goto L45
            java.lang.String r5 = r5.getPackageName()
            boolean r0 = r1.contains(r5)
            goto L45
        L42:
            if (r1 != 0) goto L45
        L44:
            r0 = 1
        L45:
            if (r0 != 0) goto L48
            return
        L48:
            java.lang.String r5 = "openIdType"
            java.lang.String r5 = r6.getStringExtra(r5)
            com.alipay.sdk.m.i0.f r6 = com.alipay.sdk.m.i0.f.a()
            java.lang.String r0 = "oaid"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L5d
            com.alipay.sdk.m.i0.a r5 = r6.b
            goto L7f
        L5d:
            java.lang.String r0 = "vaid"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L68
            com.alipay.sdk.m.i0.a r5 = r6.d
            goto L7f
        L68:
            java.lang.String r0 = "aaid"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L73
            com.alipay.sdk.m.i0.a r5 = r6.c
            goto L7f
        L73:
            java.lang.String r0 = "udid"
            boolean r5 = r0.equals(r5)
            if (r5 == 0) goto L7e
            com.alipay.sdk.m.i0.a r5 = r6.a
            goto L7f
        L7e:
            r5 = 0
        L7f:
            if (r5 != 0) goto L82
            return
        L82:
            r5.b()
        L85:
            return
    }
}
