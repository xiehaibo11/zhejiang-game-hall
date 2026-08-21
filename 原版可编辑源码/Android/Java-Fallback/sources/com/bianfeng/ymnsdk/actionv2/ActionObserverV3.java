package com.bianfeng.ymnsdk.actionv2;

public abstract class ActionObserverV3 implements java.util.Observer {
    public ActionObserverV3() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r1);

    @Override
    public void update(java.util.Observable r2, java.lang.Object r3) {
            r1 = this;
            r0 = r3
            com.bianfeng.ymnsdk.actionv2.ActionSupportV3$ResponseResult r0 = (com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult) r0
            r1.onActionResult(r0)
            return
    }
}
