package com.qihoo360.replugin.component.service.server;

import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import java.lang.ref.WeakReference;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginPitService extends Service {
    private static WeakReference<PluginPitService> sService;

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    public PluginPitService() {
        sService = new WeakReference<>(this);
    }

    public static PluginPitService get() {
        return sService.get();
    }

    public static ComponentName makeComponentName(Context context, int i) {
        String str;
        String packageName = context.getPackageName();
        String name = PluginPitService.class.getName();
        if (i == -1) {
            str = name + "UI";
        } else if (i == -2) {
            str = name + "Guard";
        } else {
            str = name + "P" + (i + 100);
        }
        return new ComponentName(packageName, str);
    }
}
