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
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r6, java.lang.Object... r7) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r5 = this;
            r0 = 0
            r1 = r7[r0]
            java.util.Map r1 = (java.util.Map) r1
            r5.a = r1
            r1 = 1
            r2 = r7[r1]
            java.util.Map r2 = (java.util.Map) r2
            r5.b = r2
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "platform_id"
            java.lang.String r4 = r6.getPluginId()     // Catch: java.lang.Exception -> L74
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = "platform_name"
            java.lang.String r4 = r6.getPluginName()     // Catch: java.lang.Exception -> L74
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = "platform_ver"
            int r4 = r6.getPluginVersion()     // Catch: java.lang.Exception -> L74
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = "isDebug"
            boolean r4 = r6.isDebugMode()     // Catch: java.lang.Exception -> L74
            if (r4 == 0) goto L37
            r0 = 1
        L37:
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L74
            r2.put(r3, r0)     // Catch: java.lang.Exception -> L74
            com.google.gson.Gson r0 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L74
            r0.<init>()     // Catch: java.lang.Exception -> L74
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L74
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.a     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = r0.toJson(r3)     // Catch: java.lang.Exception -> L74
            r1.<init>(r3)     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = "data"
            r2.put(r3, r1)     // Catch: java.lang.Exception -> L74
            java.util.Map<java.lang.String, java.lang.String> r3 = r5.b     // Catch: java.lang.Exception -> L74
            if (r3 == 0) goto L67
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L74
            java.util.Map<java.lang.String, java.lang.String> r4 = r5.b     // Catch: java.lang.Exception -> L74
            java.lang.String r4 = r0.toJson(r4)     // Catch: java.lang.Exception -> L74
            r3.<init>(r4)     // Catch: java.lang.Exception -> L74
            java.lang.String r4 = "ext"
            r2.put(r4, r3)     // Catch: java.lang.Exception -> L74
        L67:
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r3 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L74
            java.lang.String r3 = r3.getPayTrace()     // Catch: java.lang.Exception -> L74
            r5.setTransactionId(r3)     // Catch: java.lang.Exception -> L74
            return r2
        L74:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r1 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r1.<init>(r0)
            throw r1
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
            org.json.JSONObject r1 = r6.data
            java.lang.String r2 = "platform_notify_url"
            java.lang.String r1 = r1.optString(r2)
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.a
            return r0
    }
}
