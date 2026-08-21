package com.bianfeng.ymnsdk.util;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.platform.PaymentWrapper;
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
        if (ymnDataFunUtils == null) {
            synchronized (YmnDataFunUtils.class) {
                if (ymnDataFunUtils == null) {
                    ymnDataFunUtils = new YmnDataFunUtils();
                }
            }
        }
        return ymnDataFunUtils;
    }

    public AppContext getAppContext() {
        return AppContext.getInstance();
    }

    public String getChannelId() {
        try {
            return YmnAppContext.getChannelId();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public String getDeviceId() {
        return getDeviceInfo().getDeviceId();
    }

    public DeviceInfo getDeviceInfo() {
        return DeviceInfo.getInstance();
    }

    public String getGroupId() {
        try {
            return YmnAppContext.getGroupId();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public String getInitTrace() {
        try {
            return TraceUtils.getInstance().getOriginTrace();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public String getLoginTrace() {
        try {
            return YmnDatafunSdk.getInstance().getLoginTrace();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public String getPayTrace() {
        try {
            return YmnDatafunSdk.getInstance().getPayTrace();
        } catch (Exception unused) {
            return "";
        }
    }

    public PlatformUtils getPlatformUtils() {
        return PlatformUtils.getInstance();
    }

    public void initActivity(Activity activity) {
        onCreate(activity);
    }

    public void initContext(Context context) {
        getPlatformUtils().setYmnsdkVer(YmnSdk.getVersion());
        String dataFunUrl = YmnAppContext.getDataFunUrl();
        Logger.i("上抛的url---" + dataFunUrl);
        if (!TextUtils.isEmpty(dataFunUrl)) {
            YmnDatafunSdk.getInstance().setPostUrl(dataFunUrl);
        }
        YmnDatafunSdk.getInstance().onInit(context);
    }

    public void initLogin(YmnPluginWrapper ymnPluginWrapper) {
        int i;
        try {
            i = Integer.parseInt(ymnPluginWrapper.getPluginId());
        } catch (Exception e) {
            e.printStackTrace();
            i = 0;
        }
        try {
            YmnDatafunSdk.getInstance().setLoginPlatformInfo(i, ymnPluginWrapper.getSdkVersion(), ymnPluginWrapper.getPluginVersion() + "");
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public void loginCustomCallEvent(Integer num, String str, String str2) {
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginCustomCallEvent(num, str, str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginCustomReturnEvent(Integer num, Integer num2, String str) {
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginCustomReturnEvent(num, num2, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginFinishEvent(int i, String str) {
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginFinishEvent(Integer.valueOf(i), str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginNewRequest(String str) {
        try {
            Logger.i("YmnDataFunUtils loginNewRequest");
            YmnDatafunSdk.getInstance().getLoginEvent().loginNewRequestEvent(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginNewResponseEvent(int i, String str) {
        if (i == 118) {
            i = 0;
        } else if (i != 119) {
            return;
        }
        try {
            Logger.i("YmnDataFunUtils loginNewResponseEvent");
            YmnDatafunSdk.getInstance().getLoginEvent().loginNewResponseEvent(Integer.valueOf(i), i + "|" + str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldRequestCheckEvent(String str) {
        Logger.i("YmnDataFunUtils loginOldRequestCheckEvent|" + Thread.currentThread().getName());
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldRequestCheckEvent(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldRequestEvent(String str) {
        try {
            Logger.i("YmnDataFunUtils loginOldRequestEvent");
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldRequestEvent(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldResponseCheckEvent(Integer num, String str) {
        Logger.i("YmnDataFunUtils loginOldResponseCheckEvent|" + Thread.currentThread().getName());
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldResponseCheckEvent(num, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldResponseEvent(int i, String str) {
        if (i == 102) {
            i = 0;
        } else if (i != 105) {
            return;
        }
        try {
            Logger.i("YmnDataFunUtils loginOldResponseEvent");
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldResponseEvent(i, i + "|" + str, "", "");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginSdkReturn(int i, String str) {
        if (i == 102) {
            i = 0;
        } else if (i != 105 && i != 106) {
            return;
        }
        try {
            Logger.i("YmnDataFunUtils loginSdkReturn" + str + "|" + i);
            YmnDatafunSdk.getInstance().getLoginEvent().loginSdkReturnEvent(Integer.valueOf(i), str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginStart() {
        Logger.i("YmnDataFunUtils loginStart");
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginStartEvent();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void onCreate(Context context) {
        try {
            Logger.i("YmnDataFunUtils onCreate");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void onDestroy() {
        if (YmnUtilsdk.isAgreeprivacy()) {
            try {
                YmnDatafunSdk.getInstance().onDestroy();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void onPause() {
        if (YmnUtilsdk.isAgreeprivacy()) {
            try {
                YmnDatafunSdk.getInstance().onPause();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
    }

    public void onResume() {
        if (YmnUtilsdk.isAgreeprivacy()) {
            try {
                Logger.i("YmnDataFunUtils onResume");
                YmnDatafunSdk.getInstance().onResume();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void payCallSdk() {
        Logger.i("YmnDataFunUtils payCallSdk");
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCallSdkEvent();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payCustomCallEvent(Integer num, String str, String str2) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomCallEvent(num, str, str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payCustomReturnEvent(Integer num, Integer num2, String str) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomReturnEvent(num, num2, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payInit(YmnPluginWrapper ymnPluginWrapper) {
        int i;
        try {
            i = Integer.parseInt(ymnPluginWrapper.getPluginId());
        } catch (Exception e) {
            e.printStackTrace();
            i = 0;
        }
        try {
            YmnDatafunSdk.getInstance().setPayPlatformInfo(i, ymnPluginWrapper.getSdkVersion(), ymnPluginWrapper.getPluginVersion() + "");
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public void payRequestNotity(String str) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payRequestNotityEvent(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payRequestOrder(String str) {
        Logger.i("YmnDataFunUtils payRequestOrder" + str);
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payRequestOrderEvent(str, "");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payRequestOrderListSdkEvent() {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payRequestOrderListSdkEvent();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payResponseNotity(int i, String str) {
        if (i == 200) {
            i = 0;
        } else if (i != 201 && i != 203) {
            return;
        }
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payResponseNotityEvent(Integer.valueOf(i), i + "|" + str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payResponseOrder(int i, String str, String str2) {
        if (i != 212) {
            switch (i) {
                case PaymentWrapper.PAYRESULT_SUCCESS:
                    i = 0;
                    break;
                case PaymentWrapper.PAYRESULT_FAIL:
                case PaymentWrapper.PAYRESULT_CANCEL:
                    break;
                default:
                    return;
            }
        }
        try {
            Logger.i("YmnDataFunUtils payResponseOrder");
            YmnDatafunSdk.getInstance().getPayEvent().payResponseOrderEvent(Integer.valueOf(i), i + "|" + str, str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payResponseOrderListEvent(Integer num, String str) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payResponseOrderListEvent(num, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void paySdkOrderEvent(String str) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().paySdkOrderEvent(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void paySdkOrderReturnEvent(Integer num, String str) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().paySdkOrderReturnEvent(num, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void paySdkReturn(int i, String str) {
        switch (i) {
            case PaymentWrapper.PAYRESULT_SUCCESS:
                i = 0;
                break;
            case PaymentWrapper.PAYRESULT_FAIL:
            case PaymentWrapper.PAYRESULT_CANCEL:
            case PaymentWrapper.PAYRESULT_NETWORK_ERROR:
                break;
            default:
                return;
        }
        try {
            Logger.i("YmnDataFunUtils paySdkReturn" + str + "|" + i);
            YmnDatafunSdk.getInstance().getPayEvent().paySdkReturnEvent(Integer.valueOf(i), str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void pluginFinish(String str, String str2, String str3, String str4, int i, String str5) {
        try {
            YmnDatafunSdk.getInstance().getPluginEvent().end(str, str2, str3, str4, i, str5, "");
        } catch (Exception unused) {
        }
    }

    public void pluginStart(String str, String str2, String str3, String str4) {
        try {
            YmnDatafunSdk.getInstance().getPluginEvent().start(str, str2, str3, str4, "");
        } catch (Exception unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x0019 A[Catch: Exception -> 0x001c, TRY_LEAVE, TryCatch #0 {Exception -> 0x001c, blocks: (B:3:0x0002, B:5:0x0005, B:6:0x0019), top: B:10:0x0002 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void pluginStart(String str, String str2, String str3, String str4, Object[] objArr) {
        if (objArr != null) {
            try {
                if (objArr.length != 0) {
                    YmnDatafunSdk.getInstance().getPluginEvent().start(str, str2, str3, str4, Arrays.toString(objArr));
                } else {
                    pluginStart(str, str2, str3, str4);
                }
            } catch (Exception unused) {
            }
        }
    }

    public void payCustomCallEvent(Integer num, String str, String str2, String str3) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomCallEvent(num, str, str2, str3);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payCustomReturnEvent(Integer num, String str, Integer num2, String str2) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomReturnEvent(num, str, num2, str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payRequestNotity(String str, String str2) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payRequestNotityEvent(str, str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payResponseNotity(int i, String str, String str2) {
        if (i == 200) {
            i = 0;
        } else if (i != 201 && i != 203) {
            return;
        }
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payResponseNotityEvent(Integer.valueOf(i), str, i + "|" + str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginStart(YmnPluginWrapper ymnPluginWrapper) {
        Logger.i("YmnDataFunUtils loginStart");
        initLogin(ymnPluginWrapper);
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginStartEvent();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
