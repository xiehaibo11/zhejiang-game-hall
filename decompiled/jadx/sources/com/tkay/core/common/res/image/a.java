package com.tkay.core.common.res.image;

import com.tkay.core.common.b.m;
import com.tkay.core.common.l.f;
import com.tkay.core.common.res.d;
import com.tkay.core.common.res.e;
import java.io.InputStream;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class a extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    e f6307a;
    InterfaceC0426a b;

    /* JADX INFO: renamed from: com.tkay.core.common.res.image.a$a, reason: collision with other inner class name */
    public interface InterfaceC0426a {
        void a(e eVar);

        void a(e eVar, String str);
    }

    @Override // com.tkay.core.common.res.image.b
    protected final Map<String, String> a() {
        return null;
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void b() {
    }

    public a(e eVar) {
        super(eVar.f);
        this.f6307a = eVar;
    }

    public final void a(InterfaceC0426a interfaceC0426a) {
        this.b = interfaceC0426a;
    }

    @Override // com.tkay.core.common.res.image.b
    protected final boolean a(InputStream inputStream) {
        return d.a(m.a().f()).a(this.f6307a.e, f.a(this.f6307a.f), inputStream);
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void a(com.tkay.core.common.l.b.b bVar) {
        com.tkay.core.common.l.b.a.a().a(bVar, 5);
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void c() {
        InterfaceC0426a interfaceC0426a = this.b;
        if (interfaceC0426a != null) {
            interfaceC0426a.a(this.f6307a);
        }
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void a(String str, String str2) {
        InterfaceC0426a interfaceC0426a = this.b;
        if (interfaceC0426a != null) {
            interfaceC0426a.a(this.f6307a, str2);
        }
    }
}
