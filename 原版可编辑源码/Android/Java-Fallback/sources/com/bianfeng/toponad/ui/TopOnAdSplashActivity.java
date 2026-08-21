package com.bianfeng.toponad.ui;

public class TopOnAdSplashActivity extends android.support.v4.app.FragmentActivity implements com.tkay.splashad.api.TYSplashAdListener {
    private java.lang.String appid;
    private java.lang.String appkey;
    private android.widget.FrameLayout mSplashContainer;
    private java.lang.String sourceId;
    private com.tkay.splashad.api.TYSplashAd splashAd;
    private java.lang.String splashadId;
    private java.lang.String toponSplashadId;
    private java.lang.String unitId;

    public TopOnAdSplashActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String getGameActivityName() {
            r2 = this;
            java.lang.String r0 = "TOPONAD_MAIN_ACTIVITY"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataStr(r2, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = "org.cocos2dx.cpp.AppActivity"
        Le:
            return r0
    }

    private void goToMainActivity() {
            r3 = this;
            java.lang.String r0 = r3.getGameActivityName()
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            android.content.Intent r2 = r3.getIntent()
            android.net.Uri r2 = r2.getData()
            if (r2 == 0) goto L1e
            android.content.Intent r2 = r3.getIntent()
            android.net.Uri r2 = r2.getData()
            r1.setData(r2)
        L1e:
            r1.setClassName(r3, r0)
            r3.startActivity(r1)
            r3.finish()
            return
    }

    private void initAd() {
            r2 = this;
            java.lang.String r0 = "TOPONAD_SPLASHAD_APPID"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataInt(r2, r0)
            r2.appid = r0
            java.lang.String r0 = "TOPONAD_SPLASHAD_APPKEY"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataInt(r2, r0)
            r2.appkey = r0
            java.lang.String r0 = "TOPONAD_SPLASHAD_ID"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataInt(r2, r0)
            r2.splashadId = r0
            java.lang.String r0 = "TOPONAD_SPLASHAD_ID_JUHE"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataInt(r2, r0)
            r2.toponSplashadId = r0
            java.lang.String r0 = "TOPONAD_SOURCE_ID"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataInt(r2, r0)
            r2.sourceId = r0
            java.lang.String r0 = "TOPONAD_UNIT_ID"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataInt(r2, r0)
            r2.unitId = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "initAd--->appid="
            r0.append(r1)
            java.lang.String r1 = r2.appid
            r0.append(r1)
            java.lang.String r1 = "-appkey->"
            r0.append(r1)
            java.lang.String r1 = r2.appkey
            r0.append(r1)
            java.lang.String r1 = "-splashadId->"
            r0.append(r1)
            java.lang.String r1 = r2.splashadId
            r0.append(r1)
            java.lang.String r1 = "-sourceId->"
            r0.append(r1)
            java.lang.String r1 = r2.sourceId
            r0.append(r1)
            java.lang.String r1 = "-unitId->"
            r0.append(r1)
            java.lang.String r1 = r2.unitId
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            r2.showAd()
            return
    }

    private void initGdtAd() {
            r3 = this;
            com.tkay.network.gdt.GDTTYRequestInfo r0 = new com.tkay.network.gdt.GDTTYRequestInfo
            java.lang.String r1 = r3.appid
            java.lang.String r2 = r3.splashadId
            r0.<init>(r1, r2)
            java.lang.String r1 = r3.sourceId
            r0.setAdSourceId(r1)
            com.tkay.splashad.api.TYSplashAd r1 = new com.tkay.splashad.api.TYSplashAd
            java.lang.String r2 = r3.splashadId
            r1.<init>(r3, r2, r0, r3)
            r3.splashAd = r1
            return
    }

    private void initKsAd() {
            r3 = this;
            com.tkay.network.ks.KSTYRequestInfo r0 = new com.tkay.network.ks.KSTYRequestInfo
            java.lang.String r1 = r3.appid
            java.lang.String r2 = r3.splashadId
            r0.<init>(r1, r2)
            java.lang.String r1 = r3.sourceId
            r0.setAdSourceId(r1)
            com.tkay.splashad.api.TYSplashAd r1 = new com.tkay.splashad.api.TYSplashAd
            java.lang.String r2 = r3.splashadId
            r1.<init>(r3, r2, r0, r3)
            r3.splashAd = r1
            return
    }

    private void initMintegralAd() {
            r5 = this;
            com.tkay.network.mintegral.MintegralTYRequestInfo r0 = new com.tkay.network.mintegral.MintegralTYRequestInfo
            java.lang.String r1 = r5.appid
            java.lang.String r2 = r5.appkey
            java.lang.String r3 = r5.splashadId
            java.lang.String r4 = r5.unitId
            r0.<init>(r1, r2, r3, r4)
            java.lang.String r1 = r5.sourceId
            r0.setAdSourceId(r1)
            com.tkay.splashad.api.TYSplashAd r1 = new com.tkay.splashad.api.TYSplashAd
            java.lang.String r2 = r5.splashadId
            r1.<init>(r5, r2, r0, r5)
            r5.splashAd = r1
            return
    }

    private void initPangleAd() {
            r4 = this;
            com.tkay.network.toutiao.TTTYRequestInfo r0 = new com.tkay.network.toutiao.TTTYRequestInfo
            java.lang.String r1 = r4.appid
            java.lang.String r2 = r4.splashadId
            r3 = 0
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = r4.sourceId
            r0.setAdSourceId(r1)
            com.tkay.splashad.api.TYSplashAd r1 = new com.tkay.splashad.api.TYSplashAd
            java.lang.String r2 = r4.splashadId
            r1.<init>(r4, r2, r0, r4)
            r4.splashAd = r1
            return
    }

    private void initSigmobAd() {
            r4 = this;
            com.tkay.network.sigmob.SigmobiTYRequestInfo r0 = new com.tkay.network.sigmob.SigmobiTYRequestInfo
            java.lang.String r1 = r4.appid
            java.lang.String r2 = r4.appkey
            java.lang.String r3 = r4.splashadId
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = r4.sourceId
            r0.setAdSourceId(r1)
            com.tkay.splashad.api.TYSplashAd r1 = new com.tkay.splashad.api.TYSplashAd
            java.lang.String r2 = r4.splashadId
            r1.<init>(r4, r2, r0, r4)
            r4.splashAd = r1
            return
    }

    private void showAd() {
            r2 = this;
            boolean r0 = com.bianfeng.toponad.common.ToponSpUtils.isSHowSplashAd()
            if (r0 != 0) goto L48
            java.lang.String r0 = "TOPONAD_SPLASHAD_TYPE"
            java.lang.String r0 = com.bianfeng.toponad.common.ToponAdToolUtils.getMetaDataStr(r2, r0)
            java.lang.String r1 = "ks"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L18
            r2.initKsAd()
            goto L51
        L18:
            java.lang.String r1 = "mintegral"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L24
            r2.initMintegralAd()
            goto L51
        L24:
            java.lang.String r1 = "pangle"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L30
            r2.initPangleAd()
            goto L51
        L30:
            java.lang.String r1 = "sigmob"
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L3c
            r2.initSigmobAd()
            goto L51
        L3c:
            java.lang.String r1 = "gdt"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L51
            r2.initGdtAd()
            goto L51
        L48:
            com.tkay.splashad.api.TYSplashAd r0 = new com.tkay.splashad.api.TYSplashAd
            java.lang.String r1 = r2.toponSplashadId
            r0.<init>(r2, r1, r2)
            r2.splashAd = r0
        L51:
            com.tkay.splashad.api.TYSplashAd r0 = r2.splashAd
            boolean r0 = r0.isAdReady()
            if (r0 == 0) goto L61
            com.tkay.splashad.api.TYSplashAd r0 = r2.splashAd
            android.widget.FrameLayout r1 = r2.mSplashContainer
            r0.show(r2, r1)
            goto L66
        L61:
            com.tkay.splashad.api.TYSplashAd r0 = r2.splashAd
            r0.loadAd()
        L66:
            return
    }

    @Override
    public void onAdClick(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            java.lang.String r1 = "onAdClick"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    public void onAdDismiss(com.tkay.core.api.TYAdInfo r1, com.tkay.splashad.api.TYSplashAdExtraInfo r2) {
            r0 = this;
            java.lang.String r1 = "onAdDismiss"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            r0.goToMainActivity()
            return
    }

    @Override
    public void onAdLoadTimeout() {
            r1 = this;
            java.lang.String r0 = "onAdLoadTimeout"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r1.goToMainActivity()
            return
    }

    @Override
    public void onAdLoaded(boolean r2) {
            r1 = this;
            java.lang.String r2 = "onAdLoaded"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            com.tkay.splashad.api.TYSplashAd r2 = r1.splashAd
            android.widget.FrameLayout r0 = r1.mSplashContainer
            r2.show(r1, r0)
            return
    }

    @Override
    public void onAdShow(com.tkay.core.api.TYAdInfo r1) {
            r0 = this;
            java.lang.String r1 = "onAdShow"
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            r2 = 1
            r1.requestWindowFeature(r2)
            android.view.Window r2 = r1.getWindow()
            r0 = 1024(0x400, float:1.435E-42)
            r2.setFlags(r0, r0)
            java.lang.String r2 = "R.layout.activity_topon_splash"
            int r2 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r1, r2)
            r1.setContentView(r2)
            java.lang.String r2 = "R.id.topon_splash_container"
            int r2 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r1, r2)
            android.view.View r2 = r1.findViewById(r2)
            android.widget.FrameLayout r2 = (android.widget.FrameLayout) r2
            r1.mSplashContainer = r2
            boolean r2 = com.bianfeng.ymnsdk.util.YmnUtilsdk.isAgreeprivacy()
            if (r2 != 0) goto L31
            r1.goToMainActivity()
            goto L34
        L31:
            r1.initAd()
        L34:
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.tkay.splashad.api.TYSplashAd r0 = r1.splashAd
            if (r0 == 0) goto Ld
            r0.onDestory()
            r0 = 0
            r1.splashAd = r0
        Ld:
            return
    }

    @Override
    public void onNoAdError(com.tkay.core.api.AdError r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onNoAdError--->"
            r0.append(r1)
            java.lang.String r3 = r3.getFullErrorInfo()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r3)
            r2.goToMainActivity()
            return
    }

    @Override
    public void onPointerCaptureChanged(boolean r1) {
            r0 = this;
            return
    }
}
