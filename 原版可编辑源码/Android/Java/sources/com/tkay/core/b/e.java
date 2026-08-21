package com.tkay.core.b;

import android.os.SystemClock;
import android.util.Log;
import com.tkay.core.api.MediationBidManager;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.k;
import com.tkay.core.common.f.l;
import com.tkay.core.common.l.n;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class e extends a {
    private String d;
    private long e;
    private com.tkay.core.b.b.a f;

    @Override
    protected final void a(aj ajVar, k kVar, long j) {
    }

    public e(ag agVar) {
        super(agVar);
        this.d = "IH Bidding";
    }

    @Override
    protected final void a(final com.tkay.core.b.b.a aVar) {
        this.f = aVar;
        this.e = SystemClock.elapsedRealtime();
        List<aj> list = this.a.j;
        if (this.b) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("Start IH Bidding List", a(list));
            } catch (Exception unused) {
            }
            n.a(n.a, jSONObject.toString(), false);
        }
        if (c.a().b() == null) {
            Iterator<aj> it = list.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                TYBaseAdAdapter tYBaseAdAdapterA = com.tkay.core.common.l.i.a(it.next());
                if (tYBaseAdAdapterA != null) {
                    MediationBidManager bidManager = tYBaseAdAdapterA.getBidManager();
                    if (bidManager != null) {
                        c.a().a(bidManager);
                    }
                }
            }
        }
        MediationBidManager mediationBidManagerB = c.a().b();
        if (mediationBidManagerB == null) {
            Log.i(n.a, "No BidManager.");
            a((List<aj>) null, -9);
        } else {
            mediationBidManagerB.setBidRequestUrl(this.a.p);
            mediationBidManagerB.startBid(this.a, new MediationBidManager.BidListener() {
                @Override
                public final void onBidFail(String str) {
                }

                @Override
                public final void onBidStart(aj ajVar, TYBaseAdAdapter tYBaseAdAdapter) {
                    com.tkay.core.b.b.a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a(ajVar, tYBaseAdAdapter);
                    }
                }

                @Override
                public final void onBidSuccess(List<aj> list2) {
                    e.this.a(list2, -1);
                }
            });
        }
    }

    private synchronized void a(List<aj> list, int i) {
        if (this.c.get()) {
            return;
        }
        this.c.set(true);
        List<aj> arrayList = list == null ? new ArrayList<>() : list;
        long jElapsedRealtime = SystemClock.elapsedRealtime() - this.e;
        ArrayList arrayList2 = new ArrayList();
        Iterator<aj> it = this.a.j.iterator();
        while (true) {
            boolean z = false;
            if (!it.hasNext()) {
                break;
            }
            aj next = it.next();
            Iterator<aj> it2 = arrayList.iterator();
            while (true) {
                if (!it2.hasNext()) {
                    break;
                }
                aj next2 = it2.next();
                if (next.t().equals(next2.t())) {
                    next2.a(jElapsedRealtime);
                    next2.g(0);
                    l lVar = new l(true, next2.x(), next2.y(), "", "", "", "");
                    lVar.f = next2.n() + System.currentTimeMillis();
                    lVar.e = next2.n();
                    if (this.a != null) {
                        lVar.b(this.a.d);
                    }
                    a(next2, lVar);
                    z = true;
                }
            }
            if (!z) {
                if (MediationBidManager.NO_BID_TOKEN_ERROR.equals(next.z())) {
                    b(next, "No Bid Info.", 0L, -2);
                } else {
                    b(next, "No Bid Info.", jElapsedRealtime, i);
                }
                if (a(next, "No Bid Info.", i)) {
                    arrayList.add(next);
                } else {
                    arrayList2.add(next);
                }
            }
        }
        if (this.b) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("IH Bidding Success List", a(arrayList));
                jSONObject.put("IH Bidding Fail List", a(arrayList2));
            } catch (Exception unused) {
            }
            n.a(this.d, jSONObject.toString(), false);
        }
        this.c.set(true);
        if (this.f != null) {
            this.f.a(arrayList, arrayList2);
        }
    }

    @Override
    protected final void b() {
        a((List<aj>) null, -3);
    }

    private static void b(aj ajVar, String str, long j, int i) {
        a(ajVar, str, j, i);
    }

    private void b(aj ajVar) {
        l lVar = new l(true, ajVar.x(), ajVar.y(), "", "", "", "");
        lVar.f = ajVar.n() + System.currentTimeMillis();
        lVar.e = ajVar.n();
        if (this.a != null) {
            lVar.b(this.a.d);
        }
        a(ajVar, lVar);
    }
}
