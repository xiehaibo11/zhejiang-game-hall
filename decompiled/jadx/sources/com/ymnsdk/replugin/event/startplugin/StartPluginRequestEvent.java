package com.ymnsdk.replugin.event.startplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class StartPluginRequestEvent extends SepperllitaEvent {
    public StartPluginRequestEvent(Activity activity, String str, String str2, String str3) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("请求启动插件");
        setEid("1042");
        setUid(str2);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setLogin_json_str(str3);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
