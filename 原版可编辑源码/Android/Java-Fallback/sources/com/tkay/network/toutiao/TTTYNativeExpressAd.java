package com.tkay.network.toutiao;

public class TTTYNativeExpressAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    private static final java.lang.String h = null;
    com.bykv.vk.openvk.TTNtExpressObject a;
    android.content.Context b;
    java.lang.String c;
    double d;
    double e;
    boolean f;
    android.view.View g;



    final class 3 implements com.bykv.vk.openvk.TTVfDislike.DislikeInteractionCallback {
        final com.tkay.network.toutiao.TTTYNativeExpressAd a;

        3(com.tkay.network.toutiao.TTTYNativeExpressAd r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onCancel() {
                r0 = this;
                return
        }

        @java.lang.Deprecated
        public final void onRefuse() {
                r0 = this;
                return
        }

        @java.lang.Deprecated
        public final void onSelected(int r1, java.lang.String r2) {
                r0 = this;
                com.tkay.network.toutiao.TTTYNativeExpressAd r1 = r0.a
                r1.notifyAdDislikeClick()
                return
        }

        @Override
        public final void onSelected(int r1, java.lang.String r2, boolean r3) {
                r0 = this;
                com.tkay.network.toutiao.TTTYNativeExpressAd r1 = r0.a
                r1.notifyAdDislikeClick()
                return
        }

        @Override
        public final void onShow() {
                r0 = this;
                return
        }
    }

    final class 4 implements com.bykv.vk.openvk.TTNtExpressObject.NtInteractionListener {
        final com.tkay.network.toutiao.TTTYNativeExpressAd a;

        4(com.tkay.network.toutiao.TTTYNativeExpressAd r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClicked(android.view.View r1, int r2) {
                r0 = this;
                com.tkay.network.toutiao.TTTYNativeExpressAd r1 = r0.a
                r1.notifyAdClicked()
                return
        }

        @Override
        public final void onDismiss() {
                r0 = this;
                return
        }

        @Override
        public final void onRenderFail(android.view.View r1, java.lang.String r2, int r3) {
                r0 = this;
                return
        }

        @Override
        public final void onRenderSuccess(android.view.View r1, float r2, float r3) {
                r0 = this;
                return
        }

        @Override
        public final void onShow(android.view.View r1, int r2) {
                r0 = this;
                java.lang.String r1 = com.tkay.network.toutiao.TTTYNativeExpressAd.a()
                java.lang.String r2 = "onAdShow()"
                android.util.Log.i(r1, r2)
                com.tkay.network.toutiao.TTTYNativeExpressAd r1 = r0.a
                r1.notifyAdImpression()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.network.toutiao.TTTYNativeExpressAd> r0 = com.tkay.network.toutiao.TTTYNativeExpressAd.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.network.toutiao.TTTYNativeExpressAd.h = r0
            return
    }

    public TTTYNativeExpressAd(android.content.Context r1, java.lang.String r2, com.bykv.vk.openvk.TTNtExpressObject r3, boolean r4, boolean r5) {
            r0 = this;
            r0.<init>()
            r5 = 0
            r0.f = r5
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            r0.c = r2
            r0.a = r3
            java.util.Map r1 = r3.getMediaExtraInfo()
            r0.setNetworkInfoMap(r1)
            r0.setAdData(r4)
            com.bykv.vk.openvk.TTNtExpressObject r1 = r0.a
            if (r1 == 0) goto L26
            com.tkay.network.toutiao.TTTYNativeExpressAd$4 r2 = new com.tkay.network.toutiao.TTTYNativeExpressAd$4
            r2.<init>(r0)
            r1.setExpressInteractionListener(r2)
        L26:
            return
    }

    static com.tkay.core.api.TYEventInterface a(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.network.toutiao.TTTYNativeExpressAd.h
            return r0
    }

    private void a(android.app.Activity r3) {
            r2 = this;
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.a
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.network.toutiao.TTTYNativeExpressAd$3 r1 = new com.tkay.network.toutiao.TTTYNativeExpressAd$3
            r1.<init>(r2)
            r0.setDislikeCallback(r3, r1)
            return
    }

    static com.tkay.core.api.TYEventInterface b(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    private void b() {
            r2 = this;
            com.bykv.vk.openvk.TTNtExpressObject r0 = r2.a
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.network.toutiao.TTTYNativeExpressAd$4 r1 = new com.tkay.network.toutiao.TTTYNativeExpressAd$4
            r1.<init>(r2)
            r0.setExpressInteractionListener(r1)
            return
    }

    static com.tkay.core.api.TYEventInterface c(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface d(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface e(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface f(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface g(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface h(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface i(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface j(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface k(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface l(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface m(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface n(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface o(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface p(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface q(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    static com.tkay.core.api.TYEventInterface r(com.tkay.network.toutiao.TTTYNativeExpressAd r0) {
            com.tkay.core.api.TYEventInterface r0 = r0.mDownloadListener
            return r0
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            java.lang.String r0 = com.tkay.network.toutiao.TTTYNativeExpressAd.h
            java.lang.String r1 = "destroy()"
            android.util.Log.i(r0, r1)
            r0 = 0
            r2.g = r0
            com.bykv.vk.openvk.TTNtExpressObject r1 = r2.a
            if (r1 == 0) goto L18
            r1.setExpressInteractionListener(r0)
            com.bykv.vk.openvk.TTNtExpressObject r1 = r2.a
            r1.destroy()
            r2.a = r0
        L18:
            r2.b = r0
            return
    }

    @Override
    public android.graphics.Bitmap getAdLogo() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r1) {
            r0 = this;
            android.view.View r1 = r0.g     // Catch: java.lang.Exception -> L13
            if (r1 != 0) goto L10
            com.bykv.vk.openvk.TTNtExpressObject r1 = r0.a     // Catch: java.lang.Exception -> L13
            if (r1 == 0) goto L10
            com.bykv.vk.openvk.TTNtExpressObject r1 = r0.a     // Catch: java.lang.Exception -> L13
            android.view.View r1 = r1.getExpressNtView()     // Catch: java.lang.Exception -> L13
            r0.g = r1     // Catch: java.lang.Exception -> L13
        L10:
            android.view.View r1 = r0.g     // Catch: java.lang.Exception -> L13
            return r1
        L13:
            r1 = 0
            return r1
    }

    @Override
    public double getVideoProgress() {
            r2 = this;
            double r0 = r2.d
            return r0
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void prepare(android.view.View r2, com.tkay.nativead.api.TYNativePrepareInfo r3) {
            r1 = this;
            if (r2 == 0) goto L1c
            android.content.Context r3 = r2.getContext()
            boolean r3 = r3 instanceof android.app.Activity
            if (r3 == 0) goto L1c
            android.content.Context r2 = r2.getContext()
            android.app.Activity r2 = (android.app.Activity) r2
            com.bykv.vk.openvk.TTNtExpressObject r3 = r1.a
            if (r3 == 0) goto L1c
            com.tkay.network.toutiao.TTTYNativeExpressAd$3 r0 = new com.tkay.network.toutiao.TTTYNativeExpressAd$3
            r0.<init>(r1)
            r3.setDislikeCallback(r2, r0)
        L1c:
            return
    }

    public void setAdData(boolean r5) {
            r4 = this;
            com.bykv.vk.openvk.TTNtExpressObject r0 = r4.a
            r0.setCanInterruptVideoPlay(r5)
            com.bykv.vk.openvk.TTNtExpressObject r5 = r4.a
            int r5 = r5.getInteractionType()
            r0 = 4
            if (r5 != r0) goto L10
            r5 = 1
            goto L11
        L10:
            r5 = 0
        L11:
            com.bykv.vk.openvk.TTNtExpressObject r1 = r4.a
            int r1 = r1.getInteractionType()
            r2 = 3
            if (r1 != r2) goto L1b
            r5 = r2
        L1b:
            com.bykv.vk.openvk.TTNtExpressObject r1 = r4.a
            int r1 = r1.getInteractionType()
            r3 = 2
            if (r1 != r3) goto L25
            r5 = r3
        L25:
            r4.setNativeInteractionType(r5)
            com.bykv.vk.openvk.TTNtExpressObject r5 = r4.a
            com.tkay.network.toutiao.TTTYNativeExpressAd$1 r1 = new com.tkay.network.toutiao.TTTYNativeExpressAd$1
            r1.<init>(r4)
            r5.setVideoListener(r1)
            com.bykv.vk.openvk.TTNtExpressObject r5 = r4.a
            com.tkay.network.toutiao.TTTYNativeExpressAd$2 r1 = new com.tkay.network.toutiao.TTTYNativeExpressAd$2
            r1.<init>(r4)
            r5.setDownloadListener(r1)
            com.bykv.vk.openvk.TTNtExpressObject r5 = r4.a
            int r5 = r5.getImageMode()
            if (r5 == r3) goto L59
            if (r5 == r2) goto L59
            if (r5 == r0) goto L59
            r0 = 5
            if (r5 == r0) goto L54
            r0 = 15
            if (r5 == r0) goto L54
            r0 = 16
            if (r5 == r0) goto L59
            goto L5d
        L54:
            java.lang.String r5 = "1"
            r4.mAdSourceType = r5
            return
        L59:
            java.lang.String r5 = "2"
            r4.mAdSourceType = r5
        L5d:
            return
    }
}
