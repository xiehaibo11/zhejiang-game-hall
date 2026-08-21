package com.tkay.expressad.video.dynview.j;

import android.content.Context;
import android.view.View;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.dynview.c;
import com.tkay.expressad.videocommon.e.d;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7249a = "ViewOptionWrapper";
    private static final String b = "\\.xml";
    private static final String c = "\\/xml";

    private static String a(int i) {
        return i != 3 ? i != 302 ? i != 802 ? i != 904 ? "tkay_reward_layer_floor" : com.tkay.expressad.video.dynview.a.a.g : com.tkay.expressad.video.dynview.a.a.f : com.tkay.expressad.video.dynview.a.a.e : com.tkay.expressad.video.dynview.a.a.h;
    }

    public static com.tkay.expressad.video.dynview.c a(Context context, List<com.tkay.expressad.foundation.d.c> list) {
        int iC;
        if (list == null) {
            return null;
        }
        try {
            float f = t.f(m.a().f());
            float fE = t.e(m.a().f());
            if (list.size() <= 0 || list.get(0) == null) {
                iC = 1;
            } else {
                com.tkay.expressad.foundation.d.c cVar = list.get(0);
                iC = (cVar == null || cVar.M() == null) ? 1 : cVar.M().c();
                list.get(0).as();
                list.get(0).aq();
            }
            String str = com.tkay.expressad.video.dynview.a.a.i;
            if (iC == 1) {
                str = com.tkay.expressad.video.dynview.a.a.j;
            } else if (iC != 2) {
                if (com.tkay.expressad.video.dynview.i.c.a(context)) {
                    iC = 2;
                } else {
                    iC = 1;
                    str = com.tkay.expressad.video.dynview.a.a.j;
                }
            }
            return new c.a().a(context).a(str).a(1).a(fE).b(f).a(list).b(iC).b("").a();
        } catch (Exception e) {
            e.getMessage();
            return null;
        }
    }

    public static com.tkay.expressad.video.dynview.c a(View view, com.tkay.expressad.foundation.d.c cVar) {
        String strK;
        String strE;
        String strA;
        boolean zA;
        if (cVar == null) {
            return null;
        }
        int iB = 102;
        if (cVar != null) {
            try {
                strK = cVar.K();
                if (cVar.M() != null) {
                    iB = cVar.M().b();
                    strE = cVar.M().e();
                } else {
                    strE = "";
                }
                strA = a(iB);
                zA = com.tkay.expressad.video.dynview.i.c.a(strE);
            } catch (Exception e) {
                e.getMessage();
                return null;
            }
        } else {
            zA = false;
            strK = "";
            strA = strK;
        }
        d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), strK, false);
        int iH = dVarA != null ? dVarA.h() : 0;
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar);
        return new c.a().a(strA).a(iB).a(arrayList).a(view.getContext()).a(view).c(iH).b(k.b(view.getContext())).d(iB).a(zA).b("").e(cVar.k()).a();
    }

    public static com.tkay.expressad.video.dynview.c b(View view, com.tkay.expressad.foundation.d.c cVar) {
        String strA;
        if (cVar == null) {
            return null;
        }
        String strK = "";
        if (cVar != null) {
            try {
                strK = cVar.K();
                strA = a(3);
            } catch (Exception e) {
                e.getMessage();
                return null;
            }
        } else {
            strA = "";
        }
        d dVarA = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), strK, false);
        int iH = dVarA != null ? dVarA.h() : 0;
        ArrayList arrayList = new ArrayList();
        arrayList.add(cVar);
        return new c.a().a(strA).a(3).a(arrayList).a(view.getContext()).a(view).c(iH).b(k.b(view.getContext())).d(3).a();
    }

    public static com.tkay.expressad.video.dynview.c a(Context context, com.tkay.expressad.foundation.d.c cVar, int i) {
        if (cVar == null) {
            return null;
        }
        try {
            return new c.a().a(k.b(context) == 1 ? com.tkay.expressad.video.dynview.a.a.b : com.tkay.expressad.video.dynview.a.a.f7214a).a(4).a(context).b(k.b(context)).b("").e(cVar.k()).d(i).a();
        } catch (Exception e) {
            e.getMessage();
            return null;
        }
    }

    public static com.tkay.expressad.video.dynview.c b(Context context, List<com.tkay.expressad.foundation.d.c> list) {
        if (list == null || list.size() == 0) {
            return null;
        }
        try {
            float f = t.f(m.a().f());
            float fE = t.e(m.a().f());
            int i = 0;
            if (list.get(0) != null) {
                int iK = list.get(0).k();
                list.get(0).as();
                list.get(0).aq();
                i = iK;
            }
            int iB = k.b(context);
            return new c.a().a(iB == 1 ? com.tkay.expressad.video.dynview.a.a.k : com.tkay.expressad.video.dynview.a.a.l).a(5).a(context).a(fE).b(f).a(list).b(iB).b("").e(i).d(i).a();
        } catch (Exception e) {
            e.getMessage();
            return null;
        }
    }
}
