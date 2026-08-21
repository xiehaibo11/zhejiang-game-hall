package com.qihoo360.replugin.component.dummy;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DummyReceiver extends android.content.BroadcastReceiver {
    public DummyReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            java.lang.String r1 = "ws001"
            java.lang.String r2 = "d.r o.c f"
            com.qihoo360.replugin.helper.LogRelease.i(r1, r2)
            return
    }
}
