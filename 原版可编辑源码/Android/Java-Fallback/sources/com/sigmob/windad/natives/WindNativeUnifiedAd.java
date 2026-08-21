package com.sigmob.windad.natives;

public class WindNativeUnifiedAd extends com.sigmob.sdk.base.g {
    private com.sigmob.windad.natives.WindNativeUnifiedAd.WindNativeAdLoadListener b;
    private android.os.Handler c;
    private com.sigmob.sdk.nativead.t d;



    public interface WindNativeAdLoadListener {
        void onAdError(com.sigmob.windad.WindAdError r1, java.lang.String r2);

        void onAdLoad(java.util.List<com.sigmob.windad.natives.WindNativeAdData> r1, java.lang.String r2);
    }

    public WindNativeUnifiedAd(com.sigmob.windad.natives.WindNativeAdRequest r3) {
            r2 = this;
            r0 = 0
            r2.<init>(r3, r0)
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            android.os.Handler r0 = r0.getHandler()
            r2.c = r0
            com.sigmob.sdk.nativead.t r0 = new com.sigmob.sdk.nativead.t
            com.sigmob.windad.natives.WindNativeUnifiedAd$1 r1 = new com.sigmob.windad.natives.WindNativeUnifiedAd$1
            r1.<init>(r2, r3)
            r0.<init>(r3, r1)
            r2.d = r0
            return
    }

    static com.sigmob.windad.natives.WindNativeUnifiedAd.WindNativeAdLoadListener a(com.sigmob.windad.natives.WindNativeUnifiedAd r0) {
            com.sigmob.windad.natives.WindNativeUnifiedAd$WindNativeAdLoadListener r0 = r0.b
            return r0
    }

    private boolean a(int r6) {
            r5 = this;
            r0 = 0
            boolean r1 = r5.loadAdFilter()     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L8
            return r0
        L8:
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading     // Catch: java.lang.Throwable -> L22
            r5.mADStatus = r1     // Catch: java.lang.Throwable -> L22
            com.sigmob.sdk.nativead.t r1 = r5.d     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r5.getBid_token()     // Catch: java.lang.Throwable -> L22
            int r3 = r5.getBidFloor()     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = r5.getCurrency()     // Catch: java.lang.Throwable -> L22
            r1.a(r6, r2, r3, r4)     // Catch: java.lang.Throwable -> L22
            r5.b()     // Catch: java.lang.Throwable -> L22
            r6 = 1
            return r6
        L22:
            r6 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Class r2 = r5.getClass()
            java.lang.String r2 = r2.getSimpleName()
            r1.append(r2)
            java.lang.String r2 = " catch throwable "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.windad.natives.WindNativeUnifiedAd$WindNativeAdLoadListener r1 = r5.b
            if (r1 == 0) goto L58
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            java.lang.String r6 = r6.getMessage()
            r1.setMessage(r6)
            com.sigmob.windad.natives.WindNativeUnifiedAd$WindNativeAdLoadListener r6 = r5.b
            java.lang.String r2 = r5.a()
            r6.onAdError(r1, r2)
        L58:
            return r0
    }

    static java.lang.String b(com.sigmob.windad.natives.WindNativeUnifiedAd r0) {
            java.lang.String r0 = r0.a()
            return r0
    }

    static java.lang.String c(com.sigmob.windad.natives.WindNativeUnifiedAd r0) {
            java.lang.String r0 = r0.a()
            return r0
    }

    static java.lang.String d(com.sigmob.windad.natives.WindNativeUnifiedAd r0) {
            java.lang.String r0 = r0.a()
            return r0
    }

