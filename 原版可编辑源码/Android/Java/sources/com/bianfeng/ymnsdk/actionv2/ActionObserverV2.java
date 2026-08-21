package com.bianfeng.ymnsdk.actionv2;

import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import java.util.Observable;
import java.util.Observer;

public abstract class ActionObserverV2 implements Observer {
    public abstract void onActionResult(ActionSupportV2.ResponseResult responseResult);

    @Override
    public void update(Observable observable, Object data) {
        onActionResult((ActionSupportV2.ResponseResult) data);
    }
}
