package com.meizu.cloud.pushsdk.platform.b;

public class b extends com.meizu.cloud.pushsdk.platform.b.c<com.meizu.cloud.pushsdk.platform.message.RegisterStatus> {
    private android.os.Handler h;
    private java.util.concurrent.ScheduledExecutorService i;
    private int j;



    public b(android.content.Context r7, com.meizu.cloud.pushsdk.platform.a.a r8, java.util.concurrent.ScheduledExecutorService r9) {
            r6 = this;
            r2 = 0
            r3 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            java.util.concurrent.ExecutorService r8 = com.meizu.cloud.pushsdk.d.b.a.b.a()
            java.util.concurrent.ScheduledExecutorService r8 = (java.util.concurrent.ScheduledExecutorService) r8
            r6.i = r8
            com.meizu.cloud.pushsdk.platform.b.b$1 r8 = new com.meizu.cloud.pushsdk.platform.b.b$1
            android.os.Looper r7 = r7.getMainLooper()
            r8.<init>(r6, r7)
            r6.h = r8
            return
    }

    public b(android.content.Context r1, com.meizu.cloud.pushsdk.platform.a.a r2, java.util.concurrent.ScheduledExecutorService r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.g = r4
            return
    }

    public b(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.meizu.cloud.pushsdk.platform.a.a r4, java.util.concurrent.ScheduledExecutorService r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            r1 = 0
            r0.j = r1
            return
    }

    static android.os.Handler a(com.meizu.cloud.pushsdk.platform.b.b r0) {
            android.os.Handler r0 = r0.h
            return r0
    }

