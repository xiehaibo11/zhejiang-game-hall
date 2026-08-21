package com.bianfeng.ymnsdk.allogin;

import android.app.Activity;
import android.content.Context;
import android.support.v4.provider.FontsContractCompat;
import com.alipay.sdk.app.AuthTask;
import com.bianfeng.ymnsdk.allogin.checkAction.CheckApi;
import com.bianfeng.ymnsdk.allogin.checkAction.CheckCallBack;
import com.bianfeng.ymnsdk.allogin.net.AlloginCallBack;
import com.bianfeng.ymnsdk.allogin.net.HttpHelper;
import com.bianfeng.ymnsdk.allogin.net.HttpListener;
import com.bianfeng.ymnsdk.allogin.net.getPreLoginCallback;
import com.bianfeng.ymnsdk.entity.LoginEntity;
import com.bianfeng.ymnsdk.feature.YmnDataBuilder;
import com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.google.gson.Gson;
import com.huawei.hms.framework.common.ContainerUtils;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import com.tencent.connect.common.Constants;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class AlloginInterface extends YmnChannelInterface {
    public static final String ALLOGIN_GET_AUTOINFO = "al_authinfo";
    private static final int ALLOGIN_GET_INFO_FAIL = 30034002;
    private static final int ALLOGIN_GET_INFO_SUCCESS = 30034001;
    public static final String ALLOGIN_LOGIN = "al_login";
    static String Url = "http://121.199.42.69:8866";
    private volatile int failCode;

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "30034";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "allogin";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 2;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return "15.6.2";
    }

    @Override // com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface, com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
        sendResult(100, null);
        sendResult(205, null);
    }

    private void preLogin(final AlloginCallBack alloginCallBack) {
        TreeMap treeMap = new TreeMap();
        treeMap.put("app_id", Integer.valueOf(Integer.parseInt(getMetaData("TD_SDK_APP_ID"))));
        treeMap.put("platform_id", Integer.valueOf(Integer.parseInt(getPluginId())));
        treeMap.put(Constants.PACKAGE_ID, Integer.valueOf(Integer.parseInt(getMetaData("TD_CONFIG_ID"))));
        try {
            onPreLoginRequest(getActivity(), YmnURLManagerV2.getHost(HostConstant.login) + "/pre_login", mapToJson(treeMap), new getPreLoginCallback() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.1
                @Override // com.bianfeng.ymnsdk.allogin.net.getPreLoginCallback
                public void onPreLoginSuccess(String str) {
                    alloginCallBack.onPreLoginSuccess(str);
                }

                @Override // com.bianfeng.ymnsdk.allogin.net.getPreLoginCallback
                public void onPreLoginError(int i, String str) {
                    alloginCallBack.onPreLoginError(i, str);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            alloginCallBack.onPreLoginError(this.failCode, e.toString());
        }
    }

    /* JADX INFO: renamed from: com.bianfeng.ymnsdk.allogin.AlloginInterface$2, reason: invalid class name */
    class AnonymousClass2 implements AlloginCallBack {
        AnonymousClass2() {
        }

        @Override // com.bianfeng.ymnsdk.allogin.net.AlloginCallBack
        public void onPreLoginSuccess(final String str) {
            new Thread(new Runnable() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.2.1
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        Map<String, String> mapAuthV2 = new AuthTask(AlloginInterface.this.getActivity()).authV2(str, true);
                        Logger.e("data is " + mapAuthV2.toString());
                        final String str2 = mapAuthV2.get("resultStatus");
                        final Map<String, String> mapStirngToMap = AlloginInterface.StirngToMap(mapAuthV2.get("result"));
                        final String str3 = mapStirngToMap.get(FontsContractCompat.Columns.RESULT_CODE);
                        AlloginInterface.this.tryRunOnUiThreadOrJustRun(new Runnable() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.2.1.1
                            @Override // java.lang.Runnable
                            public void run() {
                                if (str2.equals("9000") && str3.equals(BasicPushStatus.SUCCESS_CODE)) {
                                    YmnDataBuilder.createJson(AlloginInterface.this).append(IUserFeature.LOGIN_SUC_RS_SESSION, mapStirngToMap.get("auth_code")).sendResult(102);
                                    return;
                                }
                                AlloginInterface.this.sendResult(105, str2 + "|" + str3);
                            }
                        });
                    } catch (Exception e) {
                        e.printStackTrace();
                        AlloginInterface.this.tryRunOnUiThreadOrJustRun(new Runnable() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.2.1.2
                            @Override // java.lang.Runnable
                            public void run() {
                                AlloginInterface.this.sendResult(105, e.toString());
                            }
                        });
                    }
                }
            }).start();
        }

        @Override // com.bianfeng.ymnsdk.allogin.net.AlloginCallBack
        public void onPreLoginError(int i, String str) {
            AlloginInterface.this.sendResult(105, i + "|" + str);
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    @YFunction(name = ALLOGIN_LOGIN)
    public void login() {
        this.failCode = 105;
        preLogin(new AnonymousClass2());
    }

    /* JADX INFO: renamed from: com.bianfeng.ymnsdk.allogin.AlloginInterface$3, reason: invalid class name */
    class AnonymousClass3 implements AlloginCallBack {
        AnonymousClass3() {
        }

        /* JADX INFO: renamed from: com.bianfeng.ymnsdk.allogin.AlloginInterface$3$1, reason: invalid class name */
        class AnonymousClass1 implements Runnable {
            final /* synthetic */ String val$autoInfo;

            AnonymousClass1(String str) {
                this.val$autoInfo = str;
            }

            @Override // java.lang.Runnable
            public void run() {
                try {
                    Map<String, String> mapAuthV2 = new AuthTask(AlloginInterface.this.getActivity()).authV2(this.val$autoInfo, true);
                    Logger.e("data is " + mapAuthV2.toString());
                    final String str = mapAuthV2.get("resultStatus");
                    final Map<String, String> mapStirngToMap = AlloginInterface.StirngToMap(mapAuthV2.get("result"));
                    final String str2 = mapStirngToMap.get(FontsContractCompat.Columns.RESULT_CODE);
                    AlloginInterface.this.tryRunOnUiThreadOrJustRun(new Runnable() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.3.1.1
                        @Override // java.lang.Runnable
                        public void run() {
                            if (str.equals("9000") && str2.equals(BasicPushStatus.SUCCESS_CODE)) {
                                try {
                                    int appId = YmnAppContext.getAppId();
                                    int configId = YmnAppContext.getConfigId();
                                    int i = Integer.parseInt(AlloginInterface.this.getPluginId());
                                    JSONObject jSONObject = new JSONObject();
                                    jSONObject.put(IUserFeature.LOGIN_SUC_RS_SESSION, mapStirngToMap.get("auth_code"));
                                    LoginEntity loginEntity = new LoginEntity(appId, configId, i, jSONObject.toString());
                                    JSONObject jSONObject2 = new JSONObject();
                                    jSONObject2.put("sid", loginEntity.toString());
                                    CheckApi.checkLogin(AlloginInterface.this.getActivity(), jSONObject2.toString(), new CheckCallBack() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.3.1.1.1
                                        @Override // com.bianfeng.ymnsdk.allogin.checkAction.CheckCallBack
                                        public void CheckFail() {
                                        }

                                        @Override // com.bianfeng.ymnsdk.allogin.checkAction.CheckCallBack
                                        public void CheckSuccess(String str3) {
                                            try {
                                                AlloginInterface.this.sendResult(AlloginInterface.ALLOGIN_GET_INFO_SUCCESS, new JSONObject(str3).get("data").toString());
                                            } catch (Exception e) {
                                                AlloginInterface.this.sendResult(AlloginInterface.ALLOGIN_GET_INFO_FAIL, e.toString());
                                                e.printStackTrace();
                                            }
                                        }
                                    });
                                    return;
                                } catch (Exception e) {
                                    e.printStackTrace();
                                    AlloginInterface.this.sendResult(AlloginInterface.ALLOGIN_GET_INFO_FAIL, e.toString());
                                    return;
                                }
                            }
                            AlloginInterface.this.sendResult(AlloginInterface.ALLOGIN_GET_INFO_FAIL, str2);
                        }
                    });
                } catch (Exception e) {
                    e.printStackTrace();
                    AlloginInterface.this.tryRunOnUiThreadOrJustRun(new Runnable() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.3.1.2
                        @Override // java.lang.Runnable
                        public void run() {
                            AlloginInterface.this.sendResult(AlloginInterface.ALLOGIN_GET_INFO_FAIL, e.toString());
                        }
                    });
                }
            }
        }

        @Override // com.bianfeng.ymnsdk.allogin.net.AlloginCallBack
        public void onPreLoginSuccess(String str) {
            new Thread(new AnonymousClass1(str)).start();
        }

        @Override // com.bianfeng.ymnsdk.allogin.net.AlloginCallBack
        public void onPreLoginError(int i, String str) {
            AlloginInterface.this.sendResult(AlloginInterface.ALLOGIN_GET_INFO_FAIL, i + "|" + str);
        }
    }

    @YFunction(name = ALLOGIN_GET_AUTOINFO)
    public void getInfo() {
        this.failCode = ALLOGIN_GET_INFO_FAIL;
        preLogin(new AnonymousClass3());
    }

    private void onPreLoginRequest(Activity activity, String str, String str2, final getPreLoginCallback getprelogincallback) {
        HttpHelper httpHelper = new HttpHelper(activity);
        httpHelper.setMethod(2);
        try {
            httpHelper.createHttpRequest(str, str2, new HttpListener() { // from class: com.bianfeng.ymnsdk.allogin.AlloginInterface.4
                @Override // com.bianfeng.ymnsdk.allogin.net.HttpListener
                public void onError(int i, String str3) {
                    Logger.e("data is 校验失败");
                    getprelogincallback.onPreLoginError(i, str3 + "校验失败");
                }

                @Override // com.bianfeng.ymnsdk.allogin.net.HttpListener
                public void onComplete(String str3) {
                    try {
                        JSONObject jSONObject = new JSONObject(str3);
                        int i = jSONObject.getInt("code");
                        JSONObject jSONObject2 = new JSONObject(jSONObject.getString("data"));
                        if (i == 0) {
                            getprelogincallback.onPreLoginSuccess(jSONObject2.getString("authInfo"));
                        } else {
                            Logger.e("data is 获取失败+" + jSONObject.getString("msg"));
                            getprelogincallback.onPreLoginError(i, jSONObject.getString("msg"));
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                        Logger.e("data is " + e.toString());
                        getprelogincallback.onPreLoginError(-1, "检验失败");
                    }
                }
            });
        } catch (Exception e) {
            getprelogincallback.onPreLoginError(-1, e.toString());
        }
    }

    public static <T> String mapToJson(Map<String, T> map) {
        return new Gson().toJson(map);
    }

    public static Map<String, String> StirngToMap(String str) {
        HashMap map = new HashMap();
        for (String str2 : str.split("&")) {
            String[] strArrSplit = str2.split(ContainerUtils.KEY_VALUE_DELIMITER);
            map.put(strArrSplit[0], strArrSplit[1]);
        }
        return map;
    }
}
