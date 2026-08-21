package com.tkay.china.common;

public class NotificationBroadcaseReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.tkay.china.common.NotificationBroadcaseReceiver> r0 = com.tkay.china.common.NotificationBroadcaseReceiver.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.china.common.NotificationBroadcaseReceiver.a = r0
            return
    }

    public NotificationBroadcaseReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r8, android.content.Intent r9) {
            r7 = this;
            java.lang.String r0 = r9.getAction()
            java.lang.String r1 = "tkay_broadcast_receiver_extra_url"
            r9.getStringExtra(r1)
            java.lang.String r1 = "tkay_broadcast_receiver_extra_unique_id"
            java.lang.String r1 = r9.getStringExtra(r1)
            java.lang.String r2 = "tkay_broadcast_receiver_extra_request_status"
            java.lang.String r2 = r9.getStringExtra(r2)
            r3 = -1
            java.lang.String r4 = "tkay_broadcast_receiver_extra_notification_id"
            int r9 = r9.getIntExtra(r4, r3)
            int r4 = r0.hashCode()
            r5 = -815819936(0xffffffffcf5f9360, float:-3.7509775E9)
            r6 = 1
            if (r4 == r5) goto L36
            r5 = -441636211(0xffffffffe5ad2a8d, float:-1.0221929E23)
            if (r4 == r5) goto L2c
            goto L3f
        L2c:
            java.lang.String r4 = "tkay_action_notification_click"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L3f
            r3 = 0
            goto L3f
        L36:
            java.lang.String r4 = "tkay_action_notification_cannel"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L3f
            r3 = r6
        L3f:
            if (r3 == 0) goto L4c
            if (r3 == r6) goto L44
            goto L4b
        L44:
            com.tkay.china.common.a r8 = com.tkay.china.common.a.a(r8)
            r8.a(r1, r2)
        L4b:
            return
        L4c:
            com.tkay.china.common.a r8 = com.tkay.china.common.a.a(r8)
            r8.a(r1, r2, r9)
            return
    }
}
