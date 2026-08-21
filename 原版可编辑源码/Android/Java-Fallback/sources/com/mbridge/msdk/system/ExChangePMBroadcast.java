package com.mbridge.msdk.system;

public class ExChangePMBroadcast extends android.content.BroadcastReceiver {
    public ExChangePMBroadcast() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            if (r4 == 0) goto L55
            if (r5 != 0) goto L5
            goto L55
        L5:
            r0 = 0
            java.lang.String r1 = r5.getAction()     // Catch: java.lang.Exception -> Lb
            goto Lc
        Lb:
            r1 = r0
        Lc:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L55
            java.lang.String r2 = "mbridge_action_exchange_pm"
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L1b
            goto L55
        L1b:
            android.os.Bundle r5 = r5.getExtras()     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = "pm-sender"
            java.lang.String r5 = r5.getString(r1)     // Catch: java.lang.Exception -> L26
            goto L27
        L26:
            r5 = r0
        L27:
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L55
            java.lang.String r1 = r4.getPackageName()
            boolean r5 = android.text.TextUtils.equals(r5, r1)
            if (r5 != 0) goto L55
            r3.abortBroadcast()     // Catch: java.lang.Exception -> L3a
        L3a:
            android.os.Bundle r5 = new android.os.Bundle     // Catch: java.lang.Exception -> L55
            r5.<init>()     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = "pm-receiver"
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Exception -> L55
            r5.putString(r1, r2)     // Catch: java.lang.Exception -> L55
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "mbridge_action_exchange_pm_receiver"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L55
            r1.putExtras(r5)     // Catch: java.lang.Exception -> L55
            r4.sendOrderedBroadcast(r1, r0)     // Catch: java.lang.Exception -> L55
        L55:
            return
    }
}
