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

    public b(Context r3) {
        super(r3);
        this.b = this.httpHelper.getHeadersMap();
        this.d = YmnDataFunUtils.getInstance().getPayTrace();
        this.b.put("Content-Type", "application/json");
        this.b.put("X-App-Id", "" + YmnAppContext.getSdkAppId());
        this.b.put("X-Package-Id", YmnAppContext.getConfigIdStr());
        this.b.put("X-Nonce-Str", this.d);
    }

    @Override
    protected String getURL() {
        String r0 = formatUrl("v2/trade/order");
        Logger.i("RequestOrderActionV2 getURL");
        YmnDataFunUtils.getInstance().payRequestOrder(r0);
        return r0;
    }

    @Override
    public JSONObject onPrepareData(IPlugin r13, Object... r14) throws YmnsdkException {
        int r6 = 0;
        this.a = YmnGsonUtil.getMapFrom(r14[0]);
        String r7 = this.a.get("ext");
        String r8 = YmnSourceFromExtUtils.getSource(r7);
        this.c = (Map) r14[1];
        JSONObject r142 = new JSONObject();
        setPayloadEntity(this.a.get(IPaymentFeature.ARG_ROLE_ID), this.a.get(IPaymentFeature.ARG_ROLE_NAME), this.d);     // Catch: Exception -> L31
        r142.put("channel_id", JsonValueUtils.string2Int(r13.getPluginId()));     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_CP_ORDER_ID_V2, this.a.get(IPaymentFeature.ARG_CP_ORDER_ID));     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_PRODUCT_ID, this.a.get(IPaymentFeature.ARG_PRODUCT_ID));     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_PRODUCT_NAME, this.a.get(IPaymentFeature.ARG_PRODUCT_NAME));     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_PRODUCT_QTY_V2, JsonValueUtils.string2Int(this.a.get(IPaymentFeature.ARG_PRODUCT_COUNT)));     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_PRODUCT_PRICE, JsonValueUtils.price2Int(this.a.get(IPaymentFeature.ARG_PRODUCT_PRICE)));     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_SOURCE_V2, r8);     // Catch: Exception -> L31
        String r2 = this.a.get(IPaymentFeature.ARG_SERVER_ID);     // Catch: Exception -> L31
        if (TextUtils.isEmpty(r2) == true) goto L12;
        r142.put(IPaymentFeature.ARG_SERVER_ID, r2);     // Catch: Exception -> L31
    L12:
        String r1 = this.a.get(IPaymentFeature.ARG_SERVER_NAME);     // Catch: Exception -> L31
        if (TextUtils.isEmpty(r1) == true) goto L15;
        r142.put(IPaymentFeature.ARG_SERVER_NAME, r1);     // Catch: Exception -> L31
    L15:
        r142.put(IPaymentFeature.ARG_PAY_ATTACH_V2, r7);     // Catch: Exception -> L31
        if (this.a.get(IPaymentFeature.ARG_IS_TEST_V2) == null) goto L19;
        r6 = Integer.parseInt(this.a.get(IPaymentFeature.ARG_IS_TEST_V2));     // Catch: Exception -> L31
    L19:
        r142.put(IPaymentFeature.ARG_IS_TEST_V2, r6);     // Catch: Exception -> L31
        JSONObject r0 = new JSONObject();     // Catch: Exception -> L31
        r0.put("market_id", YmnAppContext.getChannelIdInt());     // Catch: Exception -> L31
        r0.put("trade_sdk_version", r13.getPluginVersion());     // Catch: Exception -> L31
        r0.put("trace", this.d);     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_EXTENDS_V2, r0);     // Catch: Exception -> L31
        if (this.c == null) goto L29;
        JSONObject r132 = new JSONObject(YmnGsonUtil.toJson(this.c));     // Catch: Exception -> L31
        r132.remove("ymnLogined");     // Catch: Exception -> L31
        r132.remove("resExt");     // Catch: Exception -> L31
        r132.remove("platformLogined");     // Catch: Exception -> L31
        r142.put(IPaymentFeature.ARG_PAY_PARAMETERS_V2, r132);     // Catch: Exception -> L31
    L30:
        return r142;
    L29:
        r142.put(IPaymentFeature.ARG_PAY_PARAMETERS_V2, new JSONObject());     // Catch: Exception -> L31
    L31:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupportV2.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupportV2.ResponseResult r9) throws YmnsdkException {
        String r3 = r9.getData().optString(IPaymentFeature.ARG_ORDER_NO_V2);
        double r4 = r9.getData().optDouble(IPaymentFeature.ARG_PAY_PAR_VALUE_V2);
        double r6 = r9.getData().optDouble(IPaymentFeature.ARG_PAY_TOTAL_FEE_V2);
        this.a.put(IPaymentFeature.ARG_TRADE_CODE, r3);
        YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_SUCCESS, "下单成功", r3);
        this.a.put(IPaymentFeature.ARG_CLIENT_CALLBACK, r9.getData().optString(IPaymentFeature.ARG_PAY_REQUEST_CONTENT_V2));
        this.a.put(IPaymentFeature.ARG_THIRDPARTY_CALLBACK, new PlatformCallbackEntity(r3, r4, r6).toString());
        this.a.put(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL, r9.getData().optString(IPaymentFeature.ARG_NOTIFY_URL));
        return this.a;
    }
}
