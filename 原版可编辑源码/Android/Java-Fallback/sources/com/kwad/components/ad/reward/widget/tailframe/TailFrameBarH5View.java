package com.kwad.components.ad.reward.widget.tailframe;

public class TailFrameBarH5View extends android.widget.LinearLayout {
    protected android.widget.TextView dB;
    protected android.widget.TextView dC;
    protected android.animation.ValueAnimator iI;


    public TailFrameBarH5View(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public TailFrameBarH5View(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public TailFrameBarH5View(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private void f(android.content.Context r1, int r2) {
            r0 = this;
            com.kwad.sdk.m.l.inflate(r1, r2, r0)
            int r1 = com.kwad.sdk.R.id.ksad_tf_h5_ad_desc
            android.view.View r1 = r0.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r0.dB = r1
            int r1 = com.kwad.sdk.R.id.ksad_tf_h5_open_btn
            android.view.View r1 = r0.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r0.dC = r1
            return
    }

    private void kp() {
            r3 = this;
            android.animation.ValueAnimator r0 = r3.iI
            if (r0 == 0) goto Lc
            r3.kq()
            android.animation.ValueAnimator r0 = r3.iI
            r0.start()
        Lc:
            r0 = 3
            float[] r0 = new float[r0]
            r0 = {x003a: FILL_ARRAY_DATA , data: [1065353216, 1067030938, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r3.iI = r0
            r1 = 1200(0x4b0, double:5.93E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.iI
            r1 = -1
            r0.setRepeatCount(r1)
            android.animation.ValueAnimator r0 = r3.iI
            r1 = 1
            r0.setRepeatMode(r1)
            android.animation.ValueAnimator r0 = r3.iI
            com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View$1 r1 = new com.kwad.components.ad.reward.widget.tailframe.TailFrameBarH5View$1
            r1.<init>(r3)
            r0.addUpdateListener(r1)
            android.animation.ValueAnimator r0 = r3.iI
            r0.start()
            return
    }

    public final void b(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            android.widget.TextView r0 = r2.dB
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.an(r3)
            r0.setText(r1)
            android.widget.TextView r0 = r2.dC
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aw(r3)
            r0.setText(r3)
            r2.kp()
            return
    }

    public final void e(boolean r1, boolean r2) {
            r0 = this;
            if (r1 == 0) goto La
            if (r2 == 0) goto L7
            int r1 = com.kwad.sdk.R.layout.ksad_video_tf_bar_h5_portrait_vertical
            goto Lc
        L7:
            int r1 = com.kwad.sdk.R.layout.ksad_video_tf_bar_h5_portrait_horizontal
            goto Lc
        La:
            int r1 = com.kwad.sdk.R.layout.ksad_video_tf_bar_h5_landscape
        Lc:
            android.content.Context r2 = r0.getContext()
            r0.f(r2, r1)
            return
    }

    public android.widget.TextView getH5OpenBtn() {
            r1 = this;
            android.widget.TextView r0 = r1.dC
            return r0
    }

    public final void kq() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.iI
            if (r0 == 0) goto L14
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L14
            android.animation.ValueAnimator r0 = r1.iI
            r0.cancel()
            android.animation.ValueAnimator r0 = r1.iI
            r0.end()
        L14:
            return
    }
}
