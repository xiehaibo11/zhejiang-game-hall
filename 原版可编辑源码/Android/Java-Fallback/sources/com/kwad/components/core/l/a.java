package com.kwad.components.core.l;

public class a extends com.kwad.sdk.mvp.a {
    public java.util.List<com.kwad.components.core.l.a.a> Lg;
    private final com.kwad.components.core.l.b<?> Lh;
    public final android.content.Context mContext;
    public final android.view.View mRootView;

    public a(com.kwad.components.core.l.b<?> r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Lg = r0
            r1.Lh = r2
            android.content.Context r0 = r2.mContext
            r1.mContext = r0
            android.view.View r2 = r2.mRootView
            r1.mRootView = r2
            return
    }

    @java.lang.Deprecated
    public final android.app.Activity getActivity() {
            r1 = this;
            com.kwad.components.core.l.b<?> r0 = r1.Lh
            android.app.Activity r0 = r0.getActivity()
            return r0
    }

    public final void hw() {
            r1 = this;
            com.kwad.components.core.l.b<?> r0 = r1.Lh
            r0.finish()
            return
    }

    @Override
    public void release() {
            r1 = this;
            java.util.List<com.kwad.components.core.l.a.a> r0 = r1.Lg
            r0.clear()
            return
    }
}
