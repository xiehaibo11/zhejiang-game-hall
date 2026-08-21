package com.bianfeng.ymnsdk.actionv2;

public class b extends com.bianfeng.ymnsdk.actionv2.ActionSupportV2<java.util.Map<java.lang.String, java.lang.String>> {
    private java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.TreeMap<java.lang.String, java.lang.String> b;
    private java.util.Map<java.lang.String, java.lang.String> c;
    private java.lang.String d;

    public b(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r3 = r2.httpHelper
            java.util.TreeMap r3 = r3.getHeadersMap()
            r2.b = r3
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r3 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r3 = r3.getPayTrace()
            r2.d = r3
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.b
            java.lang.String r0 = "Content-Type"
            java.lang.String r1 = "application/json"
            r3.put(r0, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "X-App-Id"
            r3.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.b
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r1 = "X-Package-Id"
            r3.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.b
            java.lang.String r0 = r2.d
            java.lang.String r1 = "X-Nonce-Str"
            r3.put(r1, r0)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r2 = this;
            java.lang.String r0 = "v2/trade/order"
            java.lang.String r0 = r2.formatUrl(r0)
            java.lang.String r1 = "RequestOrderActionV2 getURL"
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r1.payRequestOrder(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r13, java.lang.Object... r14) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r12 = this;
            java.lang.String r0 = "server_name"
            java.lang.String r1 = "server_id"
            java.lang.String r2 = "product_price"
            java.lang.String r3 = "product_name"
            java.lang.String r4 = "product_id"
            java.lang.String r5 = "is_test"
            r6 = 0
            r7 = r14[r6]
            java.util.Map r7 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getMapFrom(r7)
            r12.a = r7
            java.util.Map<java.lang.String, java.lang.String> r7 = r12.a
            java.lang.String r8 = "ext"
            java.lang.Object r7 = r7.get(r8)
            java.lang.String r7 = (java.lang.String) r7
            java.lang.String r8 = com.bianfeng.ymnsdk.util.YmnSourceFromExtUtils.getSource(r7)
            r9 = 1
            r14 = r14[r9]
            java.util.Map r14 = (java.util.Map) r14
            r12.c = r14
            org.json.JSONObject r14 = new org.json.JSONObject
            r14.<init>()
            java.util.Map<java.lang.String, java.lang.String> r9 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.String r10 = "role_id"
            java.lang.Object r9 = r9.get(r10)     // Catch: java.lang.Exception -> L12a
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r10 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.String r11 = "role_name"
            java.lang.Object r10 = r10.get(r11)     // Catch: java.lang.Exception -> L12a
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> L12a
            java.lang.String r11 = r12.d     // Catch: java.lang.Exception -> L12a
            r12.setPayloadEntity(r9, r10, r11)     // Catch: java.lang.Exception -> L12a
            java.lang.String r9 = "channel_id"
            java.lang.String r10 = r13.getPluginId()     // Catch: java.lang.Exception -> L12a
            int r10 = com.bianfeng.ymnsdk.util.JsonValueUtils.string2Int(r10)     // Catch: java.lang.Exception -> L12a
            r14.put(r9, r10)     // Catch: java.lang.Exception -> L12a
            java.lang.String r9 = "cp_order_id"
            java.util.Map<java.lang.String, java.lang.String> r10 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.String r11 = "order_id"
            java.lang.Object r10 = r10.get(r11)     // Catch: java.lang.Exception -> L12a
            r14.put(r9, r10)     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r9 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.Object r9 = r9.get(r4)     // Catch: java.lang.Exception -> L12a
            r14.put(r4, r9)     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r4 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Exception -> L12a
            r14.put(r3, r4)     // Catch: java.lang.Exception -> L12a
            java.lang.String r3 = "product_qty"
            java.util.Map<java.lang.String, java.lang.String> r4 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.String r9 = "product_count"
            java.lang.Object r4 = r4.get(r9)     // Catch: java.lang.Exception -> L12a
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L12a
            int r4 = com.bianfeng.ymnsdk.util.JsonValueUtils.string2Int(r4)     // Catch: java.lang.Exception -> L12a
            r14.put(r3, r4)     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r3 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Exception -> L12a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L12a
            int r3 = com.bianfeng.ymnsdk.util.JsonValueUtils.price2Int(r3)     // Catch: java.lang.Exception -> L12a
            r14.put(r2, r3)     // Catch: java.lang.Exception -> L12a
            java.lang.String r2 = "source"
            r14.put(r2, r8)     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r2 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L12a
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L12a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L12a
            if (r3 != 0) goto Lac
            r14.put(r1, r2)     // Catch: java.lang.Exception -> L12a
        Lac:
            java.util.Map<java.lang.String, java.lang.String> r1 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Exception -> L12a
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L12a
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L12a
            if (r2 != 0) goto Lbd
            r14.put(r0, r1)     // Catch: java.lang.Exception -> L12a
        Lbd:
            java.lang.String r0 = "trade_attach"
            r14.put(r0, r7)     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r0 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Exception -> L12a
            if (r0 != 0) goto Lcb
            goto Ld7
        Lcb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r12.a     // Catch: java.lang.Exception -> L12a
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Exception -> L12a
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L12a
            int r6 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L12a
        Ld7:
            r14.put(r5, r6)     // Catch: java.lang.Exception -> L12a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L12a
            r0.<init>()     // Catch: java.lang.Exception -> L12a
            java.lang.String r1 = "market_id"
            int r2 = com.bianfeng.ymnsdk.util.YmnAppContext.getChannelIdInt()     // Catch: java.lang.Exception -> L12a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L12a
            java.lang.String r1 = "trade_sdk_version"
            int r13 = r13.getPluginVersion()     // Catch: java.lang.Exception -> L12a
            r0.put(r1, r13)     // Catch: java.lang.Exception -> L12a
            java.lang.String r13 = "trace"
            java.lang.String r1 = r12.d     // Catch: java.lang.Exception -> L12a
            r0.put(r13, r1)     // Catch: java.lang.Exception -> L12a
            java.lang.String r13 = "extend"
            r14.put(r13, r0)     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r13 = r12.c     // Catch: java.lang.Exception -> L12a
            java.lang.String r0 = "trade_parameters"
            if (r13 == 0) goto L121
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Exception -> L12a
            java.util.Map<java.lang.String, java.lang.String> r1 = r12.c     // Catch: java.lang.Exception -> L12a
            java.lang.String r1 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)     // Catch: java.lang.Exception -> L12a
            r13.<init>(r1)     // Catch: java.lang.Exception -> L12a
            java.lang.String r1 = "ymnLogined"
            r13.remove(r1)     // Catch: java.lang.Exception -> L12a
            java.lang.String r1 = "resExt"
            r13.remove(r1)     // Catch: java.lang.Exception -> L12a
            java.lang.String r1 = "platformLogined"
            r13.remove(r1)     // Catch: java.lang.Exception -> L12a
            r14.put(r0, r13)     // Catch: java.lang.Exception -> L12a
            goto L129
        L121:
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Exception -> L12a
            r13.<init>()     // Catch: java.lang.Exception -> L12a
            r14.put(r0, r13)     // Catch: java.lang.Exception -> L12a
        L129:
            return r14
        L12a:
            r13 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r14 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r14.<init>(r13)
            throw r14
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.util.Map r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r9) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r8 = this;
            org.json.JSONObject r0 = r9.getData()
            java.lang.String r1 = "order_no"
            java.lang.String r3 = r0.optString(r1)
            org.json.JSONObject r0 = r9.getData()
            java.lang.String r1 = "par_value"
            double r4 = r0.optDouble(r1)
            org.json.JSONObject r0 = r9.getData()
            java.lang.String r1 = "total_fee"
            double r6 = r0.optDouble(r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r8.a
            java.lang.String r1 = "trade_code"
            r0.put(r1, r3)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r1 = 200(0xc8, float:2.8E-43)
            java.lang.String r2 = "下单成功"
            r0.payResponseOrder(r1, r2, r3)
            java.util.Map<java.lang.String, java.lang.String> r0 = r8.a
            org.json.JSONObject r1 = r9.getData()
            java.lang.String r2 = "trade_request_content"
            java.lang.String r1 = r1.optString(r2)
            java.lang.String r2 = "client_callback"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r8.a
            com.bianfeng.ymnsdk.entity.PlatformCallbackEntity r1 = new com.bianfeng.ymnsdk.entity.PlatformCallbackEntity
            r2 = r1
            r2.<init>(r3, r4, r6)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "platform_callback"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r8.a
            org.json.JSONObject r9 = r9.getData()
            java.lang.String r1 = "notify_url"
            java.lang.String r9 = r9.optString(r1)
            java.lang.String r1 = "platform_notify_url"
            r0.put(r1, r9)
            java.util.Map<java.lang.String, java.lang.String> r9 = r8.a
            return r9
    }
}
