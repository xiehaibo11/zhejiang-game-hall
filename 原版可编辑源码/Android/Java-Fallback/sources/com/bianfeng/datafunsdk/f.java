package com.bianfeng.datafunsdk;

public class f implements java.lang.Runnable {
    public com.bianfeng.datafunsdk.bean.DataFunBean a;
    public com.bianfeng.datafunsdk.e b;
    public int c;

    public f(com.bianfeng.datafunsdk.bean.DataFunBean r1, com.bianfeng.datafunsdk.e r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public void run() {
            r2 = this;
            int r0 = r2.c
            r1 = 3
            if (r0 <= r1) goto Ld
            com.bianfeng.datafunsdk.e r0 = r2.b
            com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.a
            r0.d(r1)
            return
        Ld:
            com.bianfeng.datafunsdk.d r0 = com.bianfeng.datafunsdk.d.e()
            com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.a
            boolean r0 = r0.a(r1)
            int r1 = r2.c
            int r1 = r1 + 1
            r2.c = r1
            if (r0 == 0) goto L27
            com.bianfeng.datafunsdk.e r0 = r2.b
            com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.a
            r0.a(r1)
            goto L2c
        L27:
            com.bianfeng.datafunsdk.e r0 = r2.b
            r0.a(r2)
        L2c:
            return
    }
}
