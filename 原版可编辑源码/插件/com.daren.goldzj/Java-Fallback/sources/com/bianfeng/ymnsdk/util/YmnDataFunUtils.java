package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.YmnSdk;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk;
import com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils;
import com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils;
import java.util.Arrays;

public class YmnDataFunUtils {
    private static volatile YmnDataFunUtils ymnDataFunUtils;

    private YmnDataFunUtils() {
    }

    public static YmnDataFunUtils getInstance() {
        if (ymnDataFunUtils != null) goto L15;
        monitor-enter(YmnDataFunUtils.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (ymnDataFunUtils != null) goto L9;
        ymnDataFunUtils = new YmnDataFunUtils();     // Catch: Throwable -> L11
    L9:
        monitor-exit(YmnDataFunUtils.class);     // Catch: Throwable -> L11
    L15:
        return ymnDataFunUtils;
    }

    public AppContext getAppContext() {
        return AppContext.getInstance();
    }

    public String getChannelId() {
        return YmnAppContext.getChannelId();
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    public String getDeviceId() {
        return getDeviceInfo().getDeviceId();
    }

    public DeviceInfo getDeviceInfo() {
        return DeviceInfo.getInstance();
    }

    public String getGroupId() {
        return YmnAppContext.getGroupId();
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    public String getInitTrace() {
        return TraceUtils.getInstance().getOriginTrace();
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    public String getLoginTrace() {
        return YmnDatafunSdk.getInstance().getLoginTrace();
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    public String getPayTrace() {
        return YmnDatafunSdk.getInstance().getPayTrace();
    L4:
        return "";
    }

    public PlatformUtils getPlatformUtils() {
        return PlatformUtils.getInstance();
    }

    public void initActivity(Activity r1) {
        onCreate(r1);
    }

    public void initContext(Context r4) {
        getPlatformUtils().setYmnsdkVer(YmnSdk.getVersion());
        String r0 = YmnAppContext.getDataFunUrl();
        Logger.i("上抛的url---" + r0);
        if (TextUtils.isEmpty(r0) == true) goto L5;
        YmnDatafunSdk.getInstance().setPostUrl(r0);
    L5:
        YmnDatafunSdk.getInstance().onInit(r4);
    }

    public void initLogin(YmnPluginWrapper r5) {
        int r0 = Integer.parseInt(r5.getPluginId());     // Catch: Exception -> L4
    L11:
        YmnDatafunSdk.getInstance().setLoginPlatformInfo(r0, r5.getSdkVersion(), r5.getPluginVersion() + "");     // Catch: Exception -> L8
        return;
    L8:
        e = move-exception;
        e.printStackTrace();
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
        r0 = 0;
        goto L11
    }

    public void loginCustomCallEvent(Integer r2, String r3, String r4) {
        YmnDatafunSdk.getInstance().getLoginEvent().loginCustomCallEvent(r2, r3, r4);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void loginCustomReturnEvent(Integer r2, Integer r3, String r4) {
        YmnDatafunSdk.getInstance().getLoginEvent().loginCustomReturnEvent(r2, r3, r4);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void loginFinishEvent(int r2, String r3) {
        YmnDatafunSdk.getInstance().getLoginEvent().loginFinishEvent(Integer.valueOf(r2), r3);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void loginNewRequest(String r2) {
        Logger.i("YmnDataFunUtils loginNewRequest");     // Catch: Exception -> L4
        YmnDatafunSdk.getInstance().getLoginEvent().loginNewRequestEvent(r2);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void loginNewResponseEvent(int r4, String r5) {
        if (r4 != 118) goto L5;
        r4 = 0;
    L13:
        Logger.i("YmnDataFunUtils loginNewResponseEvent");     // Catch: Exception -> L10
        YmnDatafunSdk.getInstance().getLoginEvent().loginNewResponseEvent(Integer.valueOf(r4), r4 + "|" + r5);     // Catch: Exception -> L10
        return;
    L10:
        e = move-exception;
        e.printStackTrace();
        return;
    L5:
        if (r4 == 119) goto L13;
    }

    public void loginOldRequestCheckEvent(String r3) {
        Logger.i("YmnDataFunUtils loginOldRequestCheckEvent|" + Thread.currentThread().getName());
        YmnDatafunSdk.getInstance().getLoginEvent().loginOldRequestCheckEvent(r3);     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    public void loginOldRequestEvent(String r2) {
        Logger.i("YmnDataFunUtils loginOldRequestEvent");     // Catch: Exception -> L4
        YmnDatafunSdk.getInstance().getLoginEvent().loginOldRequestEvent(r2);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void loginOldResponseCheckEvent(Integer r3, String r4) {
        Logger.i("YmnDataFunUtils loginOldResponseCheckEvent|" + Thread.currentThread().getName());
        YmnDatafunSdk.getInstance().getLoginEvent().loginOldResponseCheckEvent(r3, r4);     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    public void loginOldResponseEvent(int r5, String r6) {
        if (r5 != 102) goto L5;
        r5 = 0;
    L13:
        Logger.i("YmnDataFunUtils loginOldResponseEvent");     // Catch: Exception -> L10
        YmnDatafunSdk.getInstance().getLoginEvent().loginOldResponseEvent(r5, r5 + "|" + r6, "", "");     // Catch: Exception -> L10
        return;
    L10:
        e = move-exception;
        e.printStackTrace();
        return;
    L5:
        if (r5 == 105) goto L13;
    }

    public void loginSdkReturn(int r3, String r4) {
        if (r3 != 102) goto L5;
        r3 = 0;
    L15:
        Logger.i("YmnDataFunUtils loginSdkReturn" + r4 + "|" + r3);     // Catch: Exception -> L12
        YmnDatafunSdk.getInstance().getLoginEvent().loginSdkReturnEvent(Integer.valueOf(r3), r4);     // Catch: Exception -> L12
        return;
    L12:
        e = move-exception;
        e.printStackTrace();
        return;
    L5:
        if (r3 == 105) goto L15;
        if (r3 == 106) goto L15;
    }

    public void loginStart() {
        Logger.i("YmnDataFunUtils loginStart");
        YmnDatafunSdk.getInstance().getLoginEvent().loginStartEvent();     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    public void onCreate(Context r1) {
        Logger.i("YmnDataFunUtils onCreate");     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void onDestroy() {
        if (YmnUtilsdk.isAgreeprivacy() == false) goto L11;
        YmnDatafunSdk.getInstance().onDestroy();     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        e.printStackTrace();
        return;
    }

    public void onPause() {
        if (YmnUtilsdk.isAgreeprivacy() == false) goto L11;
        YmnDatafunSdk.getInstance().onPause();     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        e.printStackTrace();
        return;
    }

    public void onRequestPermissionsResult(int r1, String[] r2, int[] r3) {
    }

    public void onResume() {
        if (YmnUtilsdk.isAgreeprivacy() == false) goto L11;
        Logger.i("YmnDataFunUtils onResume");     // Catch: Exception -> L6
        YmnDatafunSdk.getInstance().onResume();     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        e.printStackTrace();
        return;
    }

    public void payCallSdk() {
        Logger.i("YmnDataFunUtils payCallSdk");
        YmnDatafunSdk.getInstance().getPayEvent().payCallSdkEvent();     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    public void payCustomCallEvent(Integer r2, String r3, String r4) {
        YmnDatafunSdk.getInstance().getPayEvent().payCustomCallEvent(r2, r3, r4);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void payCustomReturnEvent(Integer r2, Integer r3, String r4) {
        YmnDatafunSdk.getInstance().getPayEvent().payCustomReturnEvent(r2, r3, r4);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void payInit(YmnPluginWrapper r5) {
        int r0 = Integer.parseInt(r5.getPluginId());     // Catch: Exception -> L4
    L11:
        YmnDatafunSdk.getInstance().setPayPlatformInfo(r0, r5.getSdkVersion(), r5.getPluginVersion() + "");     // Catch: Exception -> L8
        return;
    L8:
        e = move-exception;
        e.printStackTrace();
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
        r0 = 0;
        goto L11
    }

    public void payRequestNotity(String r2) {
        YmnDatafunSdk.getInstance().getPayEvent().payRequestNotityEvent(r2);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void payRequestOrder(String r3) {
        Logger.i("YmnDataFunUtils payRequestOrder" + r3);
        YmnDatafunSdk.getInstance().getPayEvent().payRequestOrderEvent(r3, "");     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    public void payRequestOrderListSdkEvent() {
        YmnDatafunSdk.getInstance().getPayEvent().payRequestOrderListSdkEvent();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void payResponseNotity(int r4, String r5) {
        if (r4 != 200) goto L5;
        r4 = 0;
    L15:
        YmnDatafunSdk.getInstance().getPayEvent().payResponseNotityEvent(Integer.valueOf(r4), r4 + "|" + r5);     // Catch: Exception -> L12
        return;
    L12:
        e = move-exception;
        e.printStackTrace();
        return;
    L5:
        if (r4 == 201) goto L15;
        if (r4 == 203) goto L15;
    }

    public void payResponseOrder(int r4, String r5, String r6) {
        if (r4 == 212) goto L12;
        switch(r4) {
            case 200: goto L6;
            case 201: goto L12;
            case 202: goto L12;
            default: goto L14;
        };
    L6:
        r4 = 0;
        goto L12
    L14:
        return;
    L12:
        Logger.i("YmnDataFunUtils payResponseOrder");     // Catch: Exception -> L9
        YmnDatafunSdk.getInstance().getPayEvent().payResponseOrderEvent(Integer.valueOf(r4), r4 + "|" + r5, r6);     // Catch: Exception -> L9
        return;
    L9:
        e = move-exception;
        e.printStackTrace();
    }

    public void payResponseOrderListEvent(Integer r2, String r3) {
        YmnDatafunSdk.getInstance().getPayEvent().payResponseOrderListEvent(r2, r3);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void paySdkOrderEvent(String r2) {
        YmnDatafunSdk.getInstance().getPayEvent().paySdkOrderEvent(r2);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void paySdkOrderReturnEvent(Integer r2, String r3) {
        YmnDatafunSdk.getInstance().getPayEvent().paySdkOrderReturnEvent(r2, r3);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void paySdkReturn(int r3, String r4) {
        switch(r3) {
            case 200: goto L4;
            case 201: goto L10;
            case 202: goto L10;
            case 203: goto L10;
            default: goto L12;
        };
    L4:
        r3 = 0;
    L10:
        Logger.i("YmnDataFunUtils paySdkReturn" + r4 + "|" + r3);     // Catch: Exception -> L7
        YmnDatafunSdk.getInstance().getPayEvent().paySdkReturnEvent(Integer.valueOf(r3), r4);     // Catch: Exception -> L7
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
        return;
    }

    public void pluginFinish(String r10, String r11, String r12, String r13, int r14, String r15) {
        YmnDatafunSdk.getInstance().getPluginEvent().end(r10, r11, r12, r13, r14, r15, "");     // Catch: Exception -> L4
        return;
    }

    public void pluginStart(String r8, String r9, String r10, String r11) {
        YmnDatafunSdk.getInstance().getPluginEvent().start(r8, r9, r10, r11, "");     // Catch: Exception -> L4
        return;
    }

    public void pluginStart(String r8, String r9, String r10, String r11, Object[] r12) {
        if (r12 != null) goto L10;
    L6:
        pluginStart(r8, r9, r10, r11);     // Catch: Exception -> L8
    L9:
        return;
    L12:
        return;
    L10:
        if (r12.length == 0) goto L6;
        YmnDatafunSdk.getInstance().getPluginEvent().start(r8, r9, r10, r11, Arrays.toString(r12));     // Catch: Exception -> L8
        goto L9
    }

    public void payCustomCallEvent(Integer r2, String r3, String r4, String r5) {
        YmnDatafunSdk.getInstance().getPayEvent().payCustomCallEvent(r2, r3, r4, r5);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void payCustomReturnEvent(Integer r2, String r3, Integer r4, String r5) {
        YmnDatafunSdk.getInstance().getPayEvent().payCustomReturnEvent(r2, r3, r4, r5);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void payRequestNotity(String r2, String r3) {
        YmnDatafunSdk.getInstance().getPayEvent().payRequestNotityEvent(r2, r3);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void payResponseNotity(int r4, String r5, String r6) {
        if (r4 != 200) goto L5;
        r4 = 0;
    L15:
        YmnDatafunSdk.getInstance().getPayEvent().payResponseNotityEvent(Integer.valueOf(r4), r5, r4 + "|" + r6);     // Catch: Exception -> L12
        return;
    L12:
        e = move-exception;
        e.printStackTrace();
        return;
    L5:
        if (r4 == 201) goto L15;
        if (r4 == 203) goto L15;
    }

    public void loginStart(YmnPluginWrapper r2) {
        Logger.i("YmnDataFunUtils loginStart");
        initLogin(r2);
        YmnDatafunSdk.getInstance().getLoginEvent().loginStartEvent();     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }
}
