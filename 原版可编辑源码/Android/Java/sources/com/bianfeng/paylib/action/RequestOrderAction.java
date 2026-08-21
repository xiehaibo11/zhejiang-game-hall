package com.bianfeng.paylib.action;

import android.content.Context;
import com.bianfeng.paylib.action.ActionSupport;
import com.bianfeng.paylib.utils.JsonValueUtils;
import com.bianfeng.paylib.utils.PaySignUtils;
import com.bianfeng.utilslib.UtilsSdk;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

public class RequestOrderAction extends ActionSupport<Map<String, String>> {
    private Map<String, String> order;
    private TreeMap<String, String> treeMap;

    @Override
    protected String getURL() {
        return "/trade/shop/order";
    }

    public RequestOrderAction(Context context) {
        super(context);
        this.treeMap = this.httpHelper.getHeadersMap();
        String webPayAppId = UtilsSdk.getAppConfig().getWebPayAppId();
        this.treeMap.put(IPaymentFeature.ARG_GCP_ID, "" + webPayAppId);
    }

    @Override
    public JSONObject onPrepareData(Map<String, String> map) throws Exception {
        this.order = map;
        String strUpdataExt = JsonValueUtils.updataExt(map.get(IPaymentFeature.ARG_THIRD_GAME_EXT));
        JSONObject jSONObject = new JSONObject();
        String str = this.order.get("product_id");
        jSONObject.put(IPaymentFeature.ARG_SHOP_ID, JsonValueUtils.string2Int(map.get(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature.ARG_SHOP_ID_V2)));
        jSONObject.put(IPaymentFeature.ARG_UID, this.order.get("role_name"));
        jSONObject.put("user_id", this.order.get("role_id"));
        jSONObject.put(IPaymentFeature.ARG_CHANNEL_ID, JsonValueUtils.string2Int(map.get(IPaymentFeature.ARG_PLUGIN_ID)));
        jSONObject.put(IPaymentFeature.ARG_PRODUCT_ID_V2, str);
        jSONObject.put(IPaymentFeature.ARG_PRODUCT_NAME_V2, this.order.get("product_name"));
        jSONObject.put(IPaymentFeature.ARG_PRODUCT_QTY_V2, JsonValueUtils.string2Int(this.order.get("product_count")));
        jSONObject.put("price", JsonValueUtils.string2Double(this.order.get("product_price")) * 100.0d);
        jSONObject.put("origin", "BFH5GameSdk");
        jSONObject.put("trade_attach", strUpdataExt);
        JSONObject jSONObject2 = new JSONObject();
        jSONObject2.put(IPaymentFeature.ARG_MARKET_ID, map.get(IPaymentFeature.ARG_MARKET_ID));
        jSONObject.put(IPaymentFeature.ARG_EXTENDS, jSONObject2);
        jSONObject.put(IPaymentFeature.ARG_PAY_PARAMETERS, new JSONObject());
        JSONObject jSONObject3 = new JSONObject();
        jSONObject3.put(IPaymentFeature.ARG_CLIENT_IP, map.get(IPaymentFeature.ARG_CLIENT_IP));
        jSONObject3.put("device_os", "android");
        jSONObject.put("client_info", jSONObject3);
        jSONObject.put("sign", PaySignUtils.sign(jSONObject.toString()));
        return jSONObject;
    }

    @Override
    protected Map<String, String> onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        this.order.put("trade_code", responseResult.getData().getString("order_no"));
        this.order.put("client_callback", responseResult.getData().getString("trade_request_content"));
        this.order.put("platform_callback", responseResult.getData().getString("order_no"));
        this.order.put("platform_notify_url", responseResult.getData().getString("notify_url"));
        return this.order;
    }
}
