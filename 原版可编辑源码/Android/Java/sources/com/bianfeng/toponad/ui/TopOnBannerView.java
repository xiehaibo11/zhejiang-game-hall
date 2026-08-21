package com.bianfeng.toponad.ui;

import android.app.Activity;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.LinearLayout;
import com.bianfeng.toponad.common.GravityUtils;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.ResourceManger;
import com.tkay.banner.api.TYBannerListener;
import com.tkay.banner.api.TYBannerView;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import java.util.HashMap;

public class TopOnBannerView implements TYBannerListener {
    private static TopOnBannerView showView;
    private static boolean toponadBanner_loadFlag;
    private Activity activity;
    private String adid;
    private ViewGroup container;
    private int height;
    TYBannerView mBannerView;
    private LinearLayout mFloatLayout;
    private WindowManager mWindowManager;
    private String position;
    private int width;
    private int x;
    private int y;

    public static TopOnBannerView getInstance(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
        if (showView == null) {
            showView = new TopOnBannerView(activity, str, str2, str3, str4, str5, str6);
        } else if (toponadBanner_loadFlag) {
            TopOnAdApi.getYSDKAdCallBack().onAdLoaded(TopOnAdCallBack.BANNERAD);
        } else {
            TopOnAdApi.getYSDKAdCallBack().onAdLoading(TopOnAdCallBack.BANNERAD);
        }
        return showView;
    }

    private TopOnBannerView(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
        this.activity = activity;
        this.position = str2;
        this.adid = str;
        this.x = Integer.valueOf(str3).intValue();
        this.y = Integer.valueOf(str4).intValue();
        this.width = Integer.valueOf(str5).intValue();
        this.height = Integer.valueOf(str6).intValue();
        initview();
        displayAD();
    }

    private void initview() {
        WindowManager.LayoutParams layoutParams = new WindowManager.LayoutParams();
        this.mWindowManager = (WindowManager) this.activity.getSystemService("window");
        if (GravityUtils.LEFTCENTER.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 19;
        } else if (GravityUtils.LEFTBOTTOM.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 83;
        } else if (GravityUtils.LEFTTOP.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 51;
        } else if (GravityUtils.CENTERBOTTOM.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 81;
        } else if (GravityUtils.CENTERTOP.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 49;
        } else if ("center".equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 17;
        } else if (GravityUtils.RIGHTTOP.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 53;
        } else if (GravityUtils.RIGHTBOTTOM.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 85;
        } else if (GravityUtils.RIGHTCENTER.equalsIgnoreCase(this.position)) {
            layoutParams.gravity = 21;
        } else {
            layoutParams.gravity = 17;
        }
        int i = this.width;
        if (i != 0) {
            layoutParams.width = i;
        } else {
            layoutParams.width = -2;
        }
        int i2 = this.height;
        if (i2 != 0) {
            layoutParams.height = i2;
        } else {
            layoutParams.height = -2;
        }
        layoutParams.flags = 8;
        layoutParams.type = 1000;
        layoutParams.y = this.y;
        layoutParams.x = this.x;
        LinearLayout linearLayout = (LinearLayout) LayoutInflater.from(this.activity).inflate(ResourceManger.getId(this.activity, "R.layout.activity_topon_banner_ad"), (ViewGroup) null);
        this.mFloatLayout = linearLayout;
        this.mWindowManager.addView(linearLayout, layoutParams);
        this.container = (ViewGroup) this.mFloatLayout.findViewById(ResourceManger.getId(this.activity, "R.id.topon_banner_container"));
        this.mFloatLayout.measure(View.MeasureSpec.makeMeasureSpec(0, 0), View.MeasureSpec.makeMeasureSpec(0, 0));
        this.mFloatLayout.setVisibility(8);
    }

    private void displayAD() {
        TYBannerView tYBannerView = new TYBannerView(this.activity);
        this.mBannerView = tYBannerView;
        tYBannerView.setPlacementId(this.adid);
        this.mBannerView.setLocalExtra(new HashMap());
        this.mBannerView.setBannerAdListener(this);
        this.mBannerView.loadAd();
        TopOnAdApi.getYSDKAdCallBack().onAdLoadApi(TopOnAdCallBack.BANNERAD);
    }

    public void showAd() {
        ViewGroup viewGroup = this.container;
        if (viewGroup != null && this.mFloatLayout != null) {
            viewGroup.addView(this.mBannerView);
            this.mFloatLayout.setVisibility(0);
            TopOnAdApi.getYSDKAdCallBack().onAdShowApi(TopOnAdCallBack.BANNERAD);
        } else {
            TopOnAdApi.getYSDKAdCallBack().onAdShowCheckFail(TopOnAdCallBack.BANNERAD);
            closeAd();
        }
    }

    public void closeAd() {
        toponadBanner_loadFlag = false;
        try {
            if (this.mBannerView != null) {
                this.mBannerView.destroy();
            }
        } catch (Exception unused) {
        }
        try {
            showView = null;
            if (this.mFloatLayout != null) {
                this.activity.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        TopOnBannerView.this.mWindowManager.removeView(TopOnBannerView.this.mFloatLayout);
                    }
                });
            }
        } catch (Exception unused2) {
        }
    }

    @Override
    public void onBannerLoaded() {
        Logger.e("onBannerLoaded");
        toponadBanner_loadFlag = true;
        TopOnAdApi.getYSDKAdCallBack().onAdReady(TopOnAdCallBack.BANNERAD);
    }

    @Override
    public void onBannerFailed(AdError adError) {
        Logger.e("onBannerFailed" + adError.getFullErrorInfo());
        closeAd();
        TopOnAdApi.getYSDKAdCallBack().onNoAD(TopOnAdCallBack.BANNERAD, adError.getCode() + "|" + adError.getFullErrorInfo());
    }

    @Override
    public void onBannerClicked(TYAdInfo tYAdInfo) {
        Logger.e("onBannerClicked");
        TopOnAdApi.getYSDKAdCallBack().onADClicked(TopOnAdCallBack.BANNERAD);
    }

    @Override
    public void onBannerShow(TYAdInfo tYAdInfo) {
        Logger.e("onBannerShow");
        TopOnAdApi.getYSDKAdCallBack().onADPresent(TopOnAdCallBack.BANNERAD);
    }

    @Override
    public void onBannerClose(TYAdInfo tYAdInfo) {
        Logger.e("onBannerClose");
        TopOnAdApi.getYSDKAdCallBack().onADDismissed(TopOnAdCallBack.BANNERAD);
        closeAd();
    }

    @Override
    public void onBannerAutoRefreshed(TYAdInfo tYAdInfo) {
        Logger.e("onBannerAutoRefreshed");
    }

    @Override
    public void onBannerAutoRefreshFail(AdError adError) {
        Logger.e("onBannerAutoRefreshFail");
    }
}
