package com.kwad.components.ad.widget.tailframe.appbar;

public class TailFrameBarAppPortraitVertical extends com.kwad.components.ad.widget.tailframe.appbar.a {
    public TailFrameBarAppPortraitVertical(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TailFrameBarAppPortraitVertical(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public TailFrameBarAppPortraitVertical(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            boolean r0 = com.kwad.sdk.core.response.b.d.s(r4)
            if (r0 == 0) goto L2a
            android.view.View r0 = r3.GA
            android.content.Context r1 = r3.getContext()
            int r2 = com.kwad.sdk.R.color.ksad_translucent
            int r1 = android.support.v4.content.ContextCompat.getColor(r1, r2)
            r0.setBackgroundColor(r1)
            android.widget.TextView r0 = r3.li
            java.lang.String r1 = "#FFFFFF"
            int r2 = android.graphics.Color.parseColor(r1)
            r0.setTextColor(r2)
            android.widget.TextView r0 = r3.HJ
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setTextColor(r1)
            goto L35
        L2a:
            android.view.View r0 = r3.GA
            java.lang.String r1 = "#E6FFFFFF"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setBackgroundColor(r1)
        L35:
            super.b(r4)
            return
    }

    @Override
    public int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_video_tf_bar_app_portrait_vertical
            return r0
    }
}
