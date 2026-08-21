package com.bianfeng.ymnsdk.action;

public abstract class ActionObserver implements java.util.Observer {
    public ActionObserver() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r1);

    @Override
    public void update(java.util.Observable r2, java.lang.Object r3) {
            r1 = this;
            r0 = r3
            com.bianfeng.ymnsdk.action.ActionSupport$ResponseResult r0 = (com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult) r0
            r1.onActionResult(r0)
            return
    }
}
