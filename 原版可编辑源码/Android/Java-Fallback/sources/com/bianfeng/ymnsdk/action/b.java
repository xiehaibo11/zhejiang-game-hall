package com.bianfeng.ymnsdk.action;

public class b extends com.bianfeng.ymnsdk.action.ActionSupport<org.json.JSONObject> {
    public b(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            com.bianfeng.ymnsdk.action.HttpHelper r0 = r2.httpHelper
            r1 = 1
            r0.setMethod(r1)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "player/getRealName"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r6, java.lang.Object... r7) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r5 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.gContent
            r1 = 0
            r1 = r7[r1]
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "type"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.gContent
            r1 = 1
            r1 = r7[r1]
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "area_id"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.gContent
            r1 = 2
            r1 = r7[r1]
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "numid"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.gContent
            java.lang.String r1 = "appid"
            java.lang.String r2 = "1148"
            r0.put(r1, r2)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.gContent
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "time"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.gContent
            com.bianfeng.ymnsdk.util.security.SecurityUtil r1 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r5.gContent
            java.lang.String r3 = "c986f7b40c468a3a3b1087d0eb08628b"
            java.lang.String r1 = r1.getSign(r2, r3)
            java.lang.String r2 = "sign"
            r0.put(r2, r1)
            r0 = 0
            return r0
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            org.json.JSONObject r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "request identity status resource success : "
            r0.append(r1)
            java.lang.String r1 = r3.dataAsString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Ymn_ActionSupport"
            android.util.Log.i(r1, r0)
            org.json.JSONObject r0 = r3.data
            return r0
    }
}
