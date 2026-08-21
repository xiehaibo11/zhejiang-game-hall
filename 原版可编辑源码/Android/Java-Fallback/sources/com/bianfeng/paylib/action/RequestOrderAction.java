package com.bianfeng.paylib.action;

public class RequestOrderAction extends com.bianfeng.paylib.action.ActionSupport<java.util.Map<java.lang.String, java.lang.String>> {
    private java.util.Map<java.lang.String, java.lang.String> order;
    private java.util.TreeMap<java.lang.String, java.lang.String> treeMap;

    public RequestOrderAction(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            com.bianfeng.paylib.action.HttpHelper r4 = r3.httpHelper
            java.util.TreeMap r4 = r4.getHeadersMap()
            r3.treeMap = r4
            com.bianfeng.utilslib.AppConfigUtils r4 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r4 = r4.getWebPayAppId()
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.treeMap
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "Gcp-Id"
            r0.put(r1, r4)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "/trade/shop/order"
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(java.util.Map<java.lang.String, java.lang.String> r7) throws java.lang.Exception {
            r6 = this;
            r6.order = r7
            java.lang.String r0 = "thirdGame_ext"
            java.lang.Object r0 = r7.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.paylib.utils.JsonValueUtils.updataExt(r0)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.order
            java.lang.String r3 = "product_id"
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "shop_id"
            java.lang.Object r3 = r7.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            int r3 = com.bianfeng.paylib.utils.JsonValueUtils.string2Int(r3)
            java.lang.String r4 = "store_id"
            r1.put(r4, r3)
            java.util.Map<java.lang.String, java.lang.String> r3 = r6.order
            java.lang.String r4 = "role_name"
            java.lang.Object r3 = r3.get(r4)
            java.lang.String r4 = "user_name"
            r1.put(r4, r3)
            java.util.Map<java.lang.String, java.lang.String> r3 = r6.order
            java.lang.String r4 = "role_id"
            java.lang.Object r3 = r3.get(r4)
            java.lang.String r4 = "user_id"
            r1.put(r4, r3)
            java.lang.String r3 = "plugin_id"
            java.lang.Object r3 = r7.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            int r3 = com.bianfeng.paylib.utils.JsonValueUtils.string2Int(r3)
            java.lang.String r4 = "channel_id"
            r1.put(r4, r3)
            java.lang.String r3 = "goods_id"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.order
            java.lang.String r3 = "product_name"
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r3 = "goods_name"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.order
            java.lang.String r3 = "product_count"
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            int r2 = com.bianfeng.paylib.utils.JsonValueUtils.string2Int(r2)
            java.lang.String r3 = "quantity"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.order
            java.lang.String r3 = "product_price"
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            double r2 = com.bianfeng.paylib.utils.JsonValueUtils.string2Double(r2)
            r4 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r2 = r2 * r4
            java.lang.String r4 = "price"
            r1.put(r4, r2)
            java.lang.String r2 = "origin"
            java.lang.String r3 = "BFH5GameSdk"
            r1.put(r2, r3)
            java.lang.String r2 = "trade_attach"
            r1.put(r2, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r2 = "market_id"
            java.lang.Object r3 = r7.get(r2)
            r0.put(r2, r3)
            java.lang.String r2 = "extends"
            r1.put(r2, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r2 = "trade_parameter"
            r1.put(r2, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r2 = "client_ip"
            java.lang.Object r7 = r7.get(r2)
            r0.put(r2, r7)
            java.lang.String r7 = "device_os"
            java.lang.String r2 = "android"
            r0.put(r7, r2)
            java.lang.String r7 = "client_info"
            r1.put(r7, r0)
            java.lang.String r7 = r1.toString()
            java.lang.String r7 = com.bianfeng.paylib.utils.PaySignUtils.sign(r7)
            java.lang.String r0 = "sign"
            r1.put(r0, r7)
            return r1
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.paylib.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.util.Map r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.paylib.action.ActionSupport.ResponseResult r5) throws java.lang.Exception {
            r4 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.order
            org.json.JSONObject r1 = r5.getData()
            java.lang.String r2 = "order_no"
            java.lang.String r1 = r1.getString(r2)
            java.lang.String r3 = "trade_code"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.order
            org.json.JSONObject r1 = r5.getData()
            java.lang.String r3 = "trade_request_content"
            java.lang.String r1 = r1.getString(r3)
            java.lang.String r3 = "client_callback"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.order
            org.json.JSONObject r1 = r5.getData()
            java.lang.String r1 = r1.getString(r2)
            java.lang.String r2 = "platform_callback"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.order
            org.json.JSONObject r5 = r5.getData()
            java.lang.String r1 = "notify_url"
            java.lang.String r5 = r5.getString(r1)
            java.lang.String r1 = "platform_notify_url"
            r0.put(r1, r5)
            java.util.Map<java.lang.String, java.lang.String> r5 = r4.order
            return r5
    }
}
