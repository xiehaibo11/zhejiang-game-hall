package com.tkay.core.common.f;

import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYBaseAdAdapter;
import java.util.ArrayList;
import java.util.List;

public final class ak {
    public int a;
    public String b;
    private List<a> c;

    public final synchronized void a(List<a> list) {
        synchronized (this) {
            this.c = list;
        }
    }

    public final synchronized a a() {
        if (this.c != null) {
            for (a aVar : this.c) {
                if (aVar.d() <= 0) {
                    boolean z = true;
                    if (this.c.indexOf(aVar) < this.c.size() - 1) {
                        z = false;
                    }
                    aVar.a(z);
                    return aVar;
                }
            }
        }
        return null;
    }

    public final synchronized List<a> b() {
        ArrayList arrayList = null;
        if (this.c == null) {
            return null;
        }
        for (a aVar : this.c) {
            if (aVar.d() <= 0) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                arrayList.add(aVar);
            }
        }
        return arrayList;
    }

    public final synchronized void c() {
        if (this.c != null) {
            this.c.clear();
            this.c = null;
        }
    }

    public final synchronized void a(a aVar) {
        if (this.c != null && this.c.size() > 0) {
            this.c.remove(aVar);
        }
    }

    public final void a(d dVar) {
        synchronized (this) {
            ArrayList arrayList = new ArrayList();
            this.a = -1;
            this.b = dVar.X();
            if (this.c != null) {
                for (a aVar : this.c) {
                    if (aVar.j()) {
                        TYBaseAdAdapter tYBaseAdAdapterE = aVar.e();
                        tYBaseAdAdapterE.setTrackingInfo(dVar);
                        dVar.g(tYBaseAdAdapterE.getNetworkPlacementId());
                        aVar.b(-1);
                        BaseAd baseAdF = aVar.f();
                        if (baseAdF != null) {
                            baseAdF.setTrackingInfo(dVar.N());
                        }
                        arrayList.add(aVar);
                    }
                }
            }
            this.c = arrayList;
        }
    }

    public final boolean d() {
        List<a> list = this.c;
        return list != null && list.size() > 0;
    }
}
