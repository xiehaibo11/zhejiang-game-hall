package com.kwad.sdk.core.report;

import android.content.Context;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.report.g;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ag;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

public final class aa<T extends g, R extends com.kwad.sdk.core.network.g> implements Runnable {
    protected final o<T> aqE;
    protected final c<T, R> atG;
    protected final AtomicInteger atH;
    protected final Context mContext;

    public aa(Context context, o<T> oVar, c<T, R> cVar, AtomicInteger atomicInteger) {
        this.mContext = context;
        this.aqE = oVar;
        this.atG = cVar;
        this.atH = atomicInteger;
    }

    private void Cq() {
        try {
            List<T> listBX = this.aqE.BX();
            if (listBX.isEmpty()) {
                return;
            }
            w(listBX);
        } catch (Throwable th) {
            ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(th);
        }
    }

    private void w(List<T> list) {
        List listD = com.kwad.sdk.utils.z.d(list, 200);
        int size = listD.size();
        AtomicBoolean atomicBoolean = new AtomicBoolean(false);
        for (int i = 0; i < size; i++) {
            this.atG.a((List) listD.get(i), atomicBoolean);
        }
    }

    @Override
    public final void run() {
        if (this.atH.get() > 0 || !ag.isNetworkConnected(this.mContext)) {
            return;
        }
        Cq();
    }
}
