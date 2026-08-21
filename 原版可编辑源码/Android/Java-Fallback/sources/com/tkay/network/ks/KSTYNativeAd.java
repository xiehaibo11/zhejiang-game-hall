package com.tkay.network.ks;

public class KSTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    android.content.Context a;
    com.kwad.sdk.api.KsNativeAd b;
    android.view.View c;
    long d;
    android.widget.FrameLayout e;
    boolean f;
    int g;
    long h;

    final class 1 implements com.kwad.sdk.api.KsNativeAd.AdInteractionListener {
        final com.tkay.network.ks.KSTYNativeAd a;

        1(com.tkay.network.ks.KSTYNativeAd r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean handleDownloadDialog(android.content.DialogInterface.OnClickListener r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public final void onAdClicked(android.view.View r1, com.kwad.sdk.api.KsNativeAd r2) {
                r0 = this;
                com.tkay.network.ks.KSTYNativeAd r1 = r0.a
                r1.notifyAdClicked()
                return
        }

        @Override
        public final void onAdShow(com.kwad.sdk.api.KsNativeAd r4) {
                r3 = this;
                com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
                com.tkay.network.ks.KSTYNativeAd r1 = r3.a
                java.lang.String r1 = r1.getShowId()
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
                r2.<init>(r4)
                r0.a(r1, r2)
                com.tkay.network.ks.KSTYNativeAd r4 = r3.a
                r4.notifyAdImpression()
                return
        }

        @Override
        public final void onDownloadTipsDialogDismiss() {
                r0 = this;
                return
        }

        @Override
        public final void onDownloadTipsDialogShow() {
                r0 = this;
                return
        }
    }

    final class 2 implements com.kwad.sdk.api.KsAppDownloadListener {
        final com.tkay.network.ks.KSTYNativeAd a;

        2(com.tkay.network.ks.KSTYNativeAd r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onDownloadFailed() {
                r8 = this;
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.j(r0)
                if (r0 == 0) goto L2e
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.k(r0)
                boolean r0 = r0 instanceof com.tkay.china.api.CustomAdapterDownloadListener
                if (r0 == 0) goto L2e
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.l(r0)
                r1 = r0
                com.tkay.china.api.CustomAdapterDownloadListener r1 = (com.tkay.china.api.CustomAdapterDownloadListener) r1
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                long r2 = r0.d
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                long r4 = r0.h
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                java.lang.String r7 = r0.getTitle()
                java.lang.String r6 = ""
                r1.onDownloadFail(r2, r4, r6, r7)
            L2e:
                return
        }

        @Override
        public final void onDownloadFinished() {
                r5 = this;
                com.tkay.network.ks.KSTYNativeAd r0 = r5.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.g(r0)
                if (r0 == 0) goto L29
                com.tkay.network.ks.KSTYNativeAd r0 = r5.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.h(r0)
                boolean r0 = r0 instanceof com.tkay.china.api.CustomAdapterDownloadListener
                if (r0 == 0) goto L29
                com.tkay.network.ks.KSTYNativeAd r0 = r5.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.i(r0)
                com.tkay.china.api.CustomAdapterDownloadListener r0 = (com.tkay.china.api.CustomAdapterDownloadListener) r0
                com.tkay.network.ks.KSTYNativeAd r1 = r5.a
                long r1 = r1.d
                com.tkay.network.ks.KSTYNativeAd r3 = r5.a
                java.lang.String r3 = r3.getTitle()
                java.lang.String r4 = ""
                r0.onDownloadFinish(r1, r4, r3)
            L29:
                return
        }

        @Override
        public final void onDownloadStarted() {
                r8 = this;
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.a(r0)
                if (r0 == 0) goto L2c
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.b(r0)
                boolean r0 = r0 instanceof com.tkay.china.api.CustomAdapterDownloadListener
                if (r0 == 0) goto L2c
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.c(r0)
                r1 = r0
                com.tkay.china.api.CustomAdapterDownloadListener r1 = (com.tkay.china.api.CustomAdapterDownloadListener) r1
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                long r2 = r0.d
                r4 = 0
                com.tkay.network.ks.KSTYNativeAd r0 = r8.a
                java.lang.String r7 = r0.getTitle()
                java.lang.String r6 = ""
                r1.onDownloadStart(r2, r4, r6, r7)
            L2c:
                return
        }

        @Override
        public final void onIdle() {
                r0 = this;
                return
        }

        @Override
        public final void onInstalled() {
                r3 = this;
                com.tkay.network.ks.KSTYNativeAd r0 = r3.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.m(r0)
                if (r0 == 0) goto L25
                com.tkay.network.ks.KSTYNativeAd r0 = r3.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.n(r0)
                boolean r0 = r0 instanceof com.tkay.china.api.CustomAdapterDownloadListener
                if (r0 == 0) goto L25
                com.tkay.network.ks.KSTYNativeAd r0 = r3.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.o(r0)
                com.tkay.china.api.CustomAdapterDownloadListener r0 = (com.tkay.china.api.CustomAdapterDownloadListener) r0
                com.tkay.network.ks.KSTYNativeAd r1 = r3.a
                java.lang.String r1 = r1.getTitle()
                java.lang.String r2 = ""
                r0.onInstalled(r2, r1)
            L25:
                return
        }

        @Override
        public final void onProgressUpdate(int r8) {
                r7 = this;
                com.tkay.network.ks.KSTYNativeAd r0 = r7.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.d(r0)
                if (r0 == 0) goto L39
                com.tkay.network.ks.KSTYNativeAd r0 = r7.a
                com.tkay.core.api.TYEventInterface r0 = com.tkay.network.ks.KSTYNativeAd.e(r0)
                boolean r0 = r0 instanceof com.tkay.china.api.CustomAdapterDownloadListener
                if (r0 == 0) goto L39
                com.tkay.network.ks.KSTYNativeAd r0 = r7.a
                long r1 = r0.d
                long r3 = (long) r8
                long r1 = r1 * r3
                r3 = 100
                long r1 = r1 / r3
                r0.h = r1
                com.tkay.network.ks.KSTYNativeAd r8 = r7.a
                com.tkay.core.api.TYEventInterface r8 = com.tkay.network.ks.KSTYNativeAd.f(r8)
                r0 = r8
                com.tkay.china.api.CustomAdapterDownloadListener r0 = (com.tkay.china.api.CustomAdapterDownloadListener) r0
                com.tkay.network.ks.KSTYNativeAd r8 = r7.a
                long r1 = r8.d
                com.tkay.network.ks.KSTYNativeAd r8 = r7.a
                long r3 = r8.h
                com.tkay.network.ks.KSTYNativeAd r8 = r7.a
                java.lang.String r6 = r8.getTitle()
                java.lang.String r5 = ""
                r0.onDownloadUpdate(r1, r3, r5, r6)
            L39:
                return
        }
    }

    final class 3 implements com.kwad.sdk.api.KsNativeAd.VideoPlayListener {
        final com.tkay.network.ks.KSTYNativeAd a;

        3(com.tkay.network.ks.KSTYNativeAd r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onVideoPlayComplete() {
                r1 = this;
                com.tkay.network.ks.KSTYNativeAd r0 = r1.a
                r0.notifyAdVideoEnd()
                return
        }

        @Override
        public final void onVideoPlayError(int r3, int r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "KuaiShou Video play error:"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r1 = " "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "tkay"
                android.util.Log.i(r1, r0)
                com.tkay.network.ks.KSTYNativeAd r0 = r2.a
                java.lang.String r3 = java.lang.String.valueOf(r3)
                java.lang.String r4 = java.lang.String.valueOf(r4)
                r0.notifyAdVideoVideoPlayFail(r3, r4)
                return
        }

        @Override
        public final void onVideoPlayPause() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoPlayReady() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoPlayResume() {
                r0 = this;
                return
        }

        @Override
        public final void onVideoPlayStart() {
                r1 = this;
                com.tkay.network.ks.KSTYNativeAd r0 = r1.a
                r0.notifyAdVideoStart()
                return
        }
    }

    public KSTYNativeAd(android.content.Context r7, com.kwad.sdk.api.KsNativeAd r8, boolean r9) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.d = r0
            r2 = 0
            r6.g = r2
            r6.h = r0
            android.content.Context r0 = r7.getApplicationContext()
            r6.a = r0
            r6.b = r8
            r6.f = r9
            java.lang.String r8 = r8.getAppName()
            r6.setTitle(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            java.lang.String r8 = r8.getAppIconUrl()
            r6.setIconImageUrl(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            java.lang.String r8 = r8.getAdSource()
            r6.setAdFrom(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            float r8 = r8.getAppScore()
            double r8 = (double) r8
            java.lang.Double r8 = java.lang.Double.valueOf(r8)
            r6.setStarRating(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            java.lang.String r8 = r8.getAdDescription()
            r6.setDescriptionText(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            java.lang.String r8 = r8.getAdSourceLogoUrl(r2)
            r6.setAdChoiceIconUrl(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getInteractionType()
            r9 = 1
            if (r8 != r9) goto L5a
            r8 = r9
            goto L5b
        L5a:
            r8 = r2
        L5b:
            com.kwad.sdk.api.KsNativeAd r0 = r6.b
            int r0 = r0.getInteractionType()
            r1 = 3
            r3 = 2
            if (r0 != r3) goto L66
            r8 = r1
        L66:
            r6.setNativeInteractionType(r8)
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            com.kwad.sdk.api.KsNativeAd r0 = r6.b
            java.util.List r0 = r0.getImageList()
            if (r0 == 0) goto Lab
            int r4 = r0.size()
            if (r4 <= 0) goto Lab
        L7c:
            int r4 = r0.size()
            if (r2 >= r4) goto Lab
            java.lang.Object r4 = r0.get(r2)
            com.kwad.sdk.api.KsImage r4 = (com.kwad.sdk.api.KsImage) r4
            if (r4 == 0) goto La8
            java.lang.String r5 = r4.getImageUrl()
            r8.add(r5)
            if (r2 != 0) goto La8
            java.lang.String r5 = r4.getImageUrl()
            r6.setMainImageUrl(r5)
            int r5 = r4.getWidth()
            r6.setMainImageWidth(r5)
            int r4 = r4.getHeight()
            r6.setMainImageHeight(r4)
        La8:
            int r2 = r2 + 1
            goto L7c
        Lab:
            r6.setImageUrlList(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            java.lang.String r8 = r8.getActionDescription()
            r6.setCallToActionText(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getVideoDuration()
            double r4 = (double) r8
            r6.setVideoDuration(r4)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            java.lang.String r8 = r8.getVideoUrl()
            r6.setVideoUrl(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getVideoWidth()
            r6.setVideoWidth(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getVideoHeight()
            r6.setVideoHeight(r8)
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            long r4 = r8.getAppPackageSize()
            r6.d = r4
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getInteractionType()
            if (r8 != r9) goto Lf6
            com.tkay.network.ks.KSATDownloadAppInfo r8 = new com.tkay.network.ks.KSATDownloadAppInfo
            com.kwad.sdk.api.KsNativeAd r0 = r6.b
            r8.<init>(r0)
            r6.setAdAppInfo(r8)
        Lf6:
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getMaterialType()
            if (r8 != r9) goto L103
            java.lang.String r8 = "1"
            r6.mAdSourceType = r8
            goto L117
        L103:
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getMaterialType()
            if (r8 == r1) goto L113
            com.kwad.sdk.api.KsNativeAd r8 = r6.b
            int r8 = r8.getMaterialType()
            if (r8 != r3) goto L117
        L113:
            java.lang.String r8 = "2"
            r6.mAdSourceType = r8
        L117:
            android.widget.FrameLayout r8 = new android.widget.FrameLayout
            android.content.Context r7 = r7.getApplicationContext()
            r8.<init>(r7)
            r6.e = r8
            return
    }

    static com.tkay.core.api.TYEventInterface a(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    private void a() {
            r8 = this;
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            java.lang.String r0 = r0.getAppName()
            r8.setTitle(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            java.lang.String r0 = r0.getAppIconUrl()
            r8.setIconImageUrl(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            java.lang.String r0 = r0.getAdSource()
            r8.setAdFrom(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            float r0 = r0.getAppScore()
            double r0 = (double) r0
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            r8.setStarRating(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            java.lang.String r0 = r0.getAdDescription()
            r8.setDescriptionText(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            r1 = 0
            java.lang.String r0 = r0.getAdSourceLogoUrl(r1)
            r8.setAdChoiceIconUrl(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getInteractionType()
            r2 = 1
            if (r0 != r2) goto L47
            r0 = r2
            goto L48
        L47:
            r0 = r1
        L48:
            com.kwad.sdk.api.KsNativeAd r3 = r8.b
            int r3 = r3.getInteractionType()
            r4 = 3
            r5 = 2
            if (r3 != r5) goto L53
            r0 = r4
        L53:
            r8.setNativeInteractionType(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.api.KsNativeAd r3 = r8.b
            java.util.List r3 = r3.getImageList()
            if (r3 == 0) goto L98
            int r6 = r3.size()
            if (r6 <= 0) goto L98
        L69:
            int r6 = r3.size()
            if (r1 >= r6) goto L98
            java.lang.Object r6 = r3.get(r1)
            com.kwad.sdk.api.KsImage r6 = (com.kwad.sdk.api.KsImage) r6
            if (r6 == 0) goto L95
            java.lang.String r7 = r6.getImageUrl()
            r0.add(r7)
            if (r1 != 0) goto L95
            java.lang.String r7 = r6.getImageUrl()
            r8.setMainImageUrl(r7)
            int r7 = r6.getWidth()
            r8.setMainImageWidth(r7)
            int r6 = r6.getHeight()
            r8.setMainImageHeight(r6)
        L95:
            int r1 = r1 + 1
            goto L69
        L98:
            r8.setImageUrlList(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            java.lang.String r0 = r0.getActionDescription()
            r8.setCallToActionText(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getVideoDuration()
            double r0 = (double) r0
            r8.setVideoDuration(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            java.lang.String r0 = r0.getVideoUrl()
            r8.setVideoUrl(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getVideoWidth()
            r8.setVideoWidth(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getVideoHeight()
            r8.setVideoHeight(r0)
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            long r0 = r0.getAppPackageSize()
            r8.d = r0
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getInteractionType()
            if (r0 != r2) goto Le3
            com.tkay.network.ks.KSATDownloadAppInfo r0 = new com.tkay.network.ks.KSATDownloadAppInfo
            com.kwad.sdk.api.KsNativeAd r1 = r8.b
            r0.<init>(r1)
            r8.setAdAppInfo(r0)
        Le3:
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getMaterialType()
            if (r0 != r2) goto Lf0
            java.lang.String r0 = "1"
            r8.mAdSourceType = r0
            return
        Lf0:
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getMaterialType()
            if (r0 == r4) goto L100
            com.kwad.sdk.api.KsNativeAd r0 = r8.b
            int r0 = r0.getMaterialType()
            if (r0 != r5) goto L104
        L100:
            java.lang.String r0 = "2"
            r8.mAdSourceType = r0
        L104:
            return
    }

    private void a(android.view.View r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = r3 instanceof android.view.ViewGroup
            r1 = 0
            if (r0 == 0) goto L1f
            android.view.View r0 = r2.c
            if (r3 == r0) goto L1f
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
        Le:
            int r0 = r3.getChildCount()
            if (r1 >= r0) goto L1e
            android.view.View r0 = r3.getChildAt(r1)
            r2.a(r0)
            int r1 = r1 + 1
            goto Le
        L1e:
            return
        L1f:
            r0 = 0
            r3.setOnClickListener(r0)
            r3.setClickable(r1)
            return
    }

    private void a(android.view.ViewGroup r3, java.util.List<android.view.View> r4) {
            r2 = this;
            com.kwad.sdk.api.KsNativeAd r0 = r2.b
            com.tkay.network.ks.KSTYNativeAd$1 r1 = new com.tkay.network.ks.KSTYNativeAd$1
            r1.<init>(r2)
            r0.registerViewForInteraction(r3, r4, r1)
            com.kwad.sdk.api.KsNativeAd r4 = r2.b
            com.tkay.network.ks.KSTYNativeAd$2 r0 = new com.tkay.network.ks.KSTYNativeAd$2
            r0.<init>(r2)
            r4.setDownloadListener(r0)
            com.kwad.sdk.api.KsNativeAd r4 = r2.b
            com.tkay.network.ks.KSTYNativeAd$3 r0 = new com.tkay.network.ks.KSTYNativeAd$3
            r0.<init>(r2)
            r4.setVideoPlayListener(r0)
            com.kwad.sdk.api.KsNativeAd r4 = r2.b
            int r4 = r4.getMaterialType()
            r0 = 1
            if (r4 != r0) goto L5f
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r4 = new com.kwad.sdk.api.KsAdVideoPlayConfig$Builder
            r4.<init>()
            boolean r1 = r2.f
            r4.videoSoundEnable(r1)
            int r1 = r2.g
            if (r1 <= 0) goto L3c
            if (r1 == r0) goto L38
            goto L39
        L38:
            r0 = 0
        L39:
            r4.videoSoundEnable(r0)
        L3c:
            com.kwad.sdk.api.KsNativeAd r0 = r2.b
            android.content.Context r3 = r3.getContext()
            com.kwad.sdk.api.KsAdVideoPlayConfig r4 = r4.build()
            android.view.View r3 = r0.getVideoView(r3, r4)
            r2.c = r3
            if (r3 == 0) goto L5f
            android.widget.FrameLayout r4 = r2.e
            if (r4 == 0) goto L5f
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto L5f
            android.widget.FrameLayout r3 = r2.e
            android.view.View r4 = r2.c
            r3.addView(r4)
        L5f:
            return
    }

    private void a(java.util.List<android.view.View> r3, android.view.View r4) {
            r2 = this;
            boolean r0 = r4 instanceof android.view.ViewGroup
            if (r0 == 0) goto L1c
            android.view.View r0 = r2.c
            if (r4 == r0) goto L1c
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            r0 = 0
        Lb:
            int r1 = r4.getChildCount()
            if (r0 >= r1) goto L1b
            android.view.View r1 = r4.getChildAt(r0)
            r2.a(r3, r1)
            int r0 = r0 + 1
            goto Lb
        L1b:
            return
        L1c:
            android.view.View r0 = r2.c
            if (r4 == r0) goto L23
            r3.add(r4)
        L23:
            return
    }

    static com.tkay.core.api.TYEventInterface b(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface c(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface d(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface e(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface f(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface g(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface h(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface i(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface j(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface k(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface l(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface m(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface n(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface o(com.tkay.network.ks.KSTYNativeAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            r0.a(r1)
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.kwad.sdk.api.KsNativeAd r0 = r2.b
            r1 = 0
            if (r0 == 0) goto Ld
            r0.setDownloadListener(r1)
            com.kwad.sdk.api.KsNativeAd r0 = r2.b     // Catch: java.lang.Exception -> Ld
            r0.registerViewForInteraction(r1, r1, r1)     // Catch: java.lang.Exception -> Ld
        Ld:
            r2.a = r1
            r2.e = r1
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r2) {
            r1 = this;
            com.kwad.sdk.api.KsNativeAd r2 = r1.b
            int r2 = r2.getMaterialType()
            r0 = 1
            if (r2 != r0) goto Lc
            android.widget.FrameLayout r2 = r1.e
            return r2
        Lc:
            r2 = 0
            return r2
    }

    @Override
    public void prepare(android.view.View r3, com.tkay.nativead.api.TYNativePrepareInfo r4) {
            r2 = this;
            java.util.List r4 = r4.getClickViewList()
            if (r4 == 0) goto Lc
            int r0 = r4.size()
            if (r0 > 0) goto L14
        Lc:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r2.a(r4, r3)
        L14:
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            com.kwad.sdk.api.KsNativeAd r0 = r2.b
            com.tkay.network.ks.KSTYNativeAd$1 r1 = new com.tkay.network.ks.KSTYNativeAd$1
            r1.<init>(r2)
            r0.registerViewForInteraction(r3, r4, r1)
            com.kwad.sdk.api.KsNativeAd r4 = r2.b
            com.tkay.network.ks.KSTYNativeAd$2 r0 = new com.tkay.network.ks.KSTYNativeAd$2
            r0.<init>(r2)
            r4.setDownloadListener(r0)
            com.kwad.sdk.api.KsNativeAd r4 = r2.b
            com.tkay.network.ks.KSTYNativeAd$3 r0 = new com.tkay.network.ks.KSTYNativeAd$3
            r0.<init>(r2)
            r4.setVideoPlayListener(r0)
            com.kwad.sdk.api.KsNativeAd r4 = r2.b
            int r4 = r4.getMaterialType()
            r0 = 1
            if (r4 != r0) goto L75
            com.kwad.sdk.api.KsAdVideoPlayConfig$Builder r4 = new com.kwad.sdk.api.KsAdVideoPlayConfig$Builder
            r4.<init>()
            boolean r1 = r2.f
            r4.videoSoundEnable(r1)
            int r1 = r2.g
            if (r1 <= 0) goto L52
            if (r1 == r0) goto L4e
            goto L4f
        L4e:
            r0 = 0
        L4f:
            r4.videoSoundEnable(r0)
        L52:
            com.kwad.sdk.api.KsNativeAd r0 = r2.b
            android.content.Context r3 = r3.getContext()
            com.kwad.sdk.api.KsAdVideoPlayConfig r4 = r4.build()
            android.view.View r3 = r0.getVideoView(r3, r4)
            r2.c = r3
            if (r3 == 0) goto L75
            android.widget.FrameLayout r4 = r2.e
            if (r4 == 0) goto L75
            android.view.ViewParent r3 = r3.getParent()
            if (r3 != 0) goto L75
            android.widget.FrameLayout r3 = r2.e
            android.view.View r4 = r2.c
            r3.addView(r4)
        L75:
            return
    }

    @Override
    public void setVideoMute(boolean r1) {
            r0 = this;
            super.setVideoMute(r1)
            if (r1 == 0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 2
        L8:
            r0.g = r1
            return
    }
}
