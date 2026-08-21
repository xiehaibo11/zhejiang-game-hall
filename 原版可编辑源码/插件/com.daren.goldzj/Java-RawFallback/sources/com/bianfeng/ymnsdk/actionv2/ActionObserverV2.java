package com.bianfeng.ymnsdk.actionv2;

public abstract class ActionObserverV2 implements java.util.Observer {
    public ActionObserverV2() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r1);

    @Override
    public void update(java.util.Observable r1, java.lang.Object r2) {
            r0 = this;
            com.bianfeng.ymnsdk.actionv2.ActionSupportV2$ResponseResult r2 = (com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult) r2
            r0.onActionResult(r2)
            return
    }
}
