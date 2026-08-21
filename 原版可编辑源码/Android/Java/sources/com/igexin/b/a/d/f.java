package com.igexin.b.a.d;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.os.PowerManager;
import android.support.v4.app.NotificationCompat;
import com.igexin.push.d.c.k;
import com.igexin.push.d.c.m;
import com.igexin.push.d.c.n;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.text.SimpleDateFormat;
import java.util.Comparator;
import java.util.Date;
import java.util.HashMap;
import java.util.Locale;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantLock;

public class f extends BroadcastReceiver implements Comparator<e> {
    public static final String g = f.class.getName();
    public static final long u = TimeUnit.SECONDS.toMillis(2);
    PowerManager m;
    AlarmManager n;
    Intent o;
    PendingIntent p;
    Intent q;
    PendingIntent r;
    String s;
    volatile boolean t;
    final ReentrantLock l = new ReentrantLock();
    private boolean a = false;
    final HashMap<Long, com.igexin.b.a.d.a.b> i = new HashMap<>(7);
    final d<e> k = new d<>(this, this);
    final c j = new c();
    final j h = new j(this);

    protected f() {
        e.E = this;
    }

    @Override
    public final int compare(e eVar, e eVar2) {
        if (eVar.u < eVar2.u) {
            return -1;
        }
        if (eVar.u > eVar2.u) {
            return 1;
        }
        if (eVar.A > eVar2.A) {
            return -1;
        }
        if (eVar.A < eVar2.A) {
            return 1;
        }
        if (eVar.v < eVar2.v) {
            return -1;
        }
        if (eVar.v > eVar2.v) {
            return 1;
        }
        return eVar.hashCode() - eVar2.hashCode();
    }

    public final void a(long j) {
        AlarmManager alarmManager;
        PendingIntent pendingIntent;
        if (this.t) {
            com.igexin.b.a.c.b.a("setalarm|" + new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(new Date(j)), new Object[0]);
            if (j < 0) {
                j = System.currentTimeMillis() + u;
            }
            try {
                if (this.p != null) {
                    if (Build.VERSION.SDK_INT >= 19) {
                        try {
                            this.n.setExact(0, j, this.p);
                            return;
                        } catch (Throwable unused) {
                            alarmManager = this.n;
                            pendingIntent = this.p;
                            alarmManager.set(0, j, pendingIntent);
                        }
                    }
                    alarmManager = this.n;
                    pendingIntent = this.p;
                    alarmManager.set(0, j, pendingIntent);
                }
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a("TaskService" + th.toString(), new Object[0]);
            }
        }
    }

    public final void a(Context context) {
        if (this.a) {
            return;
        }
        if (!com.igexin.push.util.j.b()) {
            this.m = (PowerManager) context.getSystemService("power");
            this.t = true;
            this.n = (AlarmManager) context.getSystemService(NotificationCompat.CATEGORY_ALARM);
            context.registerReceiver(this, new IntentFilter("AlarmTaskSchedule." + context.getPackageName()));
            context.registerReceiver(this, new IntentFilter("AlarmTaskScheduleBak." + context.getPackageName()));
            context.registerReceiver(this, new IntentFilter("android.intent.action.SCREEN_OFF"));
            context.registerReceiver(this, new IntentFilter("android.intent.action.SCREEN_ON"));
            this.s = "AlarmNioTaskSchedule." + context.getPackageName();
            context.registerReceiver(this, new IntentFilter(this.s));
            int i = DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25;
            if (com.igexin.push.util.j.a(context) >= 31 && Build.VERSION.SDK_INT >= 30) {
                i = 201326592;
            }
            this.o = new Intent("AlarmTaskSchedule." + context.getPackageName());
            this.p = PendingIntent.getBroadcast(context, hashCode(), this.o, i);
            this.q = new Intent(this.s);
            this.r = PendingIntent.getBroadcast(context, hashCode() + 2, this.q, i);
        }
        this.h.start();
        try {
            Thread.yield();
        } catch (Throwable unused) {
        }
        this.a = true;
    }

