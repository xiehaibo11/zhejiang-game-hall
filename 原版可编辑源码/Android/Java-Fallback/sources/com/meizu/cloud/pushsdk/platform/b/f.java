package com.meizu.cloud.pushsdk.platform.b;

public class f extends com.meizu.cloud.pushsdk.platform.b.c<com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus> {
    private java.lang.String h;
    private int i;
    private boolean j;
    private final java.util.Map<java.lang.String, java.lang.Boolean> k;

    public f(android.content.Context r8, com.meizu.cloud.pushsdk.platform.a.a r9, java.util.concurrent.ScheduledExecutorService r10) {
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

    public f(android.content.Context r1, com.meizu.cloud.pushsdk.platform.a.a r2, java.util.concurrent.ScheduledExecutorService r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.g = r4
            return
    }

    public f(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.meizu.cloud.pushsdk.platform.a.a r4, java.util.concurrent.ScheduledExecutorService r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            r1 = 0
            r0.i = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.k = r1
            return
    }

    public f(android.content.Context r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, com.meizu.cloud.pushsdk.platform.a.a r11, java.util.concurrent.ScheduledExecutorService r12) {
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

    private com.meizu.cloud.pushsdk.c.a.c<java.lang.String> b(com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r7) {
            r6 = this;
            int r0 = r6.i
            r1 = 1
            if (r0 == 0) goto L97
            if (r0 == r1) goto L71
            r2 = 2
            if (r0 == r2) goto L45
            r2 = 3
            if (r0 == r2) goto Lf
            goto Lb6
        Lf:
            java.lang.String r0 = "SWITCH_ALL"
            r7.setMessage(r0)
            boolean r0 = r6.p()
            boolean r2 = r6.j
            if (r0 != r2) goto L2d
            boolean r0 = r6.r()
            boolean r2 = r6.j
            if (r0 != r2) goto L2d
            boolean r0 = r6.t()
            if (r0 != 0) goto L2d
            boolean r0 = r6.j
            goto L88
        L2d:
            r6.f(r1)
            boolean r7 = r6.j
            r6.e(r7)
            com.meizu.cloud.pushsdk.platform.a.a r7 = r6.e
            java.lang.String r0 = r6.b
            java.lang.String r1 = r6.c
            java.lang.String r2 = r6.h
            boolean r3 = r6.j
            com.meizu.cloud.pushsdk.c.a.c r7 = r7.a(r0, r1, r2, r3)
            goto Ld0
        L45:
            java.lang.String r0 = "CHECK_PUSH"
            r7.setMessage(r0)
            boolean r0 = r6.q()
            if (r0 == 0) goto L61
            boolean r0 = r6.s()
            if (r0 == 0) goto L61
            boolean r0 = r6.t()
            if (r0 != 0) goto L61
            boolean r0 = r6.p()
            goto Lac
        L61:
            r6.f(r1)
            com.meizu.cloud.pushsdk.platform.a.a r7 = r6.e
            java.lang.String r0 = r6.b
            java.lang.String r1 = r6.c
            java.lang.String r2 = r6.h
            com.meizu.cloud.pushsdk.c.a.c r7 = r7.c(r0, r1, r2)
            goto Ld0
        L71:
            java.lang.String r0 = "SWITCH_THROUGH_MESSAGE"
            r7.setMessage(r0)
            boolean r0 = r6.r()
            boolean r2 = r6.j
            if (r0 != r2) goto L8e
            boolean r0 = r6.t()
            if (r0 != 0) goto L8e
            boolean r0 = r6.p()
        L88:
            r7.setSwitchNotificationMessage(r0)
            boolean r0 = r6.j
            goto Lb3
        L8e:
            r6.f(r1)
            boolean r7 = r6.j
            r6.d(r7)
            goto Lc0
        L97:
            java.lang.String r0 = "SWITCH_NOTIFICATION"
            r7.setMessage(r0)
            boolean r0 = r6.p()
            boolean r2 = r6.j
            if (r0 != r2) goto Lb8
            boolean r0 = r6.t()
            if (r0 != 0) goto Lb8
            boolean r0 = r6.j
        Lac:
            r7.setSwitchNotificationMessage(r0)
            boolean r0 = r6.r()
        Lb3:
            r7.setSwitchThroughMessage(r0)
        Lb6:
            r7 = 0
            goto Ld0
        Lb8:
            r6.f(r1)
            boolean r7 = r6.j
            r6.c(r7)
        Lc0:
            com.meizu.cloud.pushsdk.platform.a.a r0 = r6.e
            java.lang.String r1 = r6.b
            java.lang.String r2 = r6.c
            java.lang.String r3 = r6.h
            int r4 = r6.i
            boolean r5 = r6.j
            com.meizu.cloud.pushsdk.c.a.c r7 = r0.a(r1, r2, r3, r4, r5)
        Ld0:
            return r7
    }

    private void c(boolean r3) {
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
            com.meizu.cloud.pushsdk.util.b.a(r0, r1, r3)
            return
    }

    private void d(boolean r3) {
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
            com.meizu.cloud.pushsdk.util.b.b(r0, r1, r3)
            return
    }

    private void e(boolean r3) {
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
            com.meizu.cloud.pushsdk.util.b.a(r0, r1, r3)
            android.content.Context r0 = r2.a
            java.lang.String r1 = r2.d
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L23
            java.lang.String r1 = r2.d
            goto L29
        L23:
            android.content.Context r1 = r2.a
            java.lang.String r1 = r1.getPackageName()
        L29:
            com.meizu.cloud.pushsdk.util.b.b(r0, r1, r3)
            return
    }

    private void f(boolean r4) {
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

    private void o() {
            r5 = this;
            int r0 = r5.i
            if (r0 == 0) goto L18
            r1 = 1
            if (r0 == r1) goto L18
            r2 = 3
            if (r0 == r2) goto Lb
            goto L23
        Lb:
            android.content.Context r0 = r5.a
            r2 = 0
            boolean r3 = r5.j
            java.lang.String r4 = r5.d
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender.a(r0, r2, r3, r4)
            android.content.Context r0 = r5.a
            goto L1c
        L18:
            android.content.Context r0 = r5.a
            int r1 = r5.i
        L1c:
            boolean r2 = r5.j
            java.lang.String r3 = r5.d
            com.meizu.cloud.pushsdk.platform.PlatformMessageSender.a(r0, r1, r2, r3)
        L23:
            return
    }

    private boolean p() {
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
            boolean r0 = com.meizu.cloud.pushsdk.util.b.e(r0, r1)
            return r0
    }

    private boolean q() {
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
            boolean r0 = com.meizu.cloud.pushsdk.util.b.f(r0, r1)
            return r0
    }

    private boolean r() {
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
            boolean r0 = com.meizu.cloud.pushsdk.util.b.h(r0, r1)
            return r0
    }

    private boolean s() {
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
            boolean r0 = com.meizu.cloud.pushsdk.util.b.i(r0, r1)
            return r0
    }

    private boolean t() {
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
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isSyncPushStatus "
            r1.append(r2)
            java.lang.String r2 = r3.d
            r1.append(r2)
            java.lang.String r2 = " switch type->"
            r1.append(r2)
            int r2 = r3.i
            r1.append(r2)
            java.lang.String r2 = " flag->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Strategy"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r1)
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
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r1 = (com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus) r1
            r0.a(r1)
            return
    }

    protected void a(com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r3) {
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
            r0.h = r1
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
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r0 = r1.h()
            return r0
    }

    public void b(boolean r1) {
            r0 = this;
            r0.j = r1
            return
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
            boolean r1 = r3.j
            if (r1 == 0) goto L3c
            java.lang.String r1 = "1"
            goto L3e
        L3c:
            java.lang.String r1 = "0"
        L3e:
            java.lang.String r2 = "strategy_params"
            r0.putExtra(r2, r1)
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus e() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r0 = r1.i()
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus f() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r0 = r1.j()
            return r0
    }

    @Override
    protected int g() {
            r1 = this;
            r0 = 16
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus h() {
            r2 = this;
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r0 = new com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus
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

    protected com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus i() {
            r6 = this;
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r0 = new com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus
            r0.<init>()
            java.lang.String r1 = r6.h
            r0.setPushId(r1)
            java.lang.String r1 = "200"
            r0.setCode(r1)
            com.meizu.cloud.pushsdk.c.a.c r2 = r6.b(r0)
            java.lang.String r3 = "Strategy"
            if (r2 == 0) goto Lc0
            boolean r4 = r2.b()
            if (r4 == 0) goto L6c
            com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r4 = new com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus
            java.lang.Object r2 = r2.a()
            java.lang.String r2 = (java.lang.String) r2
            r4.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "network pushSwitchStatus "
            r2.append(r5)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r2)
            java.lang.String r2 = r0.getCode()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Lc0
            r1 = 0
            r6.f(r1)
            java.lang.String r1 = "update local switch preference"
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            boolean r1 = r4.isSwitchNotificationMessage()
            r0.setSwitchNotificationMessage(r1)
            boolean r1 = r4.isSwitchThroughMessage()
            r0.setSwitchThroughMessage(r1)
            boolean r1 = r4.isSwitchNotificationMessage()
            r6.c(r1)
            boolean r1 = r4.isSwitchThroughMessage()
            r6.d(r1)
            goto Lc0
        L6c:
            com.meizu.cloud.pushsdk.c.b.a r1 = r2.c()
            com.meizu.cloud.pushsdk.c.c.k r2 = r1.a()
            if (r2 == 0) goto L9a
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
        L9a:
            int r2 = r1.b()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setCode(r2)
            java.lang.String r1 = r1.c()
            r0.setMessage(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "pushSwitchStatus "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
        Lc0:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "enableRpc "
            r1.append(r2)
            boolean r2 = r6.g
            r1.append(r2)
            java.lang.String r2 = " isSupportRemoteInvoke "
            r1.append(r2)
            boolean r2 = r6.f
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            boolean r1 = r6.g
            if (r1 == 0) goto Leb
            boolean r1 = r6.f
            if (r1 != 0) goto Leb
            r6.o()
        Leb:
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus j() {
            r2 = this;
            int r0 = r2.i
            if (r0 == 0) goto L1a
            r1 = 1
            if (r0 == r1) goto L14
            r1 = 2
            if (r0 == r1) goto Le
            r1 = 3
            if (r0 == r1) goto Le
            goto L1f
        Le:
            boolean r0 = r2.j
            r2.e(r0)
            goto L1f
        L14:
            boolean r0 = r2.j
            r2.d(r0)
            goto L1f
        L1a:
            boolean r0 = r2.j
            r2.c(r0)
        L1f:
            r0 = 0
            return r0
    }
}