    private boolean a(java.lang.String r5, java.lang.String r6, int r7) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 1
            if (r0 != 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto Le
            goto L23
        Le:
            boolean r5 = r6.startsWith(r5)
            if (r5 != 0) goto L15
            return r1
        L15:
            long r5 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 / r2
            long r2 = (long) r7
            int r5 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r5 <= 0) goto L22
            goto L23
        L22:
            r1 = 0
        L23:
            return r1
    }

    protected void a(long r4) {
            r3 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r3.i
            com.meizu.cloud.pushsdk.platform.b.b$2 r1 = new com.meizu.cloud.pushsdk.platform.b.b$2
            r1.<init>(r3)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS
            r0.schedule(r1, r4, r2)
            return
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.platform.message.BasicPushStatus r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r1 = (com.meizu.cloud.pushsdk.platform.message.RegisterStatus) r1
            r0.a(r1)
            return
    }

    public void a(com.meizu.cloud.pushsdk.platform.message.RegisterStatus r3) {
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
    public boolean a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isBrandMeizu "
            r0.append(r1)
            android.content.Context r1 = r2.a
            boolean r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isBrandMeizu(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Strategy"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            java.lang.String r0 = r2.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2e
            java.lang.String r0 = r2.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2e
            r0 = 1
            goto L2f
        L2e:
            r0 = 0
        L2f:
            return r0
    }

    protected boolean a(java.lang.String r3, int r4) {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.String r0 = com.meizu.cloud.pushsdk.b.c.a(r0)
            boolean r1 = r2.a(r0, r3, r4)
            if (r1 == 0) goto L14
            java.lang.String r3 = com.meizu.cloud.pushsdk.platform.a.a(r3)
            boolean r1 = r2.a(r0, r3, r4)
        L14:
            return r1
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus b() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r0 = r1.h()
            return r0
    }

    @Override
    public android.content.Intent c() {
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
    public com.meizu.cloud.pushsdk.platform.message.BasicPushStatus e() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r0 = r1.j()
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus f() {
            r1 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r0 = r1.i()
            return r0
    }

    @Override
    protected int g() {
            r1 = this;
            r0 = 2
            return r0
    }

    protected com.meizu.cloud.pushsdk.platform.message.RegisterStatus h() {
            r2 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r0 = new com.meizu.cloud.pushsdk.platform.message.RegisterStatus
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

    protected com.meizu.cloud.pushsdk.platform.message.RegisterStatus i() {
            r1 = this;
            r0 = 0
            return r0
    }

    public com.meizu.cloud.pushsdk.platform.message.RegisterStatus j() {
            r8 = this;
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r0 = new com.meizu.cloud.pushsdk.platform.message.RegisterStatus
            r0.<init>()
            android.content.Context r1 = r8.a
            java.lang.String r2 = r8.d
            java.lang.String r1 = com.meizu.cloud.pushsdk.util.b.a(r1, r2)
            android.content.Context r2 = r8.a
            java.lang.String r3 = r8.d
            int r2 = com.meizu.cloud.pushsdk.util.b.b(r2, r3)
            boolean r3 = r8.a(r1, r2)
            r4 = 1000(0x3e8, double:4.94E-321)
            if (r3 != 0) goto L37
            java.lang.String r3 = "200"
            r0.setCode(r3)
            java.lang.String r3 = "already register PushId,don't register frequently"
            r0.setMessage(r3)
            r0.setPushId(r1)
            long r1 = (long) r2
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 / r4
            long r1 = r1 - r6
            int r1 = (int) r1
            r0.setExpireTime(r1)
            goto L137
        L37:
            android.content.Context r1 = r8.a
            java.lang.String r2 = r8.d
            java.lang.String r3 = ""
            com.meizu.cloud.pushsdk.util.b.g(r1, r3, r2)
            android.content.Context r1 = r8.a
            java.lang.String r1 = com.meizu.cloud.pushsdk.b.c.a(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r3 = "Strategy"
            if (r2 == 0) goto L8a
            int r2 = r8.j
            r6 = 3
            if (r2 >= r6) goto L8a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "after "
            r1.append(r2)
            int r2 = r8.j
            int r2 = r2 * 10
            r1.append(r2)
            java.lang.String r2 = " seconds start register"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r1)
            int r1 = r8.j
            int r1 = r1 * 10
            long r1 = (long) r1
            r8.a(r1)
            int r1 = r8.j
            int r1 = r1 + 1
            r8.j = r1
            java.lang.String r1 = "20000"
            r0.setCode(r1)
            java.lang.String r1 = "deviceId is empty"
            r0.setMessage(r1)
            goto L137
        L8a:
            r2 = 0
            r8.j = r2
            com.meizu.cloud.pushsdk.platform.a.a r2 = r8.e
            java.lang.String r6 = r8.b
            java.lang.String r7 = r8.c
            com.meizu.cloud.pushsdk.c.a.c r1 = r2.a(r6, r7, r1)
            boolean r2 = r1.b()
            java.lang.String r6 = "registerStatus "
            if (r2 == 0) goto Le5
            com.meizu.cloud.pushsdk.platform.message.RegisterStatus r0 = new com.meizu.cloud.pushsdk.platform.message.RegisterStatus
            java.lang.Object r1 = r1.a()
            java.lang.String r1 = (java.lang.String) r1
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
            java.lang.String r1 = r0.getPushId()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L137
            android.content.Context r1 = r8.a
            java.lang.String r2 = r0.getPushId()
            java.lang.String r3 = r8.d
            com.meizu.cloud.pushsdk.util.b.g(r1, r2, r3)
            android.content.Context r1 = r8.a
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 / r4
            int r4 = r0.getExpireTime()
            long r4 = (long) r4
            long r2 = r2 + r4
            int r2 = (int) r2
            java.lang.String r3 = r8.d
            com.meizu.cloud.pushsdk.util.b.a(r1, r2, r3)
            goto L137
        Le5:
            com.meizu.cloud.pushsdk.c.b.a r1 = r1.c()
            com.meizu.cloud.pushsdk.c.c.k r2 = r1.a()
            if (r2 == 0) goto L113
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
        L113:
            int r2 = r1.b()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setCode(r2)
            java.lang.String r1 = r1.c()
            r0.setMessage(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r1)
        L137:
            return r0
    }
}
