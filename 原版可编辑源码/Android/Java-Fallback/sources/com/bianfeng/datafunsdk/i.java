package com.bianfeng.datafunsdk;

public class i implements java.lang.Runnable {
    public com.bianfeng.datafunsdk.bean.DataFunBean a;
    public com.bianfeng.datafunsdk.e b;

    public i(com.bianfeng.datafunsdk.bean.DataFunBean r1, com.bianfeng.datafunsdk.e r2) {
            r0 = this;
            r0.<init>()
            r0.b = r2
            r0.a = r1
            return
    }

    @Override
    public void run() {
            r3 = this;
            java.lang.String r0 = "InsertEventTask--开始插入数据->"
            com.bianfeng.datafunsdk.x.a(r0)
            com.bianfeng.datafunsdk.d r0 = com.bianfeng.datafunsdk.d.e()     // Catch: java.lang.Exception -> L11
            com.bianfeng.datafunsdk.bean.DataFunBean r1 = r3.a     // Catch: java.lang.Exception -> L11
            com.bianfeng.datafunsdk.e r2 = r3.b     // Catch: java.lang.Exception -> L11
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L11
            goto L2d
        L11:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "InsertEventTask--->"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.datafunsdk.x.a(r0)
        L2d:
            return
    }
}
