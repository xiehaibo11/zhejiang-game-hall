package com.bianfeng.ymnsdk.actionv2;

public class d extends com.bianfeng.ymnsdk.actionv2.ActionSupportV2<java.lang.String> {
    private java.util.TreeMap<java.lang.String, java.lang.String> a;
    private java.lang.String b;

    public d(android.content.Context r3) {
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
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "v2/trade/goods"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r2, java.lang.Object... r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r1 = this;
            r2 = 0
            r2 = r3[r2]
            java.util.Map r2 = (java.util.Map) r2
            java.lang.String r3 = "role_id"
            java.lang.Object r3 = r2.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r0 = "role_name"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r0 = r1.b
            r1.setPayloadEntity(r3, r2, r0)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            return r2
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
