package com.tkay.core.b;

import android.content.Context;
import android.os.SystemClock;
import android.util.Log;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYBiddingResult;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.k;
import com.tkay.core.common.f.l;
import com.tkay.core.common.l.n;
import com.tkay.core.common.l.s;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class g extends a {
    public static final String d = g.class.getSimpleName();
    private List<aj> e;
    private com.tkay.core.b.b.a f;
    private long g;

    public g(ag agVar) {
        super(agVar);
        this.e = Collections.synchronizedList(new ArrayList(this.f5950a.j));
    }

    @Override // com.tkay.core.b.a
    protected final void a(com.tkay.core.b.b.a aVar) {
        this.f = aVar;
        List<aj> list = this.f5950a.j;
        int size = list.size();
        this.g = SystemClock.elapsedRealtime();
        for (int i = 0; i < size; i++) {
            final aj ajVar = list.get(i);
            TYBaseAdAdapter tYBaseAdAdapterA = com.tkay.core.common.l.i.a(ajVar);
            if (tYBaseAdAdapterA == null) {
                a(false, TYBiddingResult.fail(ajVar.h() + "not exist!"), ajVar, -9, (com.tkay.core.b.c.a) null);
            } else {
                try {
                    com.tkay.core.b.b.b bVar = new com.tkay.core.b.b.b(tYBaseAdAdapterA) { // from class: com.tkay.core.b.g.1
                        @Override // com.tkay.core.api.TYBiddingListener
                        public final void onC2SBidResult(TYBiddingResult tYBiddingResult) {
                            if (this.c != null) {
                                this.c.releaseLoadResource();
                            }
                            a(tYBiddingResult, null);
                        }

                        @Override // com.tkay.core.api.TYBiddingListener
                        public final void onC2SBiddingResultWithCache(TYBiddingResult tYBiddingResult, BaseAd baseAd) {
                            if (this.c != null) {
                                this.c.releaseLoadResource();
                            }
                            a(tYBiddingResult, new com.tkay.core.b.c.a(this.c, baseAd));
                        }

                        private void a(final TYBiddingResult tYBiddingResult, final com.tkay.core.b.c.a aVar2) {
                            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.b.g.1.1
                                @Override // java.lang.Runnable
                                public final void run() {
                                    g.this.a(tYBiddingResult.isSuccessWithUseType(), tYBiddingResult, ajVar, tYBiddingResult.isSuccessWithUseType() ? 0 : -1, aVar2);
                                }
                            });
                        }
                    };
                    new StringBuilder("start c2s bid request: ").append(tYBaseAdAdapterA.getNetworkName());
                    com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(this.f5950a.b).a(this.f5950a.e);
                    Map<String, Object> mapA = dVarA.a(this.f5950a.e, this.f5950a.d, ajVar);
                    try {
                        double dA = ajVar.a(dVarA);
                        if (dA > 0.0d) {
                            mapA.put("bid_floor", Double.valueOf(dA * a(ajVar)));
                        }
                    } catch (Throwable th) {
                        Log.w(n.f6248a, "C2S startBidRequest with exception:" + th.getMessage());
                    }
                    com.tkay.core.common.f.d dVarN = this.f5950a.t.N();
                    s.a(dVarN, ajVar, 0, false);
                    com.tkay.core.common.l.g.a(mapA, dVarN);
                    if (this.f5950a.v == 8) {
                        mapA.put(f.k.j, this.f5950a.w < 0.0d ? "0" : Double.valueOf(this.f5950a.w));
                    }
                    Context contextA = this.f5950a.c != null ? this.f5950a.c.a() : null;
                    if (contextA == null) {
                        contextA = this.f5950a.b;
                    }
                    boolean zInternalStartBiddingRequest = tYBaseAdAdapterA.internalStartBiddingRequest(contextA, mapA, this.f5950a.r, bVar);
                    aVar.a(ajVar, tYBaseAdAdapterA);
                    if (!zInternalStartBiddingRequest) {
                        a(TYBiddingResult.fail("This network don't support head bidding in current TY's version."), ajVar);
                    }
                } catch (Throwable th2) {
                    th2.printStackTrace();
                    a(TYBiddingResult.fail(th2.getMessage()), ajVar);
                }
            }
        }
    }

    private void a(aj ajVar, k kVar, long j, int i, com.tkay.core.b.c.a aVar) {
        if (kVar.isSuccessWithUseType()) {
            ajVar.a(j);
            ajVar.a(kVar.currency);
            StringBuilder sb = new StringBuilder("C2S Bidding Success: , AdSoruceId:");
            sb.append(ajVar.t());
            sb.append(", NetworkFirmId:");
            sb.append(ajVar.c());
            sb.append(" | price:");
            sb.append(kVar.getPrice());
            sb.append(" | sortPrice:");
            sb.append(kVar.getSortPrice());
            sb.append(" | currency:");
            sb.append(kVar.currency.toString());
            double dA = a(kVar.getSortPrice(), ajVar);
            if (dA <= 0.0d) {
                Log.w(n.f6248a, "NetworkName:" + ajVar.d() + ",AdSoruceId:" + ajVar.t() + " c2s price return 0,please check network placement c2s config");
                dA = com.tkay.core.common.l.g.a(ajVar);
            }
            l lVar = new l(true, dA, kVar.token, kVar.winNoticeUrl, kVar.loseNoticeUrl, kVar.displayNoticeUrl, "");
            lVar.l = a(ajVar);
            lVar.setBiddingNotice(kVar.biddingNotice);
            lVar.f = ajVar.n() + System.currentTimeMillis();
            lVar.e = ajVar.n();
            lVar.k = ajVar.t();
            lVar.d = ajVar.c();
            lVar.r = aVar;
            lVar.s = aVar != null;
            if (this.f5950a != null) {
                lVar.b(this.f5950a.d);
            }
            a(ajVar.c(), lVar, 0.0d);
            a(ajVar, lVar);
            n.a(f.i.l, this.f5950a.e, com.tkay.core.common.l.g.d(String.valueOf(this.f5950a.f)), ajVar);
            return;
        }
        a(ajVar, kVar.errorMsg, j, i);
        n.a(f.i.m, this.f5950a.e, com.tkay.core.common.l.g.d(String.valueOf(this.f5950a.f)), ajVar);
    }

    @Override // com.tkay.core.b.a
    protected final void a(aj ajVar, k kVar, long j) {
        a(ajVar, kVar, j, -1, (com.tkay.core.b.c.a) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(boolean z, TYBiddingResult tYBiddingResult, aj ajVar, int i, com.tkay.core.b.c.a aVar) {
        boolean z2;
        if (z) {
            c cVarA = c.a();
            String strT = ajVar.t();
            if (cVarA.e != null) {
                if (cVarA.e.get(strT + "_c2sfirstStatus") == null) {
                    z2 = true;
                    com.tkay.core.common.k.c.a(this.f5950a.e, ajVar, z2, SystemClock.elapsedRealtime() - this.g, this.f5950a);
                } else {
                    z2 = false;
                    com.tkay.core.common.k.c.a(this.f5950a.e, ajVar, z2, SystemClock.elapsedRealtime() - this.g, this.f5950a);
                }
            } else {
                z2 = true;
                com.tkay.core.common.k.c.a(this.f5950a.e, ajVar, z2, SystemClock.elapsedRealtime() - this.g, this.f5950a);
            }
        }
        c cVarA2 = c.a();
        String strT2 = ajVar.t();
        if (cVarA2.e == null) {
            cVarA2.e = new ConcurrentHashMap<>();
        }
        cVarA2.e.put(strT2 + "_c2sfirstStatus", 1);
        if (!this.c.get()) {
            a(ajVar, tYBiddingResult, SystemClock.elapsedRealtime() - this.g, i, aVar);
            List<aj> listSynchronizedList = Collections.synchronizedList(new ArrayList(1));
            listSynchronizedList.add(ajVar);
            this.e.remove(ajVar);
            if (this.e.size() == 0) {
                this.c.set(true);
            }
            if (this.f != null) {
                if (!z ? a(ajVar, tYBiddingResult.errorMsg, -1) : z) {
                    this.f.a(listSynchronizedList, (List<aj>) null);
                    return;
                }
                this.f.a((List<aj>) null, listSynchronizedList);
            }
            return;
        }
        if (tYBiddingResult != null && tYBiddingResult.biddingNotice != null) {
            tYBiddingResult.biddingNotice.notifyBidLoss("2", 0.0d, new HashMap(1));
        }
    }

    private synchronized void a(TYBiddingResult tYBiddingResult, aj ajVar) {
        a(false, tYBiddingResult, ajVar, -1, (com.tkay.core.b.c.a) null);
    }

    private static TYBiddingResult a(String str) {
        return TYBiddingResult.fail(str);
    }

    @Override // com.tkay.core.b.a
    public final synchronized void b() {
        if (!this.c.get()) {
            this.c.set(true);
            ArrayList arrayList = new ArrayList(3);
            ArrayList arrayList2 = new ArrayList(3);
            for (aj ajVar : this.e) {
                if (a(ajVar, "bid timeout", -3)) {
                    arrayList.add(ajVar);
                } else {
                    a(ajVar, TYBiddingResult.fail("bid timeout!"), SystemClock.elapsedRealtime() - this.g, -3, (com.tkay.core.b.c.a) null);
                    arrayList2.add(ajVar);
                }
            }
            this.e.clear();
            this.c.set(true);
            if (this.f != null) {
                this.f.a(arrayList, arrayList2);
            }
            this.f = null;
        }
    }
}
