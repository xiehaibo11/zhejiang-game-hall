package com.mbridge.msdk.foundation.webview;

public class WebViewFragment extends com.mbridge.msdk.foundation.fragment.BaseFragment {


    public WebViewFragment() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            return
    }

    @Override
    public android.view.View onCreateView(android.view.LayoutInflater r1, android.view.ViewGroup r2, android.os.Bundle r3) {
            r0 = this;
            com.mbridge.msdk.foundation.webview.BrowserView r1 = new com.mbridge.msdk.foundation.webview.BrowserView
            android.support.v4.app.FragmentActivity r2 = r0.getActivity()
            r1.<init>(r2)
            android.support.v4.app.FragmentActivity r2 = r0.getActivity()
            android.content.Intent r2 = r2.getIntent()
            android.os.Bundle r2 = r2.getExtras()
            java.lang.String r3 = "msg"
            java.lang.String r2 = r2.getString(r3)
            r1.loadUrl(r2)
            com.mbridge.msdk.foundation.webview.WebViewFragment$1 r2 = new com.mbridge.msdk.foundation.webview.WebViewFragment$1
            r2.<init>(r0)
            r1.setListener(r2)
            return r1
    }
}
