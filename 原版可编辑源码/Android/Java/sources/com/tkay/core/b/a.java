package com.tkay.core.b;

import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.c.k;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.k;
import com.tkay.core.common.f.l;
import com.tkay.core.common.f.q;
import com.tkay.core.common.l.n;
import com.tkay.core.common.l.s;
import com.tkay.core.common.x;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONArray;
import org.json.JSONObject;

public abstract class a {
    protected ag a;
    protected boolean b;
    private final String d = getClass().getSimpleName() + Constants.COLON_SEPARATOR;
    protected AtomicBoolean c = new AtomicBoolean(false);

    protected abstract void a(com.tkay.core.b.b.a aVar);

    protected abstract void a(aj ajVar, k kVar, long j);

    protected abstract void b();

    public a(ag agVar) {
        this.a = agVar;
    }

    protected void a(boolean z) {
        this.b = z;
    }

    public final boolean a() {
        return this.c.get();
    }

    protected static JSONArray a(List<aj> list) {
        JSONArray jSONArray = new JSONArray();
        try {
            for (aj ajVar : list) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(k.a.d, ajVar.c());
                jSONObject.put("ad_source_id", ajVar.t());
                jSONObject.put("content", ajVar.g());
                if (!TextUtils.isEmpty(ajVar.z())) {
                    jSONObject.put("error", ajVar.z());
                }
                jSONArray.put(jSONObject);
            }
        } catch (Exception unused) {
        }
        return jSONArray;
    }

    protected static JSONArray b(List<JSONObject> list) {
        JSONArray jSONArray = new JSONArray();
        try {
            for (JSONObject jSONObject : list) {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put(k.a.d, 67);
                if (jSONObject.has("unit_ids")) {
                    jSONObject2.put("unit_ids", jSONObject.get("unit_ids"));
                }
                jSONArray.put(jSONObject2);
            }
        } catch (Exception unused) {
        }
        return jSONArray;
    }

    protected static void a(aj ajVar, String str, long j, int i) {
        ajVar.a(j);
        ajVar.a(0.0d);
        ajVar.d(0.0d);
        ajVar.g(i);
        ajVar.b();
        if (TextUtils.isEmpty(str)) {
            ajVar.h("bid error");
        } else {
            ajVar.h(str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00d8  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0144  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final void a(aj ajVar, l lVar) {
        boolean z;
        l lVarA = c.a().a(ajVar);
        double sortPrice = 0.0d;
        if (lVarA != null) {
            if (lVar.d()) {
                String str = lVarA.g;
                if (!TextUtils.isEmpty(str)) {
                    j jVarB = c.a().b(lVarA.g, lVarA.k);
                    j jVarB2 = c.a().b(lVar.g, lVar.k);
                    if (jVarB == null || jVarB2 == null) {
                        if (jVarB != null) {
                            sortPrice = jVarB.c;
                        }
                        z = false;
                    } else {
                        sortPrice = jVarB2.c;
                        c.a().c(str, lVarA.k);
                    }
                } else {
                    Log.e(n.a, "TpBidId is empty, price = 0....");
                }
            } else {
                boolean zA = lVarA.a();
                if (zA || lVar.getSortPrice() > lVarA.getSortPrice()) {
                    double sortPrice2 = lVar.getSortPrice();
                    if (zA) {
                        com.tkay.core.common.f.d dVarA = s.a(this.a.d, this.a.e, "", this.a.o, "", 1, 0, 0, this.a.c != null ? this.a.c.g : null);
                        q qVar = new q();
                        qVar.a = 1;
                        qVar.b = sortPrice2;
                        qVar.e = dVarA;
                        qVar.c = ajVar;
                        qVar.d = ajVar;
                        lVarA.a(qVar, true);
                    }
                    sortPrice = sortPrice2;
                } else {
                    sortPrice = lVarA.getSortPrice();
                    z = false;
                }
            }
            if (!z) {
                if (lVarA != null) {
                    try {
                        com.tkay.core.common.f.d dVarA2 = s.a(this.a.d, this.a.e, "", this.a.o, "", 1, 0, 0, this.a.c != null ? this.a.c.g : null);
                        q qVar2 = new q();
                        qVar2.a = 2;
                        qVar2.b = sortPrice;
                        qVar2.e = dVarA2;
                        qVar2.c = ajVar;
                        qVar2.d = ajVar;
                        lVarA.a(qVar2, true);
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
                ajVar.a(lVar, 2, 0, 1);
                if (ajVar.K() != 2) {
                    c.a().a.put(ajVar.t(), lVar);
                    if (ajVar.l() == 3 || ajVar.l() == 7) {
                        c.a(ajVar.t(), lVar);
                        return;
                    }
                    return;
                }
                return;
            }
            if (lVar != null) {
                try {
                    com.tkay.core.common.f.d dVarA3 = s.a(this.a.d, this.a.e, "", this.a.o, "", 1, 0, 0, this.a.c != null ? this.a.c.g : null);
                    q qVar3 = new q();
                    qVar3.b = sortPrice;
                    qVar3.e = dVarA3;
                    qVar3.c = ajVar;
                    qVar3.d = ajVar;
                    if (lVar.d()) {
                        qVar3.a = 3;
                    } else {
                        qVar3.a = 2;
                    }
                    lVar.a(qVar3, false);
                } catch (Throwable th2) {
                    th2.printStackTrace();
                }
            }
            ajVar.a(lVarA, 1, 0, 1);
            return;
        }
        if (lVar.d()) {
            j jVarB3 = c.a().b(lVar.g, lVar.k);
            if (jVarB3 != null) {
                sortPrice = jVarB3.c;
            }
        } else {
            sortPrice = lVar.getSortPrice();
        }
        z = true;
        if (!z) {
        }
    }

    protected final boolean a(aj ajVar, String str, int i) {
        return a(ajVar, str, i, 0);
    }

    protected final boolean a(aj ajVar, String str, int i, int i2) {
        l lVarA = c.a().a(ajVar);
        if (lVarA != null && !lVarA.a()) {
            ajVar.a(lVarA, 0, i, i2);
            ajVar.h(str);
            return true;
        }
        if (lVarA != null) {
            try {
                com.tkay.core.common.f.d dVarA = s.a(this.a.d, this.a.e, "", this.a.o, "", 1, 0, 0, this.a.c != null ? this.a.c.g : null);
                q qVar = new q();
                qVar.a = 1;
                qVar.b = lVarA.getSortPrice();
                qVar.e = dVarA;
                qVar.c = ajVar;
                qVar.d = ajVar;
                lVarA.a(qVar, true);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return false;
    }

    protected final void a(int i, com.tkay.core.common.f.k kVar, double d) {
        if (i != 28) {
            return;
        }
        double d2 = 0.95d;
        JSONObject jSONObjectG = this.a.o.g();
        if (jSONObjectG != null) {
            double dOptDouble = jSONObjectG.optDouble(String.valueOf(i));
            if (dOptDouble > 0.0d && dOptDouble <= 1.0d) {
                d2 = dOptDouble;
            }
        }
        double dMax = kVar.originPrice * d2;
        ArrayList arrayList = new ArrayList(5);
        List<aj> listB = x.a().b(this.a.e, this.a.d);
        if (listB != null) {
            arrayList.addAll(listB);
        }
        Iterator it = arrayList.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            double dA = com.tkay.core.common.l.g.a((aj) it.next());
            if (dA < kVar.originPrice) {
                dMax = Math.max(dMax, dA);
                break;
            }
        }
        double dMax2 = Math.max(dMax, d);
        double dRandom = dMax2 + (Math.random() * (kVar.originPrice - dMax2));
        kVar.setPrice(dRandom);
        kVar.setSortPrice(dRandom);
    }

    protected final double a(aj ajVar) {
        if (ajVar.ac() == null) {
            return 1.0d;
        }
        if (ajVar.ac() == TYAdConst.CURRENCY.RMB_CENT) {
            return (1.0d / this.a.o.q()) * 100.0d;
        }
        if (ajVar.ac() == TYAdConst.CURRENCY.RMB) {
            return 1.0d / this.a.o.q();
        }
        return 1.0d;
    }

    protected final double a(double d, aj ajVar) {
        double dQ;
        if (ajVar.ac() == null) {
            return d;
        }
        if (ajVar.ac() == TYAdConst.CURRENCY.RMB) {
            dQ = this.a.o.q();
        } else {
            if (ajVar.ac() != TYAdConst.CURRENCY.RMB_CENT) {
                return d;
            }
            d /= 100.0d;
            dQ = this.a.o.q();
        }
        return d * dQ;
    }
}
