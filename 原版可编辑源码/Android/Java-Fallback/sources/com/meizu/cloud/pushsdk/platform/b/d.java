package com.meizu.cloud.pushsdk.platform.b;

public class d extends com.meizu.cloud.pushsdk.platform.b.c<com.meizu.cloud.pushsdk.platform.message.SubAliasStatus> {
    private java.lang.String h;
    private int i;
    private java.lang.String j;
    private final java.util.Map<java.lang.String, java.lang.Boolean> k;

    public d(android.content.Context r8, com.meizu.cloud.pushsdk.platform.a.a r9, java.util.concurrent.ScheduledExecutorService r10) {
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

    public d(android.content.Context r1, com.meizu.cloud.pushsdk.platform.a.a r2, java.util.concurrent.ScheduledExecutorService r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.g = r4
            return
    }

    public d(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.meizu.cloud.pushsdk.platform.a.a r4, java.util.concurrent.ScheduledExecutorService r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.k = r1
            return
    }

    public d(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, com.meizu.cloud.pushsdk.platform.a.a r11, java.util.concurrent.ScheduledExecutorService r12) {
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

    private void b(boolean r4) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r3.k
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.d
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            int r2 = r3.i
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            r0.put(r1, r4)
            return
    }

    private void f(java.lang.String r3) {
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
            com.meizu.cloud.pushsdk.util.b.h(r0, r1, r3)
            return
    }

    private java.lang.String o() {
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
            java.lang.String r0 = com.meizu.cloud.pushsdk.util.b.g(r0, r1)
            return r0
    }

    private boolean p() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r3.k
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.d
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            int r2 = r3.i
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            if (r0 == 0) goto L2b
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L29
            goto L2b
        L29:
            r0 = 0
            goto L2c
        L2b:
            r0 = 1
        L2c:
            return r0
    }

    private boolean q() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 != 0) goto L10
            java.lang.String r0 = r2.d
            java.lang.String r1 = "com.meizu.cloud"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r1 = (com.meizu.cloud.pushsdk.platform.message.SubAliasStatus) r1
            r0.a(r1)
            return
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r3) {
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
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r0 = r1.h()
            return r0
    }

    @Override
    protected android.content.Intent c() {
            r3 = this;
            int r0 = r3.i
            r1 = 2
            if (r0 == r1) goto L42
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
            goto L43
        L42:
            r0 = 0
        L43:
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus e() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r0 = r1.i()
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
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r0 = r1.j()
            return r0
    }

    @Override
    protected int g() {
            r1 = this;
            r0 = 8
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.SubAliasStatus h() {
            r2 = this;
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r0 = new com.meizu.cloud.pushsdk.platform.message.SubAliasStatus
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

    protected com.meizu.cloud.pushsdk.platform.message.SubAliasStatus i() {
            r7 = this;
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r0 = new com.meizu.cloud.pushsdk.platform.message.SubAliasStatus
            r0.<init>()
            java.lang.String r1 = r7.h
            r0.setPushId(r1)
            java.lang.String r1 = ""
            r0.setMessage(r1)
            int r2 = r7.i
            r3 = 1
            java.lang.String r4 = "200"
            if (r2 == 0) goto L56
            if (r2 == r3) goto L27
            r1 = 2
            if (r2 == r1) goto L1c
            goto L70
        L1c:
            java.lang.String r1 = r7.o()
            r0.setAlias(r1)
            r0.setCode(r4)
            goto L70
        L27:
            java.lang.String r2 = r7.o()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L3b
            boolean r2 = r7.p()
            if (r2 != 0) goto L3b
            r0.setCode(r4)
            goto L6d
        L3b:
            r7.b(r3)
            boolean r2 = r7.q()
            if (r2 == 0) goto L47
            r7.f(r1)
        L47:
            com.meizu.cloud.pushsdk.platform.a.a r1 = r7.e
            java.lang.String r2 = r7.b
            java.lang.String r3 = r7.c
            java.lang.String r5 = r7.h
            java.lang.String r6 = r7.j
            com.meizu.cloud.pushsdk.c.a.c r1 = r1.d(r2, r3, r5, r6)
            goto L8e
        L56:
            java.lang.String r1 = r7.j
            java.lang.String r2 = r7.o()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L72
            boolean r1 = r7.p()
            if (r1 != 0) goto L72
            r0.setCode(r4)
            java.lang.String r1 = r7.j
        L6d:
            r0.setAlias(r1)
        L70:
            r1 = 0
            goto L8e
        L72:
            r7.b(r3)
            boolean r1 = r7.q()
            if (r1 == 0) goto L80
            java.lang.String r1 = r7.j
            r7.f(r1)
        L80:
            com.meizu.cloud.pushsdk.platform.a.a r1 = r7.e
            java.lang.String r2 = r7.b
            java.lang.String r3 = r7.c
            java.lang.String r5 = r7.h
            java.lang.String r6 = r7.j
            com.meizu.cloud.pushsdk.c.a.c r1 = r1.c(r2, r3, r5, r6)
        L8e:
            if (r1 == 0) goto L11a
            boolean r2 = r1.b()
            java.lang.String r3 = "Strategy"
            if (r2 == 0) goto Lc6
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r0 = new com.meizu.cloud.pushsdk.platform.message.SubAliasStatus
            java.lang.Object r1 = r1.a()
            java.lang.String r1 = (java.lang.String) r1
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "network subAliasStatus "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            java.lang.String r1 = r0.getCode()
            boolean r1 = r4.equals(r1)
            if (r1 == 0) goto L11a
            r1 = 0
            r7.b(r1)
            goto L11a
        Lc6:
            com.meizu.cloud.pushsdk.c.b.a r1 = r1.c()
            com.meizu.cloud.pushsdk.c.c.k r2 = r1.a()
            if (r2 == 0) goto Lf4
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
        Lf4:
            int r2 = r1.b()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setCode(r2)
            java.lang.String r1 = r1.c()
            r0.setMessage(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "subAliasStatus "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
        L11a:
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.SubAliasStatus j() {
            r2 = this;
            int r0 = r2.i
            r1 = 2
            if (r0 != r1) goto L21
            com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r0 = new com.meizu.cloud.pushsdk.platform.message.SubAliasStatus
            r0.<init>()
            java.lang.String r1 = "200"
            r0.setCode(r1)
            java.lang.String r1 = r2.h
            r0.setPushId(r1)
            java.lang.String r1 = r2.o()
            r0.setAlias(r1)
            java.lang.String r1 = "check alias success"
            r0.setMessage(r1)
            goto L22
        L21:
            r0 = 0
        L22:
            return r0
    }
}
