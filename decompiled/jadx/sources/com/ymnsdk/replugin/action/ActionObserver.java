package com.ymnsdk.replugin.action;

import com.ymnsdk.replugin.action.ActionSupport;
import java.util.Observable;
import java.util.Observer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public abstract class ActionObserver implements Observer {
    public abstract void onActionResult(ActionSupport.ResponseResult responseResult);

    @Override // java.util.Observer
    public void update(Observable observable, Object obj) {
        onActionResult((ActionSupport.ResponseResult) obj);
    }
}
