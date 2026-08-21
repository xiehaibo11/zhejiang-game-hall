package com.tkay.core.b;

import com.tkay.core.common.f.ag;
import com.tkay.core.common.h.k;
import java.util.List;
import org.json.JSONObject;

public final class d extends b {
    public d(ag agVar) {
        super(agVar);
    }

    @Override
    protected final void a(List<JSONObject> list, k kVar) {
        com.tkay.core.b.a.b bVar = new com.tkay.core.b.a.b();
        bVar.f = this.a.o.as();
        com.tkay.core.b.a.a aVar = new com.tkay.core.b.a.a(this.k, this.j, this.i, list, 1);
        aVar.a(bVar);
        aVar.a(0, kVar);
    }

    @Override
    protected final String e() {
        return this.a.q;
    }
}
