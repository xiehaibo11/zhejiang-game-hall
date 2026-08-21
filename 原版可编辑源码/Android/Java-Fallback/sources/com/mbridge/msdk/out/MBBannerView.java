package com.mbridge.msdk.out;

public class MBBannerView extends android.widget.RelativeLayout {
    private java.lang.String bidToken;
    private com.mbridge.msdk.mbbanner.a.a controller;
    private boolean hadAttached;
    private boolean isVisible;
    private com.mbridge.msdk.out.BannerAdListener mBannerAdListener;
    private com.mbridge.msdk.out.MBridgeIds mBridgeIds;


    public MBBannerView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBBannerView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public MBBannerView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 0
            r0.hadAttached = r2
            r0.isVisible = r2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            r2.a(r1)
            return
    }

    static com.mbridge.msdk.mbbanner.a.a access$000(com.mbridge.msdk.out.MBBannerView r0) {
            com.mbridge.msdk.mbbanner.a.a r0 = r0.controller
            return r0
    }

    private void delayedNotify() {
            r3 = this;
            com.mbridge.msdk.out.MBBannerView$1 r0 = new com.mbridge.msdk.out.MBBannerView$1
            r0.<init>(r3)
            r1 = 200(0xc8, double:9.9E-322)
            r3.postDelayed(r0, r1)
            return
    }

    private void updateAttachedState(boolean r2) {
            r1 = this;
            r1.hadAttached = r2
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L9
            r0.b(r2)
        L9:
            return
    }

    public java.lang.String getRequestId() {
            r1 = this;
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.a()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public void init(com.mbridge.msdk.out.BannerSize r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.mbridge.msdk.out.MBridgeIds r0 = new com.mbridge.msdk.out.MBridgeIds
            r0.<init>(r4, r5)
            r2.mBridgeIds = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.f(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L14
            com.mbridge.msdk.foundation.tools.ae.a(r5, r0)
        L14:
            com.mbridge.msdk.mbbanner.a.a r0 = new com.mbridge.msdk.mbbanner.a.a
            r0.<init>(r2, r3, r4, r5)
            r2.controller = r0
            boolean r3 = r2.isVisible
            r0.c(r3)
            com.mbridge.msdk.mbbanner.a.a r3 = r2.controller
            boolean r4 = r2.hadAttached
            r3.b(r4)
            return
    }

    public void load() {
            r3 = this;
            com.mbridge.msdk.mbbanner.a.a r0 = r3.controller
            if (r0 == 0) goto L11
            boolean r1 = r3.hadAttached
            r0.b(r1)
            com.mbridge.msdk.mbbanner.a.a r0 = r3.controller
            java.lang.String r1 = ""
            r0.a(r1)
            goto L1c
        L11:
            com.mbridge.msdk.out.BannerAdListener r0 = r3.mBannerAdListener
            if (r0 == 0) goto L1c
            com.mbridge.msdk.out.MBridgeIds r1 = r3.mBridgeIds
            java.lang.String r2 = "banner controler init error，please check it"
            r0.onLoadFailed(r1, r2)
        L1c:
            return
    }

    public void loadFromBid(java.lang.String r3) {
            r2 = this;
            r2.bidToken = r3
            com.mbridge.msdk.mbbanner.a.a r0 = r2.controller
            if (r0 == 0) goto L2b
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.mbbanner.a.a r0 = r2.controller
            boolean r1 = r2.hadAttached
            r0.b(r1)
            com.mbridge.msdk.mbbanner.a.a r0 = r2.controller
            r1 = 0
            r0.a(r1)
            com.mbridge.msdk.mbbanner.a.a r0 = r2.controller
            r0.a(r3)
            goto L36
        L1f:
            com.mbridge.msdk.out.BannerAdListener r3 = r2.mBannerAdListener
            if (r3 == 0) goto L36
            com.mbridge.msdk.out.MBridgeIds r0 = r2.mBridgeIds
            java.lang.String r1 = "banner token is null or empty，please check it"
            r3.onLoadFailed(r0, r1)
            goto L36
        L2b:
            com.mbridge.msdk.out.BannerAdListener r3 = r2.mBannerAdListener
            if (r3 == 0) goto L36
            com.mbridge.msdk.out.MBridgeIds r0 = r2.mBridgeIds
            java.lang.String r1 = "banner controler init error，please check it"
            r3.onLoadFailed(r0, r1)
        L36:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.updateAttachedState(r0)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            r1.updateAttachedState(r0)
            return
    }

    public void onPause() {
            r1 = this;
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L11
            java.lang.String r0 = r1.bidToken
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L11
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            r0.d()
        L11:
            return
    }

    public void onResume() {
            r1 = this;
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L15
            java.lang.String r0 = r1.bidToken
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L15
            boolean r0 = com.mbridge.msdk.foundation.b.b.c
            if (r0 != 0) goto L15
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            r0.e()
        L15:
            return
    }

    @Override
    protected void onSizeChanged(int r2, int r3, int r4, int r5) {
            r1 = this;
            super.onSizeChanged(r2, r3, r4, r5)
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
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
            r1.isVisible = r0
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L18
            if (r3 != 0) goto L15
            r1.delayedNotify()
            goto L18
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
            r2.isVisible = r1
            com.mbridge.msdk.mbbanner.a.a r1 = r2.controller
            if (r1 == 0) goto L1f
            if (r3 != 0) goto L15
            r2.delayedNotify()
            goto L1f
        L15:
            boolean r3 = com.mbridge.msdk.foundation.b.b.c
            if (r3 == 0) goto L1a
            return
        L1a:
            com.mbridge.msdk.mbbanner.a.a r3 = r2.controller
            r3.c(r0)
        L1f:
            return
    }

    public void release() {
            r2 = this;
            com.mbridge.msdk.out.BannerAdListener r0 = r2.mBannerAdListener
            r1 = 0
            if (r0 == 0) goto L7
            r2.mBannerAdListener = r1
        L7:
            com.mbridge.msdk.mbbanner.a.a r0 = r2.controller
            if (r0 == 0) goto L13
            r0.a(r1)
            com.mbridge.msdk.mbbanner.a.a r0 = r2.controller
            r0.b()
        L13:
            r2.removeAllViews()
            return
    }

    public void setAllowShowCloseBtn(boolean r2) {
            r1 = this;
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setBannerAdListener(com.mbridge.msdk.out.BannerAdListener r2) {
            r1 = this;
            r1.mBannerAdListener = r2
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public void setRefreshTime(int r2) {
            r1 = this;
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L9
            if (r2 < 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public void updateBannerSize(com.mbridge.msdk.out.BannerSize r2) {
            r1 = this;
            com.mbridge.msdk.mbbanner.a.a r0 = r1.controller
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }
}
