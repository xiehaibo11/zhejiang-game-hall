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

    public e(Context context) {
        super(context);
    }

    @Override
    protected String getURL() {
        String url = formatUrl("pay");
        YmnDataFunUtils.getInstance().payRequestOrder(url);
        return url;
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        this.a = (Map) objArr[0];
        this.b = (Map) objArr[1];
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("platform_id", iPlugin.getPluginId());
            jSONObject.put("platform_name", iPlugin.getPluginName());
            jSONObject.put("platform_ver", iPlugin.getPluginVersion());
            jSONObject.put("isDebug", String.valueOf(iPlugin.isDebugMode() ? 1 : 0));
            Gson gson = new Gson();
            jSONObject.put("data", new JSONObject(gson.toJson(this.a)));
            if (this.b != null) {
                jSONObject.put("ext", new JSONObject(gson.toJson(this.b)));
            }
            setTransactionId(YmnDataFunUtils.getInstance().getPayTrace());
            return jSONObject;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_SUCCESS, "下单成功", responseResult.data.optString(IPaymentFeature.ARG_TRADE_CODE));
        this.a.put(IPaymentFeature.ARG_TRADE_CODE, responseResult.data.optString(IPaymentFeature.ARG_TRADE_CODE));
        this.a.put(IPaymentFeature.ARG_CLIENT_CALLBACK, responseResult.data.optString(IPaymentFeature.ARG_CLIENT_CALLBACK));
        this.a.put(IPaymentFeature.ARG_THIRDPARTY_CALLBACK, responseResult.data.optString(IPaymentFeature.ARG_THIRDPARTY_CALLBACK));
        this.a.put(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL, responseResult.data.optString(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL));
        return this.a;
    }
}
