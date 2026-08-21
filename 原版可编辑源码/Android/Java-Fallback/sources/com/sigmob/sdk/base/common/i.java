package com.sigmob.sdk.base.common;

public abstract class i {
    protected java.lang.String a;
    protected android.content.Context b;
    protected android.widget.RelativeLayout c;
    protected com.sigmob.sdk.base.common.j d;
    protected com.sigmob.sdk.base.common.e e;
    private android.widget.RelativeLayout f;
    private java.lang.ref.WeakReference<android.app.Activity> g;

    protected i(android.app.Activity r2, java.lang.String r3, com.sigmob.sdk.base.common.j r4) {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = r2.getApplicationContext()
            r1.b = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.g = r0
            r1.a = r3
            r1.d = r4
            android.widget.RelativeLayout r2 = new android.widget.RelativeLayout
            android.content.Context r3 = r1.b
            r2.<init>(r3)
            r1.c = r2
            return
    }

    public void a(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            return
    }

    protected void a(android.content.Context r3, int r4, android.os.Bundle r5) {
            r2 = this;
            if (r5 == 0) goto L76
            java.lang.String r0 = "isHalfInterstitial"
            r1 = 0
            boolean r5 = r5.getBoolean(r0, r1)     // Catch: java.lang.Throwable -> L76
            if (r5 == 0) goto L76
            android.content.res.Resources r5 = r3.getResources()     // Catch: java.lang.Throwable -> L76
            android.util.DisplayMetrics r5 = r5.getDisplayMetrics()     // Catch: java.lang.Throwable -> L76
            int r5 = r5.widthPixels     // Catch: java.lang.Throwable -> L76
            android.content.res.Resources r0 = r3.getResources()     // Catch: java.lang.Throwable -> L76
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()     // Catch: java.lang.Throwable -> L76
            int r0 = r0.heightPixels     // Catch: java.lang.Throwable -> L76
            r1 = 6
            if (r4 != r1) goto L36
            int r4 = java.lang.Math.min(r5, r0)     // Catch: java.lang.Throwable -> L76
            int r4 = r4 * 85
            int r4 = r4 / 100
            int r5 = r4 * 16
            int r5 = r5 / 9
            com.sigmob.sdk.base.common.e r0 = new com.sigmob.sdk.base.common.e     // Catch: java.lang.Throwable -> L76
            r0.<init>(r5, r4)     // Catch: java.lang.Throwable -> L76
        L33:
            r2.e = r0     // Catch: java.lang.Throwable -> L76
            goto L48
        L36:
            int r4 = java.lang.Math.min(r5, r0)     // Catch: java.lang.Throwable -> L76
            int r4 = r4 * 85
            int r4 = r4 / 100
            int r5 = r4 * 16
            int r5 = r5 / 9
            com.sigmob.sdk.base.common.e r0 = new com.sigmob.sdk.base.common.e     // Catch: java.lang.Throwable -> L76
            r0.<init>(r4, r5)     // Catch: java.lang.Throwable -> L76
            goto L33
        L48:
            android.widget.RelativeLayout r4 = new android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L76
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L76
            r2.f = r4     // Catch: java.lang.Throwable -> L76
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L76
            com.sigmob.sdk.base.common.e r4 = r2.e     // Catch: java.lang.Throwable -> L76
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L76
            com.sigmob.sdk.base.common.e r5 = r2.e     // Catch: java.lang.Throwable -> L76
            int r5 = r5.b()     // Catch: java.lang.Throwable -> L76
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L76
            r4 = 13
            r3.addRule(r4)     // Catch: java.lang.Throwable -> L76
            android.widget.RelativeLayout r4 = r2.f     // Catch: java.lang.Throwable -> L76
            r4.setLayoutParams(r3)     // Catch: java.lang.Throwable -> L76
            android.widget.RelativeLayout r3 = r2.c     // Catch: java.lang.Throwable -> L76
            r3.removeAllViews()     // Catch: java.lang.Throwable -> L76
            android.widget.RelativeLayout r3 = r2.c     // Catch: java.lang.Throwable -> L76
            android.widget.RelativeLayout r4 = r2.f     // Catch: java.lang.Throwable -> L76
            r3.addView(r4)     // Catch: java.lang.Throwable -> L76
        L76:
            return
    }

    public abstract void a(android.content.res.Configuration r1);

    public abstract void a(android.os.Bundle r1);

    protected void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.a
            if (r0 == 0) goto La
            android.content.Context r1 = r2.b
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r1, r0, r3)
            goto Lf
        La:
            java.lang.String r3 = "Tried to broadcast a video event without a broadcast identifier to send to."
            com.czhj.sdk.logger.SigmobLog.w(r3)
        Lf:
            return
    }

    protected void a(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.String r0 = r2.a
            if (r0 == 0) goto La
            android.content.Context r1 = r2.b
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r1, r0, r3, r4)
            goto Lf
        La:
            java.lang.String r3 = "Tried to broadcast a video event without a broadcast identifier to send to."
            com.czhj.sdk.logger.SigmobLog.w(r3)
        Lf:
            return
    }

    protected void a(java.lang.String r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            java.lang.String r0 = r3.a
            if (r0 == 0) goto Lb
            android.content.Context r1 = r3.b
            r2 = 0
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r1, r0, r5, r4, r2)
            goto L10
        Lb:
            java.lang.String r4 = "Tried to broadcast a video event without a broadcast identifier to send to."
            com.czhj.sdk.logger.SigmobLog.w(r4)
        L10:
            return
    }

    public abstract void b();

    public abstract void c();

    public abstract void d();

    public void e() {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.c
            com.czhj.sdk.common.utils.ViewUtil.removeFromParent(r0)
            r0 = 0
            r1.c = r0
            return
    }

    public abstract void f();

    public boolean g() {
            r1 = this;
            r0 = 1
            return r0
    }

    protected com.sigmob.sdk.base.common.j h() {
            r1 = this;
            com.sigmob.sdk.base.common.j r0 = r1.d
            return r0
    }

    protected android.content.Context i() {
            r1 = this;
            android.content.Context r0 = r1.b
            return r0
    }

    protected android.view.ViewGroup j() {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.f
            if (r0 == 0) goto L5
            return r0
        L5:
            android.widget.RelativeLayout r0 = r1.c
            return r0
    }

    protected android.app.Activity k() {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.c
            android.app.Activity r0 = com.czhj.sdk.common.utils.ViewUtil.getActivityFromViewTop(r0)
            if (r0 == 0) goto L9
            return r0
        L9:
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.g
            if (r0 == 0) goto L14
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
        L14:
            r0 = 0
            return r0
    }
}
