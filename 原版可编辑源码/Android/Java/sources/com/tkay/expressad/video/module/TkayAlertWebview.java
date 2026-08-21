package com.tkay.expressad.video.module;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.b.b;
import com.tkay.expressad.foundation.webview.BrowserView;
import com.tkay.expressad.videocommon.b.g;
import com.tkay.expressad.videocommon.b.h;
import com.tkay.expressad.videocommon.e.c;
import com.tkay.expressad.videocommon.e.d;

public class TkayAlertWebview extends TkayH5EndCardView {
    private String A;

    public TkayAlertWebview(Context context) {
        super(context);
    }

    public TkayAlertWebview(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override
    protected final String a() {
        if (TextUtils.isEmpty(this.x)) {
            return "";
        }
        c.a().a(b.b().e(), this.x, false);
        String strJ = d.J();
        this.A = strJ;
        return !TextUtils.isEmpty(strJ) ? g.a().c(this.A) : "";
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b bVar) {
        String strA = a();
        if (this.f && this.b != null && !TextUtils.isEmpty(strA)) {
            BrowserView.DownloadListener downloadListener = new BrowserView.DownloadListener(this.b);
            downloadListener.setTitle(this.b.bb());
            this.s.setDownloadListener(downloadListener);
            this.s.setCampaignId(this.b.aZ());
            setCloseVisible(8);
            this.s.setApiManagerJSFactory(bVar);
            this.s.setWebViewListener(new com.tkay.expressad.atsignalcommon.a.b() {
                @Override
                public final void onPageFinished(WebView webView, String str) {
                    super.onPageFinished(webView, str);
                    j.a();
                    j.a(webView, "onJSBridgeConnected", "");
                }

                @Override
                public final void onReceivedError(WebView webView, int i, String str, String str2) {
                    super.onReceivedError(webView, i, str, str2);
                    if (TkayAlertWebview.this.w) {
                        return;
                    }
                    TkayAlertWebview.this.w = true;
                }

                @Override
                public final void readyState(WebView webView, int i) {
                    super.readyState(webView, i);
                    if (TkayAlertWebview.this.w) {
                        return;
                    }
                    TkayAlertWebview.this.v = i == 1;
                }
            });
            setHtmlSource(h.a().b(strA));
            this.v = false;
            if (TextUtils.isEmpty(this.u)) {
                this.s.loadUrl(strA);
            } else {
                this.s.loadDataWithBaseURL(strA, this.u, "text/html", "UTF-8", null);
            }
            this.s.setBackgroundColor(0);
            setBackgroundColor(0);
            return;
        }
        this.e.a(101, "");
    }

    @Override
    public void webviewshow() {
        if (this.q != null) {
            this.q.setBackgroundColor(0);
        }
        super.webviewshow();
    }

    @Override
    protected final RelativeLayout.LayoutParams b() {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams.addRule(13, -1);
        return layoutParams;
    }
}
