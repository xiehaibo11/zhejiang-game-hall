package com.kwad.components.core.page.b.a;

import android.content.Context;
import android.view.ViewGroup;
import com.kwad.components.core.page.b.a.f;
import com.kwad.components.core.webview.jshandler.ak;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.sdk.mvp.a {
    public com.kwad.components.core.page.a.a MX;
    public KsAdWebView.c MY;
    public f.a MZ;
    public ak.b Na;
    public boolean Nb = false;
    public boolean Nc = false;
    public ViewGroup gg;
    public AdTemplate mAdTemplate;
    public KsAdWebView mAdWebView;
    public boolean mAutoShow;
    public Context mContext;
    public String mPageTitle;
    public String mPageUrl;
    public boolean mShowPermission;
    public com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;

    private void aB(boolean z) {
        this.Nc = true;
    }

    public final void a(f.a aVar) {
        this.MZ = aVar;
    }

    public final void a(ak.b bVar) {
        this.Na = bVar;
        aB(true);
    }

    public final void a(KsAdWebView.c cVar) {
        this.MY = cVar;
    }

    public final void oC() {
        ak.b bVar = this.Na;
        if (bVar != null) {
            bVar.oW();
        }
    }

    public final boolean oJ() {
        return this.Nc;
    }

    public final boolean oK() {
        return !oy();
    }

    public final boolean oy() {
        return this.mShowPermission;
    }

    @Override // com.kwad.sdk.mvp.a
    public final void release() {
        this.MY = null;
        this.MZ = null;
        this.mWebCardCloseListener = null;
        this.Na = null;
    }

    public final void setWebCardCloseListener(com.kwad.sdk.core.webview.d.a.b bVar) {
        this.mWebCardCloseListener = bVar;
    }
}
