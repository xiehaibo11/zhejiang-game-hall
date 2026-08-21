package com.tkay.core.common.k;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.common.b.h;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ai;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.l;
import com.tkay.core.common.h.a.c;
import com.tkay.core.common.h.k;
import com.tkay.core.common.l.g;
import com.tkay.core.common.o;
import com.tkay.core.common.q;
import com.tkay.core.common.r;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;

public class a extends o<com.tkay.core.common.f.e> {
    private static volatile a f;

    private a(Context context) {
        super(context);
    }

    public static a a(Context context) {
        if (f == null) {
            synchronized (a.class) {
                if (f == null) {
                    f = new a(context);
                }
            }
        }
        return f;
    }

    public final synchronized void a(int i, ai aiVar) {
        a(i, aiVar, null, -1L);
    }

    public final synchronized void a(int i, ai aiVar, aj ajVar) {
        a(i, aiVar, ajVar, -1L);
    }

    private static boolean c(int i, ai aiVar) {
        Map<String, String> mapA;
        if (!(aiVar instanceof com.tkay.core.common.f.d)) {
            return false;
        }
        com.tkay.core.common.f.d dVar = (com.tkay.core.common.f.d) aiVar;
        if (dVar.H() == 67) {
            return true;
        }
        if (dVar.H() != 0 && !TextUtils.isEmpty(aiVar.Y()) && (mapA = com.tkay.core.c.b.a(m.a().f()).b(m.a().o()).a(i)) != null) {
            if (mapA.containsKey("0")) {
                String str = mapA.get("0");
                return !TextUtils.isEmpty(str) && str.contains(aiVar.Y());
            }
            if (mapA.containsKey(String.valueOf(dVar.H()))) {
                String str2 = mapA.get(String.valueOf(dVar.H()));
                if (!TextUtils.isEmpty(str2) && str2.contains(aiVar.Y())) {
                    return true;
                }
            }
        }
        return false;
    }

    private static void a(int i, aj ajVar) {
        if (i == 13) {
            l lVarM = ajVar != null ? ajVar.M() : null;
            if (lVarM != null) {
                lVarM.a(ajVar);
            }
        }
    }

    private void b(int i, ai aiVar, aj ajVar) {
        if (i == 4) {
            l lVarM = ajVar != null ? ajVar.M() : null;
            if (lVarM != null) {
                lVarM.a(true, lVarM.getSortPrice(), true);
            }
            if (aiVar instanceof com.tkay.core.common.f.d) {
                a((com.tkay.core.common.f.d) aiVar, ajVar);
            }
        }
    }

    private static boolean a(int i, ai aiVar, com.tkay.core.c.a aVar) {
        String strAk = aVar.ak();
        if (!TextUtils.isEmpty(strAk) && (aiVar instanceof com.tkay.core.common.f.d)) {
            try {
                JSONArray jSONArray = new JSONArray(strAk);
                int length = jSONArray.length();
                String strValueOf = String.valueOf(((com.tkay.core.common.f.d) aiVar).H());
                for (int i2 = 0; i2 < length; i2++) {
                    if (TextUtils.equals(strValueOf, jSONArray.optString(i2))) {
                        return true;
                    }
                }
            } catch (Throwable unused) {
            }
        }
        Map<String, String> mapAi = aVar.ai();
        if (mapAi != null && mapAi.containsKey(String.valueOf(i))) {
            String str = mapAi.get(String.valueOf(i));
            if (!TextUtils.isEmpty(str) && str.contains(aiVar.Y())) {
                return true;
            }
        }
        return false;
    }

    private static void d(int i, ai aiVar) {
        if (4 == i && (aiVar instanceof com.tkay.core.common.f.d)) {
            q.a();
            q.a((com.tkay.core.common.f.d) aiVar);
        }
    }

    private static void e(int i, ai aiVar) {
        if (aiVar instanceof com.tkay.core.common.f.d) {
            if (i == 4) {
                ((com.tkay.core.common.f.d) aiVar).c();
            } else if (i == 6) {
                ((com.tkay.core.common.f.d) aiVar).d();
            } else {
                if (i != 21) {
                    return;
                }
                m.a().L();
            }
        }
    }

    @Override
    protected final void a(List<com.tkay.core.common.f.e> list) {
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
        if (aVarB != null) {
            int iU = aVarB.u();
            if (iU == 1) {
                com.tkay.core.common.h.a.e eVar = new com.tkay.core.common.h.a.e(list);
                eVar.a(1, aVarB.t());
                eVar.a((c.a) null);
                return;
            } else {
                if (iU == 2) {
                    new com.tkay.core.common.h.o(this.e, aVarB.u(), list).a(0, (k) null);
                    com.tkay.core.common.h.a.e eVar2 = new com.tkay.core.common.h.a.e(list);
                    eVar2.a(2, aVarB.t());
                    eVar2.a((c.a) null);
                    return;
                }
                new com.tkay.core.common.h.o(this.e, aVarB.u(), list).a(0, (k) null);
                return;
            }
        }
        new com.tkay.core.common.h.o(this.e, 0, list).a(0, (k) null);
    }

