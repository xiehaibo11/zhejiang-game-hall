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
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYAdInfo;
import com.tkay.nativead.api.TYNative;
import com.tkay.nativead.api.TYNativeAdView;
import com.tkay.nativead.api.TYNativeEventListener;
import com.tkay.nativead.api.TYNativeNetworkListener;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class TopOnNativeAdView implements TYNativeEventListener, TYNativeNetworkListener {
    private static TopOnNativeAdView showView;
    private static boolean toponadNative_loadFlag;
    private Activity activity;
    private String adid;
    TYNative atNatives;
    private ViewGroup container;
    private int height;
    private LinearLayout mFloatLayout;
    private WindowManager mWindowManager;
    private String position;
    private int width;
    private int x;
    private int y;

    public static TopOnNativeAdView getInstance(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
        if (showView == null) {
            showView = new TopOnNativeAdView(activity, str, str2, str3, str4, str5, str6);
        } else if (toponadNative_loadFlag) {
            TopOnAdApi.getYSDKAdCallBack().onAdLoaded(TopOnAdCallBack.NATIVAD);
        } else {
            TopOnAdApi.getYSDKAdCallBack().onAdLoading(TopOnAdCallBack.NATIVAD);
        }
        return showView;
    }

    private TopOnNativeAdView(Activity activity, String str, String str2, String str3, String str4, String str5, String str6) {
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
        LinearLayout linearLayout = (LinearLayout) LayoutInflater.from(this.activity).inflate(ResourceManger.getId(this.activity, "R.layout.activity_topon_native_ad"), (ViewGroup) null);
        this.mFloatLayout = linearLayout;
        this.mWindowManager.addView(linearLayout, layoutParams);
        this.container = (ViewGroup) this.mFloatLayout.findViewById(ResourceManger.getId(this.activity, "R.id.topon_native_container"));
        this.mFloatLayout.measure(View.MeasureSpec.makeMeasureSpec(0, 0), View.MeasureSpec.makeMeasureSpec(0, 0));
        this.mFloatLayout.setVisibility(8);
    }

    private void displayAD() {
        TYNative tYNative = new TYNative(this.activity, this.adid, this);
        this.atNatives = tYNative;
        if (tYNative != null) {
            HashMap map = new HashMap();
            map.put(TYAdConst.KEY.AD_WIDTH, Integer.valueOf(this.width));
            map.put(TYAdConst.KEY.AD_HEIGHT, Integer.valueOf(this.height));
            this.atNatives.setLocalExtra(map);
            this.atNatives.makeAdRequest();
        }
    }

    public void showAd() {
        TYNative tYNative = this.atNatives;
        if (tYNative == null) {
            return;
        }
        tYNative.getNativeAd();
    }

    public void closeAd() {
        toponadNative_loadFlag = false;
        showView = null;
    }

    @Override // com.tkay.nativead.api.TYNativeEventListener
    public void onAdImpressed(TYNativeAdView tYNativeAdView, TYAdInfo tYAdInfo) {
        Logger.e("onAdImpressed");
    }

    @Override // com.tkay.nativead.api.TYNativeEventListener
    public void onAdClicked(TYNativeAdView tYNativeAdView, TYAdInfo tYAdInfo) {
        Logger.e("onAdClicked");
    }

    @Override // com.tkay.nativead.api.TYNativeEventListener
    public void onAdVideoStart(TYNativeAdView tYNativeAdView) {
        Logger.e("onAdVideoStart");
    }

    @Override // com.tkay.nativead.api.TYNativeEventListener
    public void onAdVideoEnd(TYNativeAdView tYNativeAdView) {
        Logger.e("onAdVideoEnd");
    }

    @Override // com.tkay.nativead.api.TYNativeEventListener
    public void onAdVideoProgress(TYNativeAdView tYNativeAdView, int i) {
        Logger.e("onAdVideoProgress");
    }

    @Override // com.tkay.nativead.api.TYNativeNetworkListener
    public void onNativeAdLoaded() {
        Logger.e("onNativeAdLoaded");
        toponadNative_loadFlag = true;
    }

    @Override // com.tkay.nativead.api.TYNativeNetworkListener
    public void onNativeAdLoadFail(AdError adError) {
        Logger.e("onNativeAdLoadFail");
        toponadNative_loadFlag = false;
    }
}
