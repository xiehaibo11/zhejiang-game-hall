package com.xiaomi.mipush.sdk;

public class PushServiceReceiver extends android.content.BroadcastReceiver {
    public PushServiceReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageHandler> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.class
            r0.<init>(r3, r1)
            r0.putExtras(r4)
            java.lang.String r4 = r4.getAction()
            r0.setAction(r4)
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r3, r0)
            return
    }
}
