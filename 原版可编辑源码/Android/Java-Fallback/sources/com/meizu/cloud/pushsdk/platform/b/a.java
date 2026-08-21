package com.meizu.cloud.pushsdk.platform.b;

public class a extends com.meizu.cloud.pushsdk.platform.b.c {
    private int[] h;
    private int i;
    private java.lang.String j;

    public a(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.meizu.cloud.pushsdk.platform.a.a r4, java.util.concurrent.ScheduledExecutorService r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            boolean r1 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportSetDrawableSmallIcon()
            r0.f = r1
            return
    }

    public a(android.content.Context r7, java.util.concurrent.ScheduledExecutorService r8, boolean r9) {
            r6 = this;
            r2 = 0
            r3 = 0
            r4 = 0
            r0 = r6
            r1 = r7
            r5 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            r6.g = r9
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
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void a(int... r1) {
            r0 = this;
            r0.h = r1
            return
    }

    @Override
    protected boolean a() {
            r3 = this;
            int r0 = r3.i
            r1 = 1
            if (r0 == 0) goto L1d
            int[] r2 = r3.h
            if (r2 == 0) goto Le
            int r2 = r2.length
            if (r2 <= 0) goto Le
            if (r0 == r1) goto L1d
        Le:
            int r0 = r3.i
            r2 = 2
            if (r0 != r2) goto L1c
            java.lang.String r0 = r3.j
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            goto L1d
        L1c:
            r1 = 0
        L1d:
            return r1
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus b() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected android.content.Intent c() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.Context r1 = r3.a
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "strategy_package_name"
            r0.putExtra(r2, r1)
            int r1 = r3.g()
            java.lang.String r2 = "strategy_type"
            r0.putExtra(r2, r1)
            int r1 = r3.i
            java.lang.String r2 = "strategy_child_type"
            r0.putExtra(r2, r1)
            int r1 = r3.i
            r2 = 2
            if (r1 != r2) goto L2d
            java.lang.String r1 = r3.j
            java.lang.String r2 = "strategy_params"
            r0.putExtra(r2, r1)
            goto L31
        L2d:
            r2 = 1
            if (r1 != r2) goto L31
            r0 = 0
        L31:
            return r0
    }

    @Override
    protected android.content.Intent[] d() {
            r5 = this;
            int[] r0 = r5.h
            if (r0 == 0) goto L6b
            int r0 = r0.length
            android.content.Intent[] r0 = new android.content.Intent[r0]
            r1 = 0
        L8:
            int[] r2 = r5.h
            int r2 = r2.length
            if (r1 >= r2) goto L6c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "send notifyId "
            r2.append(r3)
            int[] r3 = r5.h
            r3 = r3[r1]
            r2.append(r3)
            java.lang.String r3 = " to PushManagerService"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Strategy"
            com.meizu.cloud.pushinternal.DebugLogger.i(r3, r2)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            android.content.Context r3 = r5.a
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r4 = "strategy_package_name"
            r2.putExtra(r4, r3)
            int r3 = r5.g()
            java.lang.String r4 = "strategy_type"
            r2.putExtra(r4, r3)
            int r3 = r5.i
            java.lang.String r4 = "strategy_child_type"
            r2.putExtra(r4, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = ""
            r3.append(r4)
            int[] r4 = r5.h
            r4 = r4[r1]
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "strategy_params"
            r2.putExtra(r4, r3)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L6b:
            r0 = 0
        L6c:
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus e() {
            r7 = this;
            int r0 = r7.i
            java.lang.String r1 = "Strategy"
            if (r0 == 0) goto L3f
            r2 = 1
            if (r0 == r2) goto L17
            r1 = 2
            if (r0 == r1) goto Ld
            goto L56
        Ld:
            android.content.Context r0 = r7.a
            java.lang.String r1 = r7.d
            java.lang.String r2 = r7.j
            com.meizu.cloud.pushsdk.notification.c.b.a(r0, r1, r2)
            goto L56
        L17:
            int[] r0 = r7.h
            if (r0 == 0) goto L56
            int r2 = r0.length
            r3 = 0
        L1d:
            if (r3 >= r2) goto L56
            r4 = r0[r3]
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "clear notifyId "
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r5)
            android.content.Context r5 = r7.a
            java.lang.String r6 = r7.d
            com.meizu.cloud.pushsdk.notification.c.b.a(r5, r6, r4)
            int r3 = r3 + 1
            goto L1d
        L3f:
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportSetDrawableSmallIcon()
            if (r0 != 0) goto L4f
            java.lang.String r0 = "android 6.0 blow so cancel all by context"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            android.content.Context r0 = r7.a
            com.meizu.cloud.pushsdk.notification.c.b.a(r0)
        L4f:
            android.content.Context r0 = r7.a
            java.lang.String r1 = r7.d
            com.meizu.cloud.pushsdk.notification.c.b.a(r0, r1)
        L56:
            r0 = 0
            return r0
    }

    @Override
    protected com.meizu.cloud.pushsdk.platform.message.BasicPushStatus f() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected int g() {
            r1 = this;
            r0 = 64
            return r0
    }
}
