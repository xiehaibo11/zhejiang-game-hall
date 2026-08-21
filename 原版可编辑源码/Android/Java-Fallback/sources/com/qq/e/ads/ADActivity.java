package com.qq.e.ads;

public class ADActivity extends android.app.Activity {
    public static final java.lang.String NOTCH_CONTAINER_TAG = "NOTCH_CONTAINER";
    protected com.qq.e.comm.pi.ACTD a;
    private android.widget.FrameLayout b;

    public ADActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a() {
            r5 = this;
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            r0.<init>(r5)
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r0.setLayoutParams(r1)
            r1 = 1
            r0.setOrientation(r1)
            super.setContentView(r0)
            android.widget.FrameLayout r1 = new android.widget.FrameLayout
            r1.<init>(r5)
            java.lang.String r3 = "NOTCH_CONTAINER"
            r1.setTag(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r4 = -2
            r3.<init>(r2, r4)
            r1.setLayoutParams(r3)
            r0.addView(r1)
            android.widget.FrameLayout r1 = new android.widget.FrameLayout
            r1.<init>(r5)
            r5.b = r1
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r1.<init>(r2, r2)
            android.widget.FrameLayout r2 = r5.b
            r2.setLayoutParams(r1)
            android.widget.FrameLayout r1 = r5.b
            r0.addView(r1)
            return
    }

    @Override
    protected void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            super.onActivityResult(r2, r3, r4)
            com.qq.e.comm.pi.ACTD r0 = r1.a
            if (r0 == 0) goto La
            r0.onActivityResult(r2, r3, r4)
        La:
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.qq.e.comm.pi.ACTD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onBackPressed()
        L7:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.qq.e.comm.pi.ACTD r0 = r1.a
            if (r0 == 0) goto La
            r0.onConfigurationChanged(r2)
        La:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r5) {
            r4 = this;
            r0 = 0
            com.qq.e.comm.managers.b r1 = com.qq.e.comm.managers.b.b()     // Catch: java.lang.Throwable -> L70
            com.qq.e.comm.managers.plugin.PM r1 = r1.c()     // Catch: java.lang.Throwable -> L70
            com.qq.e.comm.pi.POFactory r1 = r1.getPOFactory()     // Catch: java.lang.Throwable -> L70
            if (r1 != 0) goto L11
            goto L8a
        L11:
            android.content.Intent r2 = r4.getIntent()     // Catch: java.lang.Throwable -> L70
            boolean r3 = com.qq.e.comm.managers.status.SDKStatus.isNoPlugin     // Catch: java.lang.Throwable -> L70
            if (r3 != 0) goto L24
            java.lang.Class r3 = r1.getClass()     // Catch: java.lang.Throwable -> L70
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Throwable -> L70
            r2.setExtrasClassLoader(r3)     // Catch: java.lang.Throwable -> L70
        L24:
            android.os.Bundle r2 = r2.getExtras()     // Catch: java.lang.Throwable -> L70
            if (r2 != 0) goto L2b
            goto L8a
        L2b:
            java.lang.String r3 = "gdt_activity_delegate_name"
            java.lang.String r0 = r2.getString(r3)     // Catch: java.lang.Throwable -> L70
            java.lang.String r3 = "appid"
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Throwable -> L70
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L70
            if (r3 != 0) goto L8a
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L70
            if (r2 == 0) goto L44
            goto L8a
        L44:
            com.qq.e.comm.managers.b r2 = com.qq.e.comm.managers.b.b()     // Catch: java.lang.Throwable -> L70
            boolean r2 = r2.d()     // Catch: java.lang.Throwable -> L70
            if (r2 == 0) goto L8a
            com.qq.e.comm.pi.ACTD r1 = r1.getActivityDelegate(r0, r4)     // Catch: java.lang.Throwable -> L70
            r4.a = r1     // Catch: java.lang.Throwable -> L70
            if (r1 != 0) goto L8a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L70
            r1.<init>()     // Catch: java.lang.Throwable -> L70
            java.lang.String r2 = "创建 ADActivity Delegate "
            r1.append(r2)     // Catch: java.lang.Throwable -> L70
            r1.append(r0)     // Catch: java.lang.Throwable -> L70
            java.lang.String r2 = " 失败"
            r1.append(r2)     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L70
            com.qq.e.comm.util.GDTLogger.e(r1)     // Catch: java.lang.Throwable -> L70
            goto L8a
        L70:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "创建ADActivity Delegate"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = "发生异常"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.qq.e.comm.util.GDTLogger.e(r0, r1)
        L8a:
            com.qq.e.comm.pi.ACTD r0 = r4.a
            java.lang.String r1 = "ADActivity onCreate 发生异常"
            if (r0 == 0) goto L94
            r0.onBeforeCreate(r5)
            goto L9c
        L94:
            r4.finish()     // Catch: java.lang.Throwable -> L98
            goto L9c
        L98:
            r0 = move-exception
            com.qq.e.comm.util.GDTLogger.e(r1, r0)
        L9c:
            super.onCreate(r5)     // Catch: java.lang.Throwable -> La0
            goto La7
        La0:
            r0 = move-exception
            com.qq.e.comm.managers.plugin.a.a(r0, r1)
            com.qq.e.comm.util.GDTLogger.e(r1, r0)
        La7:
            com.qq.e.comm.pi.ACTD r0 = r4.a
            if (r0 == 0) goto Lae
            r0.onAfterCreate(r5)
        Lae:
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.qq.e.comm.pi.ACTD r0 = r1.a
            if (r0 == 0) goto La
            r0.onDestroy()
        La:
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            com.qq.e.comm.pi.ACTD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onPause()
        L7:
            super.onPause()
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            com.qq.e.comm.pi.ACTD r0 = r1.a
            if (r0 == 0) goto La
            r0.onResume()
        La:
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            com.qq.e.comm.pi.ACTD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onStop()
        L7:
            super.onStop()
            return
    }

    @Override
    public void setContentView(int r4) {
            r3 = this;
            r3.a()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r3)
            android.widget.FrameLayout r1 = r3.b
            r2 = 1
            r0.inflate(r4, r1, r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2) {
            r1 = this;
            r1.a()
            android.widget.FrameLayout r0 = r1.b
            r0.addView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            r1.a()
            android.widget.FrameLayout r0 = r1.b
            r0.addView(r2, r3)
            return
    }
}
