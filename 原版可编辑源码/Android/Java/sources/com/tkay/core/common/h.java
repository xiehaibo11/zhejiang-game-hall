package com.tkay.core.common;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.ITYAdFilter;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.k;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public abstract class h {
    int A;
    int B;
    ConcurrentHashMap<String, aj> D;
    aj F;
    protected Runnable J;
    com.tkay.core.common.m.f L;
    aj N;
    double O;
    aj Q;
    List<aj> R;
    protected WeakReference<Context> b;
    protected int c;
    protected com.tkay.core.c.d e;
    protected String f;
    protected String g;
    Map<String, Object> h;
    com.tkay.core.common.f.d i;
    protected j j;
    protected com.tkay.core.common.b.b l;
    boolean p;
    boolean q;
    List<aj> t;
    List<aj> u;
    List<aj> v;
    String x;
    long z;
    private final String T = getClass().getSimpleName();
    protected String d = "";
    protected int k = 0;
    boolean m = false;
    boolean n = false;
    protected boolean o = false;
    boolean r = false;
    boolean s = false;
    Object C = new Object();
    double E = -1.0d;
    protected Runnable I = null;
    protected Runnable M = new Runnable() {
        @Override
        public final void run() {
            com.tkay.core.common.l.b.a.a().b(new Runnable() {
                @Override
                public final void run() {
                    h.this.a();
                }
            });
        }
    };
    boolean P = false;
    boolean S = false;
    protected Context a = com.tkay.core.common.b.m.a().f();
    List<com.tkay.core.common.m.e> w = Collections.synchronizedList(new ArrayList(2));
    AdError y = ErrorCode.getErrorCode(ErrorCode.noADError, "", "");
    protected Map<String, com.tkay.core.common.m.d> G = new ConcurrentHashMap();
    List<aj> H = Collections.synchronizedList(new ArrayList(3));
    com.tkay.core.common.m.h K = new com.tkay.core.common.m.h();

    public static class a {
        public static final int a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public static final int d = 4;
        public static final int e = 5;
    }

    static boolean c(int i) {
        return i == 3 || i == 5;
    }

    private static boolean d(int i) {
        return i == 3 || i == 5;
    }

    public abstract void a(TYBaseAdAdapter tYBaseAdAdapter);

    private synchronized void j() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.g);
        sb.append(":filled timeup to check cache.");
        com.tkay.core.common.f.a aVarA = com.tkay.core.common.a.a().a(this.a, this.g);
        this.s = true;
        if (!this.o && aVarA != null) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(this.g);
            sb2.append(":filled timeup to check cache exist.");
            d(aVarA.e() != null ? aVarA.e().getUnitGroupInfo() : null);
            b(9);
            return;
        }
        StringBuilder sb3 = new StringBuilder();
        sb3.append(this.g);
        sb3.append(":filled timeup to check no cache, do nothing.");
    }

    protected final synchronized void a() {
        ConcurrentHashMap concurrentHashMap;
        this.K.a();
        synchronized (this.G) {
            concurrentHashMap = new ConcurrentHashMap(this.G);
        }
        Iterator it = concurrentHashMap.entrySet().iterator();
        while (it.hasNext()) {
            com.tkay.core.common.m.d dVar = (com.tkay.core.common.m.d) ((Map.Entry) it.next()).getValue();
            if (dVar != null) {
                dVar.c();
            }
        }
        if (!this.o) {
            this.o = true;
            z();
        }
        l();
    }

    public h(Context context) {
        this.b = new WeakReference<>(context);
    }

    private void a(Map<String, Object> map) {
        this.h = map;
    }

    private void a(com.tkay.core.common.f.d dVar) {
        this.i = dVar;
    }

    public final void a(com.tkay.core.common.b.b bVar) {
        this.l = bVar;
    }

    public final void a(j jVar) {
        this.j = jVar;
    }

    public final void a(int i) {
        this.k = i;
    }

    private synchronized void k() {
        if (this.p) {
            synchronized (this.t) {
                for (aj ajVar : this.t) {
                    if (ajVar != null && ajVar.j()) {
                        a(ajVar);
                    }
                }
                this.t.clear();
            }
            synchronized (this.w) {
                for (com.tkay.core.common.m.e eVar : this.w) {
                    if (eVar != null && eVar.a() != null && eVar.a().j()) {
                        a(eVar.a());
                    }
                }
                this.w.clear();
            }
            synchronized (this.v) {
                this.v.clear();
            }
        }
    }

    private void a(aj ajVar) {
        if (ajVar != null && ajVar.j() && ajVar.K() == 2) {
            String str = this.f;
            String str2 = this.g;
            String str3 = this.d;
            com.tkay.core.c.d dVar = this.e;
            int i = this.k;
            int i2 = this.c;
            j jVar = this.j;
            com.tkay.core.common.m.f.a(ajVar, com.tkay.core.common.l.s.a(str, str2, str3, dVar, "", 1, i, i2, jVar != null ? jVar.g : null), this.F, true);
        }
    }

    private synchronized void a(List<aj> list, int i) {
        if (!this.K.b() && !this.K.c() && list != null && list.size() != 0) {
            this.u.addAll(list);
            new StringBuilder("addAdSourceToRequestingPool:start to request:  requesting size:").append(this.u.size());
            Iterator<aj> it = list.iterator();
            while (it.hasNext()) {
                b(it.next(), i);
            }
        }
    }

    private synchronized void l() {
        double dA = this.L.a(false);
        double dS = s();
        new StringBuilder("checkWaterfallStatus: vail requesting num: ").append(this.L.d());
        new StringBuilder("checkWaterfallStatus:isFinishBidding:").append(this.m);
        new StringBuilder("checkWaterfallStatus:currentCacheNum >= mStrategy.getCachedOffersNum():").append(this.B >= this.e.an());
        new StringBuilder("checkWaterfallStatus:getCacheLowestPrice() > getWaitingResponseMaxPrice():").append(dA > dS);
        new StringBuilder("checkWaterfallStatus:requestHasShow:").append(this.K.c());
        new StringBuilder("checkWaterfallStatus:hasLongTimeout:").append(this.K.b());
        if ((this.m && this.B >= this.e.an() && dA >= dS) || this.K.c() || this.K.b()) {
            this.p = true;
            k();
            if (this.L.d() == 0) {
                com.tkay.core.common.m.f.a(this.a, this.g);
                q();
            }
        }
        p();
        if (this.p || A()) {
            q();
        }
    }

    private synchronized void a(aj ajVar, int i) {
        List<aj> list;
        if (i == 2) {
            list = this.v;
        } else {
            list = this.t;
        }
        synchronized (list) {
            com.tkay.core.common.l.g.a(list, ajVar, false);
        }
    }

    private synchronized void e(int i) {
        int iF;
        if (i == 2) {
            iF = this.L.f();
        } else {
            iF = this.L.e();
        }
        if (iF == 0) {
            StringBuilder sb = new StringBuilder("checkToAddAdSourceToRequestingPool: vail requesting num: ");
            sb.append(iF);
            sb.append(" | requestFrom: ");
            sb.append(i);
            a(this.L.b(i), i);
        }
    }

    private synchronized void b(aj ajVar) {
        this.u.remove(ajVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00ad A[Catch: all -> 0x0033, TryCatch #0 {all -> 0x0033, blocks: (B:5:0x0005, B:6:0x0009, B:8:0x000f, B:12:0x0038, B:14:0x003f, B:17:0x0047, B:39:0x00c9, B:40:0x00cd, B:42:0x00d3, B:44:0x00eb, B:45:0x00f2, B:46:0x0100, B:20:0x0064, B:35:0x0096, B:37:0x00ad, B:38:0x00af, B:24:0x007e, B:48:0x0102), top: B:52:0x0005 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(List<aj> list, List<aj> list2, List<aj> list3) {
        String str;
        String str2;
        String str3;
        synchronized (this.C) {
            if (list2 != null) {
                try {
                    for (aj ajVar : list2) {
                        this.y.putNetworkErrorMsg(ajVar.t(), ajVar.c(), ajVar.d(), ErrorCode.getErrorCode(ErrorCode.noADError, "", ajVar.z()));
                    }
                } catch (Throwable th) {
                    throw th;
                }
            }
            if (list3 != null) {
                this.H.addAll(list3);
            }
            if (list != null && list.size() != 0) {
                this.K.f();
                aj ajVar2 = list.get(0);
                boolean zA = com.tkay.core.common.m.f.a(ajVar2, this.K);
                boolean zC = this.L.c(ajVar2);
                if (zA || zC) {
                    StringBuilder sb = new StringBuilder("isAdvanceRequest: ");
                    sb.append(zA);
                    sb.append(", cutInLine: ");
                    sb.append(zC);
                    if (this.o) {
                        str = this.n ? "2" : "3";
                    } else {
                        str = "1";
                    }
                    String str4 = str;
                    if (zA) {
                        str3 = "1";
                    } else if (zC) {
                        str3 = "2";
                    } else {
                        str2 = "1";
                        com.tkay.core.common.k.c.a(this.i, ajVar2.c(), ajVar2.t(), com.tkay.core.common.l.g.a(ajVar2), str4, str2);
                        if (ajVar2.Z()) {
                            this.N = ajVar2;
                        }
                        this.L.a(ajVar2);
                        list.remove(0);
                        this.u.add(ajVar2);
                        com.tkay.core.common.m.f.a(this.a, this.g, this.f, null, ajVar2);
                        b(ajVar2, 3);
                    }
                    str2 = str3;
                    com.tkay.core.common.k.c.a(this.i, ajVar2.c(), ajVar2.t(), com.tkay.core.common.l.g.a(ajVar2), str4, str2);
                    if (ajVar2.Z()) {
                    }
                    this.L.a(ajVar2);
                    list.remove(0);
                    this.u.add(ajVar2);
                    com.tkay.core.common.m.f.a(this.a, this.g, this.f, null, ajVar2);
                    b(ajVar2, 3);
                }
                for (aj ajVar3 : list) {
                    this.L.a(ajVar3);
                    com.tkay.core.common.m.f.a(this.a, this.g, this.f, null, ajVar3);
                    if (this.D == null) {
                        this.D = new ConcurrentHashMap<>();
                    }
                    this.D.put(ajVar3.t(), ajVar3);
                    a(ajVar3, 1);
                }
            }
        }
    }

    private void c(aj ajVar) {
        if (this.D == null) {
            this.D = new ConcurrentHashMap<>();
        }
        this.D.put(ajVar.t(), ajVar);
    }

    protected final void a(com.tkay.core.common.m.g gVar) {
        com.tkay.core.common.m.f fVar = new com.tkay.core.common.m.f(gVar);
        this.L = fVar;
        this.t = fVar.a();
        this.u = this.L.b();
        this.m = gVar.e;
        this.f = gVar.b;
        this.g = gVar.a;
        this.e = gVar.c;
        this.c = gVar.f;
        this.x = com.tkay.core.common.m.f.a(gVar.d);
    }

    protected final void b() {
        long jP;
        List<aj> listC = this.L.c();
        this.v = listC;
        if (listC == null || listC.size() <= 0) {
            jP = 1000;
        } else {
            jP = this.e.p();
            if (this.t.size() == 0 && this.m) {
                jP = 0;
            }
            this.J = new 3();
        }
        this.z = SystemClock.elapsedRealtime();
        StringBuilder sb = new StringBuilder();
        sb.append(this.g);
        sb.append(": start waterfall.");
        if (this.e.n() > 0) {
            this.I = new 2();
            StringBuilder sb2 = new StringBuilder();
            sb2.append(this.g);
            sb2.append(": start filled count down.");
            com.tkay.core.common.b.m.a().a(this.I, this.e.n());
        } else {
            StringBuilder sb3 = new StringBuilder();
            sb3.append(this.g);
            sb3.append(": no filled count down.");
        }
        com.tkay.core.common.b.m.a().a(this.M, this.e.S());
        if (this.v.size() == 0 && this.t.size() == 0 && this.m) {
            v();
        }
        a(this.L.i(), 1);
        if (this.J != null) {
            com.tkay.core.common.b.m.a().a(this.J, jP);
        }
    }

    final class 2 implements Runnable {
        2() {
        }

        @Override
        public final void run() {
            h.this.I = null;
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    h.this.j();
                }
            });
        }
    }

    private void m() {
        if (this.e.n() > 0) {
            this.I = new 2();
            StringBuilder sb = new StringBuilder();
            sb.append(this.g);
            sb.append(": start filled count down.");
            com.tkay.core.common.b.m.a().a(this.I, this.e.n());
            return;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.g);
        sb2.append(": no filled count down.");
    }

    private void a(long j) {
        if (this.J != null) {
            com.tkay.core.common.b.m.a().a(this.J, j);
        }
    }

    final class 3 implements Runnable {
        3() {
        }

        @Override
        public final void run() {
            h.this.o();
        }
    }

    private Runnable n() {
        return new 3();
    }

    private synchronized void o() {
        if (!this.o && this.v.size() > 0) {
            this.J = null;
            aj ajVarRemove = this.v.remove(0);
            new StringBuilder("handleDefaultAdSourceRequest: startLoadDefaultAdSource:").append(ajVarRemove.aa());
            this.u.add(ajVarRemove);
            StringBuilder sb = new StringBuilder("handleDefaultAdSourceRequest:start to request: waiting size:");
            sb.append(this.v.size());
            sb.append("; requesting size:");
            sb.append(this.L.f());
            b(ajVarRemove, 2);
        }
    }

    private void b(final aj ajVar, final int i) {
        final com.tkay.core.common.m.d dVar = new com.tkay.core.common.m.d(ajVar, i);
        final String strA = dVar.a();
        this.G.put(strA, dVar);
        this.L.a(1, i);
        com.tkay.core.common.l.b.a.a().b(new Runnable() {
            @Override
            public final void run() {
                String string;
                synchronized (h.this) {
                    if (h.this.K.b()) {
                        h.this.G.remove(strA);
                        return;
                    }
                    if (com.tkay.core.common.l.t.a(ajVar) && TextUtils.isEmpty(v.a().a(h.this.g, ajVar.c()))) {
                        v.a().a(h.this.g, ajVar.c(), ajVar.g());
                    }
                    boolean zC = h.c(i);
                    String str = h.this.f;
                    String str2 = h.this.g;
                    String str3 = h.this.d;
                    com.tkay.core.c.d dVar2 = h.this.e;
                    if (zC) {
                        StringBuilder sb = new StringBuilder();
                        sb.append(ajVar.c());
                        string = sb.toString();
                    } else {
                        string = h.this.x;
                    }
                    com.tkay.core.common.f.d dVarA = com.tkay.core.common.l.s.a(str, str2, str3, dVar2, string, h.this.e.m(), h.this.k, h.this.c, h.this.j != null ? h.this.j.g : null);
                    if (h.this.i != null) {
                        dVarA.a(h.this.i.a());
                    }
                    com.tkay.core.common.l.s.a(dVarA, ajVar, h.this.A, true);
                    dVarA.a(SystemClock.elapsedRealtime() - h.this.z);
                    com.tkay.core.common.f.c cVarC = v.a().c(h.this.g);
                    int i2 = 0;
                    if (cVarC == null || !cVarC.a(ajVar)) {
                        String unused = h.this.T;
                        new StringBuilder("startAdSourceRequest: ").append(ajVar.aa());
                        try {
                            if (ajVar.j()) {
                                String unused2 = h.this.T;
                                com.tkay.core.common.f.l lVarM = ajVar.M();
                                if (ajVar.c() != 66 && ajVar.c() != 67) {
                                    com.tkay.core.b.c.a().a(ajVar.t());
                                }
                                if (lVarM != null && lVarM.a()) {
                                    i2 = 1;
                                }
                                if (i2 != 0 && lVarM != null) {
                                    com.tkay.core.common.f.q qVar = new com.tkay.core.common.f.q();
                                    qVar.a = 1;
                                    qVar.b = lVarM.getSortPrice();
                                    qVar.e = dVarA;
                                    qVar.c = ajVar;
                                    qVar.d = ajVar;
                                    lVarM.a(qVar, true);
                                }
                            }
                        } catch (Throwable unused3) {
                        }
                        h.this.A++;
                        if (i2 != 0) {
                            com.tkay.core.common.m.a aVar = new com.tkay.core.common.m.a();
                            aVar.a = 6;
                            aVar.b = ErrorCode.getErrorCode(ErrorCode.noADError, "", "Bid result has expired.");
                            aVar.c = 0L;
                            aVar.d = dVarA;
                            aVar.e = ajVar;
                            h.this.a(strA, aVar);
                            return;
                        }
                        if (ajVar.j()) {
                            h.this.d(ajVar);
                        }
                        int iAb = ajVar.ab();
                        if (iAb <= 0) {
                            if (h.this.n && h.this.B < h.this.e.an()) {
                                dVarA.q = 5;
                            }
                        } else {
                            dVarA.q = iAb;
                        }
                        h.a(h.this, dVar, dVarA);
                        return;
                    }
                    com.tkay.core.common.l.n.a(h.this.g, dVarA, "Can't Load On Showing", ajVar, -1, -1);
                    com.tkay.core.common.k.c.a(dVarA, 7, ErrorCode.getErrorCode(ErrorCode.loadInShowingFilter, "", "Can't Load On Showing"));
                    v.a().a(h.this.g, cVarC.a(), h.this.f);
                    synchronized (h.this.w) {
                        Iterator<com.tkay.core.common.m.e> it = h.this.w.iterator();
                        while (it.hasNext() && com.tkay.core.common.l.g.a(it.next().a()) > com.tkay.core.common.l.g.a(ajVar)) {
                            i2++;
                        }
                        h.this.w.add(i2, new com.tkay.core.common.m.e(ajVar, i));
                    }
                    h.this.b(ajVar);
                    h.this.L.a(i);
                    h.this.G.remove(strA);
                    h.this.L.a(-1, i);
                    h hVar = h.this;
                    hVar.a(hVar.L.b(i), i);
                }
            }
        });
    }

    private void a(com.tkay.core.common.m.d dVar, com.tkay.core.common.f.d dVar2) {
        com.tkay.core.common.m.c cVar = new com.tkay.core.common.m.c();
        cVar.a = this.a;
        cVar.b = this.b;
        cVar.c = this.f;
        cVar.d = this.g;
        cVar.e = this.e;
        cVar.f = this.h;
        cVar.g = this.A;
        cVar.h = dVar2;
        dVar.a(cVar);
        dVar.a(new 5());
        dVar.b();
    }

    final class 5 implements com.tkay.core.common.m.b {
        5() {
        }

        @Override
        public final void a(com.tkay.core.common.f.d dVar) {
            com.tkay.core.common.k.a.a(h.this.a).a(1, dVar);
            com.tkay.core.common.l.g.a(dVar, f.i.a, f.i.n, "");
        }

        @Override
        public final void b(com.tkay.core.common.f.d dVar) {
            h.a(h.this, dVar);
        }

        @Override
        public final void a(TYBaseAdAdapter tYBaseAdAdapter) {
            h.this.a(tYBaseAdAdapter);
        }

        @Override
        public final void a(String str, String str2) {
            h.this.a(str);
        }

        @Override
        public final void a(String str, TYBaseAdAdapter tYBaseAdAdapter, aj ajVar) {
            h.this.a(str, tYBaseAdAdapter, ajVar);
        }

        @Override
        public final void a(String str, TYBaseAdAdapter tYBaseAdAdapter, BaseAd... baseAdArr) {
            ITYAdFilter iTYAdFilterO = com.tkay.core.common.b.m.a().o(h.this.g);
            BaseAd baseAd = (baseAdArr == null || baseAdArr.length <= 0) ? null : baseAdArr[0];
            if (iTYAdFilterO != null && iTYAdFilterO.isAdFilter(com.tkay.core.common.b.i.a(tYBaseAdAdapter), baseAd)) {
                com.tkay.core.common.m.a aVar = new com.tkay.core.common.m.a();
                aVar.a = 8;
                aVar.c = tYBaseAdAdapter.getTrackingInfo().K();
                aVar.b = ErrorCode.getErrorCode(ErrorCode.adSourceNotFilledError, "", "");
                aVar.d = tYBaseAdAdapter.getTrackingInfo();
                aVar.e = tYBaseAdAdapter.getUnitGroupInfo();
                h.this.a(str, aVar);
                return;
            }
            h.this.a(str, tYBaseAdAdapter, baseAdArr != null ? Arrays.asList(baseAdArr) : null);
        }

        @Override
        public final void a(String str, com.tkay.core.common.m.a aVar) {
            h.this.a(str, aVar);
        }
    }

    private void b(com.tkay.core.common.f.d dVar) {
        com.tkay.core.common.b.b bVar = this.l;
        if (bVar != null) {
            bVar.c(dVar);
        }
    }

    private void c(com.tkay.core.common.f.d dVar) {
        com.tkay.core.common.b.b bVar = this.l;
        if (bVar != null) {
            bVar.d(dVar);
        }
    }

    private void a(com.tkay.core.common.f.d dVar, AdError adError) {
        com.tkay.core.common.b.b bVar = this.l;
        if (bVar != null) {
            bVar.b(dVar, adError);
        }
    }

    private synchronized void a(String str, TYBaseAdAdapter tYBaseAdAdapter, aj ajVar) {
        com.tkay.core.common.m.d dVarRemove = this.G.remove(str);
        if (dVarRemove == null) {
            return;
        }
        a(dVarRemove, tYBaseAdAdapter, ajVar, tYBaseAdAdapter.getTrackingInfo());
        new StringBuilder("[Enter] onCacheAdLoaded: ").append(ajVar.aa());
        b(ajVar);
        t();
        c(tYBaseAdAdapter.getTrackingInfo());
        ajVar.t();
        a(dVarRemove);
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x0014 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0016 A[Catch: all -> 0x00c4, TRY_ENTER, TryCatch #0 {, blocks: (B:4:0x0003, B:5:0x000a, B:9:0x0016, B:11:0x003f, B:13:0x0049, B:14:0x004c, B:16:0x007d, B:18:0x0085, B:20:0x00a3, B:22:0x00ab, B:23:0x00bf), top: B:29:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized void a(String str, TYBaseAdAdapter tYBaseAdAdapter, List<? extends BaseAd> list) {
        com.tkay.core.common.m.d dVarRemove;
        if (tYBaseAdAdapter != null) {
            tYBaseAdAdapter.getTrackingInfo().x();
            dVarRemove = this.G.remove(str);
            if (dVarRemove != null) {
                return;
            }
            com.tkay.core.common.f.d trackingInfo = tYBaseAdAdapter.getTrackingInfo();
            aj unitGroupInfo = tYBaseAdAdapter.getUnitGroupInfo();
            new StringBuilder("[Enter] onAdLoaded(): ").append(unitGroupInfo.aa());
            b(unitGroupInfo);
            t();
            a(dVarRemove, tYBaseAdAdapter, unitGroupInfo, trackingInfo);
            if (unitGroupInfo.B() != -1 && trackingInfo.J() > 0) {
                com.tkay.core.common.k.c.a(trackingInfo);
            }
            c(tYBaseAdAdapter.getTrackingInfo());
            com.tkay.core.common.k.a.a(this.a).a(2, trackingInfo);
            com.tkay.core.common.a.a().a(this.g, trackingInfo.z(), tYBaseAdAdapter, list, unitGroupInfo.p());
            com.tkay.core.common.l.g.a(trackingInfo, f.i.b, f.i.l, "");
            if (!this.P && !this.K.c()) {
                v vVarA = v.a();
                String str2 = this.g;
                StringBuilder sb = new StringBuilder();
                sb.append(this.e.Y());
                f fVarA = vVarA.a(str2, sb.toString());
                if (fVarA != null && this.e.U() > 0) {
                    String str3 = this.f;
                    com.tkay.core.common.b.m.a().a(new f.4(tYBaseAdAdapter, com.tkay.core.common.l.g.a(unitGroupInfo), str3));
                }
            }
            a(dVarRemove);
            return;
        }
        dVarRemove = this.G.remove(str);
        if (dVarRemove != null) {
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x0063, code lost:
    
        r2 = r7.w;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x0065, code lost:
    
        monitor-enter(r2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x0066, code lost:
    
        r3 = r7.w.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0070, code lost:
    
        if (r3.hasNext() == false) goto L70;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x0072, code lost:
    
        r4 = r3.next().a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x0082, code lost:
    
        if (com.tkay.core.common.l.g.a(r4) <= r0) goto L72;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x0084, code lost:
    
        new java.lang.StringBuilder("tryToSendWinNotice(), do not send win: ").append(r4.aa());
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x0092, code lost:
    
        monitor-exit(r2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x0094, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x0095, code lost:
    
        monitor-exit(r2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x0096, code lost:
    
        r0 = true;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized void p() {
        com.tkay.core.common.f.l lVarM;
        if (!this.K.g() && this.K.e()) {
            if (this.K.b()) {
                return;
            }
            boolean z = false;
            if (this.m && this.F != null && this.F.j()) {
                double dA = com.tkay.core.common.l.g.a(this.F);
                synchronized (this.u) {
                    Iterator<aj> it = this.u.iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        }
                        aj next = it.next();
                        if (com.tkay.core.common.l.g.a(next) > dA) {
                            new StringBuilder("tryToSendWinNotice(), do not send win: ").append(next.aa());
                            return;
                        }
                    }
                }
            }
            if (z && (lVarM = this.F.M()) != null) {
                this.K.h();
                new StringBuilder("tryToSendWinNotice(), send win notice: ").append(this.F.aa());
                lVarM.a(this.F);
            }
            return;
        }
        StringBuilder sb = new StringBuilder("tryToSendWinNotice(), mHasSendWinNotice: ");
        sb.append(this.K.g());
        sb.append(", mHasHBAdSource: ");
        sb.append(this.K.e());
    }

    private synchronized void q() {
        if (!this.K.e()) {
            new StringBuilder("tryToSendLossNotice(), mHasHBAdSource: ").append(this.K.e());
        } else {
            if (this.K.b()) {
                return;
            }
            this.L.a(com.tkay.core.common.l.s.a(this.f, this.g, this.d, this.e, "", 1, this.k, this.c, this.j != null ? this.j.g : null), this.F);
        }
    }

    private void a(com.tkay.core.common.m.d dVar, TYBaseAdAdapter tYBaseAdAdapter, aj ajVar, com.tkay.core.common.f.d dVar2) {
        dVar2.g(tYBaseAdAdapter.getNetworkPlacementId());
        double dA = dVar.f() != 2 ? com.tkay.core.common.l.g.a(ajVar) : 0.0d;
        if (dA > this.E) {
            this.E = dA;
        }
        d(ajVar);
        if (this.F == null || com.tkay.core.common.l.g.a(ajVar) > com.tkay.core.common.l.g.a(this.F)) {
            this.F = ajVar;
            com.tkay.core.b.c.a().a(this.g, this.F);
        }
        this.L.b(ajVar);
        double d = this.O;
        if (d <= 0.0d) {
            dVar2.s = 0;
        } else if (d < dA) {
            dVar2.s = 2;
        } else {
            dVar2.s = 1;
        }
        com.tkay.core.common.m.f.a(this.a, this.g, this.f, ajVar, null);
    }

    private void a(com.tkay.core.common.m.d dVar) {
        boolean zE = dVar.e();
        if (zE) {
            this.L.a(-1, dVar.f());
        }
        b(dVar);
        r();
        if (zE) {
            if (this.L.d() == 0 && this.t.size() == 0 && (this.r || this.m)) {
                v();
            }
            new StringBuilder("checkToRequestNextAdSource: try to call next AdSource.||").append(dVar.f());
            this.L.a(dVar.f());
            a(this.L.b(dVar.f()), dVar.f());
            l();
        }
    }

    private void b(com.tkay.core.common.m.d dVar) {
        if (dVar.d() == null || !dVar.d().booleanValue() || dVar.f() == 2 || !dVar.d().booleanValue()) {
            return;
        }
        this.B++;
    }

    private synchronized void r() {
        boolean z;
        double dS = s();
        if (this.E >= 0.0d) {
            if (((this.m || this.r) && this.E >= dS) || this.s) {
                if (!this.o) {
                    b(-1);
                }
                w();
            }
        } else if (this.m) {
            if (this.J == null || !B()) {
                z = false;
            } else {
                com.tkay.core.common.b.m.a().c(this.J);
                this.J.run();
                this.J = null;
                z = true;
            }
            if (z) {
                return;
            }
            if (A() && !this.o) {
                z();
            }
        }
    }

    private double s() {
        aj ajVar;
        com.tkay.core.common.m.e eVar;
        aj ajVarH;
        aj ajVarA = null;
        if (this.e.b() == 2) {
            synchronized (this.G) {
                Iterator<Map.Entry<String, com.tkay.core.common.m.d>> it = this.G.entrySet().iterator();
                ajVar = null;
                if (it != null) {
                    while (it.hasNext()) {
                        com.tkay.core.common.m.d value = it.next().getValue();
                        if (value != null && !value.g() && (ajVarH = value.h()) != null && (ajVar == null || com.tkay.core.common.l.g.a(ajVarH) > com.tkay.core.common.l.g.a(ajVar))) {
                            ajVar = ajVarH;
                        }
                    }
                }
            }
        } else {
            ajVar = null;
        }
        aj ajVar2 = this.t.size() > 0 ? this.t.get(0) : null;
        synchronized (this.w) {
            if (this.w.size() > 0 && (eVar = this.w.get(0)) != null) {
                ajVarA = eVar.a();
            }
        }
        return Math.max(Math.max(com.tkay.core.common.l.g.a(ajVar2), com.tkay.core.common.l.g.a(ajVarA)), com.tkay.core.common.l.g.a(ajVar));
    }

    private synchronized void t() {
        this.v.clear();
        if (this.J != null) {
            com.tkay.core.common.b.m.a().c(this.J);
            this.J = null;
        }
    }

    public final void b(int i) {
        if (this.I != null) {
            StringBuilder sb = new StringBuilder();
            sb.append(this.g);
            sb.append(":remove filled countdown.");
            com.tkay.core.common.b.m.a().c(this.I);
            this.I = null;
        }
        boolean z = i == 5 || i == 9 || i == 10;
        this.o = true;
        this.n = true;
        if (this.M != null) {
            com.tkay.core.common.b.m.a().c(this.M);
        }
        long jElapsedRealtime = SystemClock.elapsedRealtime() - this.z;
        String str = this.f;
        String str2 = this.g;
        String str3 = this.d;
        com.tkay.core.c.d dVar = this.e;
        String str4 = this.x;
        int iM = dVar.m();
        int i2 = this.k;
        int i3 = this.c;
        j jVar = this.j;
        com.tkay.core.common.f.d dVarA = com.tkay.core.common.l.s.a(str, str2, str3, dVar, str4, iM, i2, i3, jVar != null ? jVar.g : null);
        dVarA.a(true);
        dVarA.d(jElapsedRealtime);
        if (z) {
            dVarA.z(i);
        }
        com.tkay.core.common.k.a.a(this.a).a(12, dVarA);
        v vVarA = v.a();
        String str5 = this.g;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.e.Y());
        f fVarA = vVarA.a(str5, sb2.toString());
        if (fVarA != null && i != 10) {
            fVarA.a(this.e.V());
        }
        com.tkay.core.common.m.f.a(this.a, this.g);
        u();
    }

    private void u() {
        v();
        if (this.P) {
            return;
        }
        h();
    }

    private synchronized boolean v() {
        if (this.R != null && this.R.size() != 0) {
            if (this.K.c()) {
                return false;
            }
            this.K.f();
            this.S = true;
            ArrayList arrayList = new ArrayList(3);
            arrayList.addAll(this.R);
            this.R.clear();
            a(8, arrayList, new k.a() {
                @Override
                public final void a(String str) {
                }

                @Override
                public final void a(String str, List<aj> list, List<aj> list2) {
                    x.a().b(h.this.g, h.this.f, list);
                    for (aj ajVar : list) {
                        com.tkay.core.common.m.f.a(h.this.a, h.this.g, h.this.f, null, ajVar);
                        ajVar.x(8);
                        h.this.u.add(ajVar);
                        h.this.b(ajVar, 3);
                    }
                }

                @Override
                public final void b(String str) {
                    h.this.S = false;
                    h.this.r();
                }
            });
            return true;
        }
        return false;
    }

    private synchronized void w() {
        if (this.m) {
            if (this.K.c()) {
                return;
            }
            if (this.H != null && this.H.size() != 0) {
                if (this.q) {
                    return;
                }
                this.q = true;
                a(7, this.H, new k.a() {
                    @Override
                    public final void a(String str) {
                    }

                    @Override
                    public final void b(String str) {
                    }

                    @Override
                    public final void a(String str, List<aj> list, List<aj> list2) {
                        if (h.this.K.c()) {
                            String unused = h.this.T;
                            Iterator<aj> it = list.iterator();
                            while (it.hasNext()) {
                                h.this.a(it.next());
                            }
                            return;
                        }
                        x.a().b(h.this.g, h.this.f, list);
                        if (h.this.B < h.this.e.an()) {
                            String unused2 = h.this.T;
                            h.this.a(list, (List<aj>) null, (List<aj>) null);
                            h.this.l();
                            return;
                        }
                        String unused3 = h.this.T;
                        double dA = h.this.L.a(false);
                        int size = list.size();
                        ArrayList<aj> arrayList = new ArrayList(size);
                        ArrayList arrayList2 = new ArrayList(size);
                        for (int i = 0; i < size; i++) {
                            aj ajVar = list.get(i);
                            if (com.tkay.core.common.l.g.a(ajVar) > dA) {
                                arrayList.add(ajVar);
                            } else {
                                arrayList2.add(ajVar);
                            }
                        }
                        for (aj ajVar2 : arrayList) {
                            com.tkay.core.common.m.f.a(h.this.a, h.this.g, h.this.f, null, ajVar2);
                            ajVar2.x(7);
                            h.this.u.add(ajVar2);
                            h.this.b(ajVar2, 5);
                        }
                        Iterator it2 = arrayList2.iterator();
                        while (it2.hasNext()) {
                            h.this.a((aj) it2.next());
                        }
                    }
                });
            }
        }
    }

    private void a(int i, List<aj> list, final k.a aVar) {
        boolean z = this.N != null || com.tkay.core.common.l.t.a(this.H);
        ag agVar = new ag();
        agVar.b = this.a;
        agVar.c = this.j;
        agVar.d = this.f;
        agVar.e = this.g;
        agVar.f = this.e.Y();
        agVar.g = this.e.I();
        agVar.h = this.e.A();
        i.a();
        agVar.m = i.a(this.e, z);
        i.a();
        agVar.p = i.a(this.e);
        i.a();
        agVar.q = i.b(this.e);
        agVar.j = list;
        agVar.o = this.e;
        agVar.t = this.i;
        agVar.r = this.h;
        agVar.x = this.L.g();
        agVar.y = this.L.h();
        List<aj> listB = x.a().b(this.g, this.f);
        if (listB == null) {
            agVar.k = new ArrayList(4);
        } else {
            agVar.k = listB;
        }
        agVar.n = z;
        agVar.v = i;
        agVar.u = this.N;
        agVar.w = com.tkay.core.common.l.g.a(this.Q);
        com.tkay.core.b.h hVar = new com.tkay.core.b.h(agVar);
        hVar.a(TYSDK.isNetworkLogDebug());
        hVar.a(new k.a() {
            @Override
            public final void a(String str, List<aj> list2, List<aj> list3) {
                k.a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a(str, list2, list3);
                }
            }

            @Override
            public final void a(String str) {
                k.a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a(str);
                }
            }

            @Override
            public final void b(String str) {
                k.a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b(str);
                }
            }
        });
    }

    protected synchronized void a(String str, com.tkay.core.common.m.a aVar) {
        com.tkay.core.common.f.d dVar = aVar.d;
        aj ajVar = aVar.e;
        AdError adError = aVar.b;
        long j = aVar.c;
        String strX = dVar.x();
        com.tkay.core.common.m.d dVarRemove = this.G.remove(str);
        if (dVarRemove == null) {
            return;
        }
        new StringBuilder("[Enter] onAdError(): ").append(ajVar.aa());
        b(ajVar);
        this.y.putNetworkErrorMsg(strX, dVar.H(), dVar.T(), adError);
        com.tkay.core.common.k.c.a(dVar, aVar.a, adError, j);
        if (j > 0) {
            if (this.l != null) {
                this.l.b(dVar, adError);
            }
            com.tkay.core.common.l.g.a(dVar, f.i.b, f.i.m, adError.printStackTrace());
        }
        a(dVarRemove);
    }

    private boolean x() {
        if (this.J == null || !B()) {
            return false;
        }
        com.tkay.core.common.b.m.a().c(this.J);
        this.J.run();
        this.J = null;
        return true;
    }

    private void y() {
        j jVar;
        this.o = true;
        this.n = false;
        if (this.M != null) {
            com.tkay.core.common.b.m.a().c(this.M);
        }
        String str = this.f;
        String str2 = this.g;
        String str3 = this.d;
        com.tkay.core.c.d dVar = this.e;
        String str4 = this.x;
        int iM = dVar.m();
        int i = this.k;
        int i2 = this.c;
        j jVar2 = this.j;
        com.tkay.core.common.k.c.a(com.tkay.core.common.l.s.a(str, str2, str3, dVar, str4, iM, i, i2, jVar2 != null ? jVar2.g : null), this.y);
        if (!this.P) {
            if ((this.e.k() != 1 || this.k == 8 || v.a().e(this.g)) ? false : true) {
                v vVarA = v.a();
                String str5 = this.g;
                StringBuilder sb = new StringBuilder();
                sb.append(this.e.Y());
                f fVarA = vVarA.a(str5, sb.toString());
                if (fVarA != null && (jVar = this.j) != null) {
                    jVar.d = 8;
                    Context context = this.a;
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(this.e.Y());
                    fVarA.a(context, sb2.toString(), this.g, this.j, (com.tkay.core.common.b.a) null);
                }
            } else {
                a(this.y);
            }
        }
        f();
    }

    private void z() {
        if (com.tkay.core.common.a.a().a(this.a, this.g) != null) {
            b(9);
        } else {
            if (v()) {
                return;
            }
            y();
        }
    }

    private synchronized void a(String str) {
        if (this.K.b()) {
            return;
        }
        a(this.G.get(str));
    }

    private synchronized boolean A() {
        new StringBuilder("hasFinishAllRequest:isFinishBidding: ").append(this.m);
        new StringBuilder("hasFinishAllRequest:requestWaitingPool: ").append(this.t.size());
        new StringBuilder("hasFinishAllRequest:requestingPool: ").append(this.u.size());
        new StringBuilder("hasFinishAllRequest:defaultRequestWaitingPool: ").append(this.v.size());
        new StringBuilder("hasFinishAllRequest:showCapWaitingPool: ").append(this.w.size());
        if (this.t.size() == 0 && this.v.size() == 0 && this.w.size() == 0) {
            if (this.u.size() == 0) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0014  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized boolean B() {
        boolean z;
        if (this.t.size() == 0) {
            z = this.u.size() == 0;
        }
        return z;
    }

    private void b(long j) {
        com.tkay.core.common.b.m.a().a(this.M, j);
    }

    public final boolean c() {
        if (this.o) {
            return true;
        }
        return this.m && this.t.size() == 0 && this.L.d() == 0;
    }

    public final synchronized void a(double d, aj ajVar) {
        if (!this.K.g() && ajVar != null && ajVar.j()) {
            this.K.h();
        }
        if (d > this.O) {
            this.O = d;
        }
        int iY = this.e.Y();
        if (iY == 0 || iY == 2) {
            return;
        }
        this.K.d();
        v vVarA = v.a();
        String str = this.g;
        StringBuilder sb = new StringBuilder();
        sb.append(this.e.Y());
        f fVarA = vVarA.a(str, sb.toString());
        if (fVarA != null) {
            fVarA.b(this.f);
        } else {
            com.tkay.core.common.k.c.a("AdManage is null--notifyimpression", "Id:" + this.g + "--format:" + this.e.Y(), com.tkay.core.common.b.m.a().q());
        }
        if (!this.o) {
            b(10);
        }
        l();
    }

    public final void d() {
        this.r = true;
        r();
    }

    public final void e() {
        synchronized (this.C) {
            this.m = true;
            this.r = true;
            r();
            l();
        }
    }

    public final void f() {
        this.P = true;
        v vVarA = v.a();
        String str = this.g;
        StringBuilder sb = new StringBuilder();
        sb.append(this.e.Y());
        f fVarA = vVarA.a(str, sb.toString());
        if (fVarA != null) {
            fVarA.b(this.f);
            return;
        }
        com.tkay.core.common.k.c.a("AdManage is null--notifycancel", "Id:" + this.g + "--format:" + this.e.Y(), com.tkay.core.common.b.m.a().q());
    }

    public void g() {
        if (this.M != null) {
            com.tkay.core.common.b.m.a().c(this.M);
        }
    }

    public void h() {
        com.tkay.core.common.l.n.a("Mediation", "placementId:" + this.g + ";result_callback:success;loadType:" + this.k + ";");
        w.a(this.a).a(this.g, this.f, true);
        j jVar = this.j;
        if (jVar == null || jVar.f == null) {
            return;
        }
        this.j.f.onAdLoaded();
        this.j.f = null;
    }

    public void a(AdError adError) {
        com.tkay.core.common.l.n.a("Mediation", "placementId:" + this.g + ";result_callback:fail;loadType:" + this.k + ";");
        w.a(this.a).a(this.g, this.f, false);
        j jVar = this.j;
        if (jVar == null || jVar.f == null) {
            return;
        }
        this.j.f.onAdLoadFail(adError);
        this.j.f = null;
    }

    private aj b(String str) {
        ConcurrentHashMap<String, aj> concurrentHashMap = this.D;
        if (concurrentHashMap != null) {
            return concurrentHashMap.get(str);
        }
        return null;
    }

    public final void i() {
        synchronized (this.w) {
            if (this.w.size() > 0) {
                aj ajVarA = this.w.remove(0).a();
                if (!this.o || this.B < this.e.an() || com.tkay.core.common.l.g.a(ajVarA) > this.E) {
                    this.u.add(ajVarA);
                    b(ajVarA, 4);
                }
            }
            if (this.w.size() > 0) {
                for (com.tkay.core.common.m.e eVar : this.w) {
                    aj ajVarA2 = eVar.a();
                    if (!this.o || this.B < this.e.an() || com.tkay.core.common.l.g.a(ajVarA2) > this.E) {
                        int iB = eVar.b();
                        if (iB == 1) {
                            a(ajVarA2, 1);
                            e(iB);
                        } else if (iB == 2) {
                            a(ajVarA2, 2);
                            e(iB);
                        } else if (iB == 3) {
                            this.u.add(ajVarA2);
                            b(ajVarA2, 3);
                        }
                    }
                }
            }
            this.w.clear();
        }
        l();
    }

    private boolean C() {
        return (this.e.k() != 1 || this.k == 8 || v.a().e(this.g)) ? false : true;
    }

    private int f(int i) {
        return i > 0 ? i : this.B < this.e.an() ? 5 : 2;
    }

    private void a(List<aj> list) {
        this.R = list;
    }

    private void d(aj ajVar) {
        com.tkay.core.common.f.l lVarM;
        if (ajVar == null) {
            return;
        }
        double dA = com.tkay.core.common.l.g.a(ajVar);
        if (ajVar.j() && ajVar.c() == 1 && dA == 10000.0d && (lVarM = ajVar.M()) != null) {
            dA = lVarM.o;
        }
        if (dA > com.tkay.core.common.l.g.a(this.Q)) {
            this.Q = ajVar;
        }
    }

    static void a(h hVar, com.tkay.core.common.m.d dVar, com.tkay.core.common.f.d dVar2) {
        com.tkay.core.common.m.c cVar = new com.tkay.core.common.m.c();
        cVar.a = hVar.a;
        cVar.b = hVar.b;
        cVar.c = hVar.f;
        cVar.d = hVar.g;
        cVar.e = hVar.e;
        cVar.f = hVar.h;
        cVar.g = hVar.A;
        cVar.h = dVar2;
        dVar.a(cVar);
        dVar.a(hVar.new 5());
        dVar.b();
    }

    static void a(h hVar, com.tkay.core.common.f.d dVar) {
        com.tkay.core.common.b.b bVar = hVar.l;
        if (bVar != null) {
            bVar.c(dVar);
        }
    }
}
