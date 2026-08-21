package com.bianfeng.ymnsdk.ymndatalib;

import android.content.Context;
import com.bianfeng.datafunsdk.PostDatalib;
import com.bianfeng.ymnsdk.gongxiang.l;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap;
import com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap;
import com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap;
import com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger;

/* JADX INFO: loaded from: classes.dex */
public class YmnDatafunSdk {
    public static volatile YmnDatafunSdk datafunSdk;
    public boolean isInited;

    public static YmnDatafunSdk getInstance() {
        if (datafunSdk == null) {
            synchronized (YmnDatafunSdk.class) {
                datafunSdk = new YmnDatafunSdk();
            }
        }
        return datafunSdk;
    }

    public String getInitTrace() {
        return TraceUtils.getInstance().getOriginTrace();
    }

    public LoginEventMap getLoginEvent() {
        return LoginEventMap.getInstance();
    }

    public String getLoginTrace() {
        return TraceUtils.getInstance().getLoginTrace();
    }

    public OtherEventMap getOtherEvent() {
        return OtherEventMap.getInstance();
    }

    public PayEventMap getPayEvent() {
        return PayEventMap.getInstance();
    }

    public String getPayTrace() {
        return TraceUtils.getInstance().getPayTrace();
    }

    public PlatformUtils getPlatformUtils() {
        return PlatformUtils.getInstance();
    }

    public l getPluginEvent() {
        return l.a();
    }

    public void initSdkReturn(int i, String str) {
        YmnDatalibLogger.i("YmnDatafunSdk onResume");
        OtherEventMap.getInstance().initSdkReturn(i, str);
    }

    public void onCreate() {
        YmnDatalibLogger.i("YmnDatafunSdk onCreate");
    }

    public void onDestroy() {
        YmnDatalibLogger.i("YmnDatafunSdk onDestroy");
        OtherEventMap.getInstance().appOnDestroy();
    }

    public void onInit(Context context) {
        if (this.isInited) {
            return;
        }
        this.isInited = true;
        UtilsSdk.initContext(context);
        PostDatalib.getInstance().init(context);
        OtherEventMap.getInstance().appInstall();
        h.b().a();
        OtherEventMap.getInstance().appStart(context);
    }

    public void onPause() {
        YmnDatalibLogger.i("YmnDatafunSdk onPause");
        OtherEventMap.getInstance().appOnPaues();
    }

    public void onRequestPermissionsResult(Context context) {
    }

    public void onResume() {
        YmnDatalibLogger.i("YmnDatafunSdk onResume");
        OtherEventMap.getInstance().appOnResume();
    }

    public void setBaseVer(String str) {
        PlatformUtils.getInstance().setYmnsdkVer(str);
    }

    public void setLoginPlatformInfo(int i, String str, String str2) {
        YmnDatalibLogger.i("YmnDatafunSdk setLoginPlatformInfo");
        PlatformUtils.getInstance().setLoginPlatformInfo(i, str, str2);
    }

    public void setPayPlatformInfo(int i, String str, String str2) {
        YmnDatalibLogger.i("YmnDatafunSdk setPayPlatformInfo");
        TraceUtils.getInstance().getStartPayTrace();
        PlatformUtils.getInstance().setPayPlatformInfo(i, str, str2);
    }

    public void setPostUrl(String str) {
        f.a().b(str);
    }
}
