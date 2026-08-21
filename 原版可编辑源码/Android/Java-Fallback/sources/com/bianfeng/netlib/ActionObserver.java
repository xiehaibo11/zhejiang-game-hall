package com.bianfeng.netlib;

public abstract class ActionObserver implements java.util.Observer {
    public ActionObserver() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void onActionResult(com.bianfeng.netlib.ActionSupport.ResponseResult r1);

    @Override
    public void update(java.util.Observable r1, java.lang.Object r2) {
            r0 = this;
            com.bianfeng.netlib.ActionSupport$ResponseResult r2 = (com.bianfeng.netlib.ActionSupport.ResponseResult) r2
            r0.onActionResult(r2)
            return
    }
}
