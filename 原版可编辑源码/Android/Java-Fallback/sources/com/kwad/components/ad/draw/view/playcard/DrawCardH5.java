package com.kwad.components.ad.draw.view.playcard;

public class DrawCardH5 extends android.widget.FrameLayout implements android.view.View.OnClickListener {
    private android.animation.ValueAnimator dk;
    private com.kwad.components.ad.draw.view.playcard.DrawCardH5.a dm;
    private android.widget.ImageView dn;
    private android.widget.TextView do;
    private android.widget.TextView dp;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;
    private int mHeight;
    private com.kwad.components.core.widget.KsLogoView mLogoView;


    public interface a {
        void at();

        void au();
    }

    public DrawCardH5(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.D(r1)
            return
    }

    public DrawCardH5(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.D(r1)
            return
    }

    public DrawCardH5(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.D(r1)
            return
    }

    private void D(android.content.Context r2) {
            r1 = this;
            r1.mContext = r2
            int r0 = com.kwad.sdk.R.layout.ksad_draw_card_h5
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_card_close
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.dn = r2
            int r2 = com.kwad.sdk.R.id.ksad_card_ad_desc
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.do = r2
            int r2 = com.kwad.sdk.R.id.ksad_card_h5_open_btn
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.dp = r2
            int r2 = com.kwad.sdk.R.id.ksad_draw_h5_logo
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.core.widget.KsLogoView r2 = (com.kwad.components.core.widget.KsLogoView) r2
            r1.mLogoView = r2
            return
    }

    static com.kwad.components.ad.draw.view.playcard.DrawCardH5.a a(com.kwad.components.ad.draw.view.playcard.DrawCardH5 r0) {
            com.kwad.components.ad.draw.view.playcard.DrawCardH5$a r0 = r0.dm
            return r0
    }

    private void aE() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.dk
            if (r0 == 0) goto Lc
            r0.removeAllListeners()
            android.animation.ValueAnimator r0 = r1.dk
            r0.cancel()
        Lc:
            return
    }

    private void aO() {
            r2 = this;
            int r0 = r2.mHeight
            r1 = 0
            r2.d(r0, r1)
            return
    }

    private void d(int r3, int r4) {
            r2 = this;
            r2.aE()
            android.animation.ValueAnimator r3 = com.kwad.components.core.t.m.b(r2, r3, r4)
            r2.dk = r3
            android.view.animation.DecelerateInterpolator r4 = new android.view.animation.DecelerateInterpolator
            r0 = 1073741824(0x40000000, float:2.0)
            r4.<init>(r0)
            r3.setInterpolator(r4)
            android.animation.ValueAnimator r3 = r2.dk
            r0 = 300(0x12c, double:1.48E-321)
            r3.setDuration(r0)
            android.animation.ValueAnimator r3 = r2.dk
            r3.start()
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r3, com.kwad.components.ad.draw.view.playcard.DrawCardH5.a r4) {
            r2 = this;
            r2.mAdTemplate = r3
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            r2.dm = r4
            android.widget.TextView r4 = r2.do
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.an(r0)
            r4.setText(r1)
            android.widget.TextView r4 = r2.dp
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aw(r0)
            r4.setText(r0)
            android.widget.ImageView r4 = r2.dn
            r4.setOnClickListener(r2)
            android.widget.TextView r4 = r2.dp
            r4.setOnClickListener(r2)
            com.kwad.components.core.widget.KsLogoView r4 = r2.mLogoView
            r4.aa(r3)
            r2.setOnClickListener(r2)
            android.content.Context r3 = r2.mContext
            int r3 = com.kwad.sdk.utils.k.getScreenWidth(r3)
            android.content.Context r4 = r2.mContext
            r0 = 1098907648(0x41800000, float:16.0)
            int r4 = com.kwad.sdk.d.a.a.a(r4, r0)
            int r4 = r4 * 2
            int r3 = r3 - r4
            android.content.Context r4 = r2.mContext
            r0 = 1092616192(0x41200000, float:10.0)
            int r4 = com.kwad.sdk.d.a.a.a(r4, r0)
            int r4 = r4 * 2
            int r3 = r3 - r4
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r4)
            r4 = 0
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r4)
            android.widget.TextView r0 = r2.do
            r0.measure(r3, r4)
            android.content.Context r3 = r2.mContext
            r4 = 1120403456(0x42c80000, float:100.0)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r4)
            android.widget.TextView r4 = r2.do
            int r4 = r4.getMeasuredHeight()
            int r3 = r3 + r4
            r2.mHeight = r3
            return
    }

    public final void aM() {
            r2 = this;
            int r0 = r2.mHeight
            r1 = 0
            r2.d(r1, r0)
            return
    }

    @Override
    public void onClick(android.view.View r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.dn
            if (r2 != r0) goto Lf
            r1.aO()
            com.kwad.components.ad.draw.view.playcard.DrawCardH5$a r2 = r1.dm
            if (r2 == 0) goto L2a
            r2.at()
            return
        Lf:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r0 = r1.getContext()
            r2.<init>(r0)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r0)
            com.kwad.components.ad.draw.view.playcard.DrawCardH5$1 r0 = new com.kwad.components.ad.draw.view.playcard.DrawCardH5$1
            r0.<init>(r1)
            com.kwad.components.core.e.d.a$a r2 = r2.a(r0)
            com.kwad.components.core.e.d.a.a(r2)
        L2a:
            return
    }

    public final void release() {
            r0 = this;
            r0.aE()
            return
    }
}
