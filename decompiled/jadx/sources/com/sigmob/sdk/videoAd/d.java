package com.sigmob.sdk.videoAd;

import android.os.Handler;
import com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable;
import com.czhj.sdk.common.utils.Preconditions;
import com.sigmob.sdk.base.common.g;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
class d extends RepeatingHandlerRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final l f5180a;
    private final a b;

    public d(l lVar, a aVar, Handler handler) {
        super(handler);
        Preconditions.NoThrow.checkNotNull(lVar);
        Preconditions.NoThrow.checkNotNull(aVar);
        this.f5180a = lVar;
        this.b = aVar;
        ArrayList arrayList = new ArrayList();
        arrayList.add(new f(g.a.QUARTILE_EVENT, com.sigmob.sdk.base.common.a.AD_START, 0.0f));
        arrayList.add(new f(g.a.QUARTILE_EVENT, com.sigmob.sdk.base.common.a.AD_PLAY_QUARTER, 0.25f));
        arrayList.add(new f(g.a.QUARTILE_EVENT, com.sigmob.sdk.base.common.a.AD_PLAY_TWO_QUARTERS, 0.5f));
        arrayList.add(new f(g.a.QUARTILE_EVENT, com.sigmob.sdk.base.common.a.AD_PLAY_THREE_QUARTERS, 0.75f));
        this.b.a(arrayList);
    }

    @Override // com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable
    public void doWork() {
        int iS = this.f5180a.s();
        int iT = this.f5180a.t();
        if (iS > 0) {
            if (this.f5180a.w()) {
                this.f5180a.c(false);
            }
            this.f5180a.x();
            if (iT + 1000 < iS && this.f5180a.p()) {
                this.f5180a.v();
            }
            if (this.f5180a.q()) {
                this.f5180a.r();
            }
            for (com.sigmob.sdk.base.common.g gVar : this.b.a(iT, iS)) {
                this.f5180a.a(gVar.p());
                gVar.l();
            }
            if (iT > iS) {
                this.f5180a.b(true);
            }
        }
    }
}
