package com.bianfeng.toponad.ui;

import android.content.Intent;
import android.os.Bundle;
import android.support.v4.app.FragmentActivity;
import android.text.TextUtils;
import android.widget.FrameLayout;
import com.bianfeng.toponad.common.SplashConstants;
import com.bianfeng.toponad.common.ToponAdToolUtils;
import com.bianfeng.toponad.common.ToponSpUtils;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.ResourceManger;
import com.bianfeng.ymnsdk.util.YmnUtilsdk;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.network.gdt.GDTTYRequestInfo;
import com.tkay.network.ks.KSTYRequestInfo;
import com.tkay.network.mintegral.MintegralTYRequestInfo;
import com.tkay.network.sigmob.SigmobiTYRequestInfo;
import com.tkay.network.toutiao.TTTYRequestInfo;
import com.tkay.splashad.api.TYSplashAd;
import com.tkay.splashad.api.TYSplashAdExtraInfo;
import com.tkay.splashad.api.TYSplashAdListener;

/* JADX INFO: loaded from: classes.dex */
public class TopOnAdSplashActivity extends FragmentActivity implements TYSplashAdListener {
    private String appid;
    private String appkey;
    private FrameLayout mSplashContainer;
    private String sourceId;
    private TYSplashAd splashAd;
    private String splashadId;
    private String toponSplashadId;
    private String unitId;

    @Override // android.view.Window.Callback
    public void onPointerCaptureChanged(boolean z) {
    }

