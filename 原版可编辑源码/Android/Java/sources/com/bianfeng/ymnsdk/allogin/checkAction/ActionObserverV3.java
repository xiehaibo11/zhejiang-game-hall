package com.bianfeng.ymnsdk.allogin.checkAction;

import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import java.util.Observable;
import java.util.Observer;

public abstract class ActionObserverV3 implements Observer {
    public abstract void onActionResult(ActionSupportV3.ResponseResult responseResult);

    @Override
    public void update(Observable observable, Object obj) {
        onActionResult((ActionSupportV3.ResponseResult) obj);
    }
}
