package com.kwad.components.core.page.recycle;

public abstract class d extends android.support.v7.widget.RecyclerView.Adapter<com.kwad.components.core.page.recycle.c> {
    private java.util.List<com.kwad.sdk.mvp.Presenter> Oi;

    public d() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Oi = r0
            return
    }

    private void a(com.kwad.components.core.page.recycle.c r1) {
            r0 = this;
            super.onViewRecycled(r1)
            com.kwad.sdk.mvp.Presenter r1 = r1.mPresenter
            r1.lI()
            return
    }

    private com.kwad.components.core.page.recycle.c c(android.view.ViewGroup r2, int r3) {
            r1 = this;
            com.kwad.components.core.page.recycle.c r2 = r1.b(r2, r3)
            java.util.List<com.kwad.sdk.mvp.Presenter> r3 = r1.Oi
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            r3.add(r0)
            return r2
    }

    public void a(com.kwad.components.core.page.recycle.c r1, int r2) {
            r0 = this;
            com.kwad.sdk.mvp.Presenter r2 = r1.mPresenter
            com.kwad.components.core.page.recycle.e r1 = r1.Mz
            r2.k(r1)
            return
    }

    protected abstract com.kwad.components.core.page.recycle.c b(android.view.ViewGroup r1, int r2);

    @Override
    public void onBindViewHolder(android.support.v7.widget.RecyclerView.ViewHolder r1, int r2) {
            r0 = this;
            com.kwad.components.core.page.recycle.c r1 = (com.kwad.components.core.page.recycle.c) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public android.support.v7.widget.RecyclerView.ViewHolder onCreateViewHolder(android.view.ViewGroup r1, int r2) {
            r0 = this;
            com.kwad.components.core.page.recycle.c r1 = r0.c(r1, r2)
            return r1
    }

    @Override
    public void onDetachedFromRecyclerView(android.support.v7.widget.RecyclerView r1) {
            r0 = this;
            super.onDetachedFromRecyclerView(r1)
            r0.pl()
            return
    }

    @Override
    public void onViewRecycled(android.support.v7.widget.RecyclerView.ViewHolder r1) {
            r0 = this;
            com.kwad.components.core.page.recycle.c r1 = (com.kwad.components.core.page.recycle.c) r1
            r0.a(r1)
            return
    }

    public final void pl() {
            r2 = this;
            java.util.List<com.kwad.sdk.mvp.Presenter> r0 = r2.Oi
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.mvp.Presenter r1 = (com.kwad.sdk.mvp.Presenter) r1
            r1.destroy()
            goto L6
        L16:
            return
    }
}
