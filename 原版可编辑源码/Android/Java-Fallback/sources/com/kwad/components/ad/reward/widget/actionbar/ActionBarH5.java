package com.kwad.components.ad.reward.widget.actionbar;

public class ActionBarH5 extends android.widget.FrameLayout implements com.kwad.sdk.widget.c {
    private android.widget.TextView Bk;
    private com.kwad.components.ad.reward.widget.actionbar.ActionBarH5.a Bl;
    private android.view.View Bm;
    private android.widget.TextView dC;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;


    public interface a {
        void P(boolean r1);
    }

    public ActionBarH5(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.D(r1)
            return
    }

    public ActionBarH5(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.D(r1)
            return
    }

    public ActionBarH5(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.D(r1)
            return
    }

    private void D(android.content.Context r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_video_actionbar_h5
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_h5_ad_desc
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.Bk = r2
            int r2 = com.kwad.sdk.R.id.ksad_h5_open_btn
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.dC = r2
            int r2 = com.kwad.sdk.R.id.ksad_download_bar_cover
            android.view.View r2 = r1.findViewById(r2)
            r1.Bm = r2
            return
    }

    static com.kwad.components.ad.reward.widget.actionbar.ActionBarH5.a a(com.kwad.components.ad.reward.widget.actionbar.ActionBarH5 r0) {
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5$a r0 = r0.Bl
            return r0
    }

    private void b(android.view.View r3, boolean r4) {
            r2 = this;
            android.view.View r0 = r2.Bm
            if (r3 != r0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 2
        L7:
            com.kwad.components.core.e.d.a$a r1 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r3.getContext()
            r1.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r3 = r1.P(r3)
            com.kwad.components.core.e.d.a$a r3 = r3.ao(r0)
            com.kwad.components.ad.reward.widget.actionbar.ActionBarH5$1 r0 = new com.kwad.components.ad.reward.widget.actionbar.ActionBarH5$1
            r0.<init>(r2, r4)
            com.kwad.components.core.e.d.a$a r3 = r3.a(r0)
            com.kwad.components.core.e.d.a.a(r3)
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.b(r2, r0)
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.ad.reward.widget.actionbar.ActionBarH5.a r3) {
            r1 = this;
            r1.mAdTemplate = r2
            r1.Bl = r3
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            android.widget.TextView r3 = r1.Bk
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r2)
            r3.setText(r0)
            android.widget.TextView r3 = r1.dC
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r2)
            r3.setText(r2)
            r2 = 1
            r1.setClickable(r2)
            android.view.View r3 = r1.Bm
            r3.setClickable(r2)
            com.kwad.sdk.widget.f r2 = new com.kwad.sdk.widget.f
            android.view.View r3 = r1.Bm
            r2.<init>(r3, r1)
            com.kwad.sdk.widget.f r2 = new com.kwad.sdk.widget.f
            r2.<init>(r1, r1)
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            r1.b(r2, r0)
        Lc:
            return
    }
}
