package com.ymnsdk.replugin.event.allowstartplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class AllowStartPluginRequestEvent extends SepperllitaEvent {
    public AllowStartPluginRequestEvent(Activity activity, String str, boolean z) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF010");
        setBl("模式流程");
        setLabel("允许启动插件请求");
        setEid("1042");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setIs_allow(z ? 1 : 0);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
