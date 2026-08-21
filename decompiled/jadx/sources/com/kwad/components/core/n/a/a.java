package com.kwad.components.core.n.a;

import android.os.SystemClock;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private String Pp;
    private long Pq;
    private long Pr;
    private long Ps;
    private boolean Pt;

    public final void at(String str) {
        this.Pp = str;
    }

    public final void pz() {
        if (this.Pt) {
            return;
        }
        this.Pt = true;
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.n.a.a.1
            @Override // java.lang.Runnable
            public final void run() {
                a.this.Ps = SystemClock.uptimeMillis();
                a.this.report();
            }
        });
    }

    public final void report() {
        b bVar = new b();
        bVar.Pp = this.Pp;
        long j = this.Pq;
        bVar.Pw = j != 0 ? this.Pr - j : 0L;
        long j2 = this.Pr;
        bVar.Px = j2 != 0 ? this.Ps - j2 : 0L;
        long j3 = this.Pq;
        bVar.Pv = j3 != 0 ? this.Ps - j3 : 0L;
        com.kwad.components.core.o.a.pA().a(bVar);
        c.d("PageMonitor", bVar.toString());
    }

    public final void y(long j) {
        this.Pq = j;
        this.Pr = SystemClock.uptimeMillis();
    }
}
