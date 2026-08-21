package com.bianfeng.paylib.action;

import com.bianfeng.paylib.action.ActionSupport;
import java.util.Observable;
import java.util.Observer;

/* JADX INFO: loaded from: classes.dex */
public abstract class ActionObserver implements Observer {
    public abstract void onActionResult(ActionSupport.ResponseResult responseResult);

    @Override // java.util.Observer
    public void update(Observable observable, Object obj) {
        onActionResult((ActionSupport.ResponseResult) obj);
    }
}
