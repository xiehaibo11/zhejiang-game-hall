package com.kwad.components.core.l;

import com.kwad.sdk.mvp.a;

public abstract class c<T extends com.kwad.sdk.mvp.a> extends com.kwad.sdk.widget.KSFrameLayout {
    public T Li;
    protected android.view.ViewGroup lJ;
    protected com.kwad.sdk.mvp.Presenter mPresenter;

    public c(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private c(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r3 = 0
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private c(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r3 = 0
            r0.<init>(r1, r2, r3)
            boolean r1 = r0.kt()
            if (r1 != 0) goto Ld
            r0.od()
        Ld:
            return
    }

    private void initMVP() {
            r2 = this;
            com.kwad.sdk.mvp.a r0 = r2.kw()
            r2.Li = r0
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            if (r0 != 0) goto L15
            com.kwad.sdk.mvp.Presenter r0 = r2.onCreatePresenter()
            r2.mPresenter = r0
            android.view.ViewGroup r1 = r2.lJ
            r0.F(r1)
        L15:
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            T extends com.kwad.sdk.mvp.a r1 = r2.Li
            r0.k(r1)
            return
    }

    @Override
    public void aa() {
            r0 = this;
            super.aa()
            r0.initMVP()
            return
    }

    @Override
    public void ab() {
            r1 = this;
            super.ab()
            T extends com.kwad.sdk.mvp.a r0 = r1.Li
            if (r0 == 0) goto La
            r0.release()
        La:
            com.kwad.sdk.mvp.Presenter r0 = r1.mPresenter
            if (r0 == 0) goto L11
            r0.destroy()
        L11:
            return
    }

    protected abstract int getLayoutId();

    protected abstract void initData();

    protected boolean kt() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected abstract void kv();

    protected abstract T kw();

    protected final void od() {
            r2 = this;
            r2.initData()
            android.content.Context r0 = r2.getContext()
            int r1 = r2.getLayoutId()
            android.view.View r0 = com.kwad.sdk.m.l.inflate(r0, r1, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.lJ = r0
            r2.kv()
            return
    }

    public abstract com.kwad.sdk.mvp.Presenter onCreatePresenter();
}
