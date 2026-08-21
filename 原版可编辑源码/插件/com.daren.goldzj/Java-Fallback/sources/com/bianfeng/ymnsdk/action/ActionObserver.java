package com.bianfeng.ymnsdk.action;

import com.bianfeng.ymnsdk.action.ActionSupport;
import java.util.Observable;
import java.util.Observer;

public abstract class ActionObserver implements Observer {
    public ActionObserver() {
    }

    public abstract void onActionResult(ActionSupport.ResponseResult r1);

    @Override
    public void update(Observable r1, Object r2) {
        onActionResult((ActionSupport.ResponseResult) r2);
    }
}
