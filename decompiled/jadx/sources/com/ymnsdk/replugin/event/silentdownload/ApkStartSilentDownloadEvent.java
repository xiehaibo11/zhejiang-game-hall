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
public class ApkStartSilentDownloadEvent extends SepperllitaEvent {
    public ApkStartSilentDownloadEvent(Activity activity, String str, boolean z) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF008");
        setBl("选择插件静默下载");
        setLabel("整包静默下载开始");
        setEid("1042");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        String str2 = "";
        if (!z) {
            str2 = "老包不存在";
        }
        custEvent.setRequest_msg(str2);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
