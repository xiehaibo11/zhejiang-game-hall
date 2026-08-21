package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class MergeInterruptEvent extends SepperllitaEvent {
    public MergeInterruptEvent(Activity activity, String str) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("合并patch中断");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_msg(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
