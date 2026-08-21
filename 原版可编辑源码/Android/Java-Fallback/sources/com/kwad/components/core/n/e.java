package com.kwad.components.core.n;

public class e extends com.kwad.sdk.api.core.fragment.KsFragment implements com.kwad.sdk.l.a.b {
    protected android.view.ViewGroup Pj;
    protected android.view.ViewGroup lJ;
    private final com.kwad.sdk.l.a.a mBackPressDelete;
    protected android.content.Context mContext;

    public e() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.l.a.a r0 = new com.kwad.sdk.l.a.a
            r0.<init>()
            r1.mBackPressDelete = r0
            return
    }

    @Override
    public boolean bP() {
            r1 = this;
            com.kwad.sdk.l.a.a r0 = r1.mBackPressDelete
            boolean r0 = r0.bP()
            return r0
    }

    public final <T extends android.view.View> T findViewById(int r2) {
            r1 = this;
            android.view.ViewGroup r0 = r1.lJ
            if (r0 == 0) goto L9
            android.view.View r2 = r0.findViewById(r2)
            return r2
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "ID does not reference a View inside this View"
            r2.<init>(r0)
            throw r2
    }

    protected android.view.ViewGroup lA() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final android.view.View onCreateView(android.view.LayoutInflater r2, android.view.ViewGroup r3, android.os.Bundle r4) {
            r1 = this;
            android.content.Context r2 = r2.getContext()
            android.content.Context r2 = com.kwad.sdk.m.l.wrapContextIfNeed(r2)
            r1.mContext = r2
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            r1.Pj = r3
            android.view.ViewGroup r4 = r1.lJ
            if (r4 != 0) goto L2f
            android.view.ViewGroup r4 = r1.lA()
            r1.lJ = r4
            if (r4 != 0) goto L2f
            int r4 = r1.ov()
            if (r4 == 0) goto L2f
            int r4 = r1.ov()
            r0 = 0
            android.view.View r2 = r2.inflate(r4, r3, r0)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.lJ = r2
        L2f:
            android.view.ViewGroup r2 = r1.lJ
            return r2
    }

    @Override
    public void onDestroy() {
            r2 = this;
            super.onDestroy()
            java.lang.Object r0 = r2.getHost()
            if (r0 == 0) goto L12
            android.content.Context r0 = r2.mContext
            android.view.View r1 = r2.getView()
            com.kwad.components.core.t.f.destroyFragment(r0, r1)
        L12:
            return
    }

    protected int ov() {
            r1 = this;
            r0 = 0
            return r0
    }
}
