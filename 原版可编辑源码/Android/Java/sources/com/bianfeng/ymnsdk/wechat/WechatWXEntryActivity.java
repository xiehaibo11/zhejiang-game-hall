package com.bianfeng.ymnsdk.wechat;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import com.tencent.mm.opensdk.modelmsg.SendAuth;
import com.tencent.mm.opensdk.openapi.IWXAPIEventHandler;
import org.json.JSONException;
import org.json.JSONObject;

public class WechatWXEntryActivity implements IWXAPIEventHandler {
    public static final int WX_LOGIN_TYPE = 1;

    public WechatWXEntryActivity(Context context) {
    }

    @Override
    public void onResp(BaseResp baseResp) {
        Log.e("WXEntryActivity", "onResp" + baseResp.getType());
        if (baseResp.getType() != 1) {
            return;
        }
        int i = baseResp.errCode;
        if (i == -4) {
            WechatInterface.sendLoginResult(105, baseResp.errCode + "|" + baseResp.errStr);
            return;
        }
        if (i == -2) {
            WechatInterface.sendLoginResult(106, "取消登录");
            return;
        }
        if (i == 0) {
            if (baseResp instanceof SendAuth.Resp) {
                SendAuth.Resp resp = (SendAuth.Resp) baseResp;
                String str = resp.state;
                if (TextUtils.isEmpty(str) || !str.equals(WechatInterface.EXT_WECHAT_LOGIN)) {
                    return;
                }
                String str2 = resp.code;
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put(IUserFeature.LOGIN_SUC_RS_SESSION, str2);
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                WechatInterface.sendLoginResult(102, jSONObject.toString());
                return;
            }
            WechatInterface.sendLoginResult(105, baseResp.errCode + "|" + baseResp.errStr);
            return;
        }
        WechatInterface.sendLoginResult(105, baseResp.errCode + "|" + baseResp.errStr);
    }

    @Override
    public void onReq(BaseReq baseReq) {
        if (baseReq.getType() != 1) {
        }
    }
}
