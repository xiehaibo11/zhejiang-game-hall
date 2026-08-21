package com.meizu.cloud.pushsdk.platform.b;

public class e extends com.meizu.cloud.pushsdk.platform.b.c<com.meizu.cloud.pushsdk.platform.message.SubTagsStatus> {
    private java.lang.String h;
    private int i;
    private java.lang.String j;

    public e(android.content.Context r8, com.meizu.cloud.pushsdk.platform.a.a r9, java.util.concurrent.ScheduledExecutorService r10) {
            r7 = this;
            r2 = 0
            r3 = 0
            r4 = 0
            r0 = r7
            r1 = r8
            r5 = r9
            r6 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public e(android.content.Context r1, com.meizu.cloud.pushsdk.platform.a.a r2, java.util.concurrent.ScheduledExecutorService r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.g = r4
            return
    }

    public e(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.meizu.cloud.pushsdk.platform.a.a r4, java.util.concurrent.ScheduledExecutorService r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            r1 = 3
            r0.i = r1
            return
    }

    public e(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, com.meizu.cloud.pushsdk.platform.a.a r11, java.util.concurrent.ScheduledExecutorService r12) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            r6.h = r10
            return
    }

    public void a(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r1 = (com.meizu.cloud.pushsdk.platform.message.SubTagsStatus) r1
            r0.a(r1)
            return
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r3) {
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

    public void a(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    @Override
    protected boolean a() {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r1.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r1.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = 0
        L1b:
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus b() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r0 = r1.h()
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
            java.lang.String r1 = r3.h
            java.lang.String r2 = "push_id"
            r0.putExtra(r2, r1)
            int r1 = r3.g()
            java.lang.String r2 = "strategy_type"
            r0.putExtra(r2, r1)
            int r1 = r3.i
            java.lang.String r2 = "strategy_child_type"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r3.j
            java.lang.String r2 = "strategy_params"
            r0.putExtra(r2, r1)
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus e() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r0 = r1.i()
            return r0
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus f() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r0 = r1.j()
            return r0
    }

    @Override
    protected int g() {
            r1 = this;
            r0 = 4
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.SubTagsStatus h() {
            r2 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r0 = new com.meizu.cloud.pushsdk.platform.message.SubTagsStatus
            r0.<init>()
            java.lang.String r1 = "20001"
            r0.setCode(r1)
            java.lang.String r1 = r2.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L18
            java.lang.String r1 = "appId not empty"
        L14:
            r0.setMessage(r1)
            goto L2e
        L18:
            java.lang.String r1 = r2.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L23
            java.lang.String r1 = "appKey not empty"
            goto L14
        L23:
            java.lang.String r1 = r2.h
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2e
            java.lang.String r1 = "pushId not empty"
            goto L14
        L2e:
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.SubTagsStatus i() {
            r7 = this;
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r0 = new com.meizu.cloud.pushsdk.platform.message.SubTagsStatus
            r0.<init>()
            int r1 = r7.i
            r2 = 0
            if (r1 == 0) goto L3e
            r3 = 1
            if (r1 == r3) goto L2f
            r3 = 2
            if (r1 == r3) goto L22
            r3 = 3
            if (r1 == r3) goto L15
            r1 = r2
            goto L4c
        L15:
            com.meizu.cloud.pushsdk.platform.a.a r1 = r7.e
            java.lang.String r3 = r7.b
            java.lang.String r4 = r7.c
            java.lang.String r5 = r7.h
            com.meizu.cloud.pushsdk.c.a.c r1 = r1.e(r3, r4, r5)
            goto L4c
        L22:
            com.meizu.cloud.pushsdk.platform.a.a r1 = r7.e
            java.lang.String r3 = r7.b
            java.lang.String r4 = r7.c
            java.lang.String r5 = r7.h
            com.meizu.cloud.pushsdk.c.a.c r1 = r1.d(r3, r4, r5)
            goto L4c
        L2f:
            com.meizu.cloud.pushsdk.platform.a.a r1 = r7.e
            java.lang.String r3 = r7.b
            java.lang.String r4 = r7.c
            java.lang.String r5 = r7.h
            java.lang.String r6 = r7.j
            com.meizu.cloud.pushsdk.c.a.c r1 = r1.b(r3, r4, r5, r6)
            goto L4c
        L3e:
            com.meizu.cloud.pushsdk.platform.a.a r1 = r7.e
            java.lang.String r3 = r7.b
            java.lang.String r4 = r7.c
            java.lang.String r5 = r7.h
            java.lang.String r6 = r7.j
            com.meizu.cloud.pushsdk.c.a.c r1 = r1.a(r3, r4, r5, r6)
        L4c:
            java.lang.String r3 = "Strategy"
            if (r1 != 0) goto L56
            java.lang.String r0 = "network anResponse is null"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)
            return r2
        L56:
            boolean r2 = r1.b()
            if (r2 == 0) goto L7c
            com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r0 = new com.meizu.cloud.pushsdk.platform.message.SubTagsStatus
            java.lang.Object r1 = r1.a()
            java.lang.String r1 = (java.lang.String) r1
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "network subTagsStatus "
        L6e:
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            goto Lc4
        L7c:
            com.meizu.cloud.pushsdk.c.b.a r1 = r1.c()
            com.meizu.cloud.pushsdk.c.c.k r2 = r1.a()
            if (r2 == 0) goto Laa
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "status code="
            r2.append(r4)
            int r4 = r1.b()
            r2.append(r4)
            java.lang.String r4 = " data="
            r2.append(r4)
            com.meizu.cloud.pushsdk.c.c.k r4 = r1.a()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
        Laa:
            int r2 = r1.b()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setCode(r2)
            java.lang.String r1 = r1.c()
            r0.setMessage(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "subTagsStatus "
            goto L6e
        Lc4:
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.SubTagsStatus j() {
            r1 = this;
            r0 = 0
            return r0
    }
}
