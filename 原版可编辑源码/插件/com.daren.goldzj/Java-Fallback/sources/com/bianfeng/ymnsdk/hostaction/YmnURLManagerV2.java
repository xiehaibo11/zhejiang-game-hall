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
        public void onComplete(String r7) {
            Logger.i("获取到的：" + r7);
            JSONObject r4 = new JSONObject(new JSONObject(r7).optString("data"));     // Catch: Exception -> L5
            YmnURLManagerV2.setHost(r4.optString(HostConstant.login), YmnURLManagerV2.hostMap.get(HostConstant.login));     // Catch: Exception -> L5
            YmnURLManagerV2.setHost(r4.optString(HostConstant.trade), YmnURLManagerV2.hostMap.get(HostConstant.trade));     // Catch: Exception -> L5
            YmnURLManagerV2.setHost(r4.optString(HostConstant.config), YmnURLManagerV2.hostMap.get(HostConstant.config));     // Catch: Exception -> L5
            YmnURLManagerV2.setHost(r4.optString(HostConstant.ymn), YmnURLManagerV2.hostMap.get(HostConstant.ymn));     // Catch: Exception -> L5
            YmnURLManagerV2.isGain = "true";     // Catch: Exception -> L5
            YmnURLManagerV2.setHostType();     // Catch: Exception -> L5
            YmnURLManagerV2.hostMap.get(HostConstant.login).resetUseable();     // Catch: Exception -> L5
            YmnURLManagerV2.hostMap.get(HostConstant.trade).resetUseable();     // Catch: Exception -> L5
            YmnURLManagerV2.hostMap.get(HostConstant.config).resetUseable();     // Catch: Exception -> L5
            YmnURLManagerV2.hostMap.get(HostConstant.ymn).resetUseable();     // Catch: Exception -> L5
            return;
        L5:
            e = move-exception;
            e.printStackTrace();
        }

        @Override
        public void onError(int r5, String r6) {
            Logger.i("获取host失败|" + r5 + "|" + r6);
            String r52 = YmnURLManagerV2.nowType;
            int r3 = 0;
            switch(r52.hashCode()) {
                case -1683595124: goto L15;
                case -1683595123: goto L12;
                case -1683595122: goto L9;
                case -1683595121: goto L6;
                default: goto L17;
            };
        L17:
            byte r53 = -1;
        L19:
            if (r53 == 0) goto L27;
            if (r53 == 1) goto L26;
            if (r53 == 2) goto L25;
            if (r53 != 3) goto L28;
            YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(3).setCan_useful(false);
        L28:
            int r54 = 0;
        L30:
            if (r3 >= 4) goto L35;
            if (YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(r3).can_useful == true) goto L34;
            r54 = r54 + 1;
        L34:
            r3 = r3 + 1;
            goto L30
        L35:
            if (r54 <= 3) goto L41;
            YmnURLManagerV2.gainHost(YmnURLManagerV2.mContext);
            return;
        L41:
            return;
        L25:
            YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(2).setCan_useful(false);
            goto L28
        L26:
            YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(1).setCan_useful(false);
            goto L28
        L27:
            YmnURLManagerV2.hostMap.get(HostConstant.config).getRequestEntityList().get(0).setCan_useful(false);
            goto L28
        L6:
            if (r52.equals("sdk_config|d") == false) goto L17;
            r53 = 3;
            goto L19
        L9:
            if (r52.equals("sdk_config|c") == false) goto L17;
            r53 = 2;
            goto L19
        L12:
            if (r52.equals("sdk_config|b") == false) goto L17;
            r53 = 1;
            goto L19
        L15:
            if (r52.equals("sdk_config|a") == false) goto L17;
            r53 = 0;
            goto L19
        }
    }

    static {
    }

    public YmnURLManagerV2() {
    }

    static void changeLoaclUrl(JSONObject r13) {
        JSONObject r9 = new JSONObject(r13.optString(HostConstant.login));     // Catch: Exception -> L5
        RequestEntity r8 = hostMap.get(HostConstant.login).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r8.url = r9.optString("server_a");     // Catch: Exception -> L5
        RequestEntity r82 = hostMap.get(HostConstant.login).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r82.weight = r9.optInt("server_a_weight");     // Catch: Exception -> L5
        RequestEntity r83 = hostMap.get(HostConstant.login).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r83.url = r9.optString("server_b");     // Catch: Exception -> L5
        RequestEntity r7 = hostMap.get(HostConstant.login).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r7.weight = r9.optInt("server_b_weight");     // Catch: Exception -> L5
        JSONObject r84 = new JSONObject(r13.optString(HostConstant.trade));     // Catch: Exception -> L5
        RequestEntity r72 = hostMap.get(HostConstant.trade).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r72.url = r84.optString("server_a");     // Catch: Exception -> L5
        RequestEntity r73 = hostMap.get(HostConstant.trade).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r73.weight = r84.optInt("server_a_weight");     // Catch: Exception -> L5
        RequestEntity r74 = hostMap.get(HostConstant.trade).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r74.url = r84.optString("server_b");     // Catch: Exception -> L5
        RequestEntity r6 = hostMap.get(HostConstant.trade).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r6.weight = r84.optInt("server_b_weight");     // Catch: Exception -> L5
        JSONObject r75 = new JSONObject(r13.optString(HostConstant.config));     // Catch: Exception -> L5
        RequestEntity r62 = hostMap.get(HostConstant.config).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r62.url = r75.optString("server_a");     // Catch: Exception -> L5
        RequestEntity r63 = hostMap.get(HostConstant.config).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r63.weight = r75.optInt("server_a_weight");     // Catch: Exception -> L5
        RequestEntity r64 = hostMap.get(HostConstant.config).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r64.url = r75.optString("server_b");     // Catch: Exception -> L5
        RequestEntity r5 = hostMap.get(HostConstant.config).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r5.weight = r75.optInt("server_b_weight");     // Catch: Exception -> L5
        JSONObject r52 = new JSONObject(r13.optString(HostConstant.ymn));     // Catch: Exception -> L5
        RequestEntity r132 = hostMap.get(HostConstant.ymn).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r132.url = r52.optString("server_a");     // Catch: Exception -> L5
        RequestEntity r133 = hostMap.get(HostConstant.ymn).getRequestEntityList().get(0);     // Catch: Exception -> L5
        r133.weight = r52.optInt("server_a_weight");     // Catch: Exception -> L5
        RequestEntity r134 = hostMap.get(HostConstant.ymn).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r134.url = r52.optString("server_b");     // Catch: Exception -> L5
        RequestEntity r135 = hostMap.get(HostConstant.ymn).getRequestEntityList().get(1);     // Catch: Exception -> L5
        r135.weight = r52.optInt("server_b_weight");     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    public static void gainHost(Context r3) {
        Logger.i("服务请求");
        mContext = r3;
        String r0 = getHostUrl();     // Catch: Exception -> L9
        if (r0.equals("failed") == false) goto L7;
        return;
    L7:
        HostHttpHelper r1 = new HostHttpHelper(r3);
        r1.setMethod(1);
        r1.request(r0, "", new a());
        return;
    }

    public static synchronized String getHost(String r8) {
        monitor-enter(YmnURLManagerV2.class);
    L52:
        th = move-exception;
        throw th;
    L5:
        if (isGain.equals("true") == true) goto L7;
    L9:
        String r1 = getLoaclHost(r8);     // Catch: Throwable -> L52
        if (r1.equals("failed") == false) goto L12;
    L15:
        byte r12 = -1;
        int r4 = r8.hashCode();     // Catch: Throwable -> L52
        if (r4 == 119770) goto L34;
        if (r4 == 103149417) goto L31;
        if (r4 == 110621028) goto L28;
        if (r4 == 1669754599) goto L25;
    L36:
        if (r12 == 0) goto L44;
        if (r12 == 1) goto L43;
        if (r12 == 2) goto L42;
        if (r12 == 3) goto L41;
        r1 = hostMap.get(HostConstant.config).getRequestEntityList().get(0).url;     // Catch: Throwable -> L52
    L45:
        Logger.i("require host is1" + r1);     // Catch: Throwable -> L52
        String r82 = mContext.getSharedPreferences("SP_YMN_CHANGE_HOST", 0).getString("SP_YMN_CHANGE_HOST", "");     // Catch: Throwable -> L52
        if (r82.isEmpty() == false) goto L49;
        r82 = r1;
    L49:
        Logger.i("require host is2 " + r82);     // Catch: Throwable -> L52
        monitor-exit(YmnURLManagerV2.class);
        return r82;
    L41:
        config_has_get_fail = true;     // Catch: Throwable -> L52
        r1 = hostMap.get(HostConstant.config).getRequestEntityList().get(0).url;     // Catch: Throwable -> L52
        goto L45
    L42:
        ymn_has_get_fail = true;     // Catch: Throwable -> L52
        r1 = hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).url;     // Catch: Throwable -> L52
        goto L45
    L43:
        trade_has_get_fail = true;     // Catch: Throwable -> L52
        r1 = hostMap.get(HostConstant.trade).getRequestEntityList().get(0).url;     // Catch: Throwable -> L52
        goto L45
    L44:
        login_has_get_fail = true;     // Catch: Throwable -> L52
        r1 = hostMap.get(HostConstant.login).getRequestEntityList().get(0).url;     // Catch: Throwable -> L52
        goto L45
    L25:
        if (r8.equals(HostConstant.config) == false) goto L36;
        r12 = 3;
        goto L36
    L28:
        if (r8.equals(HostConstant.trade) == false) goto L36;
        r12 = 1;
        goto L36
    L31:
        if (r8.equals(HostConstant.login) == false) goto L36;
        r12 = 0;
        goto L36
    L34:
        if (r8.equals(HostConstant.ymn) == false) goto L36;
        r12 = 2;
        goto L36
    L12:
        if (r1.isEmpty() == true) goto L15;
        login_has_get_fail = false;     // Catch: Throwable -> L52
        trade_has_get_fail = false;     // Catch: Throwable -> L52
        ymn_has_get_fail = false;     // Catch: Throwable -> L52
        config_has_get_fail = false;     // Catch: Throwable -> L52
        goto L45
    L7:
        if (get_url_times < 3) goto L9;
        get_url_times = 0;     // Catch: Throwable -> L52
        goto L9
    }

    private static String getHostUrl() throws YmnsdkException {
        boolean r2 = false;
        boolean r0 = hostMap.get(HostConstant.config).getRequestEntityList().get(0).can_useful;
        boolean r3 = hostMap.get(HostConstant.config).getRequestEntityList().get(1).can_useful;
        boolean r5 = hostMap.get(HostConstant.config).getRequestEntityList().get(2).can_useful;
        boolean r7 = hostMap.get(HostConstant.config).getRequestEntityList().get(3).can_useful;
        if (r0 == false) goto L6;
        if (r3 == false) goto L6;
    L21:
        r2 = true;
    L23:
        if (r2 == false) goto L25;
        String r22 = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).url;
        nowType = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).type + "|" + hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getFormal_index()).port;
    L26:
        String r02 = YmnAppContext.getSdkAppId();
        String r1 = YmnAppContext.getSdkAppId();
        String r32 = YmnAppContext.getConfigIdStr();
        String r4 = YmnAppContext.getChannelId();
        if (r02 != null) goto L29;
    L32:
        r02 = "0";
    L33:
        if (r1 != null) goto L35;
    L38:
        r1 = "0";
    L39:
        if (r32 != null) goto L41;
    L44:
        r32 = "0";
    L45:
        if (r4 != null) goto L47;
    L50:
        r4 = "0";
    L52:
        return r22 + "/server_list/" + r02 + "/" + r1 + "/" + r32 + "/" + r4 + "/" + HostUtils.getSign(r02, r1, r32, r4) + ".json";
    L47:
        if (r4.toLowerCase().equals("unknow") == true) goto L50;
        if (r4.isEmpty() == false) goto L52;
    L41:
        if (r32.toLowerCase().equals("unknow") == true) goto L44;
        if (r32.isEmpty() == false) goto L45;
    L35:
        if (r1.toLowerCase().equals("unknow") == true) goto L38;
        if (r1.isEmpty() == false) goto L39;
    L29:
        if (r02.toLowerCase().equals("unknow") == true) goto L32;
        if (r02.isEmpty() == false) goto L33;
    L25:
        r22 = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).url;
        nowType = hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).type + "|" + hostMap.get(HostConstant.config).getRequestEntityList().get(hostMap.get(HostConstant.config).getSpare_index()).port;
    L6:
        if (r0 == false) goto L8;
        hostMap.get(HostConstant.config).setFormal_index(0);
        goto L21
    L8:
        if (r3 == false) goto L11;
        hostMap.get(HostConstant.config).setFormal_index(1);
        goto L21
    L11:
        if (isGain.equals("true") == false) goto L21;
        if (r5 == false) goto L15;
        if (r7 == true) goto L23;
    L15:
        if (r5 == false) goto L17;
        hostMap.get(HostConstant.config).setFormal_index(2);
        goto L23
    L17:
        if (r7 == false) goto L19;
        hostMap.get(HostConstant.config).setFormal_index(3);
        goto L23
    L19:
        return "failed";
    }

    private static String getLoaclHost(String r8) {
        RequestEntityList r0 = hostMap.get(r8);
        String r1 = "failed";
        String r4 = "";
        if (HostUtils.judgeHost(hostMap, r8) == true) goto L5;
    L15:
        boolean r82 = r0.getRequestEntityList().get(0).can_useful;
        boolean r5 = r0.getRequestEntityList().get(1).can_useful;
        if (r82 == false) goto L19;
        if (r5 == false) goto L19;
        r1 = r0.getRequestEntityList().get(r0.getFormal_index()).url;
        r4 = r0.getRequestEntityList().get(r0.getFormal_index()).type + "|" + r0.getRequestEntityList().get(r0.getFormal_index()).port;
        Logger.e("require host is6" + r1);
    L25:
        if (r4.isEmpty() == true) goto L27;
        nowType = r4;
    L27:
        return r1;
    L19:
        if (r82 == false) goto L21;
        r1 = r0.getRequestEntityList().get(0).url;
        r4 = r0.getRequestEntityList().get(0).type + "|" + r0.getRequestEntityList().get(0).port;
        Logger.e("require host is7" + r1);
        goto L25
    L21:
        if (r5 == false) goto L23;
        r1 = r0.getRequestEntityList().get(1).url;
        r4 = r0.getRequestEntityList().get(1).type + "|" + r0.getRequestEntityList().get(1).port;
        Logger.e("require host is8" + r1);
        goto L25
    L23:
        r0.setFormal_can_useful(false);
        goto L25
    L5:
        if (isGain.equals("true") == false) goto L15;
        boolean r83 = r0.getRequestEntityList().get(2).can_useful;
        boolean r6 = r0.getRequestEntityList().get(3).can_useful;
        if (r83 == false) goto L10;
        if (r6 == false) goto L10;
        r1 = r0.getRequestEntityList().get(r0.getSpare_index()).url;
        r4 = r0.getRequestEntityList().get(r0.getSpare_index()).type + "|" + r0.getRequestEntityList().get(r0.getSpare_index()).port;
        Logger.e("require host is3" + r1);
    L10:
        if (r83 == false) goto L12;
        r1 = r0.getRequestEntityList().get(2).url;
        r4 = r0.getRequestEntityList().get(2).type + "|" + r0.getRequestEntityList().get(2).port;
        Logger.e("require host is4" + r1);
        goto L25
    L12:
        if (r6 == false) goto L14;
        r1 = r0.getRequestEntityList().get(3).url;
        r4 = r0.getRequestEntityList().get(3).type + "|" + r0.getRequestEntityList().get(3).port;
        Logger.e("require host is5" + r1);
        goto L25
    L14:
        r0.setSpare_can_useful(false);
        goto L25
    }

    public static void init(Context r0) {
        mContext = r0;
        initEntity();
        readDefaultHost(r0);
        pullData(r0);
    }

    public static void initEntity() {
        get_url_times = 0;
        Gson r0 = new Gson();
        if (HostSharedPreferences.getInstance(mContext).readData("loginEntityList").isEmpty() == false) goto L5;
        RequestEntityList r1 = new RequestEntityList();
        RequestEntity r9 = new RequestEntity(HostConstant.LOGIN_URL_HOST_INPACKAGE_A, HostConstant.login, "a", HostConstant.LOGIN_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
        RequestEntity r2 = new RequestEntity(HostConstant.LOGIN_URL_HOST_INPACKAGE_B, HostConstant.login, "b", HostConstant.LOGIN_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
        RequestEntity r3 = new RequestEntity("", HostConstant.login, "c", 1, 0, true);
        RequestEntity r4 = new RequestEntity("", HostConstant.login, "d", 1, 0, true);
        r1.getRequestEntityList().add(r9);
        r1.getRequestEntityList().add(r2);
        r1.getRequestEntityList().add(r3);
        r1.getRequestEntityList().add(r4);
    L7:
        if (HostSharedPreferences.getInstance(mContext).readData("tradeEntityList").isEmpty() == false) goto L9;
        RequestEntityList r22 = new RequestEntityList();
        RequestEntity r10 = new RequestEntity(HostConstant.TRADE_URL_HOST_INPACKAGE_A, HostConstant.trade, "a", HostConstant.TRADE_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
        RequestEntity r32 = new RequestEntity(HostConstant.TRADE_URL_HOST_INPACKAGE_B, HostConstant.trade, "b", HostConstant.TRADE_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
        RequestEntity r42 = new RequestEntity("", HostConstant.trade, "c", 1, 0, true);
        RequestEntity r5 = new RequestEntity("", HostConstant.trade, "d", 1, 0, true);
        r22.getRequestEntityList().add(r10);
        r22.getRequestEntityList().add(r32);
        r22.getRequestEntityList().add(r42);
        r22.getRequestEntityList().add(r5);
    L11:
        if (HostSharedPreferences.getInstance(mContext).readData("configEntityList").isEmpty() == false) goto L13;
        RequestEntityList r33 = new RequestEntityList();
        RequestEntity r11 = new RequestEntity(HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_A, HostConstant.config, "a", HostConstant.SDK_CONFIG_HOST_INPACKAGE_A_WERIGHT, 0, true);
        RequestEntity r43 = new RequestEntity(HostConstant.SDK_CONFIG_URL_HOST_INPACKAGE_B, HostConstant.config, "b", HostConstant.SDK_CONFIG_HOST_INPACKAGE_B_WERIGHT, 0, true);
        RequestEntity r52 = new RequestEntity("", HostConstant.config, "c", 1, 0, true);
        RequestEntity r6 = new RequestEntity("", HostConstant.config, "d", 1, 0, true);
        r33.getRequestEntityList().add(r11);
        r33.getRequestEntityList().add(r43);
        r33.getRequestEntityList().add(r52);
        r33.getRequestEntityList().add(r6);
    L15:
        if (HostSharedPreferences.getInstance(mContext).readData("sdkEntityList").isEmpty() == false) goto L17;
        RequestEntityList r02 = new RequestEntityList();
        RequestEntity r112 = new RequestEntity(HostConstant.YMN_URL_HOST_INPACKAGE_A, HostConstant.ymn, "a", HostConstant.YMN_URL_HOST_INPACKAGE_A_WERIGHT, 0, true);
        RequestEntity r44 = new RequestEntity(HostConstant.YMN_URL_HOST_INPACKAGE_B, HostConstant.ymn, "b", HostConstant.YMN_URL_HOST_INPACKAGE_B_WERIGHT, 0, true);
        RequestEntity r53 = new RequestEntity("", HostConstant.ymn, "c", 1, 0, true);
        RequestEntity r62 = new RequestEntity("", HostConstant.ymn, "d", 1, 0, true);
        r02.getRequestEntityList().add(r112);
        r02.getRequestEntityList().add(r44);
        r02.getRequestEntityList().add(r53);
        r02.getRequestEntityList().add(r62);
    L18:
        hostMap = new LinkedHashMap();
        hostMap.put(HostConstant.login, r1);
        hostMap.put(HostConstant.trade, r22);
        hostMap.put(HostConstant.config, r33);
        hostMap.put(HostConstant.ymn, r02);
        return;
    L17:
        r02 = (RequestEntityList) r0.fromJson(HostSharedPreferences.getInstance(mContext).readData("sdkEntityList"), RequestEntityList.class);
        goto L18
    L13:
        r33 = (RequestEntityList) r0.fromJson(HostSharedPreferences.getInstance(mContext).readData("configEntityList"), RequestEntityList.class);
        goto L15
    L9:
        r22 = (RequestEntityList) r0.fromJson(HostSharedPreferences.getInstance(mContext).readData("tradeEntityList"), RequestEntityList.class);
        goto L11
    L5:
        r1 = (RequestEntityList) r0.fromJson(HostSharedPreferences.getInstance(mContext).readData("loginEntityList"), RequestEntityList.class);
        goto L7
    }

    public static void notifyRequestFailure() {
        if (TextUtils.isEmpty(nowType) == true) goto L56;
        String[] r0 = nowType.split("\\|");
        String r2 = r0[0];
        int r02 = r0[1].charAt(0) - 'a';
        RequestEntityList r4 = hostMap.get(r2);
        if (r4.getRequested_fail_times() >= 0) goto L7;
        r4.setRequested_fail_times(r4.getRequested_fail_times() + 1);
    L9:
        if (r4.getRequestEntityList().get(0).can_useful == true) goto L14;
        if (r4.getRequestEntityList().get(1).can_useful == true) goto L14;
        r4.setFormal_can_useful(false);
    L14:
        if (r4.getRequestEntityList().get(2).can_useful == true) goto L19;
        if (r4.getRequestEntityList().get(3).can_useful == true) goto L19;
        r4.setSpare_can_useful(false);
    L19:
        if (r4.isFormal_can_useful() == false) goto L21;
        return;
    L21:
        if (r4.isSpare_can_useful() == true) goto L58;
        isGain = "false";
        gainHost(mContext);
        get_url_times++;
        if (get_url_times >= 3) goto L25;
        hostMap.get(HostConstant.login).resetUseable();
        hostMap.get(HostConstant.trade).resetUseable();
        hostMap.get(HostConstant.config).resetUseable();
        hostMap.get(HostConstant.ymn).resetUseable();
        return;
    L25:
        byte r03 = -1;
        int r10 = r2.hashCode();
        if (r10 == 119770) goto L44;
        if (r10 == 103149417) goto L41;
        if (r10 == 110621028) goto L38;
        if (r10 == 1669754599) goto L35;
    L46:
        if (r03 == 0) goto L54;
        if (r03 == 1) goto L53;
        if (r03 == 2) goto L52;
        if (r03 != 3) goto L63;
        config_has_get_fail = true;
        return;
    L63:
        return;
    L52:
        ymn_has_get_fail = true;
        return;
    L53:
        trade_has_get_fail = true;
        return;
    L54:
        login_has_get_fail = true;
        return;
    L35:
        if (r2.equals(HostConstant.config) == false) goto L46;
        r03 = 3;
        goto L46
    L38:
        if (r2.equals(HostConstant.trade) == false) goto L46;
        r03 = 1;
        goto L46
    L41:
        if (r2.equals(HostConstant.login) == false) goto L46;
        r03 = 0;
        goto L46
    L44:
        if (r2.equals(HostConstant.ymn) == false) goto L46;
        r03 = 2;
        goto L46
    L58:
        return;
    L7:
        r4.getRequestEntityList().get(r02).can_useful = false;
        r4.getRequestEntityList().get(r02).can_useful = false;
        r4.setRequested_fail_times(r02);
        goto L9
    }

    public static void notifyRequestSuccess() {
        get_url_times = 0;
        if (TextUtils.isEmpty(nowType) == true) goto L6;
        String r0 = nowType.split("\\|")[0];
        RequestEntityList r02 = hostMap.get(r0);
        r02.setRequested_success_times(r02.getRequested_success_times() + 1);
        return;
    }

    private static void pullData(Context r6) {
        if (HostUtils.getChance((hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight * 10000) / (hostMap.get(HostConstant.config).getRequestEntityList().get(0).weight + hostMap.get(HostConstant.config).getRequestEntityList().get(1).weight)) == false) goto L5;
        hostMap.get(HostConstant.config).setFormal_index(0);
    L6:
        gainHost(r6);
        return;
    L5:
        hostMap.get(HostConstant.config).setFormal_index(1);
        goto L6
    }

    private static void readDefaultHost(Context r8) {
        String r0 = YmnAppContext.getMetaDataValueString("default_login");
        String r1 = YmnAppContext.getMetaDataValueString("default_trade");
        String r2 = YmnAppContext.getMetaDataValueString("default_config");
        String r3 = YmnAppContext.getHostUrl();
        if (r0 != null) goto L5;
    L7:
        if (r1 != null) goto L9;
    L11:
        if (r2 == null) goto L16;
        if (r2.isEmpty() == true) goto L16;
        hostMap.get(HostConstant.config).getRequestEntityList().get(0).url = r2;
        hostMap.get(HostConstant.config).getRequestEntityList().get(1).url = r2;
    L16:
        if (TextUtils.isEmpty(r3) == true) goto L27;
        hostMap.get(HostConstant.ymn).getRequestEntityList().get(0).url = r3;
        hostMap.get(HostConstant.ymn).getRequestEntityList().get(1).url = r3;
    L27:
        String r82 = urlOnSdCard4Public(r8);     // Catch: Exception -> L24
        Logger.i("这是本地debug文件：" + r82);     // Catch: Exception -> L24
        if (TextUtils.isEmpty(r82) == false) goto L21;
        return;
    L21:
        if (YmnGsonUtil.isJsonObject(r82) == false) goto L30;
        changeLoaclUrl(new JSONObject(new JSONObject(r82).optString("data")));     // Catch: Exception -> L24
        return;
    L30:
        return;
    L24:
        e = move-exception;
        e.printStackTrace();
        return;
    L9:
        if (r1.isEmpty() == true) goto L11;
        hostMap.get(HostConstant.trade).getRequestEntityList().get(0).url = r1;
        hostMap.get(HostConstant.trade).getRequestEntityList().get(1).url = r1;
        goto L11
    L5:
        if (r0.isEmpty() == true) goto L7;
        hostMap.get(HostConstant.login).getRequestEntityList().get(0).url = r0;
        hostMap.get(HostConstant.login).getRequestEntityList().get(1).url = r0;
        goto L7
    }

    public static void saveHostList() {
        HostSharedPreferences.getInstance(mContext).putData("loginEntityList", hostMap.get(HostConstant.login).toString());
        HostSharedPreferences.getInstance(mContext).putData("tradeEntityList", hostMap.get(HostConstant.trade).toString());
        HostSharedPreferences.getInstance(mContext).putData("configEntityList", hostMap.get(HostConstant.config).toString());
        HostSharedPreferences.getInstance(mContext).putData("ymnEntityList", hostMap.get(HostConstant.ymn).toString());
        HostSharedPreferences.getInstance(mContext).putData("nowType", nowType);
        HostSharedPreferences.getInstance(mContext).putData(HostSharedPreferences.isGain, isGain);
    }

    static void setHost(String r5, RequestEntityList r6) {
        JSONObject r1 = new JSONObject(r5);     // Catch: Exception -> L5
        RequestEntity r52 = r6.getRequestEntityList().get(2);     // Catch: Exception -> L5
        r52.url = r1.optString("server_a");     // Catch: Exception -> L5
        RequestEntity r53 = r6.getRequestEntityList().get(3);     // Catch: Exception -> L5
        r53.url = r1.optString("server_b");     // Catch: Exception -> L5
        RequestEntity r54 = r6.getRequestEntityList().get(2);     // Catch: Exception -> L5
        r54.weight = r1.optInt("server_a_weight");     // Catch: Exception -> L5
        RequestEntity r55 = r6.getRequestEntityList().get(3);     // Catch: Exception -> L5
        r55.weight = r1.optInt("server_b_weight");     // Catch: Exception -> L5
        r6.setIs_mandatory(r1.optInt("is_mandatory"));     // Catch: Exception -> L5
        RequestEntity r56 = r6.getRequestEntityList().get(2);     // Catch: Exception -> L5
        r56.Request_times = r1.optInt("request_times");     // Catch: Exception -> L5
        RequestEntity r57 = r6.getRequestEntityList().get(3);     // Catch: Exception -> L5
        r57.Request_times = r1.optInt("request_times");     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    static void setHostType() {
        Iterator<Map.Entry<String, RequestEntityList>> r0 = hostMap.entrySet().iterator();
    L4:
        if (r0.hasNext() == false) goto L13;
        RequestEntityList r1 = r0.next().getValue();
        if (HostUtils.getChance((r1.getRequestEntityList().get(0).weight * 10000) / (r1.getRequestEntityList().get(0).weight + r1.getRequestEntityList().get(1).weight)) == false) goto L8;
        r1.setFormal_index(0);
    L10:
        if (HostUtils.getChance((r1.getRequestEntityList().get(2).weight * 10000) / (r1.getRequestEntityList().get(2).weight + r1.getRequestEntityList().get(3).weight)) == true) goto L11;
        r1.setSpare_index(3);
        goto L4
    L11:
        r1.setSpare_index(2);
        goto L4
    L8:
        r1.setFormal_index(1);
        goto L10
    }

    private static String urlOnSdCard4Public(Context r3) throws YmnException {
    L11:
        e = move-exception;
        throw new YmnException(e);
    L4:
        if (ResourceUtil.isSdcardReady() == true) goto L6;
        return "";
    L6:
        File r32 = new File(ResourceUtil.getSdcardPath() + ".bftj/sdk/ymnDebug");     // Catch: Exception -> L11
        if (r32.exists() == true) goto L9;
        return "";
    L9:
        Properties r0 = new Properties();     // Catch: Exception -> L11
        r0.load(new FileInputStream(r32));     // Catch: Exception -> L11
        return r0.getProperty("url_host_ymnsdk");
    }
}
