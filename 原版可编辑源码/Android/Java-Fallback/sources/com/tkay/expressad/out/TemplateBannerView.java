package com.tkay.expressad.out;

public class TemplateBannerView extends android.widget.RelativeLayout implements com.tkay.core.common.a.g {
    private com.tkay.expressad.mbbanner.b.a a;
    private com.tkay.expressad.out.b b;
    private boolean c;
    private boolean d;
    private java.lang.String e;


    public TemplateBannerView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TemplateBannerView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public TemplateBannerView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 0
            r0.c = r2
            r0.d = r2
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            r2.b(r1)
            return
    }

    static com.tkay.expressad.mbbanner.b.a a(com.tkay.expressad.out.TemplateBannerView r0) {
            com.tkay.expressad.mbbanner.b.a r0 = r0.a
            return r0
    }

    private void a() {
            r3 = this;
            com.tkay.expressad.out.TemplateBannerView$1 r0 = new com.tkay.expressad.out.TemplateBannerView$1
            r0.<init>(r3)
            r1 = 200(0xc8, double:9.9E-322)
            r3.postDelayed(r0, r1)
            return
    }

    private void a(boolean r2) {
            r1 = this;
            r1.c = r2
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L9
            r0.b(r2)
        L9:
            return
    }

    public java.lang.String getRequestId() {
            r1 = this;
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.a()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public void init(com.tkay.expressad.out.c r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.tkay.expressad.mbbanner.b.a r0 = new com.tkay.expressad.mbbanner.b.a
            r0.<init>(r1, r2, r3, r4)
            r1.a = r0
            boolean r2 = r1.d
            r0.c(r2)
            com.tkay.expressad.mbbanner.b.a r2 = r1.a
            boolean r3 = r1.c
            r2.b(r3)
            return
    }

    @Override
    public boolean isReady() {
            r1 = this;
            r0 = 1
            return r0
    }

    public void load(com.tkay.expressad.foundation.d.d r3) {
            r2 = this;
            com.tkay.expressad.mbbanner.b.a r0 = r2.a
            if (r0 == 0) goto Lf
            boolean r1 = r2.c
            r0.b(r1)
            com.tkay.expressad.mbbanner.b.a r0 = r2.a
            r0.a(r3)
            return
        Lf:
            com.tkay.expressad.out.b r3 = r2.b
            if (r3 == 0) goto L18
            java.lang.String r0 = "banner controler init error，please check it"
            r3.a(r0)
        L18:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.a(r0)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            r1.a(r0)
            return
    }

    public void onPause() {
            r1 = this;
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L11
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L11
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            r0.c()
        L11:
            return
    }

    public void onResume() {
            r1 = this;
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L15
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L15
            boolean r0 = com.tkay.expressad.foundation.f.b.c
            if (r0 != 0) goto L15
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            r0.d()
        L15:
            return
    }

    @Override
    protected void onSizeChanged(int r2, int r3, int r4, int r5) {
            r1 = this;
            super.onSizeChanged(r2, r3, r4, r5)
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto La
            r0.a(r2, r3, r4, r5)
        La:
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r2, int r3) {
            r1 = this;
            super.onVisibilityChanged(r2, r3)
            r2 = 0
            if (r3 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = r2
        L9:
            r1.d = r0
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L18
            if (r3 != 0) goto L15
            r1.a()
            return
        L15:
            r0.c(r2)
        L18:
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r3) {
            r2 = this;
            super.onWindowVisibilityChanged(r3)
            r0 = 0
            if (r3 != 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = r0
        L9:
            r2.d = r1
            com.tkay.expressad.mbbanner.b.a r1 = r2.a
            if (r1 == 0) goto L1f
            if (r3 != 0) goto L15
            r2.a()
            return
        L15:
            boolean r3 = com.tkay.expressad.foundation.f.b.c
            if (r3 == 0) goto L1a
            return
        L1a:
            com.tkay.expressad.mbbanner.b.a r3 = r2.a
            r3.c(r0)
        L1f:
            return
    }

    public void release() {
            r2 = this;
            com.tkay.expressad.out.b r0 = r2.b
            r1 = 0
            if (r0 == 0) goto L7
            r2.b = r1
        L7:
            com.tkay.expressad.mbbanner.b.a r0 = r2.a
            if (r0 == 0) goto L13
            r0.a(r1)
            com.tkay.expressad.mbbanner.b.a r0 = r2.a
            r0.b()
        L13:
            r2.removeAllViews()
            return
    }

    public void setAllowShowCloseBtn(boolean r2) {
            r1 = this;
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setBannerAdListener(com.tkay.expressad.out.b r2) {
            r1 = this;
            r1.b = r2
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public void updateBannerSize(com.tkay.expressad.out.c r2) {
            r1 = this;
            com.tkay.expressad.mbbanner.b.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }
}
