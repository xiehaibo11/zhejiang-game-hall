package com.tkay.banner.a;

import android.content.Context;
import com.tkay.core.common.b.f;
import com.tkay.core.common.h;
import com.tkay.core.common.j;
import com.tkay.core.common.v;
import java.util.Map;

public class a extends com.tkay.core.common.f<c> {
    public static final String a = f.g.c + a.class.getSimpleName();

    @Override
    protected final String a() {
        return "2";
    }

    @Override
    public final h a(j jVar) {
        c cVar = (c) jVar;
        f fVar = new f(cVar.a());
        fVar.a(cVar.d);
        return fVar;
    }

    private a(Context context, String str) {
        super(context, str);
    }

    public static a a(Context context, String str) {
        com.tkay.core.common.f fVarA = v.a().a(str, "2");
        if (fVarA == null || !(fVarA instanceof a)) {
            fVarA = new a(context, str);
            v.a().a(str, "2", fVarA);
        }
        return (a) fVarA;
    }

    public final void a(Context context, int i, com.tkay.core.common.b.a aVar, com.tkay.core.common.b.b bVar, Map<String, Object> map) {
        c cVar = new c();
        cVar.e = bVar;
        cVar.a(context);
        cVar.d = i;
        cVar.g = map;
        super.a(this.b, "2", this.c, cVar, aVar);
    }

    private static h a(c cVar) {
        f fVar = new f(cVar.a());
        fVar.a(cVar.d);
        return fVar;
    }
}
