package com.bianfeng.ymnsdk.hostaction;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.action.HttpListener;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.ResourceUtil;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.google.gson.Gson;
import java.io.File;
import java.io.FileInputStream;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Properties;
import org.json.JSONObject;

public class YmnURLManagerV2 {
    public static boolean config_has_get_fail = false;
    public static int get_url_times = 0;
    public static Map<String, RequestEntityList> hostMap = null;
    public static String isGain = "false";
    public static boolean login_has_get_fail = false;
    static Context mContext = null;
    public static String nowType = "sdk_config|a";
    public static boolean trade_has_get_fail = false;
    public static boolean ymn_has_get_fail = false;

    class a implements HttpListener {
        a() {
        }

        @Override
        public void onComplete(String str) {
            Logger.i("获取到的：" + str);
            try {
                JSONObject jSONObject = new JSONObject(new JSONObject(str).optString("data"));
                YmnURLManagerV2.setHost(jSONObject.optString(HostConstant.login), YmnURLManagerV2.hostMap.get(HostConstant.login));
                YmnURLManagerV2.setHost(jSONObject.optString(HostConstant.trade), YmnURLManagerV2.hostMap.get(HostConstant.trade));
                YmnURLManagerV2.setHost(jSONObject.optString(HostConstant.config), YmnURLManagerV2.hostMap.get(HostConstant.config));
                YmnURLManagerV2.setHost(jSONObject.optString(HostConstant.ymn), YmnURLManagerV2.hostMap.get(HostConstant.ymn));
                YmnURLManagerV2.isGain = "true";
                YmnURLManagerV2.setHostType();
                YmnURLManagerV2.hostMap.get(HostConstant.login).resetUseable();
                YmnURLManagerV2.hostMap.get(HostConstant.trade).resetUseable();
                YmnURLManagerV2.hostMap.get(HostConstant.config).resetUseable();
                YmnURLManagerV2.hostMap.get(HostConstant.ymn).resetUseable();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        /* JADX WARN: Removed duplicated region for block: B:17:0x0052  */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public void onError(int i, String str) {
            byte b;
            Logger.i("获取host失败|" + i + "|" + str);
            String str2 = YmnURLManagerV2.nowType;
            switch (str2.hashCode()) {
                case -1683595124:
                    b = str2.equals("sdk_config|a") ? (byte) 0 : (byte) -1;
                    break;
                case -1683595123:
                    if (str2.equals("sdk_config|b")) {
                        b = 1;
                        break;
                    }
                    break;
                case -1683595122:
                    if (str2.equals("sdk_config|c")) {
                        b = 2;
                        break;
                    }
                    break;
                case -1683595121:
                    if (str2.equals("sdk_config|d")) {
                        b = 3;
                        break;
                    }
                    break;
            }
            if (b == 0) {
                YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(0).setCan_useful(false);
            } else if (b == 1) {
                YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(1).setCan_useful(false);
            } else if (b == 2) {
                YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(2).setCan_useful(false);
            } else if (b == 3) {
                YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(3).setCan_useful(false);
            }
            int i2 = 0;
            for (int i3 = 0; i3 < 4; i3++) {
                if (!YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(i3).can_useful) {
                    i2++;
                }
            }
            if (i2 > 3) {
                YmnURLManagerV2.gainHost(YmnURLManagerV2.mContext);
            }
        }
    }

    static void changeLoaclUrl(JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = new JSONObject(jSONObject.optString(HostConstant.login));
            hostMap.get(HostConstant.login).getRequestEntityList().get(0).url = jSONObject2.optString("server_a");
            hostMap.get(HostConstant.login).getRequestEntityList().get(0).weight = jSONObject2.optInt("server_a_weight");
            hostMap.get(HostConstant.login).getRequestEntityList().get(1).url = jSONObject2.optString("server_b");
            hostMap.get(HostConstant.login).getRequestEntityList().get(1).weight = jSONObject2.optInt("server_b_weight");
            JSONObject jSONObject3 = new JSONObject(jSONObject.optString(HostConstant.trade));
            hostMap.get(HostConstant.trade).getRequestEntityList().get(0).url = jSONObject3.optString("server_a");
            hostMap.get(HostConstant.trade).getRequestEntityList().get(0).weight = jSONObject3.optInt("server_a_weight");
            hostMap.get(HostConstant.trade).getRequestEntityList().get(1).url = jSONObject3.optString("server_b");
            hostMap.get(HostConstant.trade).getRequestEntityList().get(1).weight = jSONObject3.optInt("server_b_weight");
            JSONObject jSONObject4 = new JSONObject(jSONObject.optString(HostConstant.config));
            hostMap.get(HostConstant.config).getRequestEntityList().get(0).url = jSONObject4.optString("server_a");
            hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight = jSONObject4.optInt("server_a_weight");
            hostMap.get(HostConstant.config).getRequestEntityList().get(1).url = jSONObject4.optString("server_b");
            hostMap.get(HostConstant.config).getRequestEntityList().get(1).weight = jSONObject4.optInt("server_b_weight");
            JSONObject jSONObject5 = new JSONObject(jSONObject.optString(HostConstant.ymn));
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).url = jSONObject5.optString("server_a");
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).weight = jSONObject5.optInt("server_a_weight");
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(1).url = jSONObject5.optString("server_b");
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(1).weight = jSONObject5.optInt("server_b_weight");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void gainHost(Context context) {
        Logger.i("服务请求");
        mContext = context;
        try {
            String hostUrl = getHostUrl();
            if (hostUrl.equals("failed")) {
                return;
            }
            HostHttpHelper hostHttpHelper = new HostHttpHelper(context);
            hostHttpHelper.setMethod(1);
            hostHttpHelper.request(hostUrl, "", new a());
        } catch (Exception unused) {
        }
    }

