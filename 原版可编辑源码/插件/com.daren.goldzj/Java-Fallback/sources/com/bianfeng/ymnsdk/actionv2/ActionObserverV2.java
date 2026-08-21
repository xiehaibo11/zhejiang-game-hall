package com.bianfeng.ymnsdk.actionv2;

import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import java.util.Observable;
import java.util.Observer;

public abstract class ActionObserverV2 implements Observer {
    public ActionObserverV2() {
    }

    public abstract void onActionResult(ActionSupportV2.ResponseResult r1);

    @Override
    public void update(Observable r1, Object r2) {
        onActionResult((ActionSupportV2.ResponseResult) r2);
    }
}
