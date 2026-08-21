package com.huawei.hms.support.api.push;

public class PushMsgReceiver extends android.content.BroadcastReceiver {
    public PushMsgReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r2, android.content.Intent r3) {
            java.lang.String r0 = "selfshow_info"
            boolean r0 = r3.hasExtra(r0)
            if (r0 == 0) goto L2b
            boolean r0 = com.huawei.hms.push.t.a(r2)
            if (r0 != 0) goto L28
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getPackageName()
            r0.append(r1)
            java.lang.String r1 = " disable display notification."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushMsgReceiver"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
        L28:
            com.huawei.hms.push.i.a(r2, r3)
        L2b:
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            if (r5 == 0) goto L7c
            if (r4 != 0) goto L6
            goto L7c
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "push receive broadcast message, Intent:"
            r0.append(r1)
            java.lang.String r1 = r5.getAction()
            r0.append(r1)
            java.lang.String r1 = " pkgName:"
            r0.append(r1)
            java.lang.String r1 = r4.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushMsgReceiver"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            java.lang.String r0 = "TestIntent"
            r5.getStringExtra(r0)     // Catch: java.lang.Exception -> L77
            java.lang.String r0 = r5.getAction()
            android.content.Context r2 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r2 != 0) goto L42
            android.content.Context r2 = r4.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r2)
        L42:
            java.lang.String r2 = "com.huawei.intent.action.PUSH_DELAY_NOTIFY"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L73
            java.lang.String r2 = "com.huawei.intent.action.PUSH"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L59
            int r0 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r2 = 10
            if (r0 >= r2) goto L59
            goto L73
        L59:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "message can't be recognised:"
            r4.append(r0)
            r0 = 0
            java.lang.String r5 = r5.toUri(r0)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            goto L76
        L73:
            a(r4, r5)
        L76:
            return
        L77:
            java.lang.String r4 = "intent has some error"
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L7c:
            return
    }
}
