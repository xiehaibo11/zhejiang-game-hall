package com.kwad.components.core.l;

import com.kwad.components.core.l.a;
import com.kwad.sdk.mvp.Presenter;
import java.util.Iterator;

public abstract class b<T extends a> extends com.kwad.components.core.n.c {
    public T mCallerContext;
    protected Presenter mPresenter;

    private void notifyOnCreate() {
        T t = this.mCallerContext;
        if (t == null) {
            return;
        }
        Iterator<com.kwad.components.core.l.a.a> it = t.Lg.iterator();
        while (it.hasNext()) {
            it.next().ge();
        }
    }

    private void notifyOnDestroy() {
        T t = this.mCallerContext;
        if (t == null) {
            return;
        }
        Iterator<com.kwad.components.core.l.a.a> it = t.Lg.iterator();
        while (it.hasNext()) {
            it.next().gf();
        }
    }

    private void notifyOnPause() {
        T t = this.mCallerContext;
        if (t == null) {
            return;
        }
        Iterator<com.kwad.components.core.l.a.a> it = t.Lg.iterator();
        while (it.hasNext()) {
            it.next().d(this);
        }
    }

    private void notifyOnResume() {
        T t = this.mCallerContext;
        if (t == null) {
            return;
        }
        Iterator<com.kwad.components.core.l.a.a> it = t.Lg.iterator();
        while (it.hasNext()) {
            it.next().c(this);
        }
    }

    public void initMVP() {
        this.mCallerContext = (T) onCreateCallerContext();
        if (this.mPresenter == null) {
            Presenter presenterOnCreatePresenter = onCreatePresenter();
            this.mPresenter = presenterOnCreatePresenter;
            presenterOnCreatePresenter.F(this.mRootView);
        }
        this.mPresenter.k(this.mCallerContext);
    }

    @Override
    public void onActivityCreate() {
        super.onActivityCreate();
        initMVP();
        notifyOnCreate();
    }

    protected abstract T onCreateCallerContext();

    protected abstract Presenter onCreatePresenter();

    @Override
    public void onDestroy() {
        super.onDestroy();
        notifyOnDestroy();
        T t = this.mCallerContext;
        if (t != null) {
            t.release();
        }
        Presenter presenter = this.mPresenter;
        if (presenter != null) {
            presenter.destroy();
        }
    }

    @Override
    public void onPause() {
        super.onPause();
        notifyOnPause();
    }

    @Override
    public void onResume() {
        super.onResume();
        notifyOnResume();
    }
}
