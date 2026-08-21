package com.kwad.components.core.page.recycle;

public abstract class a extends com.kwad.components.core.n.e {
    private android.support.v7.widget.RecyclerView ND;
    private com.kwad.components.core.page.recycle.d NE;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void pb() {
            r2 = this;
            int r0 = pf()
            android.view.View r0 = r2.findViewById(r0)
            android.support.v7.widget.RecyclerView r0 = (android.support.v7.widget.RecyclerView) r0
            r2.ND = r0
            r1 = 0
            r0.setItemAnimator(r1)
            android.support.v7.widget.RecyclerView r0 = r2.ND
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r2.pe()
            r0.setLayoutManager(r1)
            android.support.v7.widget.RecyclerView r0 = r2.ND
            com.kwad.components.core.page.recycle.d r0 = r2.a(r0)
            r2.NE = r0
            return
    }

    private void pc() {
            r2 = this;
            android.support.v7.widget.RecyclerView r0 = r2.ND
            com.kwad.components.core.page.recycle.d r1 = r2.NE
            r0.setAdapter(r1)
            return
    }

    private android.support.v7.widget.RecyclerView.LayoutManager pe() {
            r2 = this;
            android.support.v7.widget.LinearLayoutManager r0 = new android.support.v7.widget.LinearLayoutManager
            android.content.Context r1 = r2.mContext
            r0.<init>(r1)
            return r0
    }

    private static int pf() {
            int r0 = com.kwad.sdk.R.id.ksad_recycler_view
            return r0
    }

    protected abstract com.kwad.components.core.page.recycle.d a(android.support.v7.widget.RecyclerView r1);

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            super.onActivityResult(r1, r2, r3)
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public void onDestroyView() {
            r1 = this;
            super.onDestroyView()
            android.support.v7.widget.RecyclerView r0 = r1.ND
            r0.clearOnChildAttachStateChangeListeners()
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            super.onPause()
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            super.onResume()
            return
    }

    @Override
    public void onViewCreated(android.view.View r1, android.os.Bundle r2) {
            r0 = this;
            super.onViewCreated(r1, r2)
            r0.pb()
            r0.pc()
            return
    }

    public final android.support.v7.widget.RecyclerView pd() {
            r1 = this;
            android.support.v7.widget.RecyclerView r0 = r1.ND
            return r0
    }
}
