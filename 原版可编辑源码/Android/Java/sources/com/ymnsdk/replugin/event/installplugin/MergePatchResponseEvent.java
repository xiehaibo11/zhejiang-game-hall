package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class MergePatchResponseEvent extends SepperllitaEvent {
    public MergePatchResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("合并patch");
    }

    public MergePatchResponseEvent(Activity activity, int i, String str, int i2, String str2, long j) {
        this(activity);
        setEid(i + "");
        setDur(j + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str2 + "");
        custEvent.setRequest_duration(j + "");
        custEvent.setPlugin_id(str);
        custEvent.setRequest_server_type("0");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
