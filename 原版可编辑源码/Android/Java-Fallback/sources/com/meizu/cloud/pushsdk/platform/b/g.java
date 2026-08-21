package com.meizu.cloud.pushsdk.platform.b;

public class g extends com.meizu.cloud.pushsdk.platform.b.c<com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus> {
    public g(android.content.Context r7, com.meizu.cloud.pushsdk.platform.a.a r8, java.util.concurrent.ScheduledExecutorService r9) {
            r6 = this;
            r2 = 0
            r3 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public g(android.content.Context r1, com.meizu.cloud.pushsdk.platform.a.a r2, java.util.concurrent.ScheduledExecutorService r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.g = r4
            return
    }

    public g(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.meizu.cloud.pushsdk.platform.a.a r4, java.util.concurrent.ScheduledExecutorService r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r1 = (com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus) r1
            r0.a(r1)
            return
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r3) {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.String r1 = r2.d
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld
            java.lang.String r1 = r2.d
            goto L13
        Ld:
            android.content.Context r1 = r2.a
            java.lang.String r1 = r1.getPackageName()
        L13:
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender.a(r0, r1, r3)
            return
    }

    @Override
    protected boolean a() {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12
            java.lang.String r0 = r1.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus b() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r0 = r1.h()
            return r0
    }

    @Override
    protected android.content.Intent c() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = r3.b
            java.lang.String r2 = "app_id"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r3.c
            java.lang.String r2 = "app_key"
            r0.putExtra(r2, r1)
            android.content.Context r1 = r3.a
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "strategy_package_name"
            r0.putExtra(r2, r1)
            int r1 = r3.g()
            java.lang.String r2 = "strategy_type"
            r0.putExtra(r2, r1)
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus e() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r0 = r1.i()
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus f() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r0 = r1.j()
            return r0
    }

    @Override
    protected int g() {
            r1 = this;
            r0 = 32
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus h() {
            r2 = this;
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r0 = new com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus
            r0.<init>()
            java.lang.String r1 = "20001"
            r0.setCode(r1)
            java.lang.String r1 = r2.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L18
            java.lang.String r1 = "appId not empty"
        L14:
            r0.setMessage(r1)
            goto L23
        L18:
            java.lang.String r1 = r2.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L23
            java.lang.String r1 = "appKey not empty"
            goto L14
        L23:
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus i() {
            r6 = this;
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r0 = new com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus
            r0.<init>()
            android.content.Context r1 = r6.a
            java.lang.String r2 = r6.d
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.b.a(r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = "200"
            if (r1 == 0) goto L23
            r0.setCode(r2)
            java.lang.String r1 = "already unRegister PushId,don't unRegister frequently"
            r0.setMessage(r1)
            r1 = 1
            r0.setIsUnRegisterSuccess(r1)
            goto Lc2
        L23:
            android.content.Context r1 = r6.a
            java.lang.String r1 = com.meizu.cloud.pushsdk.b.c.a(r1)
            com.meizu.cloud.pushsdk.platform.a.a r3 = r6.e
            java.lang.String r4 = r6.b
            java.lang.String r5 = r6.c
            com.meizu.cloud.pushsdk.c.a.c r1 = r3.b(r4, r5, r1)
            boolean r3 = r1.b()
            java.lang.String r4 = "Strategy"
            if (r3 == 0) goto L6e
            com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r0 = new com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus
            java.lang.Object r1 = r1.a()
            java.lang.String r1 = (java.lang.String) r1
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "network unRegisterStatus "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r1)
            java.lang.String r1 = r0.getCode()
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto Lc2
            android.content.Context r1 = r6.a
            java.lang.String r2 = r6.d
            java.lang.String r3 = ""
            com.meizu.cloud.pushsdk.util.b.g(r1, r3, r2)
            goto Lc2
        L6e:
            com.meizu.cloud.pushsdk.c.b.a r1 = r1.c()
            com.meizu.cloud.pushsdk.c.c.k r2 = r1.a()
            if (r2 == 0) goto L9c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "status code="
            r2.append(r3)
            int r3 = r1.b()
            r2.append(r3)
            java.lang.String r3 = " data="
            r2.append(r3)
            com.meizu.cloud.pushsdk.c.c.k r3 = r1.a()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r2)
        L9c:
            int r2 = r1.b()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setCode(r2)
            java.lang.String r1 = r1.c()
            r0.setMessage(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unRegisterStatus "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r4, r1)
        Lc2:
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus j() {
            r1 = this;
            r0 = 0
            return r0
    }
}
