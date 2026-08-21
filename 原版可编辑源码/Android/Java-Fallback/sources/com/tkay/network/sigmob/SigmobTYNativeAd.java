package com.tkay.network.sigmob;

public class SigmobTYNativeAd extends com.tkay.nativead.unitgroup.api.CustomNativeAd {
    android.widget.FrameLayout a;
    android.widget.ImageView b;
    android.widget.ImageView c;
    android.widget.ImageView d;
    java.util.List<android.widget.ImageView> e;
    com.sigmob.windad.natives.WindNativeUnifiedAd f;
    com.tkay.nativead.api.TYNativePrepareInfo g;
    private android.content.Context h;
    private com.sigmob.windad.natives.WindNativeAdData i;





    protected SigmobTYNativeAd(android.content.Context r2, com.sigmob.windad.natives.WindNativeAdData r3, com.sigmob.windad.natives.WindNativeUnifiedAd r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.e = r0
            r1.h = r2
            r1.i = r3
            r1.f = r4
            java.lang.String r2 = r3.getTitle()
            r1.setTitle(r2)
            java.lang.String r2 = r3.getDesc()
            r1.setDescriptionText(r2)
            java.lang.String r2 = r3.getIconUrl()
            r1.setIconImageUrl(r2)
            java.lang.String r2 = r3.getCTAText()
            r1.setCallToActionText(r2)
            int r2 = r3.getAdPatternType()
            r3 = 1
            if (r2 != r3) goto L4a
            java.lang.String r2 = "1"
            r1.mAdSourceType = r2
            android.widget.FrameLayout r2 = new android.widget.FrameLayout
            android.content.Context r3 = r1.h
            r2.<init>(r3)
            r1.a = r2
            return
        L4a:
            java.lang.String r2 = "2"
            r1.mAdSourceType = r2
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r1.h
            r2.<init>(r3)
            r1.b = r2
            java.util.List<android.widget.ImageView> r2 = r1.e
            r2.clear()
            java.util.List<android.widget.ImageView> r2 = r1.e
            android.widget.ImageView r3 = r1.b
            r2.add(r3)
            com.sigmob.windad.natives.WindNativeAdData r2 = r1.i
            int r2 = r2.getAdPatternType()
            r3 = 3
            if (r2 != r3) goto L8c
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r1.h
            r2.<init>(r3)
            r1.c = r2
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r1.h
            r2.<init>(r3)
            r1.d = r2
            java.util.List<android.widget.ImageView> r2 = r1.e
            android.widget.ImageView r3 = r1.c
            r2.add(r3)
            java.util.List<android.widget.ImageView> r2 = r1.e
            android.widget.ImageView r3 = r1.d
            r2.add(r3)
        L8c:
            return
    }

    private void a(com.sigmob.windad.natives.WindNativeAdData r2) {
            r1 = this;
            java.lang.String r0 = r2.getTitle()
            r1.setTitle(r0)
            java.lang.String r0 = r2.getDesc()
            r1.setDescriptionText(r0)
            java.lang.String r0 = r2.getIconUrl()
            r1.setIconImageUrl(r0)
            java.lang.String r0 = r2.getCTAText()
            r1.setCallToActionText(r0)
            int r2 = r2.getAdPatternType()
            r0 = 1
            if (r2 != r0) goto L31
            java.lang.String r2 = "1"
            r1.mAdSourceType = r2
            android.widget.FrameLayout r2 = new android.widget.FrameLayout
            android.content.Context r0 = r1.h
            r2.<init>(r0)
            r1.a = r2
            return
        L31:
            java.lang.String r2 = "2"
            r1.mAdSourceType = r2
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r0 = r1.h
            r2.<init>(r0)
            r1.b = r2
            java.util.List<android.widget.ImageView> r2 = r1.e
            r2.clear()
            java.util.List<android.widget.ImageView> r2 = r1.e
            android.widget.ImageView r0 = r1.b
            r2.add(r0)
            com.sigmob.windad.natives.WindNativeAdData r2 = r1.i
            int r2 = r2.getAdPatternType()
            r0 = 3
            if (r2 != r0) goto L73
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r0 = r1.h
            r2.<init>(r0)
            r1.c = r2
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r0 = r1.h
            r2.<init>(r0)
            r1.d = r2
            java.util.List<android.widget.ImageView> r2 = r1.e
            android.widget.ImageView r0 = r1.c
            r2.add(r0)
            java.util.List<android.widget.ImageView> r2 = r1.e
            android.widget.ImageView r0 = r1.d
            r2.add(r0)
        L73:
            return
    }

    @Override
    public void clear(android.view.View r2) {
            r1 = this;
            com.tkay.nativead.api.TYNativePrepareInfo r2 = r1.g
            if (r2 == 0) goto L10
            android.view.View r2 = r2.getCloseView()
            r0 = 0
            if (r2 == 0) goto Le
            r2.setOnTouchListener(r0)
        Le:
            r1.g = r0
        L10:
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            super.destroy()
            com.sigmob.windad.natives.WindNativeAdData r0 = r1.i
            if (r0 == 0) goto La
            r0.destroy()
        La:
            return
    }

