package com.bianfeng.ymnsdk.weixin_support;

import android.content.Context;
import android.text.TextUtils;
import android.widget.Toast;
import com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor;
import com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.tencent.mm.opensdk.modelmsg.SendAuth;
import com.tencent.mm.opensdk.modelpay.PayReq;
import com.tencent.mm.opensdk.openapi.IWXAPI;
import com.tencent.mm.opensdk.openapi.WXAPIFactory;
import com.tkay.expressad.videocommon.e.b;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class WechatSupportInterface extends YmnChannelInterface {
    public static final String EXT_WECHAT_LOGIN = "wechat_support_login";
    public static final String TAG = "WechatSupportInterface";
    private static WechatSupportInterface instance;

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "30025";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "weixinsup";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 6;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return "6.8.0";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void login() {
        Logger.e("不支持该方法");
    }

    public static WechatSupportInterface getInstance() {
        return instance;
    }

    public static void sendLoginResult(int i, String str) {
        instance.sendResult(i, str);
    }

    @Override // com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface, com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
        instance = this;
        sendResult(100, null);
        sendResult(205, null);
        addCallbackInterceptor(new YmnCallbackInterceptor() { // from class: com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.1
            @Override // com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor, com.bianfeng.platform.PlatformSdkListener
            public void onCallBack(int i, String str) {
                if (i == 102) {
                    if (WechatSupportInterface.this.getUserInfo() != null && WechatSupportInterface.this.getUserInfo().getResonseExt() != null) {
                        String str2 = (String) WechatSupportInterface.this.getUserInfo().getResonseExt();
                        try {
                            if (!TextUtils.isEmpty(str2)) {
                                WechatSupportInterface.this.saveResponse(new JSONObject(str2).optString("refresh_token"));
                            }
                        } catch (JSONException e) {
                            Logger.i("addCallbackInterceptor--" + e.getMessage());
                        }
                    }
                } else if (i == 105) {
                    WechatSupportInterface.this.clearResponse();
                }
                super.onCallBack(i, str);
            }
        });
    }

    @Override // com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface, com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public void pay(Map<String, String> map) {
        super.pay(map);
        wxPay(map);
    }

    @YFunction(name = "WXSupLogin")
    private void wxLogin(String str) {
        Logger.i("WXSupupLogin----" + str);
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getActivity(), str, false);
        saveResponseWxappid(str);
        if (iwxapiCreateWXAPI.isWXAppInstalled()) {
            loginWithoutHistory(iwxapiCreateWXAPI, str);
        } else {
            Toast.makeText(getActivity(), "登录失败，未安装微信", 0).show();
            sendResult(105, "未安装微信");
        }
    }

    @YFunction(name = "WXSupAutoLogin")
    private void wxAutoLogin(String str) {
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getActivity(), str, false);
        saveResponseWxappid(str);
        if (iwxapiCreateWXAPI.isWXAppInstalled()) {
            if (supportAutoLogin()) {
                loginWithHistory();
                return;
            } else {
                loginWithoutHistory(iwxapiCreateWXAPI, str);
                return;
            }
        }
        Toast.makeText(getActivity(), "登录失败，未安装微信", 0).show();
        sendResult(105, "未安装微信");
    }

    private void loginWithoutHistory(IWXAPI iwxapi, String str) {
        iwxapi.registerApp(str);
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
            Logger.i("loginWithHistory" + e.getMessage());
        }
        sendResult(102, jSONObject.toString());
    }

    public void saveResponse(String str) {
        getActivity().getSharedPreferences(TAG, 0).edit().putString("opensdk_wx_response_refresh_token", str).apply();
    }

    public String readResponse() {
        return getActivity().getSharedPreferences(TAG, 0).getString("opensdk_wx_response_refresh_token", null);
    }

    public void saveResponseWxappid(String str) {
        getActivity().getSharedPreferences(TAG, 0).edit().putString("opensdk_wx_response_wxappid", str).apply();
    }

    public String readResponseWxappid() {
        return getActivity().getSharedPreferences(TAG, 0).getString("opensdk_wx_response_wxappid", null);
    }

    public void clearResponse() {
        saveResponse("");
    }

    public void clearResponseWxappid() {
        saveResponseWxappid("");
    }

    private boolean supportAutoLogin() {
        return !TextUtils.isEmpty(readResponse());
    }

    public void wxPay(Map<String, String> map) {
        try {
            JSONObject jSONObject = new JSONObject(map.get("client_callback"));
            IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(getActivity(), null);
            iwxapiCreateWXAPI.registerApp(getPropertie("wxAppId"));
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
            Logger.i("wx pay" + e.getMessage());
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    @YFunction(name = IUserFeature.FUNCTION_LOGOUT)
    public void logout() {
        clearResponse();
        clearResponseWxappid();
        sendLoginResult(107, "注销成功");
    }

    @Override // com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void exit() {
        super.exit();
        logout();
    }
}
