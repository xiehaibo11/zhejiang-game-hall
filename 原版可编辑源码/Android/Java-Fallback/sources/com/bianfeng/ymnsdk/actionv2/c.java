package com.bianfeng.ymnsdk.actionv2;

public class c extends com.bianfeng.ymnsdk.actionv2.ActionSupportV2<java.lang.String> {
    private java.util.TreeMap<java.lang.String, java.lang.String> a;
    private java.lang.String b;

    public c(android.content.Context r4) {
            r3 = this;
            r3.<init>(r4)
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0 = r3.httpHelper
            r1 = 2
            r0.setMethod(r1)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r0 = r0.getInitTrace()
            r3.b = r0
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0 = r3.httpHelper
            java.util.TreeMap r0 = r0.getHeadersMap()
            r3.a = r0
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r0 = r0.getInitTrace()
            r3.b = r0
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json"
            r0.put(r1, r2)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r2 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "X-App-Id"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigIdStr()
            java.lang.String r2 = "X-Package-Id"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r1 = r3.b
            java.lang.String r2 = "X-Nonce-Str"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r1 = r3.b
            r0.put(r2, r1)
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
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r5, java.lang.Object... r6) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r4 = this;
            r0 = 0
            r0 = r6[r0]
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = r4.b
            java.lang.String r2 = ""
            r4.setPayloadEntity(r2, r2, r1)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "order_no"
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L18
            return r1
        L18:
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
    protected java.lang.String onSuccess(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            java.lang.String r0 = r2.getSrcRes()
            return r0
    }
}
