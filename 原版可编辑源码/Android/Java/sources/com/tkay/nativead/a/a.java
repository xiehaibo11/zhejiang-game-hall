package com.tkay.nativead.a;

import android.content.Context;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.f;
import com.tkay.core.common.h;
import com.tkay.core.common.j;
import com.tkay.core.common.l.s;
import com.tkay.core.common.v;
import com.tkay.nativead.unitgroup.api.CustomNativeAdapter;
import java.util.Map;

public class a extends f<d> {
    public static final String a = a.class.getSimpleName();

    @Override
    protected final String a() {
        return "0";
    }

    @Override
    public final h a(j jVar) {
        d dVar = (d) jVar;
        c cVar = new c(dVar.a());
        cVar.a(dVar.d);
        return cVar;
    }

    public static a a(Context context, String str) {
        f fVarA = v.a().a(str, "0");
        if (fVarA == null || !(fVarA instanceof a)) {
            fVarA = new a(context, str);
            v.a().a(str, "0", fVarA);
        }
        return (a) fVarA;
    }

    private a(Context context, String str) {
        super(context, str);
    }

    public final com.tkay.core.common.f.a a(String str, Map<String, Object> map) {
        com.tkay.core.common.f.a aVarA = com.tkay.core.common.a.a().a(this.b, this.c);
        if (aVarA == null || !(aVarA.f() instanceof com.tkay.nativead.unitgroup.a) || !(aVarA.e() instanceof CustomNativeAdapter)) {
            return null;
        }
        BaseAd baseAdF = aVarA.f();
        TYBaseAdAdapter tYBaseAdAdapterE = aVarA.e();
        com.tkay.core.common.f.d detail = baseAdF.getDetail();
        detail.C = str;
        com.tkay.core.common.a.a().a(this.c, detail.x(), aVarA);
        com.tkay.core.common.a.a();
        com.tkay.core.common.a.b(this.c, tYBaseAdAdapterE.getUnitGroupInfo());
        s.a(map, detail);
        return aVarA;
    }

    public final void a(Context context, com.tkay.core.common.b.a aVar, com.tkay.core.common.b.b bVar, Map<String, Object> map) {
        d dVar = new d();
        dVar.a(context);
        dVar.e = bVar;
        dVar.d = 0;
        dVar.g = map;
        super.a(this.b, "0", this.c, dVar, aVar);
    }

    private static h a(d dVar) {
        c cVar = new c(dVar.a());
        cVar.a(dVar.d);
        return cVar;
    }
}
