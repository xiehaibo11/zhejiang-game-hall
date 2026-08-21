package com.bianfeng.ymnsdk.allogin.checkAction;

public class CheckApi {


    public CheckApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkLogin(android.content.Context r0, java.lang.Object r1, com.bianfeng.ymnsdk.allogin.checkAction.CheckCallBack r2) {
            requestCheckLogin(r0, r1, r2)
            return
    }

    protected static void requestCheckLogin(android.content.Context r3, java.lang.Object r4, com.bianfeng.ymnsdk.allogin.checkAction.CheckCallBack r5) {
            com.bianfeng.ymnsdk.allogin.checkAction.CheckLoginAction r0 = new com.bianfeng.ymnsdk.allogin.checkAction.CheckLoginAction
            r0.<init>(r3)
            r3 = 0
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L10
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L10
            r0.putReqData(r3, r1)     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r3 = move-exception
            r3.printStackTrace()
        L14:
            com.bianfeng.ymnsdk.allogin.checkAction.CheckApi$1 r3 = new com.bianfeng.ymnsdk.allogin.checkAction.CheckApi$1
            r3.<init>(r5)
            r0.addObserver(r3)
            r0.actionStart()
            return
    }
}
