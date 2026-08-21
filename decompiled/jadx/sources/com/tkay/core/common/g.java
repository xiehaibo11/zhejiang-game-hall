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

/* JADX INFO: loaded from: classes3.dex */
public final class g extends CountDownTimer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected aj f6170a;
    protected com.tkay.core.common.f.d b;
    protected com.tkay.core.c.d c;
    boolean d;
    private final String e;

    @Override // android.os.CountDownTimer
    public final void onTick(long j) {
    }

    public g(long j, long j2, aj ajVar, com.tkay.core.common.f.d dVar) {
        super(j, j2);
        this.e = getClass().getSimpleName();
        this.d = false;
        this.f6170a = ajVar;
        this.b = dVar;
    }

    @Override // android.os.CountDownTimer
    public final void onFinish() {
        Context contextF;
        TYBaseAdAdapter tYBaseAdAdapterA;
        if (this.f6170a == null || this.b == null || (contextF = com.tkay.core.common.b.m.a().f()) == null || (tYBaseAdAdapterA = com.tkay.core.common.l.i.a(this.f6170a)) == null) {
            return;
        }
        this.b.q = 1;
        this.b.r = 0;
        this.b.s = 0;
        tYBaseAdAdapterA.setTrackingInfo(this.b);
        tYBaseAdAdapterA.setUnitGroupInfo(this.f6170a);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        com.tkay.core.common.k.a.a(contextF).a(1, this.b);
        com.tkay.core.common.l.g.a(this.b, f.i.f6058a, f.i.n, "");
        this.c = com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(this.b.W());
        com.tkay.core.common.a.a().a(this.b.W(), this.b.x());
        this.d = false;
        tYBaseAdAdapterA.internalLoad(contextF, this.c.a(this.b.W(), this.b.X(), tYBaseAdAdapterA.getUnitGroupInfo()), v.a().b(this.b.W()), new a(this, jElapsedRealtime, tYBaseAdAdapterA, (byte) 0));
    }

    private void a(Context context) {
        TYBaseAdAdapter tYBaseAdAdapterA = com.tkay.core.common.l.i.a(this.f6170a);
        if (tYBaseAdAdapterA == null) {
            return;
        }
        this.b.q = 1;
        this.b.r = 0;
        this.b.s = 0;
        tYBaseAdAdapterA.setTrackingInfo(this.b);
        tYBaseAdAdapterA.setUnitGroupInfo(this.f6170a);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        com.tkay.core.common.k.a.a(context).a(1, this.b);
        com.tkay.core.common.l.g.a(this.b, f.i.f6058a, f.i.n, "");
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
        com.tkay.core.common.a.a().a(trackingInfo.W(), trackingInfo.z(), tYBaseAdAdapter, list, this.f6170a.p());
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        TYBaseAdAdapter f6171a;
        long b;

        /* synthetic */ a(g gVar, long j, TYBaseAdAdapter tYBaseAdAdapter, byte b) {
            this(j, tYBaseAdAdapter);
        }

        private a(long j, TYBaseAdAdapter tYBaseAdAdapter) {
            this.b = j;
            this.f6171a = tYBaseAdAdapter;
        }

        @Override // com.tkay.core.api.TYCustomLoadListener
        public final void onAdDataLoaded() {
            g.a(this.b, this.f6171a);
        }

        @Override // com.tkay.core.api.TYCustomLoadListener
        public final void onAdCacheLoaded(BaseAd... baseAdArr) {
            g.this.a(this.b, this.f6171a, baseAdArr != null ? Arrays.asList(baseAdArr) : null);
            TYBaseAdAdapter tYBaseAdAdapter = this.f6171a;
            if (tYBaseAdAdapter != null) {
                tYBaseAdAdapter.releaseLoadResource();
            }
        }

        @Override // com.tkay.core.api.TYCustomLoadListener
        public final void onAdLoadError(String str, String str2) {
            g gVar = g.this;
            long j = this.b;
            TYBaseAdAdapter tYBaseAdAdapter = this.f6171a;
            AdError errorCode = ErrorCode.getErrorCode(ErrorCode.noADError, str, str2);
            com.tkay.core.common.f.d trackingInfo = tYBaseAdAdapter.getTrackingInfo();
            if (!gVar.d) {
                gVar.d = true;
                com.tkay.core.common.k.c.a(trackingInfo, 0, errorCode, SystemClock.elapsedRealtime() - j);
                com.tkay.core.common.l.g.a(trackingInfo, f.i.b, f.i.m, errorCode.printStackTrace());
            }
            TYBaseAdAdapter tYBaseAdAdapter2 = this.f6171a;
            if (tYBaseAdAdapter2 != null) {
                tYBaseAdAdapter2.releaseLoadResource();
            }
        }
    }
}
