package com.kwad.components.core.a;

import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.sdk.core.c.b;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.report.i;
import com.kwad.sdk.core.report.r;
import java.util.Timer;
import java.util.TimerTask;
import java.util.UUID;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private String HR;
    private String HS;
    private long HT;
    private long HU;
    private Timer HV;
    private boolean HW = false;
    private final long period;

    /* JADX INFO: renamed from: com.kwad.components.core.a.a$a, reason: collision with other inner class name */
    static final class C0137a {
        private static final a HY = new a();
    }

    public a() {
        this.HT = -1L;
        try {
            this.HT = SystemClock.elapsedRealtime();
        } catch (Throwable th) {
            this.HT = System.currentTimeMillis();
            c.printStackTraceOnly(th);
        }
        this.period = TimeUnit.MINUTES.toMillis(d.zd());
        com.kwad.sdk.core.c.d dVar = new com.kwad.sdk.core.c.d() { // from class: com.kwad.components.core.a.a.1
            @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
            public final void onBackToBackground() {
                super.onBackToBackground();
                a.this.me();
            }

            @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
            public final void onBackToForeground() {
                super.onBackToForeground();
                a.this.eX();
            }
        };
        b.AU();
        b.a(dVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aj(int i) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long j = jElapsedRealtime - this.HT;
        this.HT = jElapsedRealtime;
        if (i == 1) {
            this.HU = 0L;
            this.HS = UUID.randomUUID().toString();
            if (TextUtils.isEmpty(this.HR)) {
                this.HR = this.HS;
            }
        }
        this.HU++;
        r rVar = new r(10220L);
        rVar.ant = this.HU;
        if (j > 0) {
            rVar.asv = j;
        }
        rVar.asw = i;
        rVar.HR = this.HR;
        rVar.HS = this.HS;
        i.a(rVar);
    }

    public static a md() {
        return C0137a.HY;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void me() {
        this.HW = false;
        if (this.period <= 0) {
            return;
        }
        Timer timer = this.HV;
        if (timer != null) {
            timer.cancel();
        }
        aj(3);
    }

    public final void eX() {
        if (this.HW) {
            return;
        }
        this.HW = true;
        if (this.period <= 0) {
            return;
        }
        this.HV = new Timer();
        aj(1);
        try {
            this.HV.schedule(new TimerTask() { // from class: com.kwad.components.core.a.a.2
                @Override // java.util.TimerTask, java.lang.Runnable
                public final void run() {
                    a.this.aj(2);
                }
            }, this.period, this.period);
        } catch (Throwable unused) {
        }
    }
}
