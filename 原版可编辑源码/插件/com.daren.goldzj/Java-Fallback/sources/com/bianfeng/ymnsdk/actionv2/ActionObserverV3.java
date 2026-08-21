package com.bianfeng.ymnsdk.actionv2;

import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import java.util.Observable;
import java.util.Observer;

public abstract class ActionObserverV3 implements Observer {
    public ActionObserverV3() {
    }

    public abstract void onActionResult(ActionSupportV3.ResponseResult r1);

    @Override
    public void update(Observable r1, Object r2) {
        onActionResult((ActionSupportV3.ResponseResult) r2);
    }
}
