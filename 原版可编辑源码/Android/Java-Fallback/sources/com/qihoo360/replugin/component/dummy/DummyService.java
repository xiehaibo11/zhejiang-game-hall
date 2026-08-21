package com.qihoo360.replugin.component.dummy;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DummyService extends android.app.Service {
    public DummyService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            r0.stopSelf()
            return
    }
}
