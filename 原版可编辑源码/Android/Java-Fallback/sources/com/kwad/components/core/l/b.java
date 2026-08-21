package com.kwad.components.core.l;

import com.kwad.components.core.l.a;

public abstract class b<T extends com.kwad.components.core.l.a> extends com.kwad.components.core.n.c {
    public T mCallerContext;
    protected com.kwad.sdk.mvp.Presenter mPresenter;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private void notifyOnCreate() {
            r2 = this;
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.l.a.a r1 = (com.kwad.components.core.l.a.a) r1
            r1.ge()
            goto Lb
        L1b:
            return
    }

    private void notifyOnDestroy() {
            r2 = this;
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.l.a.a r1 = (com.kwad.components.core.l.a.a) r1
            r1.gf()
            goto Lb
        L1b:
            return
    }

    private void notifyOnPause() {
            r2 = this;
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.l.a.a r1 = (com.kwad.components.core.l.a.a) r1
            r1.d(r2)
            goto Lb
        L1b:
            return
    }

    private void notifyOnResume() {
            r2 = this;
            T extends com.kwad.components.core.l.a r0 = r2.mCallerContext
            if (r0 != 0) goto L5
            return
        L5:
            java.util.List<com.kwad.components.core.l.a.a> r0 = r0.Lg
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.l.a.a r1 = (com.kwad.components.core.l.a.a) r1
            r1.c(r2)
            goto Lb
        L1b:
            return
    }

    public void initMVP() {
            r2 = this;
            com.kwad.components.core.l.a r0 = r2.onCreateCallerContext()
            r2.mCallerContext = r0
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            if (r0 != 0) goto L15
            com.kwad.sdk.mvp.Presenter r0 = r2.onCreatePresenter()
            r2.mPresenter = r0
            android.view.View r1 = r2.mRootView
            r0.F(r1)
        L15:
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            T extends com.kwad.components.core.l.a r1 = r2.mCallerContext
            r0.k(r1)
            return
    }

    @Override
    public void onActivityCreate() {
            r0 = this;
            super.onActivityCreate()
            r0.initMVP()
            r0.notifyOnCreate()
            return
    }

    protected abstract T onCreateCallerContext();

    protected abstract com.kwad.sdk.mvp.Presenter onCreatePresenter();

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            r1.notifyOnDestroy()
            T extends com.kwad.components.core.l.a r0 = r1.mCallerContext
            if (r0 == 0) goto Ld
            r0.release()
        Ld:
            com.kwad.sdk.mvp.Presenter r0 = r1.mPresenter
            if (r0 == 0) goto L14
            r0.destroy()
        L14:
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            super.onPause()
            r0.notifyOnPause()
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            super.onResume()
            r0.notifyOnResume()
            return
    }
}
