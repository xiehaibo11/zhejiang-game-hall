package com.bianfeng.ymnsdk.actionv2;

public class b extends com.bianfeng.ymnsdk.actionv2.ActionSupportV2<java.util.Map<java.lang.String, java.lang.String>> {
    private java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.TreeMap<java.lang.String, java.lang.String> b;
    private java.util.Map<java.lang.String, java.lang.String> c;
    private java.lang.String d;

    public b(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0 = r3.httpHelper
            java.util.TreeMap r0 = r0.getHeadersMap()
            r3.b = r0
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r0 = r0.getPayTrace()
            r3.d = r0
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.b
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json"
            r0.put(r1, r2)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "X-App-Id"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.b
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r2 = "X-Package-Id"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.b
            java.lang.String r1 = r3.d
            java.lang.String r2 = "X-Nonce-Str"
            r0.put(r2, r1)
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
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r16, java.lang.Object... r17) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r15 = this;
            r1 = r15
            java.lang.String r0 = "server_name"
            java.lang.String r2 = "server_id"
            java.lang.String r3 = "product_price"
            java.lang.String r4 = "product_count"
            java.lang.String r5 = "product_name"
            java.lang.String r6 = "product_id"
            java.lang.String r7 = "is_test"
            r8 = 0
            r9 = r17[r8]
            java.util.Map r9 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getMapFrom(r9)
            r1.a = r9
            java.util.Map<java.lang.String, java.lang.String> r9 = r1.a
            java.lang.String r10 = "ext"
            java.lang.Object r9 = r9.get(r10)
            java.lang.String r9 = (java.lang.String) r9
            java.lang.String r10 = com.bianfeng.ymnsdk.util.YmnSourceFromExtUtils.getSource(r9)
            r11 = 1
            r11 = r17[r11]
            java.util.Map r11 = (java.util.Map) r11
            r1.c = r11
            org.json.JSONObject r11 = new org.json.JSONObject
            r11.<init>()
            java.util.Map<java.lang.String, java.lang.String> r12 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.String r13 = "role_id"
            java.lang.Object r12 = r12.get(r13)     // Catch: java.lang.Exception -> L146
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r13 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.String r14 = "role_name"
            java.lang.Object r13 = r13.get(r14)     // Catch: java.lang.Exception -> L146
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Exception -> L146
            java.lang.String r14 = r1.d     // Catch: java.lang.Exception -> L146
            r15.setPayloadEntity(r12, r13, r14)     // Catch: java.lang.Exception -> L146
            java.lang.String r12 = "channel_id"
            java.lang.String r13 = r16.getPluginId()     // Catch: java.lang.Exception -> L146
            int r13 = com.bianfeng.ymnsdk.util.JsonValueUtils.string2Int(r13)     // Catch: java.lang.Exception -> L146
            r11.put(r12, r13)     // Catch: java.lang.Exception -> L146
            java.lang.String r12 = "cp_order_id"
            java.util.Map<java.lang.String, java.lang.String> r13 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.String r14 = "order_id"
            java.lang.Object r13 = r13.get(r14)     // Catch: java.lang.Exception -> L146
            r11.put(r12, r13)     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r12 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r12 = r12.get(r6)     // Catch: java.lang.Exception -> L146
            r11.put(r6, r12)     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r6 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Exception -> L146
            r11.put(r5, r6)     // Catch: java.lang.Exception -> L146
            java.lang.String r5 = "zzx-prder"
            java.util.Map<java.lang.String, java.lang.String> r6 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r6)     // Catch: java.lang.Exception -> L146
            android.util.Log.e(r5, r6)     // Catch: java.lang.Exception -> L146
            java.lang.String r5 = "zzx-ARG_PRODUCT_COUNT"
            java.util.Map<java.lang.String, java.lang.String> r6 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r6 = r6.get(r4)     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L146
            android.util.Log.e(r5, r6)     // Catch: java.lang.Exception -> L146
            java.lang.String r5 = "product_qty"
            java.util.Map<java.lang.String, java.lang.String> r6 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r4 = r6.get(r4)     // Catch: java.lang.Exception -> L146
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L146
            int r4 = com.bianfeng.ymnsdk.util.JsonValueUtils.string2Int(r4)     // Catch: java.lang.Exception -> L146
            r11.put(r5, r4)     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r4 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Exception -> L146
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L146
            int r4 = com.bianfeng.ymnsdk.util.JsonValueUtils.price2Int(r4)     // Catch: java.lang.Exception -> L146
            r11.put(r3, r4)     // Catch: java.lang.Exception -> L146
            java.lang.String r3 = "source"
            r11.put(r3, r10)     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r3 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Exception -> L146
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L146
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L146
            if (r4 != 0) goto Lc5
            r11.put(r2, r3)     // Catch: java.lang.Exception -> L146
        Lc5:
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L146
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L146
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L146
            if (r4 != 0) goto Ld6
            r11.put(r0, r2)     // Catch: java.lang.Exception -> L146
        Ld6:
            java.lang.String r0 = "trade_attach"
            r11.put(r0, r9)     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Exception -> L146
            if (r0 != 0) goto Le4
        Le3:
            goto Lf1
        Le4:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Exception -> L146
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Exception -> L146
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L146
            int r8 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L146
            goto Le3
        Lf1:
            r11.put(r7, r8)     // Catch: java.lang.Exception -> L146
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L146
            r0.<init>()     // Catch: java.lang.Exception -> L146
            java.lang.String r4 = "market_id"
            int r5 = com.bianfeng.ymnsdk.util.YmnAppContext.getChannelIdInt()     // Catch: java.lang.Exception -> L146
            r0.put(r4, r5)     // Catch: java.lang.Exception -> L146
            java.lang.String r4 = "trade_sdk_version"
            int r5 = r16.getPluginVersion()     // Catch: java.lang.Exception -> L146
            r0.put(r4, r5)     // Catch: java.lang.Exception -> L146
            java.lang.String r4 = "trace"
            java.lang.String r5 = r1.d     // Catch: java.lang.Exception -> L146
            r0.put(r4, r5)     // Catch: java.lang.Exception -> L146
            java.lang.String r4 = "extend"
            r11.put(r4, r0)     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r4 = r1.c     // Catch: java.lang.Exception -> L146
            java.lang.String r5 = "trade_parameters"
            if (r4 == 0) goto L13c
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L146
            java.util.Map<java.lang.String, java.lang.String> r6 = r1.c     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r6)     // Catch: java.lang.Exception -> L146
            r4.<init>(r6)     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = "ymnLogined"
            r4.remove(r6)     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = "resExt"
            r4.remove(r6)     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = "platformLogined"
            r4.remove(r6)     // Catch: java.lang.Exception -> L146
            r11.put(r5, r4)     // Catch: java.lang.Exception -> L146
            goto L144
        L13c:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L146
            r4.<init>()     // Catch: java.lang.Exception -> L146
            r11.put(r5, r4)     // Catch: java.lang.Exception -> L146
        L144:
            return r11
        L146:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r2 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.util.Map r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r14) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r13 = this;
            org.json.JSONObject r0 = r14.getData()
            java.lang.String r1 = "order_no"
            java.lang.String r0 = r0.optString(r1)
            org.json.JSONObject r1 = r14.getData()
            java.lang.String r2 = "par_value"
            double r8 = r1.optDouble(r2)
            org.json.JSONObject r1 = r14.getData()
            java.lang.String r2 = "total_fee"
            double r10 = r1.optDouble(r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r13.a
            java.lang.String r2 = "trade_code"
            r1.put(r2, r0)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r2 = 200(0xc8, float:2.8E-43)
            java.lang.String r3 = "下单成功"
            r1.payResponseOrder(r2, r3, r0)
            java.util.Map<java.lang.String, java.lang.String> r1 = r13.a
            org.json.JSONObject r2 = r14.getData()
            java.lang.String r3 = "trade_request_content"
            java.lang.String r2 = r2.optString(r3)
            java.lang.String r3 = "client_callback"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r13.a
            com.bianfeng.ymnsdk.entity.PlatformCallbackEntity r12 = new com.bianfeng.ymnsdk.entity.PlatformCallbackEntity
            r2 = r12
            r3 = r0
            r4 = r8
            r6 = r10
            r2.<init>(r3, r4, r6)
            java.lang.String r2 = r12.toString()
            java.lang.String r3 = "platform_callback"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r13.a
            org.json.JSONObject r2 = r14.getData()
            java.lang.String r3 = "notify_url"
            java.lang.String r2 = r2.optString(r3)
            java.lang.String r3 = "platform_notify_url"
            r1.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.String> r1 = r13.a
            return r1
    }
}