    @Override
    public android.graphics.Bitmap getAdLogo() {
            r1 = this;
            com.sigmob.windad.natives.WindNativeAdData r0 = r1.i
            if (r0 == 0) goto L9
            android.graphics.Bitmap r0 = r0.getAdLogo()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public android.view.View getAdMediaView(java.lang.Object... r4) {
            r3 = this;
            com.sigmob.windad.natives.WindNativeAdData r4 = r3.i
            if (r4 == 0) goto L21
            int r4 = r4.getAdPatternType()
            r0 = 1
            if (r4 != r0) goto Le
            android.widget.FrameLayout r4 = r3.a
            goto L10
        Le:
            android.widget.ImageView r4 = r3.b
        L10:
            android.view.ViewGroup$LayoutParams r0 = r4.getLayoutParams()
            if (r0 != 0) goto L1d
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r2 = -2
            r0.<init>(r1, r2)
        L1d:
            r4.setLayoutParams(r0)
            goto L22
        L21:
            r4 = 0
        L22:
            return r4
    }

    public java.util.List<android.widget.ImageView> getNativeImageViewList() {
            r1 = this;
            java.util.List<android.widget.ImageView> r0 = r1.e
            return r0
    }

    @Override
    public void pauseVideo() {
            r2 = this;
            super.pauseVideo()
            com.sigmob.windad.natives.WindNativeAdData r0 = r2.i
            if (r0 == 0) goto L13
            int r0 = r0.getAdPatternType()
            r1 = 1
            if (r0 != r1) goto L13
            com.sigmob.windad.natives.WindNativeAdData r0 = r2.i
            r0.pauseVideo()
        L13:
            return
    }

    @Override
    public void prepare(android.view.View r8, com.tkay.nativead.api.TYNativePrepareInfo r9) {
            r7 = this;
            com.sigmob.windad.natives.WindNativeUnifiedAd r0 = r7.f
            if (r0 == 0) goto Lb
            int r1 = com.tkay.network.sigmob.SigmobTYInitManager.getEcpmInt(r0)
            r0.setBidEcpm(r1)
        Lb:
            com.sigmob.windad.natives.WindNativeAdData r0 = r7.i
            if (r0 == 0) goto L9c
            r7.g = r9
            java.util.List r0 = r9.getClickViewList()
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            boolean r1 = r9 instanceof com.tkay.nativead.api.TYNativePrepareExInfo
            if (r1 == 0) goto L2a
            r1 = r9
            com.tkay.nativead.api.TYNativePrepareExInfo r1 = (com.tkay.nativead.api.TYNativePrepareExInfo) r1
            java.util.List r1 = r1.getCreativeClickViewList()
            if (r1 == 0) goto L2a
            r4.addAll(r1)
        L2a:
            if (r0 == 0) goto L2f
            r4.addAll(r0)
        L2f:
            if (r0 == 0) goto L37
            int r1 = r0.size()
            if (r1 > 0) goto L3f
        L37:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r8)
        L3f:
            r3 = r0
            int r0 = r4.size()
            if (r0 != 0) goto L49
            r4.add(r8)
        L49:
            com.sigmob.windad.natives.WindNativeAdData r1 = r7.i
            android.view.View r5 = r9.getCloseView()
            com.tkay.network.sigmob.SigmobTYNativeAd$1 r6 = new com.tkay.network.sigmob.SigmobTYNativeAd$1
            r6.<init>(r7)
            r2 = r8
            r1.bindViewForInteraction(r2, r3, r4, r5, r6)
            com.sigmob.windad.natives.WindNativeAdData r9 = r7.i
            int r9 = r9.getAdPatternType()
            r0 = 1
            if (r9 != r0) goto L6e
            com.sigmob.windad.natives.WindNativeAdData r9 = r7.i
            android.widget.FrameLayout r0 = r7.a
            com.tkay.network.sigmob.SigmobTYNativeAd$2 r1 = new com.tkay.network.sigmob.SigmobTYNativeAd$2
            r1.<init>(r7)
            r9.bindMediaView(r0, r1)
            goto L76
        L6e:
            com.sigmob.windad.natives.WindNativeAdData r9 = r7.i
            java.util.List<android.widget.ImageView> r0 = r7.e
            r1 = 0
            r9.bindImageViews(r0, r1)
        L76:
            android.content.Context r9 = r8.getContext()
            if (r9 == 0) goto L9c
            android.content.Context r9 = r8.getContext()
            boolean r9 = r9 instanceof android.app.Activity
            if (r9 == 0) goto L9c
            com.tkay.network.sigmob.SigmobTYNativeAd$3 r9 = new com.tkay.network.sigmob.SigmobTYNativeAd$3
            r9.<init>(r7)
            r7.bindDislikeListener(r9)
            com.sigmob.windad.natives.WindNativeAdData r9 = r7.i
            android.content.Context r8 = r8.getContext()
            android.app.Activity r8 = (android.app.Activity) r8
            com.tkay.network.sigmob.SigmobTYNativeAd$4 r0 = new com.tkay.network.sigmob.SigmobTYNativeAd$4
            r0.<init>(r7)
            r9.setDislikeInteractionCallback(r8, r0)
        L9c:
            return
    }

    @Override
    public void resumeVideo() {
            r2 = this;
            super.resumeVideo()
            com.sigmob.windad.natives.WindNativeAdData r0 = r2.i
            if (r0 == 0) goto L13
            int r0 = r0.getAdPatternType()
            r1 = 1
            if (r0 != r1) goto L13
            com.sigmob.windad.natives.WindNativeAdData r0 = r2.i
            r0.resumeVideo()
        L13:
            return
    }
}
