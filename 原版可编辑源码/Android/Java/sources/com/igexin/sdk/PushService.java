package com.igexin.sdk;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import com.igexin.push.core.x;

public class PushService extends Service {
    private final String a = getClass().getName();

    @Override
    public IBinder onBind(Intent intent) {
        String type = (intent == null || intent.getType() == null) ? "" : intent.getType();
        if (!type.startsWith("GB-") && !type.startsWith("PB-")) {
            return "SERVER_LOG".equals(type) ? com.igexin.b.a.c.a.f.a().b() : x.a().a((Service) this, intent);
        }
        x.a().a(this, intent, 0, 0);
        return null;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        x.a().a((Context) this);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        x.a().b();
    }

    @Override
    public int onStartCommand(Intent intent, int i, int i2) {
        super.onStartCommand(intent, i, i2);
        x.a().a(this, intent, i, i2);
        return 2;
    }

    @Override
    public boolean onUnbind(Intent intent) {
        return super.onUnbind(intent);
    }
}
