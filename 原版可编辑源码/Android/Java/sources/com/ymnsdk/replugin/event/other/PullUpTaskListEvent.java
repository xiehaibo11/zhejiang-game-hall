package com.ymnsdk.replugin.event.other;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PullUpTaskListEvent extends SepperllitaEvent {
    public PullUpTaskListEvent(Activity activity, String str) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF005");
        setBl("杀进程");
        setLabel("拉起任务列表");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_msg(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
