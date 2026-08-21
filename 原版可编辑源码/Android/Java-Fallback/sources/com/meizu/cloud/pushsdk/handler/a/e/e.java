package com.meizu.cloud.pushsdk.handler.a.e;

public class e extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.platform.message.SubTagsStatus> {
    public e(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 2048(0x800, float:2.87E-42)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r2, com.meizu.cloud.pushsdk.notification.c r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            if (r3 == 0) goto L13
            if (r2 == 0) goto L13
            com.meizu.cloud.pushsdk.handler.a r3 = r1.c()
            android.content.Context r0 = r1.d()
            r3.a(r0, r2)
        L13:
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r1 = (com.meizu.cloud.pushsdk.platform.message.SubTagsStatus) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start SubScribeTagsStatusHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "sub_tags_status"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L21
            r3 = 1
            goto L22
        L21:
            r3 = 0
        L22:
            return r3
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.SubTagsStatus c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r1 = r0.l(r1)
            return r1
    }

    protected com.meizu.cloud.pushsdk.platform.message.SubTagsStatus l(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "messageValue"
            java.lang.String r0 = r3.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r3 = com.meizu.cloud.pushsdk.platform.message.a.e(r0)
            return r3
        L11:
            java.lang.String r0 = "extra_app_push_sub_tags_status"
            java.io.Serializable r3 = r3.getSerializableExtra(r0)
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r3 = (com.meizu.cloud.pushsdk.platform.message.SubTagsStatus) r3
            return r3
    }
}
