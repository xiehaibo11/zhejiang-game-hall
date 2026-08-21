package com.ymnsdk.replugin.event.ui;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class UpdateConfirmEvent extends SepperllitaEvent {
    public UpdateConfirmEvent(Activity activity, String str) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF010");
        setBl("模式流程");
        setLabel("插件更新弹窗用户确定");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
