package com.tkay.network.ks;

public class KSATFeedAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    android.content.Context a;
    com.kwad.sdk.api.KsFeedAd b;
    android.view.View c;

    final class 1 implements com.kwad.sdk.api.KsFeedAd.AdInteractionListener {
        final com.tkay.network.ks.KSATFeedAd a;

        1(com.tkay.network.ks.KSATFeedAd r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAdClicked() {
                r1 = this;
                com.tkay.network.ks.KSATFeedAd r0 = r1.a
                r0.notifyAdClicked()
                return
        }

        @Override
        public final void onAdShow() {
                r4 = this;
                com.tkay.network.ks.KSTYInitManager r0 = com.tkay.network.ks.KSTYInitManager.getInstance()
                com.tkay.network.ks.KSATFeedAd r1 = r4.a
                java.lang.String r1 = r1.getShowId()
                java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
                com.tkay.network.ks.KSATFeedAd r3 = r4.a
                com.kwad.sdk.api.KsFeedAd r3 = r3.b
                r2.<init>(r3)
                r0.a(r1, r2)
                com.tkay.network.ks.KSATFeedAd r0 = r4.a
                r0.notifyAdImpression()
                return
        }

        @Override
        public final void onDislikeClicked() {
                r1 = this;
                com.tkay.network.ks.KSATFeedAd r0 = r1.a
                r0.notifyAdDislikeClick()
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

    public KSATFeedAd(android.content.Context r3, com.kwad.sdk.api.KsFeedAd r4, boolean r5) {
            r2 = this;
            r2.<init>()
            android.content.Context r3 = r3.getApplicationContext()
            r2.a = r3
            r2.b = r4
            r4.setVideoSoundEnable(r5)     // Catch: java.lang.Throwable -> L49
            r3 = 0
            com.kwad.sdk.api.KsFeedAd r4 = r2.b     // Catch: java.lang.Throwable -> L49
            int r4 = r4.getInteractionType()     // Catch: java.lang.Throwable -> L49
            r5 = 1
            if (r4 != r5) goto L19
            r3 = r5
        L19:
            com.kwad.sdk.api.KsFeedAd r4 = r2.b     // Catch: java.lang.Throwable -> L49
            int r4 = r4.getInteractionType()     // Catch: java.lang.Throwable -> L49
            r0 = 3
            r1 = 2
            if (r4 != r1) goto L24
            r3 = r0
        L24:
            r2.setNativeInteractionType(r3)     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.api.KsFeedAd r3 = r2.b     // Catch: java.lang.Throwable -> L49
            int r3 = r3.getMaterialType()     // Catch: java.lang.Throwable -> L49
            if (r3 != r5) goto L34
            java.lang.String r3 = "1"
            r2.mAdSourceType = r3     // Catch: java.lang.Throwable -> L49
            goto L4d
        L34:
            com.kwad.sdk.api.KsFeedAd r3 = r2.b     // Catch: java.lang.Throwable -> L49
            int r3 = r3.getMaterialType()     // Catch: java.lang.Throwable -> L49
            if (r3 == r0) goto L44
            com.kwad.sdk.api.KsFeedAd r3 = r2.b     // Catch: java.lang.Throwable -> L49
            int r3 = r3.getMaterialType()     // Catch: java.lang.Throwable -> L49
            if (r3 != r1) goto L4d
        L44:
            java.lang.String r3 = "2"
            r2.mAdSourceType = r3     // Catch: java.lang.Throwable -> L49
            goto L4d
        L49:
            r3 = move-exception
            r3.printStackTrace()
        L4d:
            com.kwad.sdk.api.KsFeedAd r3 = r2.b
            com.tkay.network.ks.KSATFeedAd$1 r4 = new com.tkay.network.ks.KSATFeedAd$1
            r4.<init>(r2)
            r3.setAdInteractionListener(r4)
            return
    }

    private void a(boolean r5) {
            r4 = this;
            com.kwad.sdk.api.KsFeedAd r0 = r4.b     // Catch: java.lang.Throwable -> L40
            r0.setVideoSoundEnable(r5)     // Catch: java.lang.Throwable -> L40
            r5 = 0
            com.kwad.sdk.api.KsFeedAd r0 = r4.b     // Catch: java.lang.Throwable -> L40
            int r0 = r0.getInteractionType()     // Catch: java.lang.Throwable -> L40
            r1 = 1
            if (r0 != r1) goto L10
            r5 = r1
        L10:
            com.kwad.sdk.api.KsFeedAd r0 = r4.b     // Catch: java.lang.Throwable -> L40
            int r0 = r0.getInteractionType()     // Catch: java.lang.Throwable -> L40
            r2 = 3
            r3 = 2
            if (r0 != r3) goto L1b
            r5 = r2
        L1b:
            r4.setNativeInteractionType(r5)     // Catch: java.lang.Throwable -> L40
            com.kwad.sdk.api.KsFeedAd r5 = r4.b     // Catch: java.lang.Throwable -> L40
            int r5 = r5.getMaterialType()     // Catch: java.lang.Throwable -> L40
            if (r5 != r1) goto L2b
            java.lang.String r5 = "1"
            r4.mAdSourceType = r5     // Catch: java.lang.Throwable -> L40
            goto L44
        L2b:
            com.kwad.sdk.api.KsFeedAd r5 = r4.b     // Catch: java.lang.Throwable -> L40
            int r5 = r5.getMaterialType()     // Catch: java.lang.Throwable -> L40
            if (r5 == r2) goto L3b
            com.kwad.sdk.api.KsFeedAd r5 = r4.b     // Catch: java.lang.Throwable -> L40
            int r5 = r5.getMaterialType()     // Catch: java.lang.Throwable -> L40
            if (r5 != r3) goto L44
        L3b:
            java.lang.String r5 = "2"
            r4.mAdSourceType = r5     // Catch: java.lang.Throwable -> L40
            goto L44
        L40:
            r5 = move-exception
            r5.printStackTrace()
        L44:
            com.kwad.sdk.api.KsFeedAd r5 = r4.b
            com.tkay.network.ks.KSATFeedAd$1 r0 = new com.tkay.network.ks.KSATFeedAd$1
            r0.<init>(r4)
            r5.setAdInteractionListener(r0)
            return
    }

    @Override
    public void clear(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void destroy() {
            r2 = this;
            com.kwad.sdk.api.KsFeedAd r0 = r2.b
            r1 = 0
            if (r0 == 0) goto La
            r0.setAdInteractionListener(r1)
            r2.b = r1
        La:
            r2.a = r1
            return
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r2) {
            r1 = this;
            android.view.View r2 = r1.c     // Catch: java.lang.Exception -> L11
            if (r2 != 0) goto Le
            com.kwad.sdk.api.KsFeedAd r2 = r1.b     // Catch: java.lang.Exception -> L11
            android.content.Context r0 = r1.a     // Catch: java.lang.Exception -> L11
            android.view.View r2 = r2.getFeedView(r0)     // Catch: java.lang.Exception -> L11
            r1.c = r2     // Catch: java.lang.Exception -> L11
        Le:
            android.view.View r2 = r1.c     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            r2 = 0
            return r2
    }

    @Override
    public boolean isNativeExpress() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void prepare(android.view.View r1, com.tkay.nativead.api.TYNativePrepareInfo r2) {
            r0 = this;
            return
    }
}
