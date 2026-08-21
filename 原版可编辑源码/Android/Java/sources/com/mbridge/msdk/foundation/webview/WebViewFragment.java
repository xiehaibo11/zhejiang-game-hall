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

public class WebViewFragment extends BaseFragment {
    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
    }

    @Override
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        BrowserView browserView = new BrowserView(getActivity());
        browserView.loadUrl(getActivity().getIntent().getExtras().getString("msg"));
        browserView.setListener(new BrowserView.a() {
            @Override
            public final void a(WebView webView, int i, String str, String str2) {
            }

            @Override
            public final void a(WebView webView, String str) {
            }

            @Override
            public final boolean b(WebView webView, String str) {
                return false;
            }

            @Override
            public final void c(WebView webView, String str) {
            }

            @Override
            public final void a() {
                WebViewFragment.this.getActivity().finish();
            }

            @Override
            public final void a(WebView webView, String str, Bitmap bitmap) {
                if (ad.a.a(str) && ad.a.a(WebViewFragment.this.getActivity().getApplicationContext(), str, null)) {
                    WebViewFragment.this.getActivity().finish();
                }
            }
        });
        return browserView;
    }
}
