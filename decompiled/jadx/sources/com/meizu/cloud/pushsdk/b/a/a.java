package com.meizu.cloud.pushsdk.b.a;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.support.v4.app.NotificationCompat;
import com.meizu.cloud.pushinternal.DebugLogger;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private AlarmManager f4485a;
    private Context b;
    private Runnable c;
    private long d;
    private int e;
    private C0316a f;
    private PendingIntent g;
    private String h;
    private boolean i;

    /* JADX INFO: renamed from: com.meizu.cloud.pushsdk.b.a.a$a, reason: collision with other inner class name */
    class C0316a extends BroadcastReceiver {
        private C0316a() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent == null || !intent.getAction().equals("alarm.util")) {
                return;
            }
            DebugLogger.i("AlarmUtils", "on receive delayed task, keyword: " + a.this.h);
            a.this.i = true;
            a.this.c();
            a.this.c.run();
        }
    }

    public a(Context context, Runnable runnable, long j) {
        this(context, runnable, j, true);
    }

    public a(Context context, Runnable runnable, long j, boolean z) {
        Context applicationContext = context.getApplicationContext();
        this.b = applicationContext;
        this.c = runnable;
        this.d = j;
        this.e = !z ? 1 : 0;
        this.f4485a = (AlarmManager) applicationContext.getSystemService(NotificationCompat.CATEGORY_ALARM);
        this.i = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        try {
            if (this.f != null) {
                this.b.unregisterReceiver(this.f);
                this.f = null;
            }
        } catch (Exception e) {
            DebugLogger.e("AlarmUtils", "clean error, " + e.getMessage());
        }
    }

    public boolean a() {
        if (!this.i) {
            DebugLogger.e("AlarmUtils", "last task not completed");
            return false;
        }
        this.i = false;
        C0316a c0316a = new C0316a();
        this.f = c0316a;
        this.b.registerReceiver(c0316a, new IntentFilter("alarm.util"));
        this.h = String.valueOf(System.currentTimeMillis());
        this.g = PendingIntent.getBroadcast(this.b, 0, new Intent("alarm.util"), 1073741824);
        if (Build.VERSION.SDK_INT >= 23) {
            this.f4485a.setExactAndAllowWhileIdle(this.e, System.currentTimeMillis() + this.d, this.g);
        } else if (Build.VERSION.SDK_INT >= 19) {
            this.f4485a.setExact(this.e, System.currentTimeMillis() + this.d, this.g);
        } else {
            this.f4485a.set(this.e, System.currentTimeMillis() + this.d, this.g);
        }
        DebugLogger.i("AlarmUtils", "start delayed task, keyword: " + this.h);
        return true;
    }

    public void b() {
        if (this.f4485a != null && this.g != null && !this.i) {
            DebugLogger.i("AlarmUtils", "cancel  delayed task, keyword: " + this.h);
            this.f4485a.cancel(this.g);
        }
        c();
    }
}
