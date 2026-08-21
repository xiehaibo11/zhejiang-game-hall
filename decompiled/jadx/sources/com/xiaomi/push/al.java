package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes4.dex */
public class al {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile al f8033a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private SharedPreferences f109a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ScheduledThreadPoolExecutor f112a = new ScheduledThreadPoolExecutor(1);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Map<String, ScheduledFuture> f111a = new HashMap();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Object f110a = new Object();

    public abstract class a implements Runnable {
        /* JADX INFO: renamed from: a */
        public abstract String mo162a();
    }

    class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        a f8034a;

        public b(a aVar) {
            this.f8034a = aVar;
        }

        void a() {
        }

        void b() {
        }

        @Override // java.lang.Runnable
        public void run() {
            a();
            this.f8034a.run();
            b();
        }
    }

    private al(Context context) {
        this.f109a = context.getSharedPreferences("mipush_extra", 0);
    }

    public static al a(Context context) {
        if (f8033a == null) {
            synchronized (al.class) {
                if (f8033a == null) {
                    f8033a = new al(context);
                }
            }
        }
        return f8033a;
    }

    private static String a(String str) {
        return "last_job_time" + str;
    }

    private ScheduledFuture a(a aVar) {
        ScheduledFuture scheduledFuture;
        synchronized (this.f110a) {
            scheduledFuture = this.f111a.get(aVar.mo162a());
        }
        return scheduledFuture;
    }

    public void a(Runnable runnable) {
        a(runnable, 0);
    }

    public void a(Runnable runnable, int i) {
        this.f112a.schedule(runnable, i, TimeUnit.SECONDS);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m120a(a aVar) {
        return b(aVar, 0);
    }

    public boolean a(a aVar, int i) {
        return a(aVar, i, 0);
    }

    public boolean a(a aVar, int i, int i2) {
        return a(aVar, i, i2, false);
    }

    public boolean a(a aVar, int i, int i2, boolean z) {
        if (aVar == null || a(aVar) != null) {
            return false;
        }
        String strA = a(aVar.mo162a());
        am amVar = new am(this, aVar, z, strA);
        if (!z) {
            long jAbs = Math.abs(System.currentTimeMillis() - this.f109a.getLong(strA, 0L)) / 1000;
            if (jAbs < i - i2) {
                i2 = (int) (((long) i) - jAbs);
            }
        }
        try {
            ScheduledFuture<?> scheduledFutureScheduleAtFixedRate = this.f112a.scheduleAtFixedRate(amVar, i2, i, TimeUnit.SECONDS);
            synchronized (this.f110a) {
                this.f111a.put(aVar.mo162a(), scheduledFutureScheduleAtFixedRate);
            }
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return true;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m121a(String str) {
        synchronized (this.f110a) {
            ScheduledFuture scheduledFuture = this.f111a.get(str);
            if (scheduledFuture == null) {
                return false;
            }
            this.f111a.remove(str);
            return scheduledFuture.cancel(false);
        }
    }

    public boolean b(a aVar, int i) {
        if (aVar == null || a(aVar) != null) {
            return false;
        }
        ScheduledFuture<?> scheduledFutureSchedule = this.f112a.schedule(new an(this, aVar), i, TimeUnit.SECONDS);
        synchronized (this.f110a) {
            this.f111a.put(aVar.mo162a(), scheduledFutureSchedule);
        }
        return true;
    }
}
