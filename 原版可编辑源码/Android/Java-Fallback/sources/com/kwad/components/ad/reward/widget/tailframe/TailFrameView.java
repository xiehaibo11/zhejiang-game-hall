package com.kwad.components.ad.reward.widget.tailframe;

public class TailFrameView extends com.kwad.sdk.widget.KSFrameLayout {
    private com.kwad.components.ad.reward.widget.tailframe.a By;
    private com.kwad.components.ad.reward.j qx;

    static class a extends com.kwad.components.ad.reward.widget.tailframe.a implements com.kwad.sdk.widget.c {
        public a() {
                r1 = this;
                int r0 = com.kwad.sdk.R.layout.ksad_video_tf_view_landscape_horizontal
                r1.<init>(r0)
                return
        }

        @Override
        public final void a(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2, com.kwad.components.ad.reward.widget.tailframe.b r3) {
                r0 = this;
                super.a(r1, r2, r3)
                android.widget.ImageView r1 = r0.Bp
                com.kwad.sdk.core.response.model.AdInfo r2 = r0.mAdInfo
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.P(r2)
                com.kwad.sdk.core.response.model.AdTemplate r3 = r0.mAdTemplate
                com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r2, r3)
                return
        }
    }

    static class b extends com.kwad.components.ad.reward.widget.tailframe.a implements com.kwad.sdk.widget.c {
        private android.widget.ImageView BA;
        private android.widget.ImageView BB;
        private android.widget.ImageView Bz;

        public b() {
                r1 = this;
                int r0 = com.kwad.sdk.R.layout.ksad_video_tf_view_landscape_vertical
                r1.<init>(r0)
                return
        }

        private void kr() {
                r3 = this;
                android.widget.ImageView r0 = r3.Bz
                com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
                java.lang.String r1 = com.kwad.sdk.core.response.b.a.P(r1)
                com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
                com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r1, r2)
                android.widget.ImageView r0 = r3.BA
                com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
                java.lang.String r1 = com.kwad.sdk.core.response.b.a.P(r1)
                com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
                com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r1, r2)
                android.widget.ImageView r0 = r3.BB
                com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
                java.lang.String r1 = com.kwad.sdk.core.response.b.a.P(r1)
                com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
                com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r1, r2)
                return
        }

        @Override
        public final void D(android.content.Context r2) {
                r1 = this;
                super.D(r2)
                android.view.View r2 = r1.Bo
                int r0 = com.kwad.sdk.R.id.ksad_video_thumb_left
                android.view.View r2 = r2.findViewById(r0)
                android.widget.ImageView r2 = (android.widget.ImageView) r2
                r1.Bz = r2
                android.view.View r2 = r1.Bo
                int r0 = com.kwad.sdk.R.id.ksad_video_thumb_mid
                android.view.View r2 = r2.findViewById(r0)
                android.widget.ImageView r2 = (android.widget.ImageView) r2
                r1.BA = r2
                android.view.View r2 = r1.Bo
                int r0 = com.kwad.sdk.R.id.ksad_video_thumb_right
                android.view.View r2 = r2.findViewById(r0)
                android.widget.ImageView r2 = (android.widget.ImageView) r2
                r1.BB = r2
                return
        }

        @Override
        public final void a(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2, com.kwad.components.ad.reward.widget.tailframe.b r3) {
                r0 = this;
                super.a(r1, r2, r3)
                r0.kr()
                return
        }
    }

    static class c extends com.kwad.components.ad.reward.widget.tailframe.a implements com.kwad.sdk.widget.c {
        private android.view.View BC;

        public c() {
                r1 = this;
                int r0 = com.kwad.sdk.R.layout.ksad_video_tf_view_portrait_horizontal
                r1.<init>(r0)
                return
        }

        private void kr() {
                r5 = this;
                com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
                com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aN(r0)
                int r1 = r0.width
                int r2 = r0.height
                android.view.View r3 = r5.Bo
                android.content.Context r3 = r3.getContext()
                int r3 = com.kwad.sdk.d.a.a.getScreenWidth(r3)
                float r4 = (float) r3
                float r2 = (float) r2
                float r1 = (float) r1
                float r2 = r2 / r1
                float r4 = r4 * r2
                int r1 = (int) r4
                android.widget.ImageView r2 = r5.Bp
                android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
                r2.width = r3
                r2.height = r1
                android.widget.ImageView r1 = r5.Bp
                java.lang.String r0 = r0.coverUrl
                com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
                com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r2)
                return
        }

        @Override
        public final void D(android.content.Context r2) {
                r1 = this;
                super.D(r2)
                android.view.View r2 = r1.Bo
                int r0 = com.kwad.sdk.R.id.video_cover
                android.view.View r2 = r2.findViewById(r0)
                r1.BC = r2
                return
        }

        @Override
        public final void a(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2, com.kwad.components.ad.reward.widget.tailframe.b r3) {
                r0 = this;
                super.a(r1, r2, r3)
                com.kwad.sdk.core.response.model.AdTemplate r1 = r0.mAdTemplate
                boolean r1 = com.kwad.sdk.core.response.b.d.s(r1)
                if (r1 == 0) goto L1d
                android.view.View r1 = r0.BC
                r2 = 8
                r1.setVisibility(r2)
                com.kwad.components.core.widget.KsLogoView r1 = r0.mLogoView
                r1.setVisibility(r2)
                android.view.View r1 = r0.Bo
                r2 = 0
                r1.setBackground(r2)
            L1d:
                r0.kr()
                return
        }
    }

    static class d extends com.kwad.components.ad.reward.widget.tailframe.a {
        public d() {
                r1 = this;
                int r0 = com.kwad.sdk.R.layout.ksad_video_tf_view_portrait_vertical
                r1.<init>(r0)
                return
        }

        @Override
        public final void a(com.kwad.sdk.core.response.model.AdTemplate r1, org.json.JSONObject r2, com.kwad.components.ad.reward.widget.tailframe.b r3) {
                r0 = this;
                super.a(r1, r2, r3)
                com.kwad.sdk.core.response.model.AdTemplate r1 = r0.mAdTemplate
                boolean r1 = com.kwad.sdk.core.response.b.d.s(r1)
                if (r1 == 0) goto L1d
                android.view.View r1 = r0.Bo
                r2 = 0
                r1.setBackground(r2)
                android.widget.ImageView r1 = r0.Bp
                r2 = 8
                r1.setVisibility(r2)
                com.kwad.components.core.widget.KsLogoView r1 = r0.mLogoView
                r1.setVisibility(r2)
            L1d:
                android.widget.ImageView r1 = r0.Bp
                com.kwad.sdk.core.response.model.AdInfo r2 = r0.mAdInfo
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.P(r2)
                com.kwad.sdk.core.response.model.AdTemplate r3 = r0.mAdTemplate
                com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r2, r3)
                return
        }
    }

    public TailFrameView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TailFrameView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public TailFrameView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public TailFrameView(android.content.Context r1, android.view.View r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private void d(boolean r2, boolean r3) {
            r1 = this;
            com.kwad.components.ad.reward.widget.tailframe.a r0 = r1.By
            if (r0 == 0) goto L5
            return
        L5:
            if (r2 == 0) goto L17
            if (r3 == 0) goto L11
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView$d r2 = new com.kwad.components.ad.reward.widget.tailframe.TailFrameView$d
            r2.<init>()
        Le:
            r1.By = r2
            return
        L11:
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView$c r2 = new com.kwad.components.ad.reward.widget.tailframe.TailFrameView$c
            r2.<init>()
            goto Le
        L17:
            if (r3 == 0) goto L1f
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView$b r2 = new com.kwad.components.ad.reward.widget.tailframe.TailFrameView$b
            r2.<init>()
            goto Le
        L1f:
            com.kwad.components.ad.reward.widget.tailframe.TailFrameView$a r2 = new com.kwad.components.ad.reward.widget.tailframe.TailFrameView$a
            r2.<init>()
            goto Le
    }

    public final void a(android.content.Context r2, boolean r3, boolean r4) {
            r1 = this;
            r1.d(r3, r4)
            com.kwad.components.ad.reward.widget.tailframe.a r0 = r1.By
            r0.D(r2)
            com.kwad.components.ad.reward.widget.tailframe.a r2 = r1.By
            r2.d(r3, r4)
            com.kwad.components.ad.reward.widget.tailframe.a r2 = r1.By
            android.view.View r2 = r2.kn()
            r3 = -1
            r1.addView(r2, r3, r3)
            return
    }

    public final void a(com.kwad.components.ad.reward.widget.tailframe.b r4) {
            r3 = this;
            com.kwad.components.ad.reward.widget.tailframe.a r0 = r3.By
            com.kwad.components.ad.reward.j r1 = r3.qx
            r0.setCallerContext(r1)
            com.kwad.components.ad.reward.widget.tailframe.a r0 = r3.By
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.components.ad.reward.j r2 = r3.qx
            org.json.JSONObject r2 = r2.mReportExtData
            r0.a(r1, r2, r4)
            return
    }

    public final void destroy() {
            r1 = this;
            com.kwad.components.ad.reward.widget.tailframe.a r0 = r1.By
            if (r0 == 0) goto L7
            r0.destroy()
        L7:
            return
    }

    public final void jV() {
            r1 = this;
            com.kwad.components.ad.reward.widget.tailframe.a r0 = r1.By
            r0.jV()
            return
    }

    public void setCallerContext(com.kwad.components.ad.reward.j r1) {
            r0 = this;
            r0.qx = r1
            return
    }
}
