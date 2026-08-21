package com.tkay.expressad.video.module;

public class TkayAlertWebview extends com.tkay.expressad.video.module.TkayH5EndCardView {
    private java.lang.String A;


    public TkayAlertWebview(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TkayAlertWebview(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected final java.lang.String a() {
            r4 = this;
            java.lang.String r0 = r4.x
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L31
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r4.x
            r3 = 0
            r0.a(r1, r2, r3)
            java.lang.String r0 = com.tkay.expressad.videocommon.e.d.J()
            r4.A = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L31
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r1 = r4.A
            java.lang.String r0 = r0.c(r1)
            return r0
        L31:
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
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r7) {
            r6 = this;
            java.lang.String r1 = r6.a()
            boolean r0 = r6.f
            if (r0 == 0) goto L77
            com.tkay.expressad.foundation.d.c r0 = r6.b
            if (r0 == 0) goto L77
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L77
            com.tkay.expressad.foundation.webview.BrowserView$DownloadListener r0 = new com.tkay.expressad.foundation.webview.BrowserView$DownloadListener
            com.tkay.expressad.foundation.d.c r2 = r6.b
            r0.<init>(r2)
            com.tkay.expressad.foundation.d.c r2 = r6.b
            java.lang.String r2 = r2.bb()
            r0.setTitle(r2)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2 = r6.s
            r2.setDownloadListener(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.s
            com.tkay.expressad.foundation.d.c r2 = r6.b
            java.lang.String r2 = r2.aZ()
            r0.setCampaignId(r2)
            r0 = 8
            r6.setCloseVisible(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.s
            r0.setApiManagerJSFactory(r7)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r7 = r6.s
            com.tkay.expressad.video.module.TkayAlertWebview$1 r0 = new com.tkay.expressad.video.module.TkayAlertWebview$1
            r0.<init>(r6)
            r7.setWebViewListener(r0)
            com.tkay.expressad.videocommon.b.h r7 = com.tkay.expressad.videocommon.b.h.a()
            java.lang.String r7 = r7.b(r1)
            r6.setHtmlSource(r7)
            r7 = 0
            r6.v = r7
            java.lang.String r0 = r6.u
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L62
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.s
            r0.loadUrl(r1)
            goto L6e
        L62:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.s
            java.lang.String r2 = r6.u
            r5 = 0
            java.lang.String r3 = "text/html"
            java.lang.String r4 = "UTF-8"
            r0.loadDataWithBaseURL(r1, r2, r3, r4, r5)
        L6e:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r6.s
            r0.setBackgroundColor(r7)
            r6.setBackgroundColor(r7)
            return
        L77:
            com.tkay.expressad.video.module.a.a r7 = r6.e
            r0 = 101(0x65, float:1.42E-43)
            java.lang.String r1 = ""
            r7.a(r0, r1)
            return
    }

    @Override
    public void webviewshow() {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.q
            if (r0 == 0) goto La
            android.widget.RelativeLayout r0 = r2.q
            r1 = 0
            r0.setBackgroundColor(r1)
        La:
            super.webviewshow()
            return
    }
}