    private void a(com.tkay.core.common.f.d dVar, aj ajVar) {
        List<String> listX;
        List<aj> listH;
        com.tkay.core.common.f.a aVarA;
        l lVarM;
        String strW = dVar.W();
        com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(this.e).a(strW);
        if (dVarA == null || (listX = dVarA.x()) == null || listX.size() == 0 || (listH = dVarA.H()) == null || listH.size() == 0) {
            return;
        }
        for (aj ajVar2 : listH) {
            try {
                if (listX.contains(String.valueOf(ajVar2.c())) && (aVarA = com.tkay.core.common.a.a().a(strW, ajVar2)) != null && (lVarM = aVarA.e().getUnitGroupInfo().M()) != null) {
                    lVarM.a(false, g.a(ajVar), ajVar.j());
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public final synchronized void a(final int i, final ai aiVar, final aj ajVar, final long j) {
        if (aiVar instanceof com.tkay.core.common.f.d) {
            if (i == 4) {
                ((com.tkay.core.common.f.d) aiVar).c();
            } else if (i == 6) {
                ((com.tkay.core.common.f.d) aiVar).d();
            } else if (i == 21) {
                m.a().L();
            }
        }
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                if ((aiVar instanceof com.tkay.core.common.f.d) && m.a().G()) {
                    h.a().a(i, (com.tkay.core.common.f.d) aiVar);
                }
                com.tkay.core.common.f.e eVarA = a.a(a.this, i, aiVar, ajVar, j);
                if (eVarA == null) {
                    return;
                }
                a.super.a(eVarA, a.b(i, aiVar));
            }
        });
    }

    private com.tkay.core.common.f.e b(int i, ai aiVar, aj ajVar, long j) {
        if (i == 13) {
            l lVarM = ajVar != null ? ajVar.M() : null;
            if (lVarM != null) {
                lVarM.a(ajVar);
            }
        }
        if (i == 4) {
            l lVarM2 = ajVar != null ? ajVar.M() : null;
            if (lVarM2 != null) {
                lVarM2.a(true, lVarM2.getSortPrice(), true);
            }
            if (aiVar instanceof com.tkay.core.common.f.d) {
                a((com.tkay.core.common.f.d) aiVar, ajVar);
            }
        }
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
        com.tkay.core.common.f.e eVar = new com.tkay.core.common.f.e();
        eVar.a = i;
        eVar.b = aiVar;
        if (j <= 0) {
            j = System.currentTimeMillis();
        }
        eVar.c = j;
        r.a(m.a().f()).a(i, eVar, aVarB);
        if (a(i, aiVar, aVarB)) {
            return null;
        }
        if (4 == i && (aiVar instanceof com.tkay.core.common.f.d)) {
            q.a();
            q.a((com.tkay.core.common.f.d) aiVar);
        }
        return eVar;
    }

    static com.tkay.core.common.f.e a(a aVar, int i, ai aiVar, aj ajVar, long j) {
        if (i == 13) {
            l lVarM = ajVar != null ? ajVar.M() : null;
            if (lVarM != null) {
                lVarM.a(ajVar);
            }
        }
        if (i == 4) {
            l lVarM2 = ajVar != null ? ajVar.M() : null;
            if (lVarM2 != null) {
                lVarM2.a(true, lVarM2.getSortPrice(), true);
            }
            if (aiVar instanceof com.tkay.core.common.f.d) {
                aVar.a((com.tkay.core.common.f.d) aiVar, ajVar);
            }
        }
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
        com.tkay.core.common.f.e eVar = new com.tkay.core.common.f.e();
        eVar.a = i;
        eVar.b = aiVar;
        if (j <= 0) {
            j = System.currentTimeMillis();
        }
        eVar.c = j;
        r.a(m.a().f()).a(i, eVar, aVarB);
        if (a(i, aiVar, aVarB)) {
            return null;
        }
        if (4 == i && (aiVar instanceof com.tkay.core.common.f.d)) {
            q.a();
            q.a((com.tkay.core.common.f.d) aiVar);
        }
        return eVar;
    }

    static boolean b(int i, ai aiVar) {
        Map<String, String> mapA;
        if (aiVar instanceof com.tkay.core.common.f.d) {
            com.tkay.core.common.f.d dVar = (com.tkay.core.common.f.d) aiVar;
            if (dVar.H() == 67) {
                return true;
            }
            if (dVar.H() != 0 && !TextUtils.isEmpty(aiVar.Y()) && (mapA = com.tkay.core.c.b.a(m.a().f()).b(m.a().o()).a(i)) != null) {
                if (mapA.containsKey("0")) {
                    String str = mapA.get("0");
                    return !TextUtils.isEmpty(str) && str.contains(aiVar.Y());
                }
                if (mapA.containsKey(String.valueOf(dVar.H()))) {
                    String str2 = mapA.get(String.valueOf(dVar.H()));
                    if (!TextUtils.isEmpty(str2) && str2.contains(aiVar.Y())) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}
