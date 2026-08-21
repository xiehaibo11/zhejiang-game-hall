package com.sigmob.sdk.videoAd;

import android.os.Handler;
import com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable;
import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.g;
import java.util.ArrayList;

class d extends RepeatingHandlerRunnable {
    private final l a;
    private final a b;

    public d(l lVar, a aVar, Handler handler) {
        super(handler);
        Preconditions.NoThrow.checkNotNull(lVar);
        Preconditions.NoThrow.checkNotNull(aVar);
        this.a = lVar;
        this.b = aVar;
        ArrayList arrayList = new ArrayList();
        arrayList.add(new f(g.a.b, com.sigmob.sdk.base.common.a.a, 0.0f));
        arrayList.add(new f(g.a.b, com.sigmob.sdk.base.common.a.n, 0.25f));
        arrayList.add(new f(g.a.b, com.sigmob.sdk.base.common.a.o, 0.5f));
        arrayList.add(new f(g.a.b, com.sigmob.sdk.base.common.a.p, 0.75f));
        this.b.a(arrayList);
    }

    @Override
    public void doWork() {
        int iS = this.a.s();
        int iT = this.a.t();
        if (iS > 0) {
            if (this.a.w()) {
                this.a.c(false);
            }
            this.a.x();
            if (iT + 1000 < iS && this.a.p()) {
                this.a.v();
            }
            if (this.a.q()) {
                this.a.r();
            }
            for (com.sigmob.sdk.base.common.g gVar : this.b.a(iT, iS)) {
                this.a.a(gVar.p());
                gVar.l();
            }
            if (iT > iS) {
                this.a.b(true);
            }
        }
    }
}
