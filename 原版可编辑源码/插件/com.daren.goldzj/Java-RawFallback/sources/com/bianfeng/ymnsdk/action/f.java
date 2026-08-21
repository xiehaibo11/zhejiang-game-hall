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
    public org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r3, java.lang.Object... r4) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r0 = "order_id"
            r1 = 0
            r1 = r4[r1]     // Catch: java.lang.Exception -> L16
            r3.put(r0, r1)     // Catch: java.lang.Exception -> L16
            java.lang.String r0 = "order_type"
            r1 = 1
            r4 = r4[r1]     // Catch: java.lang.Exception -> L16
            r3.put(r0, r4)     // Catch: java.lang.Exception -> L16
            return r3
        L16:
            r3 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r4 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r4.<init>(r3)
            throw r4
    }

    @Override
    protected java.lang.Boolean onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r7) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r6 = this;
            org.json.JSONObject r0 = r7.data
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
            if (r3 != 0) goto Lb
            r1.add(r2)
            goto Lb
        L23:
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            java.util.Iterator r1 = r1.iterator()
        L2c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            com.bianfeng.ymnsdk.util.security.SecurityUtil r4 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            org.json.JSONObject r5 = r7.data
            java.lang.String r5 = r5.optString(r2)
            java.lang.String r4 = r4.urlEncode(r5)
            r0.put(r2, r4)
            goto L2c
        L4a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L57:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L8c
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "&"
            r4.append(r5)
            java.lang.Object r5 = r2.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r4.append(r5)
            java.lang.String r5 = "="
            r4.append(r5)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.append(r2)
            goto L57
        L8c:
            r0 = 1
            java.lang.String r0 = r1.substring(r0)
            org.json.JSONObject r1 = r7.data
            java.lang.String r1 = r1.optString(r3)
            com.bianfeng.ymnsdk.util.security.SecurityUtil r2 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            boolean r0 = r2.doCheck(r0, r1)
            if (r0 != 0) goto La5
            java.lang.String r1 = "非法响应，请注意订单安全性"
            r7.msg = r1
        La5:
            java.lang.Boolean r7 = java.lang.Boolean.valueOf(r0)
            return r7
    }

    @Override
    protected java.lang.Boolean onSuccess(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            java.lang.Boolean r1 = r0.onSuccess(r1)
            return r1
    }
}
