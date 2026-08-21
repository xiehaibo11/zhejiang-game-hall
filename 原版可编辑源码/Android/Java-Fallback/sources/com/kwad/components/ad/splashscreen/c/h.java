package com.kwad.components.ad.splashscreen.c;

public final class h extends com.kwad.components.ad.splashscreen.c.e {
    private android.widget.ImageView CO;
    private android.widget.ImageView CP;
    private boolean CQ;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;

    final class 1 implements com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener {
        final com.kwad.components.ad.splashscreen.c.h CR;


        1(com.kwad.components.ad.splashscreen.c.h r1) {
                r0 = this;
                r0.CR = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean onDecode(java.lang.String r1, java.io.InputStream r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public final void onLoadingCancelled(java.lang.String r1, android.view.View r2) {
                r0 = this;
                return
        }

        @Override
        public final void onLoadingComplete(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
                r0 = this;
                com.kwad.components.ad.splashscreen.c.h r1 = r0.CR
                android.widget.ImageView r1 = com.kwad.components.ad.splashscreen.c.h.b(r1)
                r2 = 0
                r1.setVisibility(r2)
                java.util.concurrent.ExecutorService r1 = com.kwad.sdk.core.threads.GlobalThreadPools.CR()
                com.kwad.components.ad.splashscreen.c.h$1$1 r2 = new com.kwad.components.ad.splashscreen.c.h$1$1
                r2.<init>(r0, r3)
                r1.submit(r2)
                return
        }

        @Override
        public final void onLoadingFailed(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.assist.FailReason r3) {
                r0 = this;
                com.kwad.components.ad.splashscreen.c.h r1 = r0.CR
                boolean r1 = com.kwad.components.ad.splashscreen.c.h.a(r1)
                if (r1 != 0) goto L12
                com.kwad.components.ad.splashscreen.c.h r1 = r0.CR
                com.kwad.components.ad.splashscreen.h r1 = r1.CM
                r2 = 0
                java.lang.String r3 = "load image error"
                r1.g(r2, r3)
            L12:
                return
        }

        @Override
        public final void onLoadingStarted(java.lang.String r1, android.view.View r2) {
                r0 = this;
                return
        }
    }




    public h() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.CQ = r0
            return
    }

    private void a(android.widget.ImageView r3) {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.splash_play_card_view
            android.view.View r0 = r0.findViewById(r1)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1 = 0
            r0.setClipChildren(r1)
            com.kwad.components.ad.splashscreen.c.h$4 r0 = new com.kwad.components.ad.splashscreen.c.h$4
            r0.<init>(r2, r3)
            r3.post(r0)
            return
    }

    private void a(android.widget.ImageView r3, com.kwad.sdk.core.response.model.AdInfo r4) {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.splash_play_card_view
            android.view.View r0 = r0.findViewById(r1)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1 = 0
            r0.setClipChildren(r1)
            com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo r0 = com.kwad.sdk.core.response.b.a.bT(r4)
            com.kwad.components.ad.splashscreen.c.h$3 r1 = new com.kwad.components.ad.splashscreen.c.h$3
            r1.<init>(r2, r3, r4, r0)
            r3.post(r1)
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.c.h r0) {
            boolean r0 = r0.CQ
            return r0
    }

    static android.widget.ImageView b(com.kwad.components.ad.splashscreen.c.h r0) {
            android.widget.ImageView r0 = r0.CP
            return r0
    }

    static android.content.Context c(com.kwad.components.ad.splashscreen.c.h r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void k(java.lang.String r3, int r4) {
            r2 = this;
            r0 = 0
            if (r4 != 0) goto L1e
            android.widget.ImageView r4 = r2.CO
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP
            r4.setScaleType(r1)
            android.widget.ImageView r4 = r2.CO
            r4.setVisibility(r0)
            android.widget.ImageView r4 = r2.CO
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.splashscreen.c.h$1 r1 = new com.kwad.components.ad.splashscreen.c.h$1
            r1.<init>(r2)
        L1a:
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r4, r3, r0, r1)
            return
        L1e:
            android.widget.ImageView r4 = r2.CP
            r4.setVisibility(r0)
            com.kwad.sdk.core.config.item.d r4 = com.kwad.components.ad.splashscreen.b.a.Cy
            boolean r4 = com.kwad.sdk.core.config.d.a(r4)
            if (r4 == 0) goto L33
            android.widget.ImageView r4 = r2.CP
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            r2.a(r4, r0)
            goto L38
        L33:
            android.widget.ImageView r4 = r2.CP
            r2.a(r4)
        L38:
            android.widget.ImageView r4 = r2.CP
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.splashscreen.c.h$2 r1 = new com.kwad.components.ad.splashscreen.c.h$2
            r1.<init>(r2)
            goto L1a
    }

    @Override
    public final void ah() {
            r7 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r7.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_splash_background
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r7.CP = r0
            com.kwad.components.ad.splashscreen.h r0 = r7.CM
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.mRootContainer
            int r1 = com.kwad.sdk.R.id.ksad_splash_foreground
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r7.CO = r0
            com.kwad.components.ad.splashscreen.h r0 = r7.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r7.mAdInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aM(r0)
            java.lang.String r0 = r0.materialUrl
            android.widget.ImageView r1 = r7.CP
            r2 = 0
            r1.setVisibility(r2)
            com.kwad.sdk.core.response.model.AdInfo r1 = r7.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = com.kwad.sdk.core.response.b.a.aM(r1)
            int r1 = r1.source
            android.content.Context r2 = r7.getContext()
            if (r2 == 0) goto L6d
            com.kwad.components.ad.splashscreen.SplashPreloadManager.kB()
            com.kwad.sdk.core.response.model.AdInfo r2 = r7.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r2 = r2.adPreloadInfo
            java.lang.String r2 = r2.preloadId
            java.io.File r2 = com.kwad.components.ad.splashscreen.SplashPreloadManager.X(r2)
            if (r2 == 0) goto L6a
            boolean r3 = r2.exists()
            if (r3 == 0) goto L6a
            long r3 = r2.length()
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L6a
            android.net.Uri r0 = android.net.Uri.fromFile(r2)
            java.lang.String r0 = r0.toString()
        L6a:
            r7.k(r0, r1)
        L6d:
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 1
            r1.CQ = r0
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            return
    }
}
