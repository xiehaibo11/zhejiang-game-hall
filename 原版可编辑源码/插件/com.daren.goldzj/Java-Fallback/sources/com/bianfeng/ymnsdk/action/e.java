package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.platform.PaymentWrapper;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.google.gson.Gson;
import java.util.Map;
import org.json.JSONObject;

public class e extends ActionSupport<Map<String, String>> {
    private Map<String, String> a;
    private Map<String, String> b;

    public e(Context r1) {
        super(r1);
    }

    @Override
    protected String getURL() {
        String r0 = formatUrl("pay");
        YmnDataFunUtils.getInstance().payRequestOrder(r0);
        return r0;
    }

    @Override
    public JSONObject onPrepareData(IPlugin r3, Object... r4) throws YmnsdkException {
        this.a = (Map) r4[0];
        this.b = (Map) r4[1];
        JSONObject r42 = new JSONObject();
        r42.put("platform_id", r3.getPluginId());     // Catch: Exception -> L14
        r42.put("platform_name", r3.getPluginName());     // Catch: Exception -> L14
        r42.put("platform_ver", r3.getPluginVersion());     // Catch: Exception -> L14
        r42.put("isDebug", String.valueOf(r3.isDebugMode() ? 1 : 0));     // Catch: Exception -> L14
        Gson r32 = new Gson();     // Catch: Exception -> L14
        r42.put("data", new JSONObject(r32.toJson(this.a)));     // Catch: Exception -> L14
        if (this.b == null) goto L12;
        r42.put("ext", new JSONObject(r32.toJson(this.b)));     // Catch: Exception -> L14
    L12:
        setTransactionId(YmnDataFunUtils.getInstance().getPayTrace());     // Catch: Exception -> L14
        return r42;
    L14:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupport.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupport.ResponseResult r6) throws Exception {
        YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_SUCCESS, "下单成功", r6.data.optString(IPaymentFeature.ARG_TRADE_CODE));
        this.a.put(IPaymentFeature.ARG_TRADE_CODE, r6.data.optString(IPaymentFeature.ARG_TRADE_CODE));
        this.a.put(IPaymentFeature.ARG_CLIENT_CALLBACK, r6.data.optString(IPaymentFeature.ARG_CLIENT_CALLBACK));
        this.a.put(IPaymentFeature.ARG_THIRDPARTY_CALLBACK, r6.data.optString(IPaymentFeature.ARG_THIRDPARTY_CALLBACK));
        this.a.put(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL, r6.data.optString(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL));
        return this.a;
    }
}
