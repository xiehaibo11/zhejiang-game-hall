package com.tkay.expressad.video.signal.a;

public final class k extends com.tkay.expressad.video.signal.a.d {
    private com.tkay.expressad.video.module.TkayContainerView k;

    public k(com.tkay.expressad.video.module.TkayContainerView r1) {
            r0 = this;
            r0.<init>()
            r0.k = r1
            return
    }

    @Override
    public final void configurationChanged(int r2, int r3, int r4) {
            r1 = this;
            super.configurationChanged(r2, r3, r4)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.configurationChanged(r2, r3, r4)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final boolean endCardShowing() {
            r1 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lf
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.endCardShowing()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            boolean r0 = super.endCardShowing()
            return r0
    }

    @Override
    public final void hideAlertWebview() {
            r1 = this;
            super.hideAlertWebview()
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k
            if (r0 == 0) goto La
            r0.hideAlertWebview()
        La:
            return
    }

    @Override
    public final void install(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            super.install(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.install(r2)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void ivRewardAdsWithoutVideo(java.lang.String r2) {
            r1 = this;
            super.ivRewardAdsWithoutVideo(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k
            if (r0 == 0) goto La
            r0.ivRewardAdsWithoutVideo(r2)
        La:
            return
    }

    @Override
    public final boolean miniCardLoaded() {
            r1 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lf
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.miniCardLoaded()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            boolean r0 = super.miniCardLoaded()
            return r0
    }

    @Override
    public final boolean miniCardShowing() {
            r1 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lf
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.miniCardShowing()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            boolean r0 = super.miniCardShowing()
            return r0
    }

    @Override
    public final void orientation(android.content.res.Configuration r2) {
            r1 = this;
            super.orientation(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.orientation(r2)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void preLoadData(com.tkay.expressad.video.signal.factory.b r2) {
            r1 = this;
            super.preLoadData(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.preLoadData(r2)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void readyStatus(int r2) {
            r1 = this;
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto Le
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> La
            r0.readyStatus(r2)     // Catch: java.lang.Throwable -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            super.readyStatus(r2)
            return
    }

    @Override
    public final void resizeMiniCard(int r2, int r3, int r4) {
            r1 = this;
            super.resizeMiniCard(r2, r3, r4)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.resizeMiniCard(r2, r3, r4)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final boolean showAlertWebView() {
            r1 = this;
            super.showAlertWebView()
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k
            if (r0 == 0) goto Lc
            boolean r0 = r0.showAlertWebView()
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public final void showEndcard(int r2) {
            r1 = this;
            super.showEndcard(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.showEndcard(r2)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void showMiniCard(int r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            super.showMiniCard(r8, r9, r10, r11, r12)
            com.tkay.expressad.video.module.TkayContainerView r0 = r7.k     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L11
            com.tkay.expressad.video.module.TkayContainerView r1 = r7.k     // Catch: java.lang.Throwable -> L12
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.showMiniCard(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L12
        L11:
            return
        L12:
            r8 = move-exception
            r8.printStackTrace()
            return
    }

    @Override
    public final void showPlayableView() {
            r1 = this;
            super.showPlayableView()
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.showPlayableView()     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    @Override
    public final void showVideoClickView(int r2) {
            r1 = this;
            super.showVideoClickView(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k
            if (r0 == 0) goto La
            r0.showVideoClickView(r2)
        La:
            return
    }

    @Override
    public final void toggleCloseBtn(int r2) {
            r1 = this;
            super.toggleCloseBtn(r2)
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.toggleCloseBtn(r2)     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public final void webviewshow() {
            r1 = this;
            super.webviewshow()
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.tkay.expressad.video.module.TkayContainerView r0 = r1.k     // Catch: java.lang.Throwable -> Ld
            r0.webviewshow()     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            return
    }
}
