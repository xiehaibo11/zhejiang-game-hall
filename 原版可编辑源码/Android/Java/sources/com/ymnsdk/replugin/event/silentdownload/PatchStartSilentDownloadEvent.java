package com.ymnsdk.replugin.event.silentdownload;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PatchStartSilentDownloadEvent extends SepperllitaEvent {
    public PatchStartSilentDownloadEvent(Activity activity, String str) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF008");
        setBl("选择插件静默下载");
        setLabel("patch包静默下载开始");
        setEid("1042");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
