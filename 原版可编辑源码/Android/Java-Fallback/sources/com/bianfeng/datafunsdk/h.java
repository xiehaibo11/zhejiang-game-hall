package com.bianfeng.datafunsdk;

public class h implements java.lang.Runnable {
    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r1 = this;
            java.lang.String r0 = "启动了删库"
            com.bianfeng.datafunsdk.x.a(r0)
            com.bianfeng.datafunsdk.v.a()     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }
}
