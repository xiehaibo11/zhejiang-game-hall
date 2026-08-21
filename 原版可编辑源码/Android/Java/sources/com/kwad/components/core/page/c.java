package com.kwad.components.core.page;

import android.content.Context;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.page.b.a.e;
import com.kwad.components.core.page.b.a.f;
import com.kwad.components.core.page.b.a.g;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.mvp.Presenter;

public final class c extends com.kwad.components.core.l.c<com.kwad.components.core.page.b.a.b> {
    private AdTemplate mAdTemplate;
    private KsAdWebView mAdWebView;
    private boolean mAutoShow;
    private Context mContext;
    private com.kwad.components.core.page.a.a mLandPageViewListener;
    private String mPageTitle;
    private String mPageUrl;
    private boolean mShowPermission;
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;

    private c(Context context) {
        super(context);
    }

    public static c b(Context context, AdWebViewActivityProxy.a aVar) {
        c cVar = new c(context);
        cVar.c(context, aVar);
        return cVar;
    }

    private void c(Context context, AdWebViewActivityProxy.a aVar) {
        this.mContext = context;
        this.mAdTemplate = aVar.getAdTemplate();
        this.mPageUrl = aVar.ox();
        this.mPageTitle = aVar.ow();
        this.mShowPermission = aVar.oy();
        this.mAutoShow = aVar.oz();
    }

    @Override
    private com.kwad.components.core.page.b.a.b kw() {
        com.kwad.components.core.page.b.a.b bVar = new com.kwad.components.core.page.b.a.b();
        bVar.mContext = this.mContext;
        bVar.mAdTemplate = this.mAdTemplate;
        bVar.mPageTitle = this.mPageTitle;
        bVar.mPageUrl = this.mPageUrl;
        bVar.mAutoShow = this.mAutoShow;
        bVar.mShowPermission = this.mShowPermission;
        bVar.MX = this.mLandPageViewListener;
        bVar.setWebCardCloseListener(this.mWebCardCloseListener);
        bVar.gg = this.lJ;
        return bVar;
    }

    public final boolean getCanInterceptBackClick() {
        return ((com.kwad.components.core.page.b.a.b) this.mPresenter.Gk()).oJ();
    }

    @Override
    public final int getLayoutId() {
        return R.layout.ksad_activity_ad_webview;
    }

    @Override
    public final void initData() {
    }

    @Override
    public final void kv() {
        this.mAdWebView = (KsAdWebView) findViewById(R.id.ksad_video_webview);
    }

    public final void oC() {
        ((com.kwad.components.core.page.b.a.b) this.mPresenter.Gk()).oC();
    }

    public final void oD() {
        this.mAdWebView.setClientConfig(this.mAdWebView.getClientConfig().bm(true).cy(((com.kwad.components.core.page.b.a.b) this.Li).mAdTemplate).bk(((com.kwad.components.core.page.b.a.b) this.Li).mAdTemplate.converted));
        this.mAdWebView.reload();
    }

    @Override
    public final Presenter onCreatePresenter() {
        Presenter presenter = new Presenter();
        presenter.a(new f());
        presenter.a(new e());
        if (com.kwad.sdk.core.response.b.d.s(((com.kwad.components.core.page.b.a.b) this.Li).mAdTemplate)) {
            presenter.a(new com.kwad.components.core.page.b.a.c());
        }
        if (com.kwad.sdk.core.response.b.a.aG(com.kwad.sdk.core.response.b.d.cg(((com.kwad.components.core.page.b.a.b) this.Li).mAdTemplate)) && com.kwad.components.core.r.a.pS().pY() && com.kwad.components.core.r.a.pS().pT() == 1) {
            presenter.a(new com.kwad.components.core.page.b.a.d());
        }
        presenter.a(new g());
        return presenter;
    }

    public final void setLandPageViewListener(com.kwad.components.core.page.a.a aVar) {
        this.mLandPageViewListener = aVar;
    }

    public final void setWebCardCloseListener(com.kwad.sdk.core.webview.d.a.b bVar) {
        this.mWebCardCloseListener = bVar;
        if (this.mAdWebView != null || bVar == null) {
            return;
        }
        bVar.a(null);
    }
}
