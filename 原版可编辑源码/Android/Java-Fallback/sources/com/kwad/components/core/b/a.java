package com.kwad.components.core.b;

public final class a implements android.view.View.OnClickListener {
    private android.widget.TextView HZ;
    private android.widget.ImageView Ia;
    private android.widget.ImageView Ib;
    private com.kwad.components.core.b.a.a Ic;
    private android.view.ViewGroup sw;

    public interface a {
        void t(android.view.View r1);

        void u(android.view.View r1);
    }

    public a(android.view.ViewGroup r2) {
            r1 = this;
            r1.<init>()
            if (r2 != 0) goto L6
            return
        L6:
            int r0 = com.kwad.sdk.R.id.ksad_kwad_web_title_bar
            android.view.View r2 = r2.findViewById(r0)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.sw = r2
            if (r2 != 0) goto L13
            return
        L13:
            r1.initView()
            return
    }

    private void initView() {
            r2 = this;
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_kwad_titlebar_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.HZ = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_kwad_web_navi_back
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.Ia = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_kwad_web_navi_close
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.Ib = r0
            r0.setOnClickListener(r2)
            android.widget.ImageView r0 = r2.Ia
            r0.setOnClickListener(r2)
            return
    }

    public final void a(com.kwad.components.core.b.a.a r1) {
            r0 = this;
            r0.Ic = r1
            return
    }

    public final void a(com.kwad.components.core.b.b r2) {
            r1 = this;
            android.view.ViewGroup r0 = r1.sw
            if (r0 != 0) goto L5
            return
        L5:
            android.widget.TextView r0 = r1.HZ
            if (r0 == 0) goto L10
            java.lang.String r2 = r2.getTitle()
            r0.setText(r2)
        L10:
            return
    }

    public final void aj(boolean r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.Ib
            if (r0 == 0) goto Ld
            if (r2 == 0) goto L8
            r2 = 0
            goto La
        L8:
            r2 = 8
        La:
            r0.setVisibility(r2)
        Ld:
            return
    }

    public final android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.sw
            return r0
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            com.kwad.components.core.b.a$a r0 = r1.Ic
            if (r0 != 0) goto L5
            return
        L5:
            android.widget.ImageView r0 = r1.Ib
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L13
            com.kwad.components.core.b.a$a r0 = r1.Ic
            r0.u(r2)
            return
        L13:
            android.widget.ImageView r0 = r1.Ia
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L20
            com.kwad.components.core.b.a$a r0 = r1.Ic
            r0.t(r2)
        L20:
            return
    }
}
