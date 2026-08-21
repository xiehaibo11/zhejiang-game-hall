package com.ymnsdk.replugin.event.silentdownload;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ClearDownloadingEvent extends SepperllitaEvent {
    public ClearDownloadingEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF001");
        setBl("宿主包启动");
        setLabel("清除已下载的文件");
        setEid("1045");
    }

    public ClearDownloadingEvent(Activity activity, String str, String str2) {
        this(activity);
        setRv(str2);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
