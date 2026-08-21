package com.qihoo360.mobilesafe.loader.a;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DummyActivity extends android.app.Activity {
    public DummyActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            java.lang.String r2 = "ws001"
            java.lang.String r0 = "d a o c f m"
            com.qihoo360.replugin.helper.LogRelease.i(r2, r0)
            r2 = 0
            super.onCreate(r2)
            r1.finish()
            return
    }
}
