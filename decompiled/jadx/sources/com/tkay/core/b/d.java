package com.tkay.core.b;

import com.tkay.core.common.f.ag;
import com.tkay.core.common.h.k;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class d extends b {
    public d(ag agVar) {
        super(agVar);
    }

    @Override // com.tkay.core.b.b
    protected final void a(List<JSONObject> list, k kVar) {
        com.tkay.core.b.a.b bVar = new com.tkay.core.b.a.b();
        bVar.f = this.f5950a.o.as();
        com.tkay.core.b.a.a aVar = new com.tkay.core.b.a.a(this.k, this.j, this.i, list, 1);
        aVar.a(bVar);
        aVar.a(0, kVar);
    }

    @Override // com.tkay.core.b.b
    protected final String e() {
        return this.f5950a.q;
    }
}
