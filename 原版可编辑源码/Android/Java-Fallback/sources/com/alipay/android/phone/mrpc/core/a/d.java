package com.alipay.android.phone.mrpc.core.a;

public final class d extends com.alipay.android.phone.mrpc.core.a.a {
    public d(java.lang.reflect.Type r1, byte[] r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public final java.lang.Object a() {
            r6 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L58
            byte[] r1 = r6.b     // Catch: java.lang.Exception -> L58
            r0.<init>(r1)     // Catch: java.lang.Exception -> L58
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L58
            java.lang.String r2 = "threadid = "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L58
            java.lang.Thread r2 = java.lang.Thread.currentThread()     // Catch: java.lang.Exception -> L58
            long r2 = r2.getId()     // Catch: java.lang.Exception -> L58
            r1.append(r2)     // Catch: java.lang.Exception -> L58
            java.lang.String r2 = "; rpc response:  "
            r1.append(r2)     // Catch: java.lang.Exception -> L58
            r1.append(r0)     // Catch: java.lang.Exception -> L58
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L58
            r1.<init>(r0)     // Catch: java.lang.Exception -> L58
            java.lang.String r0 = "resultStatus"
            int r0 = r1.getInt(r0)     // Catch: java.lang.Exception -> L58
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r0 != r2) goto L48
            java.lang.reflect.Type r0 = r6.a     // Catch: java.lang.Exception -> L58
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            java.lang.String r3 = "result"
            if (r0 != r2) goto L3d
            java.lang.String r0 = r1.optString(r3)     // Catch: java.lang.Exception -> L58
            goto L47
        L3d:
            java.lang.String r0 = r1.optString(r3)     // Catch: java.lang.Exception -> L58
            java.lang.reflect.Type r1 = r6.a     // Catch: java.lang.Exception -> L58
            java.lang.Object r0 = com.alipay.sdk.m.e.e.a(r0, r1)     // Catch: java.lang.Exception -> L58
        L47:
            return r0
        L48:
            java.lang.String r2 = "tips"
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Exception -> L58
            com.alipay.android.phone.mrpc.core.RpcException r2 = new com.alipay.android.phone.mrpc.core.RpcException     // Catch: java.lang.Exception -> L58
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L58
            r2.<init>(r0, r1)     // Catch: java.lang.Exception -> L58
            throw r2     // Catch: java.lang.Exception -> L58
        L58:
            r0 = move-exception
            com.alipay.android.phone.mrpc.core.RpcException r1 = new com.alipay.android.phone.mrpc.core.RpcException
            r2 = 10
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "response  ="
            r3.<init>(r4)
            java.lang.String r4 = new java.lang.String
            byte[] r5 = r6.b
            r4.<init>(r5)
            r3.append(r4)
            java.lang.String r4 = ":"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            if (r3 != 0) goto L83
            java.lang.String r0 = ""
            goto L87
        L83:
            java.lang.String r0 = r0.getMessage()
        L87:
            r1.<init>(r2, r0)
            throw r1
    }
}
