package com.mbridge.msdk.foundation.webview;

import android.graphics.Bitmap;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.fragment.BaseFragment;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.webview.BrowserView;

/* JADX INFO: loaded from: classes2.dex */
public class WebViewFragment extends BaseFragment {
    @Override // android.support.v4.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
    }

    @Override // android.support.v4.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        BrowserView browserView = new BrowserView(getActivity());
        browserView.loadUrl(getActivity().getIntent().getExtras().getString("msg"));
        browserView.setListener(new BrowserView.a() { // from class: com.mbridge.msdk.foundation.webview.WebViewFragment.1
            @Override // com.mbridge.msdk.foundation.webview.BrowserView.a
            public final void a(WebView webView, int i, String str, String str2) {
            }

            @Override // com.mbridge.msdk.foundation.webview.BrowserView.a
            public final void a(WebView webView, String str) {
            }

            @Override // com.mbridge.msdk.foundation.webview.BrowserView.a
            public final boolean b(WebView webView, String str) {
                return false;
            }

            @Override // com.mbridge.msdk.foundation.webview.BrowserView.a
            public final void c(WebView webView, String str) {
            }

            @Override // com.mbridge.msdk.foundation.webview.BrowserView.a
            public final void a() {
                WebViewFragment.this.getActivity().finish();
            }

            @Override // com.mbridge.msdk.foundation.webview.BrowserView.a
            public final void a(WebView webView, String str, Bitmap bitmap) {
                if (ad.a.a(str) && ad.a.a(WebViewFragment.this.getActivity().getApplicationContext(), str, null)) {
                    WebViewFragment.this.getActivity().finish();
                }
            }
        });
        return browserView;
    }
}
