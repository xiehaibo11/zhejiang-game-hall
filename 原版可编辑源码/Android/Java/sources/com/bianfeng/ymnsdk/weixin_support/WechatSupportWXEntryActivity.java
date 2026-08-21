package com.bianfeng.ymnsdk.weixin_support;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.Logger;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import com.tencent.mm.opensdk.modelmsg.SendAuth;
import com.tencent.mm.opensdk.openapi.IWXAPIEventHandler;
import org.json.JSONException;
import org.json.JSONObject;

public class WechatSupportWXEntryActivity implements IWXAPIEventHandler {
    public static final int WX_LOGIN_TYPE = 1;

    public WechatSupportWXEntryActivity(Context context) {
    }

    @Override
    public void onResp(BaseResp baseResp) {
        Log.e("WXEntryActivity", "onResp" + baseResp.getType());
        if (baseResp.getType() != 1) {
            return;
        }
        int i = baseResp.errCode;
        if (i == -4) {
            WechatSupportInterface.sendLoginResult(105, baseResp.errCode + "|" + baseResp.errStr);
            return;
        }
        if (i == -2) {
            WechatSupportInterface.sendLoginResult(106, "取消登录");
            return;
        }
        if (i == 0) {
            if (baseResp instanceof SendAuth.Resp) {
                SendAuth.Resp resp = (SendAuth.Resp) baseResp;
                String str = resp.state;
                if (TextUtils.isEmpty(str) || !str.equals(WechatSupportInterface.EXT_WECHAT_LOGIN)) {
                    return;
                }
                String str2 = resp.code;
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put(IUserFeature.LOGIN_SUC_RS_SESSION, str2);
                    jSONObject.put("appid", WechatSupportInterface.getInstance().readResponseWxappid());
                } catch (JSONException e) {
                    Logger.i("WechatSupport --- --" + e.getMessage());
                }
                WechatSupportInterface.sendLoginResult(102, jSONObject.toString());
                return;
            }
            WechatSupportInterface.sendLoginResult(105, baseResp.errCode + "|" + baseResp.errStr);
            return;
        }
        WechatSupportInterface.sendLoginResult(105, baseResp.errCode + "|" + baseResp.errStr);
    }

    @Override
    public void onReq(BaseReq baseReq) {
        if (baseReq.getType() != 1) {
        }
    }
}
