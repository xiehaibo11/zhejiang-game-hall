package com.bianfeng.ymnsdk.action;

public class e extends com.bianfeng.ymnsdk.action.ActionSupport<java.util.Map<java.lang.String, java.lang.String>> {
    private java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.Map<java.lang.String, java.lang.String> b;

    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r2 = this;
            java.lang.String r0 = "pay"
            java.lang.String r0 = r2.formatUrl(r0)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r1.payRequestOrder(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r3, java.lang.Object... r4) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            r0 = 0
            r0 = r4[r0]
            java.util.Map r0 = (java.util.Map) r0
            r2.a = r0
            r0 = 1
            r4 = r4[r0]
            java.util.Map r4 = (java.util.Map) r4
            r2.b = r4
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r0 = "platform_id"
            java.lang.String r1 = r3.getPluginId()     // Catch: java.lang.Exception -> L70
            r4.put(r0, r1)     // Catch: java.lang.Exception -> L70
            java.lang.String r0 = "platform_name"
            java.lang.String r1 = r3.getPluginName()     // Catch: java.lang.Exception -> L70
            r4.put(r0, r1)     // Catch: java.lang.Exception -> L70
            java.lang.String r0 = "platform_ver"
            int r1 = r3.getPluginVersion()     // Catch: java.lang.Exception -> L70
            r4.put(r0, r1)     // Catch: java.lang.Exception -> L70
            java.lang.String r0 = "isDebug"
            boolean r3 = r3.isDebugMode()     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L70
            r4.put(r0, r3)     // Catch: java.lang.Exception -> L70
            com.google.gson.Gson r3 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L70
            r3.<init>()     // Catch: java.lang.Exception -> L70
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L70
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.a     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = r3.toJson(r1)     // Catch: java.lang.Exception -> L70
            r0.<init>(r1)     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = "data"
            r4.put(r1, r0)     // Catch: java.lang.Exception -> L70
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.b     // Catch: java.lang.Exception -> L70
            if (r0 == 0) goto L64
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L70
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.b     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = r3.toJson(r1)     // Catch: java.lang.Exception -> L70
            r0.<init>(r3)     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = "ext"
            r4.put(r3, r0)     // Catch: java.lang.Exception -> L70
        L64:
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r3 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = r3.getPayTrace()     // Catch: java.lang.Exception -> L70
            r2.setTransactionId(r3)     // Catch: java.lang.Exception -> L70
            return r4
        L70:
            r3 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r4 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r4.<init>(r3)
            throw r4
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.util.Map r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected java.util.Map<java.lang.String, java.lang.String> onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r6) throws java.lang.Exception {
            r5 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            org.json.JSONObject r1 = r6.data
            java.lang.String r2 = "trade_code"
            java.lang.String r1 = r1.optString(r2)
            r3 = 200(0xc8, float:2.8E-43)
            java.lang.String r4 = "下单成功"
            r0.payResponseOrder(r3, r4, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.a
            org.json.JSONObject r1 = r6.data
            java.lang.String r1 = r1.optString(r2)
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.a
            org.json.JSONObject r1 = r6.data
            java.lang.String r2 = "client_callback"
            java.lang.String r1 = r1.optString(r2)
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.a
            org.json.JSONObject r1 = r6.data
            java.lang.String r2 = "platform_callback"
            java.lang.String r1 = r1.optString(r2)
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.a
            org.json.JSONObject r6 = r6.data
            java.lang.String r1 = "platform_notify_url"
            java.lang.String r6 = r6.optString(r1)
            r0.put(r1, r6)
            java.util.Map<java.lang.String, java.lang.String> r6 = r5.a
            return r6
    }
}
