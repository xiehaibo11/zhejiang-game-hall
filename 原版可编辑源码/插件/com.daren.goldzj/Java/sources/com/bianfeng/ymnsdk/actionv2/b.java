package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.platform.PaymentWrapper;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.entity.PlatformCallbackEntity;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.JsonValueUtils;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.YmnSourceFromExtUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

public class b extends ActionSupportV2<Map<String, String>> {
    private Map<String, String> a;
    private TreeMap<String, String> b;
    private Map<String, String> c;
    private String d;

    public b(Context context) {
        super(context);
        this.b = this.httpHelper.getHeadersMap();
        this.d = YmnDataFunUtils.getInstance().getPayTrace();
        this.b.put("Content-Type", "application/json");
        this.b.put("X-App-Id", "" + YmnAppContext.getSdkAppId());
        this.b.put("X-Package-Id", YmnAppContext.getConfigIdStr());
        this.b.put("X-Nonce-Str", this.d);
    }

    @Override
    protected String getURL() {
        String url = formatUrl("v2/trade/order");
        Logger.i("RequestOrderActionV2 getURL");
        YmnDataFunUtils.getInstance().payRequestOrder(url);
        return url;
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        int i = 0;
        this.a = YmnGsonUtil.getMapFrom(objArr[0]);
        String str = this.a.get("ext");
        String source = YmnSourceFromExtUtils.getSource(str);
        this.c = (Map) objArr[1];
        JSONObject jSONObject = new JSONObject();
        try {
            setPayloadEntity(this.a.get(IPaymentFeature.ARG_ROLE_ID), this.a.get(IPaymentFeature.ARG_ROLE_NAME), this.d);
            jSONObject.put("channel_id", JsonValueUtils.string2Int(iPlugin.getPluginId()));
            jSONObject.put(IPaymentFeature.ARG_CP_ORDER_ID_V2, this.a.get(IPaymentFeature.ARG_CP_ORDER_ID));
            jSONObject.put(IPaymentFeature.ARG_PRODUCT_ID, this.a.get(IPaymentFeature.ARG_PRODUCT_ID));
            jSONObject.put(IPaymentFeature.ARG_PRODUCT_NAME, this.a.get(IPaymentFeature.ARG_PRODUCT_NAME));
            jSONObject.put(IPaymentFeature.ARG_PRODUCT_QTY_V2, JsonValueUtils.string2Int(this.a.get(IPaymentFeature.ARG_PRODUCT_COUNT)));
            jSONObject.put(IPaymentFeature.ARG_PRODUCT_PRICE, JsonValueUtils.price2Int(this.a.get(IPaymentFeature.ARG_PRODUCT_PRICE)));
            jSONObject.put(IPaymentFeature.ARG_SOURCE_V2, source);
            String str2 = this.a.get(IPaymentFeature.ARG_SERVER_ID);
            if (!TextUtils.isEmpty(str2)) {
                jSONObject.put(IPaymentFeature.ARG_SERVER_ID, str2);
            }
            String str3 = this.a.get(IPaymentFeature.ARG_SERVER_NAME);
            if (!TextUtils.isEmpty(str3)) {
                jSONObject.put(IPaymentFeature.ARG_SERVER_NAME, str3);
            }
            jSONObject.put(IPaymentFeature.ARG_PAY_ATTACH_V2, str);
            if (this.a.get(IPaymentFeature.ARG_IS_TEST_V2) != null) {
                i = Integer.parseInt(this.a.get(IPaymentFeature.ARG_IS_TEST_V2));
            }
            jSONObject.put(IPaymentFeature.ARG_IS_TEST_V2, i);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("market_id", YmnAppContext.getChannelIdInt());
            jSONObject2.put("trade_sdk_version", iPlugin.getPluginVersion());
            jSONObject2.put("trace", this.d);
            jSONObject.put(IPaymentFeature.ARG_EXTENDS_V2, jSONObject2);
            if (this.c != null) {
                JSONObject jSONObject3 = new JSONObject(YmnGsonUtil.toJson(this.c));
                jSONObject3.remove("ymnLogined");
                jSONObject3.remove("resExt");
                jSONObject3.remove("platformLogined");
                jSONObject.put(IPaymentFeature.ARG_PAY_PARAMETERS_V2, jSONObject3);
            } else {
                jSONObject.put(IPaymentFeature.ARG_PAY_PARAMETERS_V2, new JSONObject());
            }
            return jSONObject;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupportV2.ResponseResult responseResult) throws YmnsdkException {
        String strOptString = responseResult.getData().optString(IPaymentFeature.ARG_ORDER_NO_V2);
        double dOptDouble = responseResult.getData().optDouble(IPaymentFeature.ARG_PAY_PAR_VALUE_V2);
        double dOptDouble2 = responseResult.getData().optDouble(IPaymentFeature.ARG_PAY_TOTAL_FEE_V2);
        this.a.put(IPaymentFeature.ARG_TRADE_CODE, strOptString);
        YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_SUCCESS, "下单成功", strOptString);
        this.a.put(IPaymentFeature.ARG_CLIENT_CALLBACK, responseResult.getData().optString(IPaymentFeature.ARG_PAY_REQUEST_CONTENT_V2));
        this.a.put(IPaymentFeature.ARG_THIRDPARTY_CALLBACK, new PlatformCallbackEntity(strOptString, dOptDouble, dOptDouble2).toString());
        this.a.put(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL, responseResult.getData().optString(IPaymentFeature.ARG_NOTIFY_URL));
        return this.a;
    }
}
