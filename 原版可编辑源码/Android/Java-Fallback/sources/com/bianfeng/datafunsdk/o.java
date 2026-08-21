package com.bianfeng.datafunsdk;

public class o implements java.lang.Runnable {
    public com.bianfeng.datafunsdk.s a;
    public com.bianfeng.datafunsdk.bean.DataFunBean b;
    public com.bianfeng.datafunsdk.r c;
    public int d;

    public o(com.bianfeng.datafunsdk.bean.DataFunBean r2, com.bianfeng.datafunsdk.r r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.c = r3
            r1.b = r2
            com.bianfeng.datafunsdk.s r3 = new com.bianfeng.datafunsdk.s
            r3.<init>(r2)
            r1.a = r3
            return
    }

    @Override
    public void run() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "发送请求的次数"
            r0.append(r1)
            int r1 = r2.d
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            int r0 = r2.d
            r1 = 3
            if (r0 <= r1) goto L23
            com.bianfeng.datafunsdk.r r0 = r2.c
            com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.b
            r0.b(r1)
            return
        L23:
            com.bianfeng.datafunsdk.s r0 = r2.a     // Catch: java.lang.Exception -> L40
            int r0 = r0.a()     // Catch: java.lang.Exception -> L40
            int r1 = r2.d     // Catch: java.lang.Exception -> L40
            int r1 = r1 + 1
            r2.d = r1     // Catch: java.lang.Exception -> L40
            r1 = 4
            if (r0 == r1) goto L3a
            com.bianfeng.datafunsdk.r r0 = r2.c     // Catch: java.lang.Exception -> L40
            com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.b     // Catch: java.lang.Exception -> L40
            r0.a(r1)     // Catch: java.lang.Exception -> L40
            goto L44
        L3a:
            com.bianfeng.datafunsdk.r r0 = r2.c     // Catch: java.lang.Exception -> L40
            r0.a(r2)     // Catch: java.lang.Exception -> L40
            goto L44
        L40:
            r0 = move-exception
            r0.printStackTrace()
        L44:
            return
    }
}
