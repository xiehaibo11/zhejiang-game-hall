package com.tkay.core.common;

import android.content.Context;
import android.os.CountDownTimer;
import android.os.SystemClock;
import com.tkay.core.api.AdError;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYCustomLoadListener;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.aj;
import java.util.Arrays;
import java.util.List;

public final class g extends CountDownTimer {
    protected aj a;
    protected com.tkay.core.common.f.d b;
    protected com.tkay.core.c.d c;
    boolean d;
    private final String e;

    @Override
    public final void onTick(long j) {
    }

    public g(long j, long j2, aj ajVar, com.tkay.core.common.f.d dVar) {
        super(j, j2);
        this.e = getClass().getSimpleName();
        this.d = false;
        this.a = ajVar;
        this.b = dVar;
    }

    @Override
    public final void onFinish() {
        Context contextF;
        TYBaseAdAdapter tYBaseAdAdapterA;
        if (this.a == null || this.b == null || (contextF = com.tkay.core.common.b.m.a().f()) == null || (tYBaseAdAdapterA = com.tkay.core.common.l.i.a(this.a)) == null) {
            return;
        }
        this.b.q = 1;
        this.b.r = 0;
        this.b.s = 0;
        tYBaseAdAdapterA.setTrackingInfo(this.b);
        tYBaseAdAdapterA.setUnitGroupInfo(this.a);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        com.tkay.core.common.k.a.a(contextF).a(1, this.b);
        com.tkay.core.common.l.g.a(this.b, f.i.a, f.i.n, "");
        this.c = com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(this.b.W());
        com.tkay.core.common.a.a().a(this.b.W(), this.b.x());
        this.d = false;
        tYBaseAdAdapterA.internalLoad(contextF, this.c.a(this.b.W(), this.b.X(), tYBaseAdAdapterA.getUnitGroupInfo()), v.a().b(this.b.W()), new a(this, jElapsedRealtime, tYBaseAdAdapterA, (byte) 0));
    }

    private void a(Context context) {
        TYBaseAdAdapter tYBaseAdAdapterA = com.tkay.core.common.l.i.a(this.a);
        if (tYBaseAdAdapterA == null) {
            return;
        }
        this.b.q = 1;
        this.b.r = 0;
        this.b.s = 0;
        tYBaseAdAdapterA.setTrackingInfo(this.b);
        tYBaseAdAdapterA.setUnitGroupInfo(this.a);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        com.tkay.core.common.k.a.a(context).a(1, this.b);
        com.tkay.core.common.l.g.a(this.b, f.i.a, f.i.n, "");
        this.c = com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(this.b.W());
        com.tkay.core.common.a.a().a(this.b.W(), this.b.x());
        this.d = false;
        tYBaseAdAdapterA.internalLoad(context, this.c.a(this.b.W(), this.b.X(), tYBaseAdAdapterA.getUnitGroupInfo()), v.a().b(this.b.W()), new a(this, jElapsedRealtime, tYBaseAdAdapterA, (byte) 0));
    }

    protected static void a(long j, com.tkay.core.common.b.n nVar) {
        nVar.getTrackingInfo().c(SystemClock.elapsedRealtime() - j);
    }

    protected final void a(long j, TYBaseAdAdapter tYBaseAdAdapter, List<? extends BaseAd> list) {
        com.tkay.core.common.f.d trackingInfo = tYBaseAdAdapter.getTrackingInfo();
        if (!this.d) {
            this.d = true;
            trackingInfo.d(SystemClock.elapsedRealtime() - j);
            com.tkay.core.common.k.a.a(com.tkay.core.common.b.m.a().f()).a(2, trackingInfo);
            com.tkay.core.common.l.g.a(trackingInfo, f.i.b, f.i.l, "");
        }
        com.tkay.core.common.a.a().a(trackingInfo.W(), trackingInfo.z(), tYBaseAdAdapter, list, this.a.p());
    }

    private void a(long j, com.tkay.core.common.b.n nVar, AdError adError) {
        com.tkay.core.common.f.d trackingInfo = nVar.getTrackingInfo();
        if (this.d) {
            return;
        }
        this.d = true;
        com.tkay.core.common.k.c.a(trackingInfo, 0, adError, SystemClock.elapsedRealtime() - j);
        com.tkay.core.common.l.g.a(trackingInfo, f.i.b, f.i.m, adError.printStackTrace());
    }

    private class a implements TYCustomLoadListener {
        TYBaseAdAdapter a;
        long b;

        a(g gVar, long j, TYBaseAdAdapter tYBaseAdAdapter, byte b) {
            this(j, tYBaseAdAdapter);
        }

        private a(long j, TYBaseAdAdapter tYBaseAdAdapter) {
            this.b = j;
            this.a = tYBaseAdAdapter;
        }

        @Override
        public final void onAdDataLoaded() {
            g.a(this.b, this.a);
        }

        @Override
        public final void onAdCacheLoaded(BaseAd... baseAdArr) {
            g.this.a(this.b, this.a, baseAdArr != null ? Arrays.asList(baseAdArr) : null);
            TYBaseAdAdapter tYBaseAdAdapter = this.a;
            if (tYBaseAdAdapter != null) {
                tYBaseAdAdapter.releaseLoadResource();
            }
        }

        @Override
        public final void onAdLoadError(String str, String str2) {
            g gVar = g.this;
            long j = this.b;
            TYBaseAdAdapter tYBaseAdAdapter = this.a;
            AdError errorCode = ErrorCode.getErrorCode(ErrorCode.noADError, str, str2);
            com.tkay.core.common.f.d trackingInfo = tYBaseAdAdapter.getTrackingInfo();
            if (!gVar.d) {
                gVar.d = true;
                com.tkay.core.common.k.c.a(trackingInfo, 0, errorCode, SystemClock.elapsedRealtime() - j);
                com.tkay.core.common.l.g.a(trackingInfo, f.i.b, f.i.m, errorCode.printStackTrace());
            }
            TYBaseAdAdapter tYBaseAdAdapter2 = this.a;
            if (tYBaseAdAdapter2 != null) {
                tYBaseAdAdapter2.releaseLoadResource();
            }
        }
    }
}
