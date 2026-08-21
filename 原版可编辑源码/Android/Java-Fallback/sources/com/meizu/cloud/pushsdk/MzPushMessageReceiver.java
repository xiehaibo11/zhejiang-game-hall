package com.meizu.cloud.pushsdk;

public abstract class MzPushMessageReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String TAG = "MzPushMessageReceiver";
    private static boolean bInitLog;



    static {
            return
    }

    public MzPushMessageReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$000() {
            boolean r0 = com.meizu.cloud.pushsdk.MzPushMessageReceiver.bInitLog
            return r0
    }

    static boolean access$002(boolean r0) {
            com.meizu.cloud.pushsdk.MzPushMessageReceiver.bInitLog = r0
            return r0
    }

    static void access$100(com.meizu.cloud.pushsdk.MzPushMessageReceiver r0, android.content.Context r1, android.content.Intent r2) {
            r0.onHandleIntent(r1, r2)
            return
    }

    private com.meizu.cloud.pushsdk.handler.a getAbstractAppLogicListener() {
            r1 = this;
            com.meizu.cloud.pushsdk.MzPushMessageReceiver$2 r0 = new com.meizu.cloud.pushsdk.MzPushMessageReceiver$2
            r0.<init>(r1)
            return r0
    }

    private void onHandleIntent(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            com.meizu.cloud.pushsdk.handler.a r0 = r2.getAbstractAppLogicListener()
            com.meizu.cloud.pushsdk.b r3 = com.meizu.cloud.pushsdk.b.a(r3)
            java.lang.String r1 = "MzPushMessageReceiver"
            com.meizu.cloud.pushsdk.b r3 = r3.a(r1, r0)
            r3.a(r4)
            return
    }

    public void onMessage(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            return
    }

    public void onMessage(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void onMessage(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            return
    }

    public void onNotificationArrived(android.content.Context r1, com.meizu.cloud.pushsdk.handler.MzPushMessage r2) {
            r0 = this;
            return
    }

    public void onNotificationClicked(android.content.Context r1, com.meizu.cloud.pushsdk.handler.MzPushMessage r2) {
            r0 = this;
            return
    }

    public void onNotificationDeleted(android.content.Context r1, com.meizu.cloud.pushsdk.handler.MzPushMessage r2) {
            r0 = this;
            return
    }

    public void onNotifyMessageArrived(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public abstract void onPushStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r2);

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            android.content.Context r3 = r3.getApplicationContext()
            com.meizu.cloud.pushsdk.b.c.b r0 = com.meizu.cloud.pushsdk.b.c.b.a()
            com.meizu.cloud.pushsdk.MzPushMessageReceiver$1 r1 = new com.meizu.cloud.pushsdk.MzPushMessageReceiver$1
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
            return
    }

    @java.lang.Deprecated
    public void onRegister(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public abstract void onRegisterStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.RegisterStatus r2);

    public abstract void onSubAliasStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r2);

    public abstract void onSubTagsStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r2);

    @java.lang.Deprecated
    public void onUnRegister(android.content.Context r1, boolean r2) {
            r0 = this;
            return
    }

    public abstract void onUnRegisterStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r2);

    public void onUpdateNotificationBuilder(com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r2) {
            r1 = this;
            int r0 = com.meizu.cloud.pushinternal.R.drawable.stat_sys_third_app_notify
            r2.setStatusBarIcon(r0)
            return
    }
}
