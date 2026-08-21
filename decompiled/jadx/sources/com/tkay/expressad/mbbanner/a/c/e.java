package com.tkay.expressad.mbbanner.a.c;

import java.util.List;
import java.util.Random;

/* JADX INFO: loaded from: classes3.dex */
public class e implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6985a = e.class.getSimpleName();
    private c b;
    private com.tkay.expressad.d.c c;
    private boolean d = false;

    public e(c cVar, com.tkay.expressad.d.c cVar2) {
        this.c = cVar2;
        this.b = cVar;
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void a(List<com.tkay.expressad.foundation.d.c> list) {
        if (list != null) {
            try {
                if (list.size() > 0) {
                    com.tkay.expressad.d.c cVar = this.c;
                    boolean z = false;
                    if (!list.get(0).A() && cVar != null && cVar.a() != 1.0d) {
                        if (new Random().nextDouble() > cVar.a()) {
                            z = true;
                        }
                    }
                    this.d = z;
                    new StringBuilder().append(this.d);
                }
            } catch (Exception unused) {
            }
        }
        c cVar2 = this.b;
        if (cVar2 != null) {
            cVar2.a(list);
        }
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void a(String str) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(str);
        }
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        c cVar2 = this.b;
        if (cVar2 == null || this.d) {
            return;
        }
        cVar2.a(cVar);
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void a() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a();
        }
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void b() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.b();
        }
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void c() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.c();
        }
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
        c cVar2 = this.b;
        if (cVar2 != null) {
            cVar2.a(cVar, this.d);
        }
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void d() {
        c cVar = this.b;
        if (cVar != null) {
            cVar.d();
        }
    }

    private static boolean a(com.tkay.expressad.d.c cVar, boolean z) {
        if (z || cVar == null || cVar.a() == 1.0d) {
            return false;
        }
        return new Random().nextDouble() > cVar.a();
    }

    @Override // com.tkay.expressad.mbbanner.a.c.c
    public final void a(boolean z) {
        c cVar = this.b;
        if (cVar != null) {
            cVar.a(z);
        }
    }
}
