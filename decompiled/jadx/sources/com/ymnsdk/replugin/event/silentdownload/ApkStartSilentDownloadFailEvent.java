package com.ymnsdk.replugin.event.silentdownload;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ApkStartSilentDownloadFailEvent extends SepperllitaEvent {
    public ApkStartSilentDownloadFailEvent(Activity activity, String str, String str2) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF008");
        setBl("选择插件静默下载");
        setLabel("整包静默下载失败");
        setEid("1045");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setRequest_msg(str2);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
