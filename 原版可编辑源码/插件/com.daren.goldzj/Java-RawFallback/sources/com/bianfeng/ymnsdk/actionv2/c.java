package com.bianfeng.ymnsdk.actionv2;

public class c extends com.bianfeng.ymnsdk.actionv2.ActionSupportV2<java.lang.String> {
    private java.util.TreeMap<java.lang.String, java.lang.String> a;
    private java.lang.String b;

    public c(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r3 = r2.httpHelper
            r0 = 2
            r3.setMethod(r0)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r3 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r3 = r3.getInitTrace()
            r2.b = r3
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r3 = r2.httpHelper
            java.util.TreeMap r3 = r3.getHeadersMap()
            r2.a = r3
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r3 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r3 = r3.getInitTrace()
            r2.b = r3
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.a
            java.lang.String r0 = "Content-Type"
            java.lang.String r1 = "application/json"
            r3.put(r0, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "X-App-Id"
            r3.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.a
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r1 = "X-Package-Id"
            r3.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.a
            java.lang.String r0 = r2.b
            java.lang.String r1 = "X-Nonce-Str"
            r3.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.a
            java.lang.String r0 = r2.b
            r3.put(r1, r0)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "v2/trade/query"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r2, java.lang.Object... r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            r2 = 0
            r2 = r3[r2]
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = r1.b
            java.lang.String r0 = ""
            r1.setPayloadEntity(r0, r0, r3)
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r0 = "order_no"
            r3.put(r0, r2)     // Catch: java.lang.Exception -> L17
            return r3
        L17:
            r2 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r3 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r3.<init>(r2)
            throw r3
    }

    @Override
    protected java.lang.String onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.lang.String r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected java.lang.String onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r0 = this;
            java.lang.String r1 = r1.getSrcRes()
            return r1
    }
}
