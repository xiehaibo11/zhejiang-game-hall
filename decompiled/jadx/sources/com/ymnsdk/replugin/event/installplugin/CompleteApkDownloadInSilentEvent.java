package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class CompleteApkDownloadInSilentEvent extends SepperllitaEvent {
    public CompleteApkDownloadInSilentEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF001");
        setBl("宿主包启动");
        setLabel("整包完整静默下载");
        setEid("1060");
    }

    public CompleteApkDownloadInSilentEvent(Activity activity, String str, String str2, long j, long j2) {
        this(activity);
        setRv(str2);
        setDur(j2 + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setDownload_size(j + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
