package com.bianfeng.ymnsdk.action;

public class c extends com.bianfeng.ymnsdk.action.ActionSupport<org.json.JSONObject> {
    public c(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.bianfeng.ymnsdk.action.HttpHelper r2 = r1.httpHelper
            r0 = 1
            r2.setMethod(r0)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "player/setRealName"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r5, java.lang.Object... r6) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r4 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            r0 = 0
            r0 = r6[r0]
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "type"
            r5.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            r0 = 1
            r0 = r6[r0]
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "area_id"
            r5.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            r0 = 2
            r0 = r6[r0]
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "numid"
            r5.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            com.bianfeng.ymnsdk.util.security.SecurityUtil r0 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            r1 = 3
            r1 = r6[r1]
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r0 = r0.urlEncode(r1)
            java.lang.String r1 = "name"
            r5.put(r1, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            r0 = 4
            r6 = r6[r0]
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r0 = "identity_number"
            r5.put(r0, r6)
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            java.lang.String r6 = "appid"
            java.lang.String r0 = "1148"
            r5.put(r6, r0)
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "time"
            r5.put(r0, r6)
            java.util.TreeMap<java.lang.String, java.lang.String> r5 = r4.gContent
            com.bianfeng.ymnsdk.util.security.SecurityUtil r6 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r4.gContent
            java.lang.String r1 = "c986f7b40c468a3a3b1087d0eb08628b"
            java.lang.String r6 = r6.getSign(r0, r1)
            java.lang.String r0 = "sign"
            r5.put(r0, r6)
            r5 = 0
            return r5
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            org.json.JSONObject r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected org.json.JSONObject onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r3) throws java.lang.Exception {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "request identity status resource success : "
            r0.append(r1)
            java.lang.String r1 = r3.srcRes
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Ymn_ActionSupport"
            android.util.Log.i(r1, r0)
            org.json.JSONObject r3 = r3.srcObj
            return r3
    }
}