    @Override // android.support.v4.app.FragmentActivity, android.support.v4.app.SupportActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        requestWindowFeature(1);
        getWindow().setFlags(1024, 1024);
        setContentView(ResourceManger.getId(this, "R.layout.activity_topon_splash"));
        this.mSplashContainer = (FrameLayout) findViewById(ResourceManger.getId(this, "R.id.topon_splash_container"));
        if (!YmnUtilsdk.isAgreeprivacy()) {
            goToMainActivity();
        } else {
            initAd();
        }
    }

    private void initAd() {
        this.appid = ToponAdToolUtils.getMetaDataInt(this, SplashConstants.TOPONAD_SPLASHAD_APPID);
        this.appkey = ToponAdToolUtils.getMetaDataInt(this, SplashConstants.TOPONAD_SPLASHAD_APPKEY);
        this.splashadId = ToponAdToolUtils.getMetaDataInt(this, SplashConstants.TOPONAD_SPLASHAD_ID);
        this.toponSplashadId = ToponAdToolUtils.getMetaDataInt(this, SplashConstants.TOPONAD_SPLASHAD_ID_JUHE);
        this.sourceId = ToponAdToolUtils.getMetaDataInt(this, SplashConstants.TOPONAD_SOURCE_ID);
        this.unitId = ToponAdToolUtils.getMetaDataInt(this, SplashConstants.TOPONAD_UNIT_ID);
        Logger.i("initAd--->appid=" + this.appid + "-appkey->" + this.appkey + "-splashadId->" + this.splashadId + "-sourceId->" + this.sourceId + "-unitId->" + this.unitId);
        showAd();
    }

    private void showAd() {
        if (!ToponSpUtils.isSHowSplashAd()) {
            String metaDataStr = ToponAdToolUtils.getMetaDataStr(this, SplashConstants.TOPONAD_SPLASHAD_TYPE);
            if (SplashConstants.TOPONAD_SPLASHAD_KS.equalsIgnoreCase(metaDataStr)) {
                initKsAd();
            } else if (SplashConstants.TOPONAD_SPLASHAD_MINTEGRAL.equalsIgnoreCase(metaDataStr)) {
                initMintegralAd();
            } else if (SplashConstants.TOPONAD_SPLASHAD_PANGLE.equalsIgnoreCase(metaDataStr)) {
                initPangleAd();
            } else if ("sigmob".equalsIgnoreCase(metaDataStr)) {
                initSigmobAd();
            } else if (SplashConstants.TOPONAD_SPLASHAD_GDT.equalsIgnoreCase(metaDataStr)) {
                initGdtAd();
            }
        } else {
            this.splashAd = new TYSplashAd(this, this.toponSplashadId, this);
        }
        if (this.splashAd.isAdReady()) {
            this.splashAd.show(this, this.mSplashContainer);
        } else {
            this.splashAd.loadAd();
        }
    }

    private void initKsAd() {
        KSTYRequestInfo kSTYRequestInfo = new KSTYRequestInfo(this.appid, this.splashadId);
        kSTYRequestInfo.setAdSourceId(this.sourceId);
        this.splashAd = new TYSplashAd(this, this.splashadId, kSTYRequestInfo, this);
    }

    private void initMintegralAd() {
        MintegralTYRequestInfo mintegralTYRequestInfo = new MintegralTYRequestInfo(this.appid, this.appkey, this.splashadId, this.unitId);
        mintegralTYRequestInfo.setAdSourceId(this.sourceId);
        this.splashAd = new TYSplashAd(this, this.splashadId, mintegralTYRequestInfo, this);
    }

    private void initPangleAd() {
        TTTYRequestInfo tTTYRequestInfo = new TTTYRequestInfo(this.appid, this.splashadId, false);
        tTTYRequestInfo.setAdSourceId(this.sourceId);
        this.splashAd = new TYSplashAd(this, this.splashadId, tTTYRequestInfo, this);
    }

    private void initSigmobAd() {
        SigmobiTYRequestInfo sigmobiTYRequestInfo = new SigmobiTYRequestInfo(this.appid, this.appkey, this.splashadId);
        sigmobiTYRequestInfo.setAdSourceId(this.sourceId);
        this.splashAd = new TYSplashAd(this, this.splashadId, sigmobiTYRequestInfo, this);
    }

    private void initGdtAd() {
        GDTTYRequestInfo gDTTYRequestInfo = new GDTTYRequestInfo(this.appid, this.splashadId);
        gDTTYRequestInfo.setAdSourceId(this.sourceId);
        this.splashAd = new TYSplashAd(this, this.splashadId, gDTTYRequestInfo, this);
    }

    @Override // com.tkay.splashad.api.TYSplashAdListener
    public void onAdLoaded(boolean z) {
        Logger.e("onAdLoaded");
        this.splashAd.show(this, this.mSplashContainer);
    }

    @Override // com.tkay.splashad.api.TYSplashAdListener
    public void onNoAdError(AdError adError) {
        Logger.e("onNoAdError--->" + adError.getFullErrorInfo());
        goToMainActivity();
    }

    @Override // com.tkay.splashad.api.TYSplashAdListener
    public void onAdShow(TYAdInfo tYAdInfo) {
        Logger.e("onAdShow");
    }

    @Override // com.tkay.splashad.api.TYSplashAdListener
    public void onAdClick(TYAdInfo tYAdInfo) {
        Logger.e("onAdClick");
    }

    @Override // com.tkay.splashad.api.TYSplashAdListener
    public void onAdDismiss(TYAdInfo tYAdInfo, TYSplashAdExtraInfo tYSplashAdExtraInfo) {
        Logger.e("onAdDismiss");
        goToMainActivity();
    }

    @Override // com.tkay.splashad.api.TYSplashAdListener
    public void onAdLoadTimeout() {
        Logger.e("onAdLoadTimeout");
        goToMainActivity();
    }

    private void goToMainActivity() {
        String gameActivityName = getGameActivityName();
        Intent intent = new Intent();
        if (getIntent().getData() != null) {
            intent.setData(getIntent().getData());
        }
        intent.setClassName(this, gameActivityName);
        startActivity(intent);
        finish();
    }

    private String getGameActivityName() {
        String metaDataStr = ToponAdToolUtils.getMetaDataStr(this, "TOPONAD_MAIN_ACTIVITY");
        return TextUtils.isEmpty(metaDataStr) ? "org.cocos2dx.cpp.AppActivity" : metaDataStr;
    }

    @Override // android.support.v4.app.FragmentActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        TYSplashAd tYSplashAd = this.splashAd;
        if (tYSplashAd != null) {
            tYSplashAd.onDestory();
            this.splashAd = null;
        }
    }
}
