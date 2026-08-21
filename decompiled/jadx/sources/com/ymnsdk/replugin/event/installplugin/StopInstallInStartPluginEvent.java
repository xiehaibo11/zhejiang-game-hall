package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class StopInstallInStartPluginEvent extends SepperllitaEvent {
    public StopInstallInStartPluginEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF010");
        setBl("模式流程");
        setLabel("启动插件后停止安装");
    }
}
