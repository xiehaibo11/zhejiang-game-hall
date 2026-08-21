package com.mbridge.msdk.video.module;

public class MBridgeClickMiniCardView extends com.mbridge.msdk.video.module.MBridgeH5EndCardView {
    private boolean y;


    public MBridgeClickMiniCardView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.y = r1
            return
    }

    public MBridgeClickMiniCardView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.y = r1
            return
    }

    private void a(android.view.View r5) {
            r4 = this;
            android.content.Context r0 = r4.a
            int r0 = com.mbridge.msdk.foundation.tools.ae.h(r0)
            android.content.Context r1 = r4.a
            int r1 = com.mbridge.msdk.foundation.tools.ae.g(r1)
            float r0 = (float) r0
            r2 = 1060320051(0x3f333333, float:0.7)
            float r0 = r0 * r2
            r3 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r3
            int r0 = (int) r0
            float r1 = (float) r1
            float r1 = r1 * r2
            float r1 = r1 + r3
            int r1 = (int) r1
            android.view.ViewGroup$LayoutParams r2 = r5.getLayoutParams()
            r2.width = r0
            r2.height = r1
            r5.setLayoutParams(r2)
            return
    }

    @Override
    protected final java.lang.String a() {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            r1 = 0
            if (r0 == 0) goto L2e
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            com.mbridge.msdk.foundation.entity.CampaignEx$c r0 = r0.getRewardTemplateMode()
            if (r0 == 0) goto L11
            java.lang.String r1 = r0.d()
        L11:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L2e
            java.lang.String r0 = ".zip"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L2e
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r0 = r0.getH5ResAddress(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L2e
            r1 = r0
        L2e:
            return r1
    }

    @Override
    protected final android.widget.RelativeLayout.LayoutParams b() {
            r3 = this;
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r1 = 13
            r2 = -1
            r0.addRule(r1, r2)
            return r0
    }

    @Override
    protected final void e() {
            r1 = this;
            super.e()
            boolean r0 = r1.f
            if (r0 == 0) goto L19
            java.lang.String r0 = "mbridge_reward_minicard_bg"
            int r0 = r1.findColor(r0)
            r1.setBackgroundResource(r0)
            android.view.View r0 = r1.n
            r1.a(r0)
            r0 = 1
            r1.setClickable(r0)
        L19:
            return
    }

    @Override
    public void onSelfConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L9
            android.view.View r0 = r1.n
            r1.a(r0)
        L9:
            super.onSelfConfigurationChanged(r2)
            return
    }

    @Override
    public void preLoadData(com.mbridge.msdk.video.js.factory.b r1) {
            r0 = this;
            super.preLoadData(r1)
            r1 = 0
            r0.setCloseVisible(r1)
            return
    }

    public void resizeMiniCard(int r3, int r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 >= r1) goto L7
            return
        L7:
            android.content.Context r0 = r2.a
            android.app.Activity r0 = (android.app.Activity) r0
            android.view.Window r0 = r0.getWindow()
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r0.findViewById(r1)
            int r1 = r0.getWidth()
            int r0 = r0.getHeight()
            if (r3 <= 0) goto L35
            if (r4 <= 0) goto L35
            if (r3 > r1) goto L35
            if (r4 > r0) goto L35
            android.view.View r0 = r2.n
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            r0.width = r3
            r0.height = r4
            android.view.View r3 = r2.n
            r3.setLayoutParams(r0)
        L35:
            return
    }

    public void setMBridgeClickMiniCardViewClickable(boolean r1) {
            r0 = this;
            r0.setClickable(r1)
            return
    }

    public void setMBridgeClickMiniCardViewTransparent() {
            r1 = this;
            r0 = 0
            r1.setBackgroundColor(r0)
            return
    }

    public void setMiniCardLocation(int r1, int r2, int r3, int r4) {
            r0 = this;
            r1 = 1
            r0.y = r1
            r0.resizeMiniCard(r3, r4)
            return
    }

    public void setRadius(int r3) {
            r2 = this;
            if (r3 <= 0) goto L35
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            android.content.Context r1 = r2.getContext()
            float r3 = (float) r3
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r1, r3)
            float r3 = (float) r3
            r0.setCornerRadius(r3)
            r3 = -1
            r0.setColor(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r3 < r1) goto L24
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r2.q
            r3.setBackground(r0)
            goto L29
        L24:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r2.q
            r3.setBackgroundDrawable(r0)
        L29:
            int r3 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r3 < r0) goto L35
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r2.q
            r0 = 1
            r3.setClipToOutline(r0)
        L35:
            return
    }

    @Override
    public void webviewshow() {
            r2 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.q
            if (r0 == 0) goto Le
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.q
            com.mbridge.msdk.video.module.MBridgeClickMiniCardView$1 r1 = new com.mbridge.msdk.video.module.MBridgeClickMiniCardView$1
            r1.<init>(r2)
            r0.post(r1)
        Le:
            return
    }
}
