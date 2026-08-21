package com.mbridge.msdk.video.module;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.download.download.HTMLResourceManager;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.videocommon.d.b;
import com.mbridge.msdk.videocommon.d.c;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeAlertWebview extends MBridgeH5EndCardView {
    private String y;

    public MBridgeAlertWebview(Context context) {
        super(context);
    }

    public MBridgeAlertWebview(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override // com.mbridge.msdk.video.module.MBridgeH5EndCardView
    protected final String a() {
        if (TextUtils.isEmpty(this.v)) {
            return "";
        }
        b.a().a(a.f().k(), this.v, false);
        String str = c.f4394a;
        this.y = str;
        return !TextUtils.isEmpty(str) ? H5DownLoadManager.getInstance().getH5ResAddress(this.y) : "";
    }

    @Override // com.mbridge.msdk.video.module.MBridgeH5EndCardView
    public void preLoadData(com.mbridge.msdk.video.js.factory.b bVar) {
        String strA = a();
        if (this.f && this.b != null && !TextUtils.isEmpty(strA)) {
            BrowserView.MBDownloadListener mBDownloadListener = new BrowserView.MBDownloadListener(this.b);
            mBDownloadListener.setTitle(this.b.getAppName());
            this.q.setDownloadListener(mBDownloadListener);
            this.q.setCampaignId(this.b.getId());
            setCloseVisible(8);
            this.q.setApiManagerJSFactory(bVar);
            this.q.setWebViewListener(new com.mbridge.msdk.mbjscommon.c.b() { // from class: com.mbridge.msdk.video.module.MBridgeAlertWebview.1
                @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
                public final void a(WebView webView, String str) {
                    super.a(webView, str);
                    z.d("MBridgeAlertWebview", "===========finish+" + str);
                    h.a().a(webView, "onJSBridgeConnected", "");
                }

                @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
                public final void a(WebView webView, int i, String str, String str2) {
                    super.a(webView, i, str, str2);
                    z.d("MBridgeAlertWebview", "===========onReceivedError");
                    if (MBridgeAlertWebview.this.u) {
                        return;
                    }
                    z.a(MBridgeBaseView.TAG, "onReceivedError,url:" + str2);
                    e.a(MBridgeAlertWebview.this.f4304a, MBridgeAlertWebview.this.b, MBridgeAlertWebview.this.y, MBridgeAlertWebview.this.v, 2, str, 1);
                    MBridgeAlertWebview.this.u = true;
                }

                @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
                public final void a(WebView webView, int i) {
                    String str;
                    super.a(webView, i);
                    z.d("MBridgeAlertWebview", "===========readyState  :  " + i);
                    if (MBridgeAlertWebview.this.u) {
                        return;
                    }
                    MBridgeAlertWebview.this.t = i == 1;
                    if (MBridgeAlertWebview.this.t) {
                        str = "readyState state is " + i;
                    } else {
                        str = "";
                    }
                    e.a(MBridgeAlertWebview.this.f4304a, MBridgeAlertWebview.this.b, MBridgeAlertWebview.this.y, MBridgeAlertWebview.this.v, i, str, 1);
                }
            });
            setHtmlSource(HTMLResourceManager.getInstance().getHtmlContentFromUrl(strA));
            this.t = false;
            if (TextUtils.isEmpty(this.s)) {
                z.a(MBridgeBaseView.TAG, "load url:" + strA);
                this.q.loadUrl(strA);
            } else {
                z.a(MBridgeBaseView.TAG, "load html...");
                this.q.loadDataWithBaseURL(strA, this.s, "text/html", "UTF-8", null);
            }
            this.q.setBackgroundColor(0);
            setBackgroundColor(0);
            return;
        }
        this.e.a(101, "");
    }

    @Override // com.mbridge.msdk.video.module.MBridgeH5EndCardView
    public void webviewshow() {
        if (this.o != null) {
            this.o.setBackgroundColor(0);
        }
        super.webviewshow();
        e.a(this.f4304a, this.b, this.y, this.v, 2, 1);
    }

    @Override // com.mbridge.msdk.video.module.MBridgeH5EndCardView
    protected final RelativeLayout.LayoutParams b() {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams.addRule(13, -1);
        return layoutParams;
    }
}
