package com.kwad.components.ad.widget;

public class AppScoreView extends android.widget.LinearLayout {
    private android.widget.ImageView Hk;
    private android.widget.ImageView Hl;

    public AppScoreView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppScoreView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public AppScoreView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.initView()
            return
    }

    private void initView() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_app_score
            inflate(r0, r1, r2)
            int r0 = com.kwad.sdk.R.id.ksad_score_fourth
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.Hk = r0
            int r0 = com.kwad.sdk.R.id.ksad_score_fifth
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.Hl = r0
            return
    }

    public void setScore(float r5) {
            r4 = this;
            double r0 = (double) r5
            r2 = 4616752568008179712(0x4012000000000000, double:4.5)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L16
            android.widget.ImageView r5 = r4.Hk
            int r0 = com.kwad.sdk.R.drawable.ksad_star_checked
            r5.setImageResource(r0)
            android.widget.ImageView r5 = r4.Hl
            int r0 = com.kwad.sdk.R.drawable.ksad_star_checked
        L12:
            r5.setImageResource(r0)
            return
        L16:
            r2 = 4616189618054758400(0x4010000000000000, double:4.0)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L28
            android.widget.ImageView r5 = r4.Hk
            int r0 = com.kwad.sdk.R.drawable.ksad_star_checked
            r5.setImageResource(r0)
            android.widget.ImageView r5 = r4.Hl
            int r0 = com.kwad.sdk.R.drawable.ksad_star_half
            goto L12
        L28:
            r2 = 4615063718147915776(0x400c000000000000, double:3.5)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L3a
            android.widget.ImageView r5 = r4.Hk
            int r0 = com.kwad.sdk.R.drawable.ksad_star_checked
        L32:
            r5.setImageResource(r0)
            android.widget.ImageView r5 = r4.Hl
            int r0 = com.kwad.sdk.R.drawable.ksad_star_unchecked
            goto L12
        L3a:
            r2 = 4613937818241073152(0x4008000000000000, double:3.0)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L45
            android.widget.ImageView r5 = r4.Hk
            int r0 = com.kwad.sdk.R.drawable.ksad_star_half
            goto L32
        L45:
            if (r5 != 0) goto L55
            android.widget.ImageView r5 = r4.Hk
            int r0 = com.kwad.sdk.R.drawable.ksad_star_unchecked
            r5.setImageResource(r0)
            android.widget.ImageView r5 = r4.Hl
            int r0 = com.kwad.sdk.R.drawable.ksad_star_unchecked
            r5.setImageResource(r0)
        L55:
            return
    }
}
