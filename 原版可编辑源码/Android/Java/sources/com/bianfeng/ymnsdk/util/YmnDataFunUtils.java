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
        if (ymnDataFunUtils == null) {
            synchronized (YmnDataFunUtils.class) {
                if (ymnDataFunUtils == null) {
                    ymnDataFunUtils = new YmnDataFunUtils();
                }
            }
        }
        return ymnDataFunUtils;
    }

    public void initContext(Context context) {
        getPlatformUtils().setYmnsdkVer(YmnSdk.getVersion());
        String url = YmnAppContext.getDataFunUrl();
        Logger.i("上抛的url---" + url);
        if (!TextUtils.isEmpty(url)) {
            YmnDatafunSdk.getInstance().setPostUrl(url);
        }
        YmnDatafunSdk.getInstance().onInit(context);
    }

    public void initSdkResturn(int code, String msg) {
        try {
            YmnDatafunSdk.getInstance().initSdkReturn(code, msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void initActivity(Activity activity) {
        onCreate(activity);
    }

    public void initLogin(YmnPluginWrapper wrapper) {
        int platform_id = 0;
        try {
            platform_id = Integer.parseInt(wrapper.getPluginId());
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            YmnDatafunSdk.getInstance().setLoginPlatformInfo(platform_id, wrapper.getSdkVersion(), wrapper.getPluginVersion() + "");
        } catch (Exception e2) {
            e2.printStackTrace();
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

    public void loginStart(YmnPluginWrapper wrapper) {
        Logger.i("YmnDataFunUtils loginStart");
        initLogin(wrapper);
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginStartEvent();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginSdkReturn(int rst_code, String rst_msg) {
        if (rst_code == 102) {
            rst_code = 0;
        } else if (rst_code != 105 && rst_code != 106) {
            return;
        }
        try {
            Logger.i("YmnDataFunUtils loginSdkReturn" + rst_msg + "|" + rst_code);
            YmnDatafunSdk.getInstance().getLoginEvent().loginSdkReturnEvent(Integer.valueOf(rst_code), rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginNewRequest(String server_name) {
        try {
            Logger.i("YmnDataFunUtils loginNewRequest");
            YmnDatafunSdk.getInstance().getLoginEvent().loginNewRequestEvent(server_name);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginNewResponseEvent(int rst_code, String rst_msg) {
        if (rst_code == 118) {
            rst_code = 0;
        } else if (rst_code != 119) {
            return;
        }
        try {
            Logger.i("YmnDataFunUtils loginNewResponseEvent");
            YmnDatafunSdk.getInstance().getLoginEvent().loginNewResponseEvent(Integer.valueOf(rst_code), rst_code + "|" + rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldRequestEvent(String server_name) {
        try {
            Logger.i("YmnDataFunUtils loginOldRequestEvent");
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldRequestEvent(server_name);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldResponseEvent(int rst_code, String rst_msg) {
        if (rst_code == 102) {
            rst_code = 0;
        } else if (rst_code != 105) {
            return;
        }
        try {
            Logger.i("YmnDataFunUtils loginOldResponseEvent");
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldResponseEvent(rst_code, rst_code + "|" + rst_msg, "", "");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldRequestCheckEvent(String server_name) {
        Logger.i("YmnDataFunUtils loginOldRequestCheckEvent|" + Thread.currentThread().getName());
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldRequestCheckEvent(server_name);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginOldResponseCheckEvent(Integer rst_code, String rst_msg) {
        Logger.i("YmnDataFunUtils loginOldResponseCheckEvent|" + Thread.currentThread().getName());
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginOldResponseCheckEvent(rst_code, rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginCustomCallEvent(Integer eventid, String server_name, String callmsg) {
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginCustomCallEvent(eventid, server_name, callmsg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginCustomReturnEvent(Integer eventid, Integer rst_code, String rst_msg) {
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginCustomReturnEvent(eventid, rst_code, rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void loginFinishEvent(int rst_code, String rst_msg) {
        try {
            YmnDatafunSdk.getInstance().getLoginEvent().loginFinishEvent(Integer.valueOf(rst_code), rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payInit(YmnPluginWrapper wrapper) {
        int platform_id = 0;
        try {
            platform_id = Integer.parseInt(wrapper.getPluginId());
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            YmnDatafunSdk.getInstance().setPayPlatformInfo(platform_id, wrapper.getSdkVersion(), wrapper.getPluginVersion() + "");
        } catch (Exception e2) {
            e2.printStackTrace();
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

    public void paySdkReturn(int rst_code, String rst_msg) {
        switch (rst_code) {
            case 200:
                rst_code = 0;
                break;
            case 201:
            case 202:
            case 203:
                break;
            default:
                return;
        }
        try {
            Logger.i("YmnDataFunUtils paySdkReturn" + rst_msg + "|" + rst_code);
            YmnDatafunSdk.getInstance().getPayEvent().paySdkReturnEvent(Integer.valueOf(rst_code), rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payRequestOrder(String ser_name) {
        Logger.i("YmnDataFunUtils payRequestOrder" + ser_name);
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payRequestOrderEvent(ser_name, "");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payResponseOrder(int rst_code, String rst_msg, String order_no) {
        if (rst_code != 212) {
            switch (rst_code) {
                case 200:
                    rst_code = 0;
                    break;
                case 201:
                case 202:
                    break;
                default:
                    return;
            }
        }
        try {
            Logger.i("YmnDataFunUtils payResponseOrder");
            YmnDatafunSdk.getInstance().getPayEvent().payResponseOrderEvent(Integer.valueOf(rst_code), rst_code + "|" + rst_msg, order_no);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payRequestNotity(String server_name) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payRequestNotityEvent(server_name);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payRequestNotity(String server_name, String orderOn) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payRequestNotityEvent(server_name, orderOn);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payResponseNotity(int rst_code, String rst_msg) {
        if (rst_code == 200) {
            rst_code = 0;
        } else if (rst_code != 201 && rst_code != 203) {
            return;
        }
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payResponseNotityEvent(Integer.valueOf(rst_code), rst_code + "|" + rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payResponseNotity(int rst_code, String orderOn, String rst_msg) {
        if (rst_code == 200) {
            rst_code = 0;
        } else if (rst_code != 201 && rst_code != 203) {
            return;
        }
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payResponseNotityEvent(Integer.valueOf(rst_code), orderOn, rst_code + "|" + rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void paySdkOrderEvent(String msg) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().paySdkOrderEvent(msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void paySdkOrderReturnEvent(Integer rst_code, String rst_msg) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().paySdkOrderReturnEvent(rst_code, rst_msg);
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

    public void payResponseOrderListEvent(Integer rst_code, String rst_msg) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payResponseOrderListEvent(rst_code, rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payCustomCallEvent(Integer eventid, String server_name, String callmsg) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomCallEvent(eventid, server_name, callmsg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payCustomCallEvent(Integer eventid, String orderOn, String server_name, String callmsg) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomCallEvent(eventid, orderOn, server_name, callmsg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payCustomReturnEvent(Integer eventid, Integer rst_code, String rst_msg) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomReturnEvent(eventid, rst_code, rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void payCustomReturnEvent(Integer eventid, String orderOn, Integer rst_code, String rst_msg) {
        try {
            YmnDatafunSdk.getInstance().getPayEvent().payCustomReturnEvent(eventid, orderOn, rst_code, rst_msg);
        } catch (Exception e) {
            e.printStackTrace();
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
        } catch (Exception e) {
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

    public DeviceInfo getDeviceInfo() {
        return DeviceInfo.getInstance();
    }

    public String getDeviceId() {
        return getDeviceInfo().getDeviceId();
    }

    public AppContext getAppContext() {
        return AppContext.getInstance();
    }

    public PlatformUtils getPlatformUtils() {
        return PlatformUtils.getInstance();
    }

    public String getChannelId() {
        try {
            return YmnAppContext.getChannelId();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public String getGroupId() {
        try {
            return YmnAppContext.getGroupId();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public void onCreate(Context context) {
        try {
            Logger.i("YmnDataFunUtils onCreate");
        } catch (Exception e) {
            e.printStackTrace();
        }
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

    public void onPause() {
        if (YmnUtilsdk.isAgreeprivacy()) {
            try {
                YmnDatafunSdk.getInstance().onPause();
            } catch (Exception e) {
                e.printStackTrace();
            }
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

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
    }

    public void pluginStart(String event_name, String plugin_id, String plugin_ver, String sdk_ver) {
        try {
            YmnDatafunSdk.getInstance().getPluginEvent().a(event_name, plugin_id, plugin_ver, sdk_ver, "");
        } catch (Exception e) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x0019 A[Catch: Exception -> 0x001d, TRY_LEAVE, TryCatch #0 {Exception -> 0x001d, blocks: (B:3:0x0002, B:5:0x0005, B:6:0x0019), top: B:11:0x0002 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void pluginStart(String event_name, String plugin_id, String plugin_ver, String sdk_ver, Object[] obj) {
        if (obj != null) {
            try {
                if (obj.length != 0) {
                    YmnDatafunSdk.getInstance().getPluginEvent().a(event_name, plugin_id, plugin_ver, sdk_ver, Arrays.toString(obj));
                } else {
                    pluginStart(event_name, plugin_id, plugin_ver, sdk_ver);
                }
            } catch (Exception e) {
            }
        }
    }

    public void pluginFinish(String event_name, String plugin_id, String plugin_ver, String sdk_ver, int rst_code, String msg) {
        try {
            YmnDatafunSdk.getInstance().getPluginEvent().a(event_name, plugin_id, plugin_ver, sdk_ver, rst_code, msg, "");
        } catch (Exception e) {
        }
    }
}
