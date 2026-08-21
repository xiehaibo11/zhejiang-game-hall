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
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Properties;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class YmnURLManagerV2 {
    public static int get_url_times;
    public static Map<String, RequestEntityList> hostMap;
    static Context mContext;
    public static boolean login_has_get_fail = false;
    public static boolean trade_has_get_fail = false;
    public static boolean ymn_has_get_fail = false;
    public static boolean config_has_get_fail = false;
    public static String nowType = "sdk_config|a";
    public static String isGain = "false";

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to analyze thrown exceptions
    java.util.ConcurrentModificationException
    	at java.base/java.util.ArrayList$Itr.checkForComodification(Unknown Source)
    	at java.base/java.util.ArrayList$Itr.next(Unknown Source)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.processInstructions(MethodThrowsVisitor.java:117)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.visit(MethodThrowsVisitor.java:68)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.checkInsn(MethodThrowsVisitor.java:178)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.processInstructions(MethodThrowsVisitor.java:131)
    	at jadx.core.dex.visitors.MethodThrowsVisitor.visit(MethodThrowsVisitor.java:68)
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x003c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static synchronized java.lang.String getHost(java.lang.String r8) {
        /*
            Method dump skipped, instruction units count: 324
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.getHost(java.lang.String):java.lang.String");
    }

    public static void init(Context context) {
        mContext = context;
        initEntity();
        readDefaultHost(context);
        pullData(context);
    }

    public static void initEntity() {
        RequestEntityList loginEntityList;
        RequestEntityList tradeEntityList;
        RequestEntityList configEntityList;
        RequestEntityList ymnEntityList;
        get_url_times = 0;
        Gson gson = new Gson();
        String loginStr = HostSharedPreferences.getInstance(mContext).readData("loginEntityList");
        if (!loginStr.isEmpty()) {
            loginEntityList = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("loginEntityList"), RequestEntityList.class);
        } else {
            loginEntityList = new RequestEntityList();
            RequestEntity a_requestEntity = new RequestEntity(HostConstant.LOGIN_URL_HOST_INPACKAGE_A, HostConstant.login, "a", HostConstant.LOGIN_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity b_requestEntity = new RequestEntity(HostConstant.LOGIN_URL_HOST_INPACKAGE_B, HostConstant.login, "b", HostConstant.LOGIN_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity c_requestEntity = new RequestEntity("", HostConstant.login, "c", 1, 0, true);
            RequestEntity d_requestEntity = new RequestEntity("", HostConstant.login, "d", 1, 0, true);
            loginEntityList.getRequestEntityList().add(a_requestEntity);
            loginEntityList.getRequestEntityList().add(b_requestEntity);
            loginEntityList.getRequestEntityList().add(c_requestEntity);
            loginEntityList.getRequestEntityList().add(d_requestEntity);
        }
        String tradeStr = HostSharedPreferences.getInstance(mContext).readData("tradeEntityList");
        if (!tradeStr.isEmpty()) {
            tradeEntityList = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("tradeEntityList"), RequestEntityList.class);
        } else {
            tradeEntityList = new RequestEntityList();
            RequestEntity a_requestEntity2 = new RequestEntity(HostConstant.TRADE_URL_HOST_INPACKAGE_A, HostConstant.trade, "a", HostConstant.TRADE_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity b_requestEntity2 = new RequestEntity(HostConstant.TRADE_URL_HOST_INPACKAGE_B, HostConstant.trade, "b", HostConstant.TRADE_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity c_requestEntity2 = new RequestEntity("", HostConstant.trade, "c", 1, 0, true);
            RequestEntity d_requestEntity2 = new RequestEntity("", HostConstant.trade, "d", 1, 0, true);
            tradeEntityList.getRequestEntityList().add(a_requestEntity2);
            tradeEntityList.getRequestEntityList().add(b_requestEntity2);
            tradeEntityList.getRequestEntityList().add(c_requestEntity2);
            tradeEntityList.getRequestEntityList().add(d_requestEntity2);
        }
        String configStr = HostSharedPreferences.getInstance(mContext).readData("configEntityList");
        if (!configStr.isEmpty()) {
            configEntityList = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("configEntityList"), RequestEntityList.class);
        } else {
            configEntityList = new RequestEntityList();
            RequestEntity a_requestEntity3 = new RequestEntity(HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_A, HostConstant.config, "a", HostConstant.SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity b_requestEntity3 = new RequestEntity(HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_B, HostConstant.config, "b", HostConstant.SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity c_requestEntity3 = new RequestEntity("", HostConstant.config, "c", 1, 0, true);
            RequestEntity d_requestEntity3 = new RequestEntity("", HostConstant.config, "d", 1, 0, true);
            configEntityList.getRequestEntityList().add(a_requestEntity3);
            configEntityList.getRequestEntityList().add(b_requestEntity3);
            configEntityList.getRequestEntityList().add(c_requestEntity3);
            configEntityList.getRequestEntityList().add(d_requestEntity3);
        }
        String sdkStr = HostSharedPreferences.getInstance(mContext).readData("sdkEntityList");
        if (!sdkStr.isEmpty()) {
            ymnEntityList = (RequestEntityList) gson.fromJson(HostSharedPreferences.getInstance(mContext).readData("sdkEntityList"), RequestEntityList.class);
        } else {
            ymnEntityList = new RequestEntityList();
            RequestEntity a_requestEntity4 = new RequestEntity(HostConstant.YMN_URL_HOST_INPACKAGE_A, HostConstant.ymn, "a", HostConstant.YMN_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
            RequestEntity b_requestEntity4 = new RequestEntity(HostConstant.YMN_URL_HOST_INPACKAGE_B, HostConstant.ymn, "b", HostConstant.YMN_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
            RequestEntity c_requestEntity4 = new RequestEntity("", HostConstant.ymn, "c", 1, 0, true);
            RequestEntity d_requestEntity4 = new RequestEntity("", HostConstant.ymn, "d", 1, 0, true);
            ymnEntityList.getRequestEntityList().add(a_requestEntity4);
            ymnEntityList.getRequestEntityList().add(b_requestEntity4);
            ymnEntityList.getRequestEntityList().add(c_requestEntity4);
            ymnEntityList.getRequestEntityList().add(d_requestEntity4);
        }
        hostMap = new LinkedHashMap();
        hostMap.put(HostConstant.login, loginEntityList);
        hostMap.put(HostConstant.trade, tradeEntityList);
        hostMap.put(HostConstant.config, configEntityList);
        hostMap.put(HostConstant.ymn, ymnEntityList);
    }

    private static void pullData(Context context) throws YmnsdkException {
        int gainAChance = (hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight * 10000) / (hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight + hostMap.get(HostConstant.config).getRequestEntityList().get(1).weight);
        if (HostUtils.getChance(gainAChance)) {
            hostMap.get(HostConstant.config).setFormal_index(0);
        } else {
            hostMap.get(HostConstant.config).setFormal_index(1);
        }
        gainHost(context);
    }

    private static void readDefaultHost(Context context) {
        String default_login = YmnAppContext.getMetaDataValueString("default_login");
        String default_trade = YmnAppContext.getMetaDataValueString("default_trade");
        String default_config = YmnAppContext.getMetaDataValueString("default_config");
        String default_ymn = YmnAppContext.getHostUrl();
        if (default_login != null && !default_login.isEmpty()) {
            hostMap.get(HostConstant.login).getRequestEntityList().get(0).url = default_login;
            hostMap.get(HostConstant.login).getRequestEntityList().get(1).url = default_login;
        }
        if (default_trade != null && !default_trade.isEmpty()) {
            hostMap.get(HostConstant.trade).getRequestEntityList().get(0).url = default_trade;
            hostMap.get(HostConstant.trade).getRequestEntityList().get(1).url = default_trade;
        }
        if (default_config != null && !default_config.isEmpty()) {
            hostMap.get(HostConstant.config).getRequestEntityList().get(0).url = default_config;
            hostMap.get(HostConstant.config).getRequestEntityList().get(1).url = default_config;
        }
        if (!TextUtils.isEmpty(default_ymn)) {
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).url = default_ymn;
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(1).url = default_ymn;
        }
        try {
            String debugStr = urlOnSdCard4Public(context);
            Logger.i("这是本地debug文件：" + debugStr);
            if (!TextUtils.isEmpty(debugStr) && YmnGsonUtil.isJsonObject(debugStr)) {
                JSONObject json = new JSONObject(debugStr);
                String data = json.optString("data");
                JSONObject hostjson = new JSONObject(data);
                changeLoaclUrl(hostjson);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    static void changeLoaclUrl(JSONObject jsonObject) {
        try {
            String loginStr = jsonObject.optString(HostConstant.login);
            JSONObject loginjson = new JSONObject(loginStr);
            hostMap.get(HostConstant.login).getRequestEntityList().get(0).url = loginjson.optString("server_a");
            hostMap.get(HostConstant.login).getRequestEntityList().get(0).weight = loginjson.optInt("server_a_weight");
            hostMap.get(HostConstant.login).getRequestEntityList().get(1).url = loginjson.optString("server_b");
            hostMap.get(HostConstant.login).getRequestEntityList().get(1).weight = loginjson.optInt("server_b_weight");
            String tradeStr = jsonObject.optString(HostConstant.trade);
            JSONObject tradejson = new JSONObject(tradeStr);
            hostMap.get(HostConstant.trade).getRequestEntityList().get(0).url = tradejson.optString("server_a");
            hostMap.get(HostConstant.trade).getRequestEntityList().get(0).weight = tradejson.optInt("server_a_weight");
            hostMap.get(HostConstant.trade).getRequestEntityList().get(1).url = tradejson.optString("server_b");
            hostMap.get(HostConstant.trade).getRequestEntityList().get(1).weight = tradejson.optInt("server_b_weight");
            String sdkStr = jsonObject.optString(HostConstant.config);
            JSONObject sdkjson = new JSONObject(sdkStr);
            hostMap.get(HostConstant.config).getRequestEntityList().get(0).url = sdkjson.optString("server_a");
            hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight = sdkjson.optInt("server_a_weight");
            hostMap.get(HostConstant.config).getRequestEntityList().get(1).url = sdkjson.optString("server_b");
            hostMap.get(HostConstant.config).getRequestEntityList().get(1).weight = sdkjson.optInt("server_b_weight");
            String ymnStr = jsonObject.optString(HostConstant.ymn);
            JSONObject ymnjson = new JSONObject(ymnStr);
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).url = ymnjson.optString("server_a");
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).weight = ymnjson.optInt("server_a_weight");
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(1).url = ymnjson.optString("server_b");
            hostMap.get(HostConstant.ymn).getRequestEntityList().get(1).weight = ymnjson.optInt("server_b_weight");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void gainHost(Context context) throws YmnsdkException {
        Logger.i("服务请求");
        mContext = context;
        try {
            String url = getHostUrl();
            if (url.equals("failed")) {
                return;
            }
            HostHttpHelper hostHttpHelper = new HostHttpHelper(context);
            hostHttpHelper.setMethod(1);
            hostHttpHelper.request(url, "", new a());
        } catch (Exception e) {
        }
    }

    static class a implements HttpListener {
        a() {
        }

        @Override // com.bianfeng.ymnsdk.action.HttpListener
        public void onComplete(String response) {
            Logger.i("获取到的：" + response);
            try {
                JSONObject json = new JSONObject(response);
                String data = json.optString("data");
                JSONObject hostjson = new JSONObject(data);
                YmnURLManagerV2.setHost(hostjson.optString(HostConstant.login), YmnURLManagerV2.hostMap.get(HostConstant.login));
                YmnURLManagerV2.setHost(hostjson.optString(HostConstant.trade), YmnURLManagerV2.hostMap.get(HostConstant.trade));
                YmnURLManagerV2.setHost(hostjson.optString(HostConstant.config), YmnURLManagerV2.hostMap.get(HostConstant.config));
                YmnURLManagerV2.setHost(hostjson.optString(HostConstant.ymn), YmnURLManagerV2.hostMap.get(HostConstant.ymn));
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
        /* JADX WARN: Removed duplicated region for block: B:5:0x002c  */
        @Override // com.bianfeng.ymnsdk.action.HttpListener
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public void onError(int r11, java.lang.String r12) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            /*
                Method dump skipped, instruction units count: 262
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.a.onError(int, java.lang.String):void");
        }
    }

    private static String getHostUrl() throws YmnsdkException {
        String url;
        boolean isFormal = true;
        boolean use_a = hostMap.get(HostConstant.config).getRequestEntityList().get(0).can_useful;
        boolean use_b = hostMap.get(HostConstant.config).getRequestEntityList().get(1).can_useful;
        boolean use_c = hostMap.get(HostConstant.config).getRequestEntityList().get(2).can_useful;
        boolean use_d = hostMap.get(HostConstant.config).getRequestEntityList().get(3).can_useful;
        if (!use_a || !use_b) {
            if (use_a) {
                hostMap.get(HostConstant.config).setFormal_index(0);
            } else if (use_b) {
                hostMap.get(HostConstant.config).setFormal_index(1);
            } else if (isGain.equals("true")) {
                if (use_c && use_d) {
                    isFormal = false;
                } else if (use_c) {
                    isFormal = false;
                    hostMap.get(HostConstant.config).setFormal_index(2);
                } else if (use_d) {
                    isFormal = false;
                    hostMap.get(HostConstant.config).setFormal_index(3);
                } else {
                    return "failed";
                }
            }
        }
        if (isFormal) {
            url = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).url;
            nowType = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).type + "|" + hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).port;
        } else {
            url = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).url;
            nowType = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).type + "|" + hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).port;
        }
        String sdk_id = YmnAppContext.getSdkAppId();
        String app_id = YmnAppContext.getSdkAppId();
        String package_id = YmnAppContext.getConfigIdStr();
        String channel_id = YmnAppContext.getChannelId();
        if (sdk_id == null || sdk_id.toLowerCase().equals("unknow") || sdk_id.isEmpty()) {
            sdk_id = "0";
        }
        if (app_id == null || app_id.toLowerCase().equals("unknow") || app_id.isEmpty()) {
            app_id = "0";
        }
        if (package_id == null || package_id.toLowerCase().equals("unknow") || package_id.isEmpty()) {
            package_id = "0";
        }
        if (channel_id == null || channel_id.toLowerCase().equals("unknow") || channel_id.isEmpty()) {
            channel_id = "0";
        }
        String mSign = HostUtils.getSign(sdk_id, app_id, package_id, channel_id);
        return url + "/server_list/" + sdk_id + "/" + app_id + "/" + package_id + "/" + channel_id + "/" + mSign + ".json";
    }

    static void setHost(String response, RequestEntityList entityList) {
        try {
            JSONObject hostjson = new JSONObject(response);
            entityList.getRequestEntityList().get(2).url = hostjson.optString("server_a");
            entityList.getRequestEntityList().get(3).url = hostjson.optString("server_b");
            entityList.getRequestEntityList().get(2).weight = hostjson.optInt("server_a_weight");
            entityList.getRequestEntityList().get(3).weight = hostjson.optInt("server_b_weight");
            entityList.setIs_mandatory(hostjson.optInt("is_mandatory"));
            entityList.getRequestEntityList().get(2).Request_times = hostjson.optInt("request_times");
            entityList.getRequestEntityList().get(3).Request_times = hostjson.optInt("request_times");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    static void setHostType() {
        for (Map.Entry<String, RequestEntityList> entry : hostMap.entrySet()) {
            RequestEntityList mEntityList = entry.getValue();
            int gainAChance = (mEntityList.getRequestEntityList().get(0).weight * 10000) / (mEntityList.getRequestEntityList().get(0).weight + mEntityList.getRequestEntityList().get(1).weight);
            if (HostUtils.getChance(gainAChance)) {
                mEntityList.setFormal_index(0);
            } else {
                mEntityList.setFormal_index(1);
            }
            int gainAChance2 = (mEntityList.getRequestEntityList().get(2).weight * 10000) / (mEntityList.getRequestEntityList().get(2).weight + mEntityList.getRequestEntityList().get(3).weight);
            if (HostUtils.getChance(gainAChance2)) {
                mEntityList.setSpare_index(2);
            } else {
                mEntityList.setSpare_index(3);
            }
        }
    }

    private static String getLoaclHost(String type) {
        String hostURL;
        String hostType = "";
        RequestEntityList requestEntityList = hostMap.get(type);
        if (HostUtils.judgeHost(hostMap, type) && isGain.equals("true")) {
            boolean aUserful = requestEntityList.getRequestEntityList().get(2).can_useful;
            boolean bUserful = requestEntityList.getRequestEntityList().get(3).can_useful;
            if (aUserful && bUserful) {
                hostURL = requestEntityList.getRequestEntityList().get(requestEntityList.getSpare_index()).url;
                hostType = requestEntityList.getRequestEntityList().get(requestEntityList.getSpare_index()).type + "|" + requestEntityList.getRequestEntityList().get(requestEntityList.getSpare_index()).port;
                Logger.e("require host is3 " + hostURL);
            } else if (aUserful) {
                hostURL = requestEntityList.getRequestEntityList().get(2).url;
                hostType = requestEntityList.getRequestEntityList().get(2).type + "|" + requestEntityList.getRequestEntityList().get(2).port;
                Logger.e("require host is4 " + hostURL);
            } else if (bUserful) {
                hostURL = requestEntityList.getRequestEntityList().get(3).url;
                hostType = requestEntityList.getRequestEntityList().get(3).type + "|" + requestEntityList.getRequestEntityList().get(3).port;
                Logger.e("require host is5 " + hostURL);
            } else {
                requestEntityList.setSpare_can_useful(false);
                hostURL = "failed";
            }
        } else {
            boolean aUserful2 = requestEntityList.getRequestEntityList().get(0).can_useful;
            boolean bUserful2 = requestEntityList.getRequestEntityList().get(1).can_useful;
            if (aUserful2 && bUserful2) {
                hostURL = requestEntityList.getRequestEntityList().get(requestEntityList.getFormal_index()).url;
                hostType = requestEntityList.getRequestEntityList().get(requestEntityList.getFormal_index()).type + "|" + requestEntityList.getRequestEntityList().get(requestEntityList.getFormal_index()).port;
                Logger.e("require host is6 " + hostURL);
            } else if (aUserful2) {
                hostURL = requestEntityList.getRequestEntityList().get(0).url;
                hostType = requestEntityList.getRequestEntityList().get(0).type + "|" + requestEntityList.getRequestEntityList().get(0).port;
                Logger.e("require host is7 " + hostURL);
            } else if (bUserful2) {
                hostURL = requestEntityList.getRequestEntityList().get(1).url;
                hostType = requestEntityList.getRequestEntityList().get(1).type + "|" + requestEntityList.getRequestEntityList().get(1).port;
                Logger.e("require host is8 " + hostURL);
            } else {
                requestEntityList.setFormal_can_useful(false);
                hostURL = "failed";
            }
        }
        if (!hostType.isEmpty()) {
            nowType = hostType;
        }
        return hostURL;
    }

    public static void notifyRequestSuccess() {
        get_url_times = 0;
        if (!TextUtils.isEmpty(nowType)) {
            String[] array = nowType.split("\\|");
            String type = array[0];
            RequestEntityList entityList = hostMap.get(type);
            entityList.setRequested_success_times(entityList.getRequested_success_times() + 1);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0109  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void notifyRequestFailure() throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
        /*
            Method dump skipped, instruction units count: 306
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.notifyRequestFailure():void");
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

    public static void saveHostList() {
        HostSharedPreferences.getInstance(mContext).putData("loginEntityList", hostMap.get(HostConstant.login).toString());
        HostSharedPreferences.getInstance(mContext).putData("tradeEntityList", hostMap.get(HostConstant.trade).toString());
        HostSharedPreferences.getInstance(mContext).putData("configEntityList", hostMap.get(HostConstant.config).toString());
        HostSharedPreferences.getInstance(mContext).putData("ymnEntityList", hostMap.get(HostConstant.ymn).toString());
        HostSharedPreferences.getInstance(mContext).putData("nowType", nowType);
        HostSharedPreferences.getInstance(mContext).putData(HostSharedPreferences.isGain, isGain);
    }
}
