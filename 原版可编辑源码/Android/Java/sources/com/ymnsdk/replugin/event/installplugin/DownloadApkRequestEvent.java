package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadApkRequestEvent extends SepperllitaEvent {
    public DownloadApkRequestEvent(Activity activity, String str, String str2, boolean z) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("下载整包开始");
        setEid("1047");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        if (!z) {
            str2 = str2 + "老包不存在";
        }
        custEvent.setRequest_msg(str2);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