    public static synchronized String getHost(String str) {
        String string;
        if (isGain.equals("true") && get_url_times >= 3) {
            get_url_times = 0;
        }
        String loaclHost = getLoaclHost(str);
        if (loaclHost.equals("failed") || loaclHost.isEmpty()) {
            byte b = -1;
            int iHashCode = str.hashCode();
            if (iHashCode != 119770) {
                if (iHashCode != 103149417) {
                    if (iHashCode != 110621028) {
                        if (iHashCode == 1669754599 && str.equals(HostConstant.config)) {
                            b = 3;
                        }
                    } else if (str.equals(HostConstant.trade)) {
                        b = 1;
                    }
                } else if (str.equals(HostConstant.login)) {
                    b = 0;
                }
            } else if (str.equals(HostConstant.ymn)) {
                b = 2;
            }
            if (b == 0) {
                login_has_get_fail = true;
                loaclHost = hostMap.get(HostConstant.login).getRequestEntityList().get(0).url;
            } else if (b == 1) {
                trade_has_get_fail = true;
                loaclHost = hostMap.get(HostConstant.trade).getRequestEntityList().get(0).url;
            } else if (b == 2) {
                ymn_has_get_fail = true;
                loaclHost = hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).url;
            } else if (b != 3) {
                loaclHost = hostMap.get(HostConstant.config).getRequestEntityList().get(0).url;
            } else {
                config_has_get_fail = true;
                loaclHost = hostMap.get(HostConstant.config).getRequestEntityList().get(0).url;
            }
        } else {
            login_has_get_fail = false;
            trade_has_get_fail = false;
            ymn_has_get_fail = false;
            config_has_get_fail = false;
        }
        Logger.i("require host is1" + loaclHost);
        string = mContext.getSharedPreferences("SP_YMN_CHANGE_HOST", 0).getString("SP_YMN_CHANGE_HOST", "");
        if (string.isEmpty()) {
            string = loaclHost;
        }
        Logger.i("require host is2 " + string);
        return string;
    }

