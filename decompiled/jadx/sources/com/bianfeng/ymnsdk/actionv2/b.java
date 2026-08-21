package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.entity.PlatformCallbackEntity;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.JsonValueUtils;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.YmnSourceFromExtUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.loopj.android.http.RequestParams;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestOrderActionV2.java */
/* JADX INFO: loaded from: classes.dex */
public class b extends ActionSupportV2<Map<String, String>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, String> f1427a;
    private TreeMap<String, String> b;
    private Map<String, String> c;
    private String d;

    public b(Context context) {
        super(context);
        this.b = this.httpHelper.getHeadersMap();
        this.d = YmnDataFunUtils.getInstance().getPayTrace();
        this.b.put("Content-Type", RequestParams.APPLICATION_JSON);
        this.b.put("X-App-Id", "" + YmnAppContext.getSdkAppId());
        this.b.put("X-Package-Id", YmnAppContext.getConfigIdStr());
        this.b.put("X-Nonce-Str", this.d);
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        this.f1427a = YmnGsonUtil.getMapFrom(datas[0]);
        String ext = this.f1427a.get("ext");
        Object source = YmnSourceFromExtUtils.getSource(ext);
        this.c = (Map) datas[1];
        JSONObject json = new JSONObject();
        try {
            setPayloadEntity(this.f1427a.get("role_id"), this.f1427a.get("role_name"), this.d);
            json.put(IPaymentFeature.ARG_CHANNEL_ID, JsonValueUtils.string2Int(plugin.getPluginId()));
            json.put(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_CP_ORDER_ID_V2, this.f1427a.get(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_CP_ORDER_ID));
            json.put("product_id", this.f1427a.get("product_id"));
            json.put("product_name", this.f1427a.get("product_name"));
            Log.e("zzx-prder", YmnGsonUtil.toJson(this.f1427a));
            Log.e("zzx-ARG_PRODUCT_COUNT", this.f1427a.get("product_count"));
            json.put(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_PRODUCT_QTY_V2, JsonValueUtils.string2Int(this.f1427a.get("product_count")));
            json.put("product_price", JsonValueUtils.price2Int(this.f1427a.get("product_price")));
            json.put("source", source);
            String server_id = this.f1427a.get(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_SERVER_ID);
            if (!TextUtils.isEmpty(server_id)) {
                json.put(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_SERVER_ID, server_id);
            }
            String server_name = this.f1427a.get(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_SERVER_NAME);
            if (!TextUtils.isEmpty(server_name)) {
                json.put(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_SERVER_NAME, server_name);
            }
            json.put("trade_attach", ext);
            json.put("is_test", this.f1427a.get("is_test") != null ? Integer.parseInt(this.f1427a.get("is_test")) : 0);
            JSONObject extends_v2 = new JSONObject();
            extends_v2.put(IPaymentFeature.ARG_MARKET_ID, YmnAppContext.getChannelIdInt());
            extends_v2.put("trade_sdk_version", plugin.getPluginVersion());
            extends_v2.put("trace", this.d);
            json.put(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_EXTENDS_V2, extends_v2);
            if (this.c != null) {
                JSONObject data = new JSONObject(YmnGsonUtil.toJson(this.c));
                data.remove("ymnLogined");
                data.remove("resExt");
                data.remove("platformLogined");
                json.put(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_PAY_PARAMETERS_V2, data);
            } else {
                json.put(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_PAY_PARAMETERS_V2, new JSONObject());
            }
            return json;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    protected String getURL() {
        String url = formatUrl("v2/trade/order");
        Logger.i("RequestOrderActionV2 getURL");
        YmnDataFunUtils.getInstance().payRequestOrder(url);
        return url;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    public Map<String, String> onSuccess(ActionSupportV2.ResponseResult result) throws YmnsdkException {
        String orderid = result.getData().optString("order_no");
        double par_value = result.getData().optDouble(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_PAY_PAR_VALUE_V2);
        double total_fee = result.getData().optDouble(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_PAY_TOTAL_FEE_V2);
        this.f1427a.put("trade_code", orderid);
        YmnDataFunUtils.getInstance().payResponseOrder(200, "下单成功", orderid);
        this.f1427a.put("client_callback", result.getData().optString("trade_request_content"));
        this.f1427a.put("platform_callback", new PlatformCallbackEntity(orderid, par_value, total_fee).toString());
        this.f1427a.put("platform_notify_url", result.getData().optString("notify_url"));
        return this.f1427a;
    }
}
