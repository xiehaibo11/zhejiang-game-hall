package com.qihoo360.replugin.component.dummy;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DummyService extends Service {
    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        stopSelf();
    }
}