    public final boolean a(com.igexin.b.a.d.a.b bVar) {
        if (bVar == null) {
            throw null;
        }
        ReentrantLock reentrantLock = this.l;
        if (reentrantLock.tryLock()) {
            try {
                if (this.i.keySet().contains(Long.valueOf(bVar.m()))) {
                    return false;
                }
                this.i.put(Long.valueOf(bVar.m()), bVar);
                return true;
            } catch (Throwable th) {
                try {
                    com.igexin.b.a.c.b.a("TaskService|" + th.toString(), new Object[0]);
                } finally {
                    reentrantLock.unlock();
                }
            }
        }
        return false;
    }

    final boolean a(com.igexin.b.a.d.a.e eVar, com.igexin.b.a.d.a.b bVar) {
        int iB_ = eVar.b_();
        if (iB_ <= Integer.MIN_VALUE || iB_ >= 0) {
            if (iB_ < 0 || iB_ >= Integer.MAX_VALUE) {
                return false;
            }
            return bVar.a(eVar, this);
        }
        e eVar2 = (e) eVar;
        boolean zA = eVar2.t ? bVar.a(eVar2, this) : bVar.a(eVar, this);
        if (zA) {
            eVar2.c();
        }
        return zA;
    }

    public final boolean a(e eVar, boolean z) {
        if (eVar == null) {
            throw null;
        }
        int iIncrementAndGet = 0;
        if (eVar.p || eVar.k) {
            return false;
        }
        d<e> dVar = this.k;
        if ((eVar instanceof com.igexin.b.a.b.e) && (((com.igexin.b.a.b.e) eVar).c instanceof n)) {
            if (z) {
                iIncrementAndGet = Integer.MAX_VALUE;
            }
        } else if (z) {
            iIncrementAndGet = dVar.e.incrementAndGet();
        }
        eVar.A = iIncrementAndGet;
        return dVar.a(eVar);
    }

    public final boolean a(e eVar, boolean z, boolean z2) {
        if (eVar == null) {
            throw null;
        }
        boolean z3 = false;
        if (eVar.m) {
            return false;
        }
        if (!z || z2) {
            if (z2 && z) {
                z3 = true;
            }
            return a(eVar, z3);
        }
        eVar.d();
        try {
            try {
                eVar.b();
                eVar.g();
                eVar.e_();
                if (!eVar.t) {
                    eVar.c();
                }
                return true;
            } catch (Exception e) {
                eVar.t = true;
                eVar.B = e;
                eVar.p();
                eVar.t();
                a(eVar);
                f();
                if (!eVar.t) {
                    eVar.c();
                }
                return false;
            }
        } catch (Throwable th) {
            if (!eVar.t) {
                eVar.c();
            }
            throw th;
        }
    }

    public final boolean a(Class cls) {
        d<e> dVar = this.k;
        return dVar != null && dVar.a(cls);
    }

    public final boolean a(Object obj) {
        if (obj == null) {
            return false;
        }
        try {
            if (obj instanceof m) {
            }
        } catch (Exception unused) {
        }
        com.igexin.b.a.c.b.a("TaskService|responseQueue ++ task = " + obj.getClass().getName() + "@" + obj.hashCode(), new Object[0]);
        if (!(obj instanceof com.igexin.b.a.d.a.e)) {
            throw new ClassCastException("response Obj is not a TaskResult ");
        }
        com.igexin.b.a.d.a.e eVar = (com.igexin.b.a.d.a.e) obj;
        if (eVar.l()) {
            return false;
        }
        eVar.a(false);
        if ((obj instanceof com.igexin.push.d.b.a) || (obj instanceof com.igexin.push.d.b.b)) {
            this.j.a();
            com.igexin.b.a.c.b.a("TaskService|change to primaryQueue", new Object[0]);
        }
        this.j.a(eVar);
        return true;
    }

