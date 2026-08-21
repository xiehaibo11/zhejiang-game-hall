package com.tkay.core.common.m;

import android.app.Activity;
import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYCustomLoadListener;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.b.p;
import com.tkay.core.common.f.ad;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.l;
import com.tkay.core.common.l.i;
import com.tkay.core.common.l.s;
import com.tkay.core.common.l.t;
import com.tkay.core.common.v;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class d {
    public static final String a = d.class.getSimpleName();
    String b;
    aj c;
    com.tkay.core.common.f.d d;
    String e;
    int f;
    TYBaseAdAdapter g;
    b h;
    boolean i;
    boolean j;
    long k;
    long l;
    Runnable m;
    Runnable n;
    c o;
    Boolean p;
    int q;
    String r;
    boolean s;

    public d(aj ajVar, int i) {
        this.c = ajVar;
        this.q = i;
        this.e = ajVar.t();
        this.r = this.e + "_" + hashCode();
    }

    public final String a() {
        return this.r;
    }

    public final void a(c cVar) {
        this.o = cVar;
        this.b = cVar.d;
        this.d = cVar.h;
        this.f = cVar.g;
    }

    public final void a(b bVar) {
        this.h = bVar;
    }

    public final void b() {
        boolean z;
        BaseAd baseAdB;
        TYBaseAdAdapter tYBaseAdAdapterA;
        String str;
        this.s = true;
        if (this.c.j() && this.c.M() != null && !TextUtils.isEmpty(this.o.c)) {
            this.c.M().b(this.o.c);
        }
        com.tkay.core.common.f.a aVarA = com.tkay.core.common.a.a().a(this.b, this.c);
        if (aVarA != null && aVarA.a()) {
            b bVar = this.h;
            if (bVar != null) {
                bVar.b(aVarA.e().getTrackingInfo());
            }
            b(aVarA.e(), this.c);
            return;
        }
        l lVarM = this.c.M();
        if (lVarM == null || !lVarM.s) {
            z = false;
            baseAdB = null;
            tYBaseAdAdapterA = null;
        } else {
            com.tkay.core.b.c.a aVar = lVarM.r;
            if (aVar != null) {
                tYBaseAdAdapterA = aVar.a();
                baseAdB = aVar.b();
            } else {
                baseAdB = null;
                tYBaseAdAdapterA = null;
            }
            lVarM.r = null;
            z = true;
        }
        if (tYBaseAdAdapterA == null && !z) {
            tYBaseAdAdapterA = i.a(this.c);
        }
        if (tYBaseAdAdapterA == null) {
            if (this.h != null) {
                com.tkay.core.common.m.a aVar2 = new com.tkay.core.common.m.a();
                aVar2.a = 0;
                aVar2.c = z ? this.c.k() : 0L;
                String str2 = z ? ErrorCode.c2sBiddingCacheError : "2002";
                if (z) {
                    str = "";
                } else {
                    str = this.c.h() + " does not exist!";
                }
                aVar2.b = ErrorCode.getErrorCode(str2, "", str);
                a((TYBaseAdAdapter) null, aVar2);
                return;
            }
            return;
        }
        try {
            com.tkay.core.common.l.d.a(this.c.c(), tYBaseAdAdapterA.getNetworkSDKVersion());
        } catch (Throwable unused) {
        }
        com.tkay.core.common.f.d dVarA = s.a(tYBaseAdAdapterA, this.d, this.c);
        this.d = dVarA;
        b bVar2 = this.h;
        if (bVar2 != null) {
            bVar2.a(dVarA);
        }
        long jB = this.c.B();
        if (jB != -1) {
            this.m = p();
            m.a().a(this.m, jB);
        }
        long jQ = this.c.q();
        if (jQ != -1) {
            this.n = p();
            m.a().a(this.n, jQ);
        }
        this.k = SystemClock.elapsedRealtime();
        Context context = this.o.b.get();
        if (context != null && (context instanceof Activity)) {
            tYBaseAdAdapterA.refreshActivityContext((Activity) context);
        }
        if (z) {
            b bVar3 = this.h;
            if (bVar3 != null) {
                bVar3.b(this.d);
            }
            if (baseAdB != null) {
                a(tYBaseAdAdapterA, baseAdB);
                return;
            } else {
                a(tYBaseAdAdapterA, new BaseAd[0]);
                return;
            }
        }
        1 r2 = new 1(tYBaseAdAdapterA, this.c, k());
        if (TextUtils.equals(String.valueOf(this.o.e.Y()), "2")) {
            m.a().a(r2);
        } else {
            com.tkay.core.common.l.b.a.a().b(r2);
        }
    }

    private void a(long j) {
        if (j == -1) {
            return;
        }
        this.n = p();
        m.a().a(this.n, j);
    }

    private void b(long j) {
        if (j == -1) {
            return;
        }
        this.m = p();
        m.a().a(this.m, j);
    }

    private void i() {
        if (this.m != null) {
            m.a().c(this.m);
            this.m = null;
        }
    }

    private void j() {
        if (this.n != null) {
            m.a().c(this.n);
            this.n = null;
        }
    }

    private void a(TYBaseAdAdapter tYBaseAdAdapter, aj ajVar) {
        1 r1 = new 1(tYBaseAdAdapter, ajVar, k());
        if (TextUtils.equals(String.valueOf(this.o.e.Y()), "2")) {
            m.a().a(r1);
        } else {
            com.tkay.core.common.l.b.a.a().b(r1);
        }
    }

    final class 1 implements Runnable {
        final TYBaseAdAdapter a;
        final aj b;
        final Map c;

        1(TYBaseAdAdapter tYBaseAdAdapter, aj ajVar, Map map) {
            this.a = tYBaseAdAdapter;
            this.b = ajVar;
            this.c = map;
        }

        @Override
        public final void run() {
            if (d.this.h != null) {
                d.this.h.a(this.a);
            }
            Context contextA = d.a(d.this);
            byte b = 0;
            if (contextA == null) {
                if (d.this.h != null) {
                    com.tkay.core.common.m.a aVar = new com.tkay.core.common.m.a();
                    aVar.a = 0;
                    aVar.c = SystemClock.elapsedRealtime() - d.this.k;
                    aVar.b = ErrorCode.getErrorCode(ErrorCode.adapterInnerError, "", "Request Context is null! Please check the Ad init Context.");
                    d.this.a(this.a, aVar);
                    return;
                }
                return;
            }
            d.a(d.this, contextA, this.b, this.a);
            try {
                Map<String, Object> mapB = d.b(d.this);
                d.this.g = this.a;
                this.a.internalLoad(contextA, this.c, mapB, new a(d.this, d.this, this.a, b));
                com.tkay.core.common.f.d trackingInfo = this.a.getTrackingInfo();
                trackingInfo.g(this.a.getNetworkPlacementId());
                if (d.this.h != null) {
                    d.this.h.b(trackingInfo);
                }
            } catch (Throwable th) {
                com.tkay.core.common.m.a aVar2 = new com.tkay.core.common.m.a();
                aVar2.a = 0;
                aVar2.c = SystemClock.elapsedRealtime() - d.this.k;
                aVar2.b = ErrorCode.getErrorCode(ErrorCode.adapterInnerError, "", th.getMessage());
                d.this.a(this.a, aVar2);
            }
        }
    }

    private void a(Context context, aj ajVar, TYBaseAdAdapter tYBaseAdAdapter) {
        if (com.tkay.core.c.a.an()) {
            p pVarA = p.a(m.a().f());
            try {
                if (pVarA.c(ajVar.c()) || !tYBaseAdAdapter.setUserDataConsent(context, pVarA.c(), TYSDK.isEUTraffic(this.o.a))) {
                    return;
                }
                pVarA.b(ajVar.c());
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    private void a(TYBaseAdAdapter tYBaseAdAdapter) {
        this.g = tYBaseAdAdapter;
    }

    private Map<String, Object> k() {
        com.tkay.core.c.d dVar = this.o.e;
        String str = this.o.c;
        if (dVar == null) {
            return new HashMap();
        }
        Map<String, Object> mapA = dVar.a(this.b, str, this.c);
        int iC = this.c.c();
        if (iC == 2) {
            com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.o.a).b(m.a().o());
            if (aVarB != null) {
                mapA.put(f.k.p, Boolean.valueOf(aVarB.j() == 1));
            }
            mapA.put(f.k.s, Integer.valueOf(dVar.a()));
        } else if (iC == 6) {
            JSONObject jSONObjectA = com.tkay.core.common.l.g.a(this.o.a, str, this.b, dVar.Y(), this.f);
            if (dVar.aw() == 1) {
                mapA.put("tp_info", jSONObjectA.toString());
            }
        }
        if (t.a(this.c) && this.o.e.ar() == 1) {
            ad adVarA = com.tkay.core.a.a.a(this.o.a).a(this.b);
            mapA.put(f.k.k, Integer.valueOf(adVarA != null ? adVarA.c : 0));
            synchronized (v.a().a(this.b)) {
                String strA = v.a().a(this.b, this.c.c());
                if (!TextUtils.isEmpty(strA)) {
                    mapA.put(f.k.l, strA);
                }
            }
        }
        return mapA;
    }

    private Map<String, Object> l() {
        Map<String, Object> map = this.o.f;
        return map == null ? new HashMap(2) : map;
    }

    private Context m() {
        Context contextD = this.o.b.get();
        if (!(contextD instanceof Activity)) {
            contextD = m.a().D();
        }
        if (TYSDK.isNetworkLogDebug()) {
            Log.d(a, "requestContext = ".concat(String.valueOf(contextD)));
        }
        return contextD;
    }

    public final synchronized void c() {
        if (n()) {
            return;
        }
        this.p = Boolean.FALSE;
        this.j = true;
        com.tkay.core.common.m.a aVar = new com.tkay.core.common.m.a();
        aVar.a = 0;
        aVar.c = SystemClock.elapsedRealtime() - this.k;
        aVar.b = ErrorCode.getErrorCode(ErrorCode.timeOutError, "", "");
        a(this.g, aVar);
    }

    private boolean n() {
        return !this.s || this.j || s();
    }

    private synchronized void o() {
        if (n()) {
            return;
        }
        this.i = true;
        new StringBuilder("network short timeout: ").append(this.e);
        if (this.h != null) {
            this.h.a(this.r, this.e);
        }
    }

    private Runnable p() {
        return new Runnable() {
            @Override
            public final void run() {
                com.tkay.core.common.l.b.a.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        d.this.o();
                    }
                });
            }
        };
    }

    public class a implements TYCustomLoadListener {
        TYBaseAdAdapter a;
        d b;

        a(d dVar, d dVar2, TYBaseAdAdapter tYBaseAdAdapter, byte b) {
            this(dVar2, tYBaseAdAdapter);
        }

        private a(d dVar, TYBaseAdAdapter tYBaseAdAdapter) {
            this.b = dVar;
            this.a = tYBaseAdAdapter;
        }

        @Override
        public final void onAdDataLoaded() {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    synchronized (a.this) {
                        if (a.this.b != null && a.this.a != null) {
                            a.this.b.q();
                        }
                    }
                }
            });
        }

        @Override
        public final void onAdCacheLoaded(final BaseAd... baseAdArr) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    synchronized (a.this) {
                        if (a.this.b != null && a.this.a != null) {
                            a.this.b.a(a.this.a, baseAdArr);
                            a.this.b = null;
                            a.this.a = null;
                        }
                    }
                }
            });
        }

        @Override
        public final void onAdLoadError(final String str, final String str2) {
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    synchronized (a.this) {
                        if (a.this.b != null && a.this.a != null) {
                            com.tkay.core.common.m.a aVar = new com.tkay.core.common.m.a();
                            aVar.a = 0;
                            aVar.b = ErrorCode.getErrorCode(ErrorCode.noADError, str, str2);
                            aVar.c = SystemClock.elapsedRealtime() - d.this.k;
                            a.this.b.a(a.this.a, aVar);
                            a.this.b = null;
                            a.this.a = null;
                        }
                    }
                }
            });
        }
    }

    private synchronized void q() {
        i();
        long jElapsedRealtime = SystemClock.elapsedRealtime() - this.k;
        this.l = jElapsedRealtime;
        if (this.d != null) {
            this.d.c(jElapsedRealtime);
        }
    }

    private synchronized void a(TYBaseAdAdapter tYBaseAdAdapter, BaseAd... baseAdArr) {
        if (n()) {
            return;
        }
        aj unitGroupInfo = tYBaseAdAdapter.getUnitGroupInfo();
        this.d.d((SystemClock.elapsedRealtime() - this.k) + (unitGroupInfo.l() == 2 ? unitGroupInfo.k() : 0L));
        i();
        j();
        this.g = null;
        this.p = Boolean.TRUE;
        if (this.i) {
            this.d.r = 1;
        }
        com.tkay.core.common.f.d dVar = this.d;
        if (tYBaseAdAdapter != null && unitGroupInfo != null) {
            Map<String, Object> networkInfoMap = tYBaseAdAdapter.getNetworkInfoMap();
            if (baseAdArr != null && baseAdArr.length > 0) {
                BaseAd baseAd = baseAdArr[0];
                if (baseAd.getNetworkInfoMap() != null) {
                    networkInfoMap = baseAd.getNetworkInfoMap();
                }
            }
            l lVarM = unitGroupInfo.M();
            if (lVarM != null) {
                lVarM.a(networkInfoMap);
                lVarM.a(dVar);
            }
        }
        if (this.h != null) {
            this.h.a(this.r, tYBaseAdAdapter, baseAdArr);
        }
    }

    private static void a(TYBaseAdAdapter tYBaseAdAdapter, aj ajVar, com.tkay.core.common.f.d dVar, BaseAd... baseAdArr) {
        if (tYBaseAdAdapter == null || ajVar == null) {
            return;
        }
        Map<String, Object> networkInfoMap = tYBaseAdAdapter.getNetworkInfoMap();
        if (baseAdArr != null && baseAdArr.length > 0) {
            BaseAd baseAd = baseAdArr[0];
            if (baseAd.getNetworkInfoMap() != null) {
                networkInfoMap = baseAd.getNetworkInfoMap();
            }
        }
        l lVarM = ajVar.M();
        if (lVarM != null) {
            lVarM.a(networkInfoMap);
            lVarM.a(dVar);
        }
    }

    private synchronized void b(TYBaseAdAdapter tYBaseAdAdapter, aj ajVar) {
        if (n()) {
            return;
        }
        i();
        j();
        this.g = null;
        this.p = Boolean.TRUE;
        if (this.i) {
            this.d.r = 1;
        }
        if (this.h != null) {
            this.h.a(this.r, tYBaseAdAdapter, ajVar);
        }
    }

    public final synchronized void a(final TYBaseAdAdapter tYBaseAdAdapter, com.tkay.core.common.m.a aVar) {
        if (n()) {
            return;
        }
        i();
        j();
        if (tYBaseAdAdapter != null) {
            m.a().a(new Runnable() {
                @Override
                public final void run() {
                    try {
                        if (tYBaseAdAdapter != null) {
                            tYBaseAdAdapter.destory();
                        }
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            });
        }
        this.g = null;
        this.p = Boolean.FALSE;
        if (!this.j) {
            if (this.i) {
                this.d.r = 1;
            }
        } else {
            this.d.r = 2;
        }
        if (!this.j) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            com.tkay.core.common.c.a().a(this.e, jCurrentTimeMillis);
            com.tkay.core.common.c.a().a(this.e, jCurrentTimeMillis, aVar.b);
        }
        aVar.d = this.d;
        aVar.e = this.c;
        if (this.h != null) {
            this.h.a(this.r, aVar);
        }
    }

    private void r() {
        this.g = null;
    }

    public final Boolean d() {
        return this.p;
    }

    private boolean s() {
        return this.p != null;
    }

    public final boolean e() {
        return (s() && this.i) ? false : true;
    }

    public final int f() {
        return this.q;
    }

    private long t() {
        return this.k;
    }

    public final boolean g() {
        return this.i;
    }

    public final aj h() {
        return this.c;
    }

    static Context a(d dVar) {
        Context contextD = dVar.o.b.get();
        if (!(contextD instanceof Activity)) {
            contextD = m.a().D();
        }
        if (TYSDK.isNetworkLogDebug()) {
            Log.d(a, "requestContext = ".concat(String.valueOf(contextD)));
        }
        return contextD;
    }

    static void a(d dVar, Context context, aj ajVar, TYBaseAdAdapter tYBaseAdAdapter) {
        if (com.tkay.core.c.a.an()) {
            p pVarA = p.a(m.a().f());
            try {
                if (pVarA.c(ajVar.c()) || !tYBaseAdAdapter.setUserDataConsent(context, pVarA.c(), TYSDK.isEUTraffic(dVar.o.a))) {
                    return;
                }
                pVarA.b(ajVar.c());
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    static Map b(d dVar) {
        Map<String, Object> map = dVar.o.f;
        return map == null ? new HashMap(2) : map;
    }
}
