package com.bianfeng.ymnsdk.wechat;

import android.content.Context;
import android.text.TextUtils;
import android.widget.Toast;
import com.bianfeng.paylib.utils.PayTypeUtils;
import com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor;
import com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;
import com.tencent.mm.opensdk.modelmsg.SendAuth;
import com.tencent.mm.opensdk.modelpay.PayReq;
import com.tencent.mm.opensdk.openapi.IWXAPI;
import com.tencent.mm.opensdk.openapi.WXAPIFactory;
import com.tkay.expressad.videocommon.e.b;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class WechatInterface extends YmnChannelInterface {
    public static final String EXT_WECHAT_LOGIN = "wechat_login";
    public static final String EXT_WECHAT_LOGIN_WITHOUT_HISTORY = "wechat_login_without_history";
    private static final int RESET_PAY_PARAMS_FAIL = 30007004;
    private static final int RESET_PAY_PARAMS_SUCCESS = 30007003;
    private static final int SET_PAY_PARAMS_FAIL = 30007002;
    private static final int SET_PAY_PARAMS_SUCCESS = 30007001;
    public static final String TAG = "WechatInterface";
    public static final String WECHAT_RESET_PAY_PARAMS = "wechat_reset_pay_params";
    public static final String WECHAT_SET_PAY_PARAMS = "wechat_set_pay_params";
    public static final String WECHAT_SET_PAY_PARAMS_FLAG = "wechat_set_pay_params_flag";
    private static WechatInterface instance;
    private volatile boolean setParamsFlag = false;
    private volatile String wxAppId = "";

    @Override
    public String getPluginId() {
        return PayTypeUtils.WX_SDK_PAY;
    }

    @Override
    public String getPluginName() {
        return "weixin";
    }

    @Override
    public int getPluginVersion() {
        return 17;
    }

    @Override
    public String getSdkVersion() {
        return "6.8.0";
    }

    public WechatInterface() {
        instance = this;
    }

    public static void sendLoginResult(int i, String str) {
        WechatInterface wechatInterface = instance;
        if (wechatInterface != null) {
            wechatInterface.sendResult(i, str);
        }
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        this.setParamsFlag = false;
        sendResult(100, null);
        sendResult(205, null);
        addCallbackInterceptor(new YmnCallbackInterceptor() {
            @Override
            public void onCallBack(int i, String str) {
                if (i == 102) {
                    if (WechatInterface.this.getUserInfo() != null && WechatInterface.this.getUserInfo().getResonseExt() != null) {
                        String str2 = (String) WechatInterface.this.getUserInfo().getResonseExt();
                        try {
                            if (!TextUtils.isEmpty(str2)) {
                                WechatInterface.this.saveResponse(new JSONObject(str2).optString("refresh_token"));
                            }
                        } catch (JSONException e) {
                            e.printStackTrace();
                        }
                    }
                } else if (i == 105) {
                    WechatInterface.this.clearResponse();
                }
                super.onCallBack(i, str);
            }
        });
    }

    @Override
    public void login() {
        wxAutoLogin();
    }

    @Override
    public void pay(Map<String, String> map) {
        super.pay(map);
        wxPay(map);
    }

    @YFunction(name = "WXLogin")
    private void wxLogin() {
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getActivity(), getPropertie("wxAppId"), false);
        if (iwxapiCreateWXAPI.isWXAppInstalled()) {
            loginWithoutHistory(iwxapiCreateWXAPI);
        } else {
            Toast.makeText(getActivity(), "登录失败，未安装微信", 0).show();
            sendResult(105, "未安装微信");
        }
    }

    @YFunction(name = "WXAutoLogin")
    private void wxAutoLogin() {
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getActivity(), getPropertie("wxAppId"), false);
        if (iwxapiCreateWXAPI.isWXAppInstalled()) {
            if (supportAutoLogin()) {
                loginWithHistory();
                return;
            } else {
                loginWithoutHistory(iwxapiCreateWXAPI);
                return;
            }
        }
        Toast.makeText(getActivity(), "登录失败，未安装微信", 0).show();
        sendResult(105, "未安装微信");
    }

    private void loginWithoutHistory(IWXAPI iwxapi) {
        iwxapi.registerApp(getPropertie("wxAppId"));
        SendAuth.Req req = new SendAuth.Req();
        req.scope = "snsapi_userinfo";
        req.state = EXT_WECHAT_LOGIN;
        iwxapi.sendReq(req);
    }

    private void loginWithHistory() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("refresh_token", readResponse());
        } catch (JSONException e) {
            e.printStackTrace();
        }
        sendResult(102, jSONObject.toString());
    }

    public void saveResponse(String str) {
        getActivity().getSharedPreferences(TAG, 0).edit().putString("opensdk_wx_response_refresh_token", str).apply();
    }

    public String readResponse() {
        return getActivity().getSharedPreferences(TAG, 0).getString("opensdk_wx_response_refresh_token", null);
    }

    public void clearResponse() {
        saveResponse("");
    }

    private boolean supportAutoLogin() {
        return !TextUtils.isEmpty(readResponse());
    }

    @YFunction(name = "WXpay")
    public void wxPay(Map<String, String> map) {
        try {
            JSONObject jSONObject = new JSONObject(map.get("client_callback"));
            IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getActivity(), null);
            if (this.setParamsFlag && !this.wxAppId.isEmpty()) {
                iwxapiCreateWXAPI.registerApp(this.wxAppId);
                Logger.i("设置了wxAppId,为" + this.wxAppId);
            } else {
                iwxapiCreateWXAPI.registerApp(getPropertie("wxAppId"));
            }
            PayReq payReq = new PayReq();
            payReq.appId = jSONObject.optString(b.u);
            payReq.partnerId = jSONObject.optString("partnerId");
            payReq.prepayId = jSONObject.optString("prepayId");
            payReq.packageValue = "Sign=WXPay";
            payReq.nonceStr = jSONObject.optString("nonceStr");
            payReq.timeStamp = jSONObject.optString("timeStamp");
            payReq.sign = jSONObject.optString("sign");
            iwxapiCreateWXAPI.sendReq(payReq);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    @Override
    @YFunction(name = IUserFeature.FUNCTION_LOGOUT)
    public void logout() {
        clearResponse();
        sendLoginResult(107, "注销成功");
    }

    @YFunction(name = EXT_WECHAT_LOGIN_WITHOUT_HISTORY)
    public void WechatLoginWithoutHistory() {
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getActivity(), getPropertie("wxAppId"), false);
        if (iwxapiCreateWXAPI.isWXAppInstalled()) {
            loginWithoutHistory(iwxapiCreateWXAPI);
        } else {
            Toast.makeText(getActivity(), "登录失败，未安装微信", 0).show();
            sendResult(105, "未安装微信");
        }
    }

    @YFunction(name = WECHAT_SET_PAY_PARAMS)
    public void WechatSetPayParams(LinkedHashMap<String, Object> linkedHashMap) {
        this.setParamsFlag = true;
        if (linkedHashMap.containsKey("wxAppId")) {
            this.wxAppId = String.valueOf(linkedHashMap.get("wxAppId"));
            if (linkedHashMap.containsKey(b.u)) {
                try {
                    String strValueOf = String.valueOf(linkedHashMap.get(b.u));
                    YmnAppContext.setAppId(strValueOf);
                    if (!strValueOf.isEmpty() && strValueOf != null) {
                        AppContext.getInstance().setAppId(Integer.valueOf(strValueOf).intValue());
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (linkedHashMap.containsKey("packageId")) {
                    try {
                        String strValueOf2 = String.valueOf(linkedHashMap.get("packageId"));
                        YmnAppContext.setGroupId(strValueOf2);
                        if (!strValueOf2.isEmpty() && strValueOf2 != null) {
                            AppContext.getInstance().setIdentify_id(Integer.valueOf(strValueOf2).intValue());
                            YmnAppContext.setConfigId(Integer.valueOf(strValueOf2).intValue());
                        }
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                    if (linkedHashMap.containsKey("clientKey")) {
                        YmnAppContext.setSdkAppKey(String.valueOf(linkedHashMap.get("clientKey")));
                        sendResult(SET_PAY_PARAMS_SUCCESS, "设置成功");
                        return;
                    } else {
                        sendResult(SET_PAY_PARAMS_FAIL, "设置失败，传参没有clientKey");
                        return;
                    }
                }
                sendResult(SET_PAY_PARAMS_FAIL, "设置失败，传参没有packageId");
                return;
            }
            sendResult(SET_PAY_PARAMS_FAIL, "设置失败，传参没有appId");
            return;
        }
        sendResult(SET_PAY_PARAMS_FAIL, "设置失败，传参没有wxAppId");
    }

    @YFunction(name = WECHAT_SET_PAY_PARAMS_FLAG)
    public void setParamsFlag(LinkedHashMap<String, Object> linkedHashMap) {
        if (linkedHashMap.containsKey("setParamsFlag")) {
            try {
                String strValueOf = String.valueOf(linkedHashMap.get("setParamsFlag"));
                if (strValueOf != null) {
                    if (strValueOf.equals("true")) {
                        this.setParamsFlag = true;
                    } else {
                        this.setParamsFlag = false;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @YFunction(name = WECHAT_RESET_PAY_PARAMS)
    public void WechatResetPayParams() {
        this.wxAppId = getPropertie("wxAppId");
        try {
            String metaDataValueString = AppContext.getInstance().getMetaDataValueString("TD_SDK_APP_ID");
            if (metaDataValueString != null && !metaDataValueString.isEmpty()) {
                YmnAppContext.setAppId(metaDataValueString);
                AppContext.getInstance().setAppId(Integer.valueOf(metaDataValueString).intValue());
                try {
                    String metaDataValueString2 = AppContext.getInstance().getMetaDataValueString("TD_CONFIG_ID");
                    if (metaDataValueString2 != null && !metaDataValueString2.isEmpty()) {
                        YmnAppContext.setGroupId(metaDataValueString2);
                        AppContext.getInstance().setIdentify_id(Integer.valueOf(metaDataValueString2).intValue());
                        YmnAppContext.setConfigId(Integer.valueOf(metaDataValueString2).intValue());
                        try {
                            String metaDataValueString3 = AppContext.getInstance().getMetaDataValueString("TD_SDK_APP_KEY");
                            if (metaDataValueString3 != null && !metaDataValueString3.isEmpty()) {
                                YmnAppContext.setSdkAppKey(metaDataValueString3);
                                sendResult(RESET_PAY_PARAMS_SUCCESS, "重置成功");
                                return;
                            } else {
                                sendResult(RESET_PAY_PARAMS_FAIL, "重置失败，本地没有clientKey");
                                return;
                            }
                        } catch (Exception e) {
                            e.printStackTrace();
                            sendResult(RESET_PAY_PARAMS_FAIL, "重置失败，本地没有clientKey");
                            return;
                        }
                    }
                    sendResult(RESET_PAY_PARAMS_FAIL, "重置失败，本地没有packageId");
                    return;
                } catch (Exception e2) {
                    e2.printStackTrace();
                    sendResult(RESET_PAY_PARAMS_FAIL, "重置失败，本地没有packageId");
                    return;
                }
            }
            sendResult(RESET_PAY_PARAMS_FAIL, "重置失败，本地没有appId");
        } catch (Exception e3) {
            e3.printStackTrace();
            sendResult(RESET_PAY_PARAMS_FAIL, "重置失败，本地没有appId");
        }
    }
}
