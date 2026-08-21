package com.kwad.components.core.e.c;

import android.content.Context;
import android.content.res.Configuration;
import android.view.LayoutInflater;
import android.view.View;
import com.kwad.components.core.e.c.b;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.m.l;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends KSFrameLayout {
    private final b Jp;
    private final b.C0149b Jq;
    private d Jr;
    private InterfaceC0148a Js;
    private final AdTemplate mAdTemplate;
    private final Context mContext;
    private Presenter mPresenter;
    private final AdBaseFrameLayout mRootContainer;

    /* JADX INFO: renamed from: com.kwad.components.core.e.c.a$a, reason: collision with other inner class name */
    public interface InterfaceC0148a {
        void mY();
    }

    public a(Context context, b bVar, b.C0149b c0149b) {
        super(context);
        this.mContext = context;
        this.Jp = bVar;
        this.Jq = c0149b;
        this.mAdTemplate = c0149b.adTemplate;
        l.inflate(context, R.layout.ksad_download_dialog_layout, this);
        AdBaseFrameLayout adBaseFrameLayout = (AdBaseFrameLayout) findViewById(R.id.ksad_root_container);
        this.mRootContainer = adBaseFrameLayout;
        a(adBaseFrameLayout, "rootView is null");
        a((KsAdWebView) this.mRootContainer.findViewById(R.id.ksad_download_tips_web_card_webView), "webView is null");
    }

    private void a(View view, String str) {
        if (view != null) {
            return;
        }
        throw new RuntimeException("inflateView fail " + str + "\n--viewCount:" + getChildCount() + "\n--context:" + this.mContext.getClass().getName() + "\n--LayoutInflater context: " + LayoutInflater.from(this.mContext).getContext().getClass().getName() + "\n--classloader:" + getClass().getClassLoader().getClass().getName());
    }

    private static Presenter ad() {
        Presenter presenter = new Presenter();
        presenter.a(new e());
        return presenter;
    }

    private d mX() {
        d dVar = new d();
        dVar.Jp = this.Jp;
        dVar.Jq = this.Jq;
        dVar.mAdTemplate = this.mAdTemplate;
        dVar.mRootContainer = this.mRootContainer;
        if (com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))) {
            dVar.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate);
        }
        return dVar;
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void aa() {
        super.aa();
        this.Jr = mX();
        Presenter presenterAd = ad();
        this.mPresenter = presenterAd;
        presenterAd.F(this.mRootContainer);
        this.mPresenter.k(this.Jr);
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void ab() {
        super.ab();
        d dVar = this.Jr;
        if (dVar != null) {
            dVar.release();
        }
        Presenter presenter = this.mPresenter;
        if (presenter != null) {
            presenter.destroy();
        }
    }

    @Override // android.view.View
    protected final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        InterfaceC0148a interfaceC0148a = this.Js;
        if (interfaceC0148a != null) {
            interfaceC0148a.mY();
        }
    }

    public final void setChangeListener(InterfaceC0148a interfaceC0148a) {
        this.Js = interfaceC0148a;
    }
}
