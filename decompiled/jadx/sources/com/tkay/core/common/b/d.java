package com.tkay.core.common.b;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class d implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6043a = "start_time";
    public static final String b = "end_time";
    public static final String c = "psid";
    public static final String d = "launch_mode";
    public static final int e = 0;
    public static final int f = 1;
    long g;
    JSONObject i;
    private final String l = d.class.getName();
    Handler j = new Handler(Looper.getMainLooper());
    Runnable k = new Runnable() { // from class: com.tkay.core.common.b.d.1
        @Override // java.lang.Runnable
        public final void run() {
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.d.1.1
                @Override // java.lang.Runnable
                public final void run() {
                    d.this.a();
                }
            });
        }
    };
    int h = 0;

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a() {
        if (this.i != null) {
            com.tkay.core.common.l.p.a(m.a().f(), f.o, m.a().o() + "playRecord", "");
            this.g = 0L;
            JSONObject jSONObject = this.i;
            long jOptLong = jSONObject.optLong(f6043a);
            long jOptLong2 = jSONObject.optLong(b);
            String strOptString = jSONObject.optString(c);
            int iOptInt = jSONObject.optInt(d);
            this.i = null;
            com.tkay.core.common.k.c.a(iOptInt == 1 ? 3 : 1, jOptLong, jOptLong2, strOptString);
            new StringBuilder("Time up to send application playTime, reset playStartTime and send agent, playtime:").append((jOptLong2 - jOptLong) / 1000);
        }
    }

    public d(long j) {
        this.g = j;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
        final long jCurrentTimeMillis = System.currentTimeMillis();
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.d.2
            @Override // java.lang.Runnable
            public final void run() {
                d.this.a(jCurrentTimeMillis);
            }
        });
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.b.d.3
            @Override // java.lang.Runnable
            public final void run() {
                d.this.b();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(long j) {
        this.j.removeCallbacks(this.k);
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
        if (this.i != null) {
            JSONObject jSONObject = this.i;
            long jOptLong = jSONObject.optLong(f6043a);
            long jOptLong2 = jSONObject.optLong(b);
            String strOptString = jSONObject.optString(c);
            int iOptInt = jSONObject.optInt(d);
            if (System.currentTimeMillis() - jOptLong2 > aVarB.B()) {
                new StringBuilder("onActivityResumed : Time countdown is closed, time up to send agent and create new psid, playtime:").append((jOptLong2 - jOptLong) / 1000);
                com.tkay.core.common.l.p.a(m.a().f(), f.o, m.a().o() + "playRecord", "");
                com.tkay.core.common.k.c.a(iOptInt == 1 ? 3 : 1, jOptLong, jOptLong2, strOptString);
                this.g = 0L;
            }
        }
        this.i = null;
        if (this.g == 0) {
            this.h = 1;
            try {
                this.g = m.a().a(m.a().f(), m.a().o(), 1);
            } catch (Exception unused) {
            }
        } else {
            String strO = m.a().o();
            com.tkay.core.common.l.p.a(m.a().f(), f.o, strO + "playRecord", "");
        }
        if (this.g == 0) {
            this.g = System.currentTimeMillis();
        }
        new StringBuilder("onActivityResumed: Method use time:").append(System.currentTimeMillis() - j);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void b() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        String strO = m.a().o();
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(c, m.a().q());
            jSONObject.put(f6043a, this.g);
            jSONObject.put(b, System.currentTimeMillis());
            jSONObject.put(d, this.h);
            this.i = jSONObject;
            com.tkay.core.common.l.p.a(m.a().f(), f.o, strO + "playRecord", jSONObject.toString());
            new StringBuilder("onActivityPaused: record leave time:").append(jSONObject.toString());
        } catch (Exception unused) {
        }
        if (com.tkay.core.c.b.a(m.a().f()).b(strO).D() == 1) {
            this.j.postDelayed(this.k, r2.B());
        }
        new StringBuilder("onActivityPaused: Method use time:").append(System.currentTimeMillis() - jCurrentTimeMillis);
    }
}
