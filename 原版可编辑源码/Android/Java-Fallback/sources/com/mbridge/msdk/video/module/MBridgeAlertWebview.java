package com.mbridge.msdk.video.module;

public class MBridgeAlertWebview extends com.mbridge.msdk.video.module.MBridgeH5EndCardView {
    private java.lang.String y;


    public MBridgeAlertWebview(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeAlertWebview(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    static java.lang.String a(com.mbridge.msdk.video.module.MBridgeAlertWebview r0) {
            java.lang.String r0 = r0.y
            return r0
    }

    @Override
    protected final java.lang.String a() {
            r4 = this;
            java.lang.String r0 = r4.v
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            java.lang.String r2 = r4.v
            r3 = 0
            r0.a(r1, r2, r3)
            java.lang.String r0 = com.mbridge.msdk.videocommon.d.c.a
            r4.y = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r1 = r4.y
            java.lang.String r0 = r0.getH5ResAddress(r1)
            return r0
        L2f:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    protected final android.widget.RelativeLayout.LayoutParams b() {
            r3 = this;
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r2 = 13
            r0.addRule(r2, r1)
            return r0
    }

    @Override
    public void preLoadData(com.mbridge.msdk.video.js.factory.b r7) {
            r6 = this;
            java.lang.String r1 = r6.a()
            boolean r0 = r6.f
            if (r0 == 0) goto L92
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.b
            if (r0 == 0) goto L92
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L92
            com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener r0 = new com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.b
            r0.<init>(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.b
            java.lang.String r2 = r2.getAppName()
            r0.setTitle(r2)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r6.q
            r2.setDownloadListener(r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.q
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.b
            java.lang.String r2 = r2.getId()
            r0.setCampaignId(r2)
            r0 = 8
            r6.setCloseVisible(r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.q
            r0.setApiManagerJSFactory(r7)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r6.q
            com.mbridge.msdk.video.module.MBridgeAlertWebview$1 r0 = new com.mbridge.msdk.video.module.MBridgeAlertWebview$1
            r0.<init>(r6)
            r7.setWebViewListener(r0)
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r7 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()
            java.lang.String r7 = r7.getHtmlContentFromUrl(r1)
            r6.setHtmlSource(r7)
            r7 = 0
            r6.t = r7
            java.lang.String r0 = r6.s
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "MBridgeBaseView"
            if (r0 == 0) goto L78
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "load url:"
            r0.append(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.q
            r0.loadUrl(r1)
            goto L89
        L78:
            java.lang.String r0 = "load html..."
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.q
            java.lang.String r2 = r6.s
            r5 = 0
            java.lang.String r3 = "text/html"
            java.lang.String r4 = "UTF-8"
            r0.loadDataWithBaseURL(r1, r2, r3, r4, r5)
        L89:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.q
            r0.setBackgroundColor(r7)
            r6.setBackgroundColor(r7)
            goto L9b
        L92:
            com.mbridge.msdk.video.module.a.a r7 = r6.e
            r0 = 101(0x65, float:1.42E-43)
            java.lang.String r1 = ""
            r7.a(r0, r1)
        L9b:
            return
    }

    @Override
    public void webviewshow() {
            r8 = this;
            android.widget.RelativeLayout r0 = r8.o
            if (r0 == 0) goto La
            android.widget.RelativeLayout r0 = r8.o
            r1 = 0
            r0.setBackgroundColor(r1)
        La:
            super.webviewshow()
            android.content.Context r2 = r8.a
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.b
            java.lang.String r4 = r8.y
            java.lang.String r5 = r8.v
            r6 = 2
            r7 = 1
            com.mbridge.msdk.foundation.same.report.e.a(r2, r3, r4, r5, r6, r7)
            return
    }
}
