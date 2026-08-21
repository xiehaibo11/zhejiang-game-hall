package com.meizu.cloud.pushsdk.handler;

public interface b {
    void a(android.content.Context r1, com.meizu.cloud.pushsdk.handler.MzPushMessage r2);

    void a(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r2);

    void a(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.RegisterStatus r2);

    void a(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r2);

    void a(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r2);

    void a(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r2);

    void a(android.content.Context r1, java.lang.String r2);

    void a(android.content.Context r1, java.lang.String r2, java.lang.String r3);

    void a(android.content.Context r1, boolean r2);

    void a(com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r1);

    void b(android.content.Context r1, com.meizu.cloud.pushsdk.handler.MzPushMessage r2);

    void b(android.content.Context r1, java.lang.String r2);

    void c(android.content.Context r1, com.meizu.cloud.pushsdk.handler.MzPushMessage r2);

    void c(android.content.Context r1, java.lang.String r2);
}
