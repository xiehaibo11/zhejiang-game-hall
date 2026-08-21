package com.mbridge.msdk.video.module;

public class MBridgeLandingPageView extends com.mbridge.msdk.video.module.MBridgeH5EndCardView {

    static class 1 {
    }

    private static final class a implements com.mbridge.msdk.mbjscommon.base.a {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(com.mbridge.msdk.video.module.MBridgeLandingPageView.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean a(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                r1 = 0
                if (r0 != 0) goto L1c
                boolean r0 = android.webkit.URLUtil.isNetworkUrl(r3)
                if (r0 == 0) goto Le
                return r1
            Le:
                com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r0 = r0.j()
                r1 = 0
                com.mbridge.msdk.foundation.tools.ad.a(r0, r3, r1)
                r3 = 1
                return r3
            L1c:
                return r1
        }
    }

    public MBridgeLandingPageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeLandingPageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected final java.lang.String a() {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            if (r0 == 0) goto L11
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.b
            java.lang.String r0 = r0.getClickURL()
            java.lang.String r1 = "-999"
            java.lang.String r0 = com.mbridge.msdk.click.c.a(r0, r1, r1)
            return r0
        L11:
            r0 = 0
            return r0
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            super.init(r1)
            return
    }

    @Override
    public void preLoadData(com.mbridge.msdk.video.js.factory.b r4) {
            r3 = this;
            boolean r0 = r3.f
            if (r0 == 0) goto Lf
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r3.q
            com.mbridge.msdk.video.module.MBridgeLandingPageView$a r1 = new com.mbridge.msdk.video.module.MBridgeLandingPageView$a
            r2 = 0
            r1.<init>(r2)
            r0.setFilter(r1)
        Lf:
            super.preLoadData(r4)
            r4 = 0
            r3.setVisibility(r4)
            r3.setCloseVisible(r4)
            return
    }

    @Override
    public void webviewshow() {
            r4 = this;
            java.lang.String r0 = "webviewshow"
            java.lang.String r1 = "MBridgeBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)     // Catch: java.lang.Exception -> L13
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L13
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r4.q     // Catch: java.lang.Exception -> L13
            java.lang.String r3 = ""
            r1.a(r2, r0, r3)     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r0 = move-exception
            r0.printStackTrace()
        L17:
            return
    }
}