    private static String getHostUrl() throws YmnsdkException {
        String str;
        boolean z = false;
        boolean z2 = hostMap.get(HostConstant.config).getRequestEntityList().get(0).can_useful;
        boolean z3 = hostMap.get(HostConstant.config).getRequestEntityList().get(1).can_useful;
        boolean z4 = hostMap.get(HostConstant.config).getRequestEntityList().get(2).can_useful;
        boolean z5 = hostMap.get(HostConstant.config).getRequestEntityList().get(3).can_useful;
        if (z2 && z3) {
            z = true;
        } else {
            if (z2) {
                hostMap.get(HostConstant.config).setFormal_index(0);
            } else if (z3) {
                hostMap.get(HostConstant.config).setFormal_index(1);
            } else if (isGain.equals("true")) {
                if (!z4 || !z5) {
                    if (z4) {
                        hostMap.get(HostConstant.config).setFormal_index(2);
                    } else {
                        if (!z5) {
                            return "failed";
                        }
                        hostMap.get(HostConstant.config).setFormal_index(3);
                    }
                }
            }
            z = true;
        }
        if (z) {
            str = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).url;
            nowType = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).type + "|" + hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).port;
        } else {
            str = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).url;
            nowType = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).type + "|" + hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).port;
        }
        String sdkAppId = YmnAppContext.getSdkAppId();
        String sdkAppId2 = YmnAppContext.getSdkAppId();
        String configIdStr = YmnAppContext.getConfigIdStr();
        String channelId = YmnAppContext.getChannelId();
        if (sdkAppId == null || sdkAppId.toLowerCase().equals("unknow") || sdkAppId.isEmpty()) {
            sdkAppId = "0";
        }
        if (sdkAppId2 == null || sdkAppId2.toLowerCase().equals("unknow") || sdkAppId2.isEmpty()) {
            sdkAppId2 = "0";
        }
        if (configIdStr == null || configIdStr.toLowerCase().equals("unknow") || configIdStr.isEmpty()) {
            configIdStr = "0";
        }
        if (channelId == null || channelId.toLowerCase().equals("unknow") || channelId.isEmpty()) {
            channelId = "0";
        }
        return str + "/server_list/" + sdkAppId + "/" + sdkAppId2 + "/" + configIdStr + "/" + channelId + "/" + HostUtils.getSign(sdkAppId, sdkAppId2, configIdStr, channelId) + ".json";
    }

    private static String getLoaclHost(String str) {
        RequestEntityList requestEntityList = hostMap.get(str);
        String str2 = "failed";
        String str3 = "";
        if (HostUtils.judgeHost(hostMap, str) && isGain.equals("true")) {
            boolean z = requestEntityList.getRequestEntityList().get(2).can_useful;
            boolean z2 = requestEntityList.getRequestEntityList().get(3).can_useful;
            if (z && z2) {
                str2 = requestEntityList.getRequestEntityList().get(requestEntityList.getSpare_index()).url;
                str3 = requestEntityList.getRequestEntityList().get(requestEntityList.getSpare_index()).type + "|" + requestEntityList.getRequestEntityList().get(requestEntityList.getSpare_index()).port;
                Logger.e("require host is3" + str2);
            } else if (z) {
                str2 = requestEntityList.getRequestEntityList().get(2).url;
                str3 = requestEntityList.getRequestEntityList().get(2).type + "|" + requestEntityList.getRequestEntityList().get(2).port;
                Logger.e("require host is4" + str2);
            } else if (z2) {
                str2 = requestEntityList.getRequestEntityList().get(3).url;
                str3 = requestEntityList.getRequestEntityList().get(3).type + "|" + requestEntityList.getRequestEntityList().get(3).port;
                Logger.e("require host is5" + str2);
            } else {
                requestEntityList.setSpare_can_useful(false);
            }
        } else {
            boolean z3 = requestEntityList.getRequestEntityList().get(0).can_useful;
            boolean z4 = requestEntityList.getRequestEntityList().get(1).can_useful;
            if (z3 && z4) {
                str2 = requestEntityList.getRequestEntityList().get(requestEntityList.getFormal_index()).url;
                str3 = requestEntityList.getRequestEntityList().get(requestEntityList.getFormal_index()).type + "|" + requestEntityList.getRequestEntityList().get(requestEntityList.getFormal_index()).port;
                Logger.e("require host is6" + str2);
            } else if (z3) {
                str2 = requestEntityList.getRequestEntityList().get(0).url;
                str3 = requestEntityList.getRequestEntityList().get(0).type + "|" + requestEntityList.getRequestEntityList().get(0).port;
                Logger.e("require host is7" + str2);
            } else if (z4) {
                str2 = requestEntityList.getRequestEntityList().get(1).url;
                str3 = requestEntityList.getRequestEntityList().get(1).type + "|" + requestEntityList.getRequestEntityList().get(1).port;
                Logger.e("require host is8" + str2);
            } else {
                requestEntityList.setFormal_can_useful(false);
            }
        }
        if (!str3.isEmpty()) {
            nowType = str3;
        }
        return str2;
    }

    public static void init(Context context) {
        mContext = context;
        initEntity();
        readDefaultHost(context);
        pullData(context);
    }

    public static void initEntity() {
        RequestEntityList requestEntityList;
        RequestEntityList requestEntityList2;
        RequestEntityList requestEntityList3;
        RequestEntityList requestEntityList4;
        get_url_times = 0;
        Gson gson = new Gson();
        if (HostSharedPreferences.getInstance(mContext).readData("loginEntityList").isEmpty()) {
            requestEntityList = new RequestEntityList();
            RequestEntity requestEntity = new RequestEntity(HostConstant.LOGIN_URL_HOST_INPACKAGE_A, HostConstant.login, "a", HostConstant.LOGIN_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity requestEntity2 = new RequestEntity(HostConstant.LOGIN_URL_HOST_INPACKAGE_B, HostConstant.login, "b", HostConstant.LOGIN_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity requestEntity3 = new RequestEntity("", HostConstant.login, "c", 1, 0, true);
            RequestEntity requestEntity4 = new RequestEntity("", HostConstant.login, "d", 1, 0, true);
            requestEntityList.getRequestEntityList().add(requestEntity);
            requestEntityList.getRequestEntityList().add(requestEntity2);
            requestEntityList.getRequestEntityList().add(requestEntity3);
            requestEntityList.getRequestEntityList().add(requestEntity4);
        } else {
            requestEntityList = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("loginEntityList"), RequestEntityList.class);
        }
        if (HostSharedPreferences.getInstance(mContext).readData("tradeEntityList").isEmpty()) {
            requestEntityList2 = new RequestEntityList();
            RequestEntity requestEntity5 = new RequestEntity(HostConstant.TRADE_URL_HOST_INPACKAGE_A, HostConstant.trade, "a", HostConstant.TRADE_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity requestEntity6 = new RequestEntity(HostConstant.TRADE_URL_HOST_INPACKAGE_B, HostConstant.trade, "b", HostConstant.TRADE_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity requestEntity7 = new RequestEntity("", HostConstant.trade, "c", 1, 0, true);
            RequestEntity requestEntity8 = new RequestEntity("", HostConstant.trade, "d", 1, 0, true);
            requestEntityList2.getRequestEntityList().add(requestEntity5);
            requestEntityList2.getRequestEntityList().add(requestEntity6);
            requestEntityList2.getRequestEntityList().add(requestEntity7);
            requestEntityList2.getRequestEntityList().add(requestEntity8);
        } else {
            requestEntityList2 = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("tradeEntityList"), RequestEntityList.class);
        }
        if (HostSharedPreferences.getInstance(mContext).readData("configEntityList").isEmpty()) {
            requestEntityList3 = new RequestEntityList();
            RequestEntity requestEntity9 = new RequestEntity(HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_A, HostConstant.config, "a", HostConstant.SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity requestEntity10 = new RequestEntity(HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_B, HostConstant.config, "b", HostConstant.SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity requestEntity11 = new RequestEntity("", HostConstant.config, "c", 1, 0, true);
            RequestEntity requestEntity12 = new RequestEntity("", HostConstant.config, "d", 1, 0, true);
            requestEntityList3.getRequestEntityList().add(requestEntity9);
            requestEntityList3.getRequestEntityList().add(requestEntity10);
            requestEntityList3.getRequestEntityList().add(requestEntity11);
            requestEntityList3.getRequestEntityList().add(requestEntity12);
        } else {
            requestEntityList3 = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("configEntityList"), RequestEntityList.class);
        }
        if (HostSharedPreferences.getInstance(mContext).readData("sdkEntityList").isEmpty()) {
            requestEntityList4 = new RequestEntityList();
            RequestEntity requestEntity13 = new RequestEntity(HostConstant.YMN_URL_HOST_INPACKAGE_A, HostConstant.ymn, "a", HostConstant.YMN_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity requestEntity14 = new RequestEntity(HostConstant.YMN_URL_HOST_INPACKAGE_B, HostConstant.ymn, "b", HostConstant.YMN_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity requestEntity15 = new RequestEntity("", HostConstant.ymn, "c", 1, 0, true);
            RequestEntity requestEntity16 = new RequestEntity("", HostConstant.ymn, "d", 1, 0, true);
            requestEntityList4.getRequestEntityList().add(requestEntity13);
            requestEntityList4.getRequestEntityList().add(requestEntity14);
            requestEntityList4.getRequestEntityList().add(requestEntity15);
            requestEntityList4.getRequestEntityList().add(requestEntity16);
        } else {
            requestEntityList4 = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("sdkEntityList"), RequestEntityList.class);
        }
        hostMap = new LinkedHashMap();
        hostMap.put(HostConstant.login, requestEntityList);
        hostMap.put(HostConstant.trade, requestEntityList2);
        hostMap.put(HostConstant.config, requestEntityList3);
        hostMap.put(HostConstant.ymn, requestEntityList4);
    }

    public static void notifyRequestFailure() {
        if (TextUtils.isEmpty(nowType)) {
            return;
        }
        String[] strArrSplit = nowType.split("\\|");
        String str = strArrSplit[0];
        int iCharAt = strArrSplit[1].charAt(0) - 'a';
        RequestEntityList requestEntityList = hostMap.get(str);
        if (requestEntityList.getRequested_fail_times() < 0) {
            requestEntityList.setRequested_fail_times(requestEntityList.getRequested_fail_times() + 1);
        } else {
            requestEntityList.getRequestEntityList().get(iCharAt).can_useful = false;
            requestEntityList.getRequestEntityList().get(iCharAt).can_useful = false;
            requestEntityList.setRequested_fail_times(iCharAt);
        }
        if (!requestEntityList.getRequestEntityList().get(0).can_useful && !requestEntityList.getRequestEntityList().get(1).can_useful) {
            requestEntityList.setFormal_can_useful(false);
        }
        if (!requestEntityList.getRequestEntityList().get(2).can_useful && !requestEntityList.getRequestEntityList().get(3).can_useful) {
            requestEntityList.setSpare_can_useful(false);
        }
        if (requestEntityList.isFormal_can_useful() || requestEntityList.isSpare_can_useful()) {
            return;
        }
        isGain = "false";
        gainHost(mContext);
        get_url_times++;
        if (get_url_times < 3) {
            hostMap.get(HostConstant.login).resetUseable();
            hostMap.get(HostConstant.trade).resetUseable();
            hostMap.get(HostConstant.config).resetUseable();
            hostMap.get(HostConstant.ymn).resetUseable();
            return;
        }
        byte b = -1;
        int iHashCode = str.hashCode();
        if (iHashCode != 119770) {
            if (iHashCode != 103149417) {
                if (iHashCode != 110621028) {
                    if (iHashCode == 1669754599 && str.equals(HostConstant.config)) {
                        b = 3;
                    }
                } else if (str.equals(HostConstant.trade)) {
                    b = 1;
                }
            } else if (str.equals(HostConstant.login)) {
                b = 0;
            }
        } else if (str.equals(HostConstant.ymn)) {
            b = 2;
        }
        if (b == 0) {
            login_has_get_fail = true;
            return;
        }
        if (b == 1) {
            trade_has_get_fail = true;
        } else if (b == 2) {
            ymn_has_get_fail = true;
        } else {
            if (b != 3) {
                return;
            }
            config_has_get_fail = true;
        }
    }

    public static void notifyRequestSuccess() {
        get_url_times = 0;
        if (TextUtils.isEmpty(nowType)) {
            return;
        }
        RequestEntityList requestEntityList = hostMap.get(nowType.split("\\|")[0]);
        requestEntityList.setRequested_success_times(requestEntityList.getRequested_success_times() + 1);
    }

    private static void pullData(Context context) {
        if (HostUtils.getChance((hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight * 10000) / (hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight + hostMap.get(HostConstant.config).getRequestEntityList().get(1).weight))) {
            hostMap.get(HostConstant.config).setFormal_index(0);
        } else {
            hostMap.get(HostConstant.config).setFormal_index(1);
        }
        gainHost(context);
    }

    private static void readDefaultHost(Context context) {
        String metaDataValueString = YmnAppContext.getMetaDataValueString("default_login");
        String metaDataValueString2 = YmnAppContext.getMetaDataValueString("default_trade");
        String metaDataValueString3 = YmnAppContext.getMetaDataValueString("default_config");
        String hostUrl = YmnAppContext.getHostUrl();
        if (metaDataValueString != null && !metaDataValueString.isEmpty()) {
            hostMap.get(HostConstant.login).getRequestEntityList().get(0).url = metaDataValueString;
            hostMap.get(HostConstant.login).getRequestEntityList().get(1).url = metaDataValueString;
        }
        if (metaDataValueString2 != null && !metaDataValueString2.isEmpty()) {
            hostMap.get(HostConstant.trade).getRequestEntityList().get(0).url = metaDataValueString2;
            hostMap.get(HostConstant.trade).getRequestEntityList().get(1).url = metaDataValueString2;
        }
        if (metaDataValueString3 != null && !metaDataValueString3.isEmpty()) {
            hostMap.get(HostConstant.config).getRequestEntityList().get(0).url = metaDataValueString3;
            hostMap.get(HostConstant.config).getRequestEntityList().get(1).url = metaDataValueString3;
        }
        if (!TextUtils.isEmpty(hostUrl)) {
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).url = hostUrl;
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(1).url = hostUrl;
        }
        try {
            String strUrlOnSdCard4Public = urlOnSdCard4Public(context);
            Logger.i("这是本地debug文件：" + strUrlOnSdCard4Public);
            if (TextUtils.isEmpty(strUrlOnSdCard4Public) || !YmnGsonUtil.isJsonObject(strUrlOnSdCard4Public)) {
                return;
            }
            changeLoaclUrl(new JSONObject(new JSONObject(strUrlOnSdCard4Public).optString("data")));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void saveHostList() {
        HostSharedPreferences.getInstance(mContext).putData("loginEntityList", hostMap.get(HostConstant.login).toString());
        HostSharedPreferences.getInstance(mContext).putData("tradeEntityList", hostMap.get(HostConstant.trade).toString());
        HostSharedPreferences.getInstance(mContext).putData("configEntityList", hostMap.get(HostConstant.config).toString());
        HostSharedPreferences.getInstance(mContext).putData("ymnEntityList", hostMap.get(HostConstant.ymn).toString());
        HostSharedPreferences.getInstance(mContext).putData("nowType", nowType);
        HostSharedPreferences.getInstance(mContext).putData(HostSharedPreferences.isGain, isGain);
    }

    static void setHost(String str, RequestEntityList requestEntityList) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            requestEntityList.getRequestEntityList().get(2).url = jSONObject.optString("server_a");
            requestEntityList.getRequestEntityList().get(3).url = jSONObject.optString("server_b");
            requestEntityList.getRequestEntityList().get(2).weight = jSONObject.optInt("server_a_weight");
            requestEntityList.getRequestEntityList().get(3).weight = jSONObject.optInt("server_b_weight");
            requestEntityList.setIs_mandatory(jSONObject.optInt("is_mandatory"));
            requestEntityList.getRequestEntityList().get(2).Request_times = jSONObject.optInt("request_times");
            requestEntityList.getRequestEntityList().get(3).Request_times = jSONObject.optInt("request_times");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    static void setHostType() {
        Iterator<Map.Entry<String, RequestEntityList>> it = hostMap.entrySet().iterator();
        while (it.hasNext()) {
            RequestEntityList value = it.next().getValue();
            if (HostUtils.getChance((value.getRequestEntityList().get(0).weight * 10000) / (value.getRequestEntityList().get(0).weight + value.getRequestEntityList().get(1).weight))) {
                value.setFormal_index(0);
            } else {
                value.setFormal_index(1);
            }
            if (HostUtils.getChance((value.getRequestEntityList().get(2).weight * 10000) / (value.getRequestEntityList().get(2).weight + value.getRequestEntityList().get(3).weight))) {
                value.setSpare_index(2);
            } else {
                value.setSpare_index(3);
            }
        }
    }

    private static String urlOnSdCard4Public(Context context) throws YmnException {
        try {
            if (!ResourceUtil.isSdcardReady()) {
                return "";
            }
            File file = new File(ResourceUtil.getSdcardPath() + ".bftj/sdk/ymnDebug");
            if (!file.exists()) {
                return "";
            }
            Properties properties = new Properties();
            properties.load(new FileInputStream(file));
            return properties.getProperty("url_host_ymnsdk");
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }
}
