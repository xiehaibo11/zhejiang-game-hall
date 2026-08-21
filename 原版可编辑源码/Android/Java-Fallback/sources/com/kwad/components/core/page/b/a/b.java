package com.kwad.components.core.page.b.a;

public final class b extends com.kwad.sdk.mvp.a {
    public com.kwad.components.core.page.a.a MX;
    public com.kwad.sdk.core.webview.KsAdWebView.c MY;
    public com.kwad.components.core.page.b.a.f.a MZ;
    public com.kwad.components.core.webview.jshandler.ak.b Na;
    public boolean Nb;
    public boolean Nc;
    public android.view.ViewGroup gg;
    public com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    public com.kwad.sdk.core.webview.KsAdWebView mAdWebView;
    public boolean mAutoShow;
    public android.content.Context mContext;
    public java.lang.String mPageTitle;
    public java.lang.String mPageUrl;
    public boolean mShowPermission;
    public com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.Nb = r0
            r1.Nc = r0
            return
    }

    private void aB(boolean r1) {
            r0 = this;
            r1 = 1
            r0.Nc = r1
            return
    }

    public final void a(com.kwad.components.core.page.b.a.f.a r1) {
            r0 = this;
            r0.MZ = r1
            return
    }

    public final void a(com.kwad.components.core.webview.jshandler.ak.b r1) {
            r0 = this;
            r0.Na = r1
            r1 = 1
            r0.aB(r1)
            return
    }

    public final void a(com.kwad.sdk.core.webview.KsAdWebView.c r1) {
            r0 = this;
            r0.MY = r1
            return
    }

    public final void oC() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.ak$b r0 = r1.Na
            if (r0 == 0) goto L7
            r0.oW()
        L7:
            return
    }

    public final boolean oJ() {
            r1 = this;
            boolean r0 = r1.Nc
            return r0
    }

    public final boolean oK() {
            r1 = this;
            boolean r0 = r1.oy()
            if (r0 == 0) goto L8
            r0 = 0
            return r0
        L8:
            r0 = 1
            return r0
    }

    public final boolean oy() {
            r1 = this;
            boolean r0 = r1.mShowPermission
            return r0
    }

    @Override
    public final void release() {
            r1 = this;
            r0 = 0
            r1.MY = r0
            r1.MZ = r0
            r1.mWebCardCloseListener = r0
            r1.Na = r0
            return
    }

    public final void setWebCardCloseListener(com.kwad.sdk.core.webview.d.a.b r1) {
            r0 = this;
            r0.mWebCardCloseListener = r1
            return
    }
}
