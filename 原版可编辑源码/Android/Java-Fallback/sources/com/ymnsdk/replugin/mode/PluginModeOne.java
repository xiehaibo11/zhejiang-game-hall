package com.ymnsdk.replugin.mode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginModeOne {


    public PluginModeOne() {
            r0 = this;
            r0.<init>()
            return
    }

    public void installPlugin(android.app.Activity r11, java.lang.String r12, com.ymnsdk.replugin.listener.OpenListener r13) {
            r10 = this;
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.other.PluginModeOneEvent r1 = new com.ymnsdk.replugin.event.other.PluginModeOneEvent
            r1.<init>(r11, r12)
            r0.postToSeperllita(r1)
            com.ymnsdk.replugin.feature.PluginInstallWapper r2 = com.ymnsdk.replugin.feature.PluginInstallWapper.getInstance()
            com.ymnsdk.replugin.mode.PluginModeOne$1 r9 = new com.ymnsdk.replugin.mode.PluginModeOne$1
            r9.<init>(r10, r13, r12)
            r5 = 5
            r6 = 15
            r7 = 0
            r8 = 0
            r3 = r11
            r4 = r12
            r2.installPlugin(r3, r4, r5, r6, r7, r8, r9)
            return
    }
}