    public final void b(long j) {
        AlarmManager alarmManager;
        if (com.igexin.push.util.j.b()) {
            return;
        }
        com.igexin.b.a.c.b.a("setnioalarm|" + new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(new Date(j)), new Object[0]);
        if (j < 0) {
            j = System.currentTimeMillis() + u;
        }
        try {
            if (Build.VERSION.SDK_INT < 19) {
                alarmManager = this.n;
            } else {
                try {
                    this.n.setExact(0, j, this.r);
                    return;
                } catch (Exception unused) {
                    alarmManager = this.n;
                }
            }
            alarmManager.set(0, j, this.r);
        } catch (Throwable unused2) {
        }
    }

    public final void e() {
        try {
            if (this.r != null) {
                this.n.cancel(this.r);
            }
        } catch (Throwable unused) {
        }
    }

    protected final void f() {
        j jVar = this.h;
        if (jVar == null || jVar.isInterrupted()) {
            return;
        }
        this.h.interrupt();
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x0086  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x00c6 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0000 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    final void g() {
        com.igexin.b.a.d.a.e eVarD;
        boolean zA;
        int iB_;
        int iB_2;
        boolean zA2;
        int iB_3;
        while (!this.j.c() && (eVarD = this.j.d()) != null) {
            com.igexin.b.a.c.b.a("TaskService|notifyObserver responseQueue -- task = " + eVarD, new Object[0]);
            eVarD.a(true);
            ReentrantLock reentrantLock = this.l;
            reentrantLock.lock();
            try {
            } catch (Throwable th) {
                th = th;
                zA = false;
            }
            if (!this.i.isEmpty()) {
                long jM = eVarD.m();
                if (jM != 0) {
                    com.igexin.b.a.d.a.b bVar = this.i.get(Long.valueOf(jM));
                    zA2 = (bVar == null || !bVar.l()) ? false : a(eVarD, bVar);
                } else {
                    zA = false;
                    for (com.igexin.b.a.d.a.b bVar2 : this.i.values()) {
                        try {
                            if (bVar2.l() && (zA = a(eVarD, bVar2))) {
                                break;
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            try {
                                com.igexin.b.a.c.b.a("TaskService|" + th.toString(), new Object[0]);
                                if (!zA && (iB_2 = eVarD.b_()) > Integer.MIN_VALUE && iB_2 < 0) {
                                }
                                reentrantLock.unlock();
                                if (!(eVarD instanceof k)) {
                                }
                            } catch (Throwable th3) {
                                if (!zA && (iB_ = eVarD.b_()) > Integer.MIN_VALUE && iB_ < 0) {
                                    ((e) eVarD).c();
                                }
                                reentrantLock.unlock();
                                throw th3;
                            }
                        }
                    }
                    zA2 = zA;
                }
                if (!zA2 && (iB_3 = eVarD.b_()) > Integer.MIN_VALUE && iB_3 < 0) {
                    ((e) eVarD).c();
                }
            }
            reentrantLock.unlock();
            if (!(eVarD instanceof k)) {
                this.j.b();
                com.igexin.b.a.c.b.a("TaskService|queue -> secondRespQueue", new Object[0]);
            }
        }
    }

    @Override
    public final void onReceive(Context context, Intent intent) {
        if ("android.intent.action.SCREEN_OFF".equals(intent.getAction())) {
            this.t = true;
            com.igexin.b.a.c.b.a("screenoff", new Object[0]);
            if (this.k.h.get() > 0) {
                a(this.k.h.get());
                return;
            }
            return;
        }
        if ("android.intent.action.SCREEN_ON".equals(intent.getAction())) {
            this.t = false;
            com.igexin.b.a.c.b.a("screenon", new Object[0]);
            return;
        }
        if (intent.getAction().startsWith("AlarmTaskSchedule.") || intent.getAction().startsWith("AlarmTaskScheduleBak.")) {
            com.igexin.b.a.c.b.a("receivealarm|" + this.t, new Object[0]);
            f();
            return;
        }
        if (this.s.equals(intent.getAction())) {
            com.igexin.b.a.c.b.a("receive nioalarm", new Object[0]);
            try {
                com.igexin.b.a.c.b.a("TaskService|alarm time out #######", new Object[0]);
                com.igexin.b.a.b.a.a.f.a().e();
            } catch (Exception unused) {
            }
        }
    }
}
