package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class al {
    private static volatile al a;
    private SharedPreferences a;
    private ScheduledThreadPoolExecutor a = new ScheduledThreadPoolExecutor(1);
    private Map<String, ScheduledFuture> a = new HashMap();
    private Object a = new Object();

    public abstract class a implements Runnable {
        public abstract String a();
    }

    class b implements Runnable {
        a a;

        public b(a aVar) {
            this.a = aVar;
        }

        void a() {
        }

        void b() {
        }

        @Override
        public void run() {
            a();
            this.a.run();
            b();
        }
    }

    private al(Context context) {
        this.a = context.getSharedPreferences("mipush_extra", 0);
    }

    public static al a(Context context) {
        if (a == null) {
            synchronized (al.class) {
                if (a == null) {
                    a = new al(context);
                }
            }
        }
        return a;
    }

    private static String a(String str) {
        return "last_job_time" + str;
    }

    private ScheduledFuture a(a aVar) {
        ScheduledFuture scheduledFuture;
        synchronized (this.a) {
            scheduledFuture = this.a.get(aVar.a());
        }
        return scheduledFuture;
    }

    public void a(Runnable runnable) {
        a(runnable, 0);
    }

    public void a(Runnable runnable, int i) {
        this.a.schedule(runnable, i, TimeUnit.SECONDS);
    }

    public boolean a(a aVar) {
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
        String strA = a(aVar.a());
        am amVar = new am(this, aVar, z, strA);
        if (!z) {
            long jAbs = Math.abs(System.currentTimeMillis() - this.a.getLong(strA, 0L)) / 1000;
            if (jAbs < i - i2) {
                i2 = (int) (((long) i) - jAbs);
            }
        }
        try {
            ScheduledFuture<?> scheduledFutureScheduleAtFixedRate = this.a.scheduleAtFixedRate(amVar, i2, i, TimeUnit.SECONDS);
            synchronized (this.a) {
                this.a.put(aVar.a(), scheduledFutureScheduleAtFixedRate);
            }
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return true;
        }
    }

    public boolean a(String str) {
        synchronized (this.a) {
            ScheduledFuture scheduledFuture = this.a.get(str);
            if (scheduledFuture == null) {
                return false;
            }
            this.a.remove(str);
            return scheduledFuture.cancel(false);
        }
    }

    public boolean b(a aVar, int i) {
        if (aVar == null || a(aVar) != null) {
            return false;
        }
        ScheduledFuture<?> scheduledFutureSchedule = this.a.schedule(new an(this, aVar), i, TimeUnit.SECONDS);
        synchronized (this.a) {
            this.a.put(aVar.a(), scheduledFutureSchedule);
        }
        return true;
    }
}