    @Override
    protected void a(com.sigmob.windad.WindAdError r3) {
            r2 = this;
            android.os.Handler r0 = r2.c
            com.sigmob.windad.natives.WindNativeUnifiedAd$2 r1 = new com.sigmob.windad.natives.WindNativeUnifiedAd$2
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    @Override
    protected java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> c() {
            r1 = this;
            com.sigmob.sdk.nativead.t r0 = r1.d
            if (r0 == 0) goto L9
            java.util.List r0 = r0.b()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void destroy() {
            r1 = this;
            r0 = 0
            r1.b = r0
            return
    }

    @Override
    public java.lang.String getEcpm() {
            r1 = this;
            com.sigmob.sdk.nativead.t r0 = r1.d
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.a()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    @java.lang.Deprecated
    public boolean loadAd() {
            r3 = this;
            super.loadAd()     // Catch: java.lang.Throwable -> Le
            com.sigmob.windad.WindAdRequest r0 = r3.a     // Catch: java.lang.Throwable -> Le
            int r0 = r0.getAdCount()     // Catch: java.lang.Throwable -> Le
            boolean r0 = r3.a(r0)     // Catch: java.lang.Throwable -> Le
            return r0
        Le:
            r0 = move-exception
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            int r1 = r1.getErrorCode()
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "error"
            com.sigmob.sdk.base.mta.PointEntitySigmobError r0 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r2, r1, r0)
            r1 = 5
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.setAdtype(r1)
            java.lang.String r1 = r3.a()
            r0.setPlacement_id(r1)
            r0.commit()
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            r3.a(r0)
            r0 = 0
            return r0
    }

    public boolean loadAd(int r3) {
            r2 = this;
            super.loadAd()     // Catch: java.lang.Throwable -> L8
            boolean r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L8
            return r3
        L8:
            r3 = move-exception
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            int r0 = r0.getErrorCode()
            java.lang.String r3 = r3.getMessage()
            java.lang.String r1 = "error"
            com.sigmob.sdk.base.mta.PointEntitySigmobError r3 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r1, r0, r3)
            r0 = 5
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.setAdtype(r0)
            java.lang.String r0 = r2.a()
            r3.setPlacement_id(r0)
            r3.commit()
            com.sigmob.windad.WindAdError r3 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            r2.a(r3)
            r3 = 0
            return r3
    }

    @Override
    public boolean loadAd(java.lang.String r3) {
            r2 = this;
            super.loadAd(r3)     // Catch: java.lang.Throwable -> L18
            com.sigmob.windad.WindAdRequest r3 = r2.a     // Catch: java.lang.Throwable -> L18
            int r3 = r3.getAdCount()     // Catch: java.lang.Throwable -> L18
            if (r3 <= 0) goto L12
            com.sigmob.windad.WindAdRequest r3 = r2.a     // Catch: java.lang.Throwable -> L18
            int r3 = r3.getAdCount()     // Catch: java.lang.Throwable -> L18
            goto L13
        L12:
            r3 = 1
        L13:
            boolean r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            int r0 = r0.getErrorCode()
            java.lang.String r3 = r3.getMessage()
            java.lang.String r1 = "error"
            com.sigmob.sdk.base.mta.PointEntitySigmobError r3 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r1, r0, r3)
            r0 = 5
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.setAdtype(r0)
            java.lang.String r0 = r2.a()
            r3.setPlacement_id(r0)
            r3.commit()
            com.sigmob.windad.WindAdError r3 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            r2.a(r3)
            r3 = 0
            return r3
    }

    public boolean loadAd(java.lang.String r2, int r3) {
            r1 = this;
            super.loadAd(r2)     // Catch: java.lang.Throwable -> L8
            boolean r2 = r1.a(r3)     // Catch: java.lang.Throwable -> L8
            return r2
        L8:
            r2 = move-exception
            com.sigmob.windad.WindAdError r3 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            int r3 = r3.getErrorCode()
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "error"
            com.sigmob.sdk.base.mta.PointEntitySigmobError r2 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r0, r3, r2)
            r3 = 5
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r2.setAdtype(r3)
            java.lang.String r3 = r1.a()
            r2.setPlacement_id(r3)
            r2.commit()
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            r1.a(r2)
            r2 = 0
            return r2
    }

    public void setNativeAdLoadListener(com.sigmob.windad.natives.WindNativeUnifiedAd.WindNativeAdLoadListener r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
