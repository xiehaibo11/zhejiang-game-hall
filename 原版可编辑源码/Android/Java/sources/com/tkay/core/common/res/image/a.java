package com.tkay.core.common.res.image;

import com.tkay.core.common.b.m;
import com.tkay.core.common.l.f;
import com.tkay.core.common.res.d;
import com.tkay.core.common.res.e;
import java.io.InputStream;
import java.util.Map;

public final class a extends b {
    e a;
    a b;

    public interface a {
        void a(e eVar);

        void a(e eVar, String str);
    }

    @Override
    protected final Map<String, String> a() {
        return null;
    }

    @Override
    protected final void b() {
    }

    public a(e eVar) {
        super(eVar.f);
        this.a = eVar;
    }

    public final void a(a aVar) {
        this.b = aVar;
    }

    @Override
    protected final boolean a(InputStream inputStream) {
        return d.a(m.a().f()).a(this.a.e, f.a(this.a.f), inputStream);
    }

    @Override
    protected final void a(com.tkay.core.common.l.b.b bVar) {
        com.tkay.core.common.l.b.a.a().a(bVar, 5);
    }

    @Override
    protected final void c() {
        a aVar = this.b;
        if (aVar != null) {
            aVar.a(this.a);
        }
    }

    @Override
    protected final void a(String str, String str2) {
        a aVar = this.b;
        if (aVar != null) {
            aVar.a(this.a, str2);
        }
    }
}
