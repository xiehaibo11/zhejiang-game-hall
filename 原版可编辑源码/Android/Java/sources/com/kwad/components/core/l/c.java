package com.kwad.components.core.l;

import android.content.Context;
import android.util.AttributeSet;
import android.view.ViewGroup;
import com.kwad.sdk.m.l;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.mvp.a;
import com.kwad.sdk.widget.KSFrameLayout;

public abstract class c<T extends com.kwad.sdk.mvp.a> extends KSFrameLayout {
    public T Li;
    protected ViewGroup lJ;
    protected Presenter mPresenter;

    public c(Context context) {
        this(context, null);
    }

    private c(Context context, AttributeSet attributeSet) {
        this(context, null, 0);
    }

    private c(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, 0);
        if (kt()) {
            return;
        }
        od();
    }

    private void initMVP() {
        this.Li = (T) kw();
        if (this.mPresenter == null) {
            Presenter presenterOnCreatePresenter = onCreatePresenter();
            this.mPresenter = presenterOnCreatePresenter;
            presenterOnCreatePresenter.F(this.lJ);
        }
        this.mPresenter.k(this.Li);
    }

    @Override
    public void aa() {
        super.aa();
        initMVP();
    }

    @Override
    public void ab() {
        super.ab();
        T t = this.Li;
        if (t != null) {
            t.release();
        }
        Presenter presenter = this.mPresenter;
        if (presenter != null) {
            presenter.destroy();
        }
    }

    protected abstract int getLayoutId();

    protected abstract void initData();

    protected boolean kt() {
        return false;
    }

    protected abstract void kv();

    protected abstract T kw();

    protected final void od() {
        initData();
        this.lJ = (ViewGroup) l.inflate(getContext(), getLayoutId(), this);
        kv();
    }

    public abstract Presenter onCreatePresenter();
}
