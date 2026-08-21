package com.bianfeng.ymnsdk.action;

public class f extends com.bianfeng.ymnsdk.action.ActionSupport<java.lang.Boolean> {
    public f(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r1 = this;
            java.lang.String r0 = "pay/orderQuery"
            java.lang.String r0 = r1.formatUrl(r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r4, java.lang.Object... r5) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "order_id"
            r2 = 0
            r2 = r5[r2]     // Catch: java.lang.Exception -> L17
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = "order_type"
            r2 = 1
            r2 = r5[r2]     // Catch: java.lang.Exception -> L17
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17
            return r0
        L17:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r2 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r2.<init>(r1)
            throw r2
    }

    @Override
    protected java.lang.Boolean onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r10) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r9 = this;
            org.json.JSONObject r0 = r10.data
            java.util.Iterator r0 = r0.keys()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        Lb:
            boolean r2 = r0.hasNext()
            java.lang.String r3 = "sign"
            if (r2 == 0) goto L23
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = r3.equals(r2)
            if (r3 != 0) goto L22
            r1.add(r2)
        L22:
            goto Lb
        L23:
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            java.util.Iterator r4 = r1.iterator()
        L2c:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L4a
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            com.bianfeng.ymnsdk.util.security.SecurityUtil r6 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            org.json.JSONObject r7 = r10.data
            java.lang.String r7 = r7.optString(r5)
            java.lang.String r6 = r6.urlEncode(r7)
            r2.put(r5, r6)
            goto L2c
        L4a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.util.Set r5 = r2.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L57:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L8c
            java.lang.Object r6 = r5.next()
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "&"
            r7.append(r8)
            java.lang.Object r8 = r6.getKey()
            java.lang.String r8 = (java.lang.String) r8
            r7.append(r8)
            java.lang.String r8 = "="
            r7.append(r8)
            java.lang.Object r8 = r6.getValue()
            java.lang.String r8 = (java.lang.String) r8
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            r4.append(r7)
            goto L57
        L8c:
            r5 = 1
            java.lang.String r5 = r4.substring(r5)
            org.json.JSONObject r6 = r10.data
            java.lang.String r3 = r6.optString(r3)
            com.bianfeng.ymnsdk.util.security.SecurityUtil r6 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            boolean r6 = r6.doCheck(r5, r3)
            if (r6 != 0) goto La5
            java.lang.String r7 = "非法响应，请注意订单安全性"
            r10.msg = r7
        La5:
            java.lang.Boolean r7 = java.lang.Boolean.valueOf(r6)
            return r7
    }

    @Override
    protected java.lang.Boolean onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.lang.Boolean r1 = r0.onSuccess(r1)
            return r1
    }
}
