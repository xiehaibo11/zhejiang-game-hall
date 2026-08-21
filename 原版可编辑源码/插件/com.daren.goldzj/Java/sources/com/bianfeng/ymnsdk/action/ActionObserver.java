package com.bianfeng.ymnsdk.action;

import com.bianfeng.ymnsdk.action.ActionSupport;
import java.util.Observable;
import java.util.Observer;

public abstract class ActionObserver implements Observer {
    public abstract void onActionResult(ActionSupport.ResponseResult responseResult);

    @Override
    public void update(Observable observable, Object obj) {
        onActionResult((ActionSupport.ResponseResult) obj);
    }
}
