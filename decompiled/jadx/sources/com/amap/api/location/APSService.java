package com.amap.api.location;

import android.app.Notification;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import com.kuaishou.weapon.p0.t;
import com.loc.at;
import com.loc.f;
import com.loc.fr;

/* JADX INFO: loaded from: classes.dex */
public class APSService extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    f f1378a;
    int b = 0;
    boolean c = false;

    private void a(Context context) {
        try {
            if (this.f1378a == null) {
                this.f1378a = new f(context);
            }
            this.f1378a.a();
        } catch (Throwable th) {
            fr.a(th, "APSService", "onCreate");
        }
        super.onCreate();
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        try {
            return this.f1378a.a(intent);
        } catch (Throwable th) {
            fr.a(th, "APSService", "onBind");
            return null;
        }
    }

    @Override // android.app.Service
    public void onCreate() {
        a(this);
    }

    @Override // android.app.Service
    public void onDestroy() {
        try {
            this.f1378a.c();
            if (this.c) {
                stopForeground(true);
            }
        } catch (Throwable th) {
            fr.a(th, "APSService", "onDestroy");
        }
        super.onDestroy();
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        if (intent != null) {
            try {
                int intExtra = intent.getIntExtra(at.f, 0);
                if (intExtra == 1) {
                    int intExtra2 = intent.getIntExtra(t.e, 0);
                    Notification notification = (Notification) intent.getParcelableExtra(at.g);
                    if (intExtra2 != 0 && notification != null) {
                        startForeground(intExtra2, notification);
                        this.c = true;
                        this.b++;
                    }
                } else if (intExtra == 2) {
                    if (intent.getBooleanExtra(at.j, true) && this.b > 0) {
                        this.b--;
                    }
                    if (this.b <= 0) {
                        stopForeground(true);
                        this.c = false;
                    } else {
                        stopForeground(false);
                    }
                }
            } catch (Throwable unused) {
            }
        }
        try {
            return this.f1378a.b();
        } catch (Throwable th) {
            fr.a(th, "APSService", "onStartCommand");
            return super.onStartCommand(intent, i, i2);
        }
    }
}
