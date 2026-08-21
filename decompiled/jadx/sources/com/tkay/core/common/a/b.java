package com.tkay.core.common.a;

import com.tkay.core.common.b.m;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class b {
    private static volatile b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f6017a = b.class.getName();
    private com.tkay.core.common.c.f c;
    private com.tkay.core.common.c.e d;

    private b() {
        if (m.a().f() != null) {
            this.c = com.tkay.core.common.c.f.a(com.tkay.core.common.c.c.a(m.a().f()));
            this.d = com.tkay.core.common.c.e.a(com.tkay.core.common.c.c.a(m.a().f()));
        }
    }

    public static b a() {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b();
                }
            }
        }
        return b;
    }

    public final void a(final com.tkay.core.common.f.f fVar) {
        new StringBuilder("insertDspOfferShowRecord dspOfferId:").append(fVar.U());
        m.a();
        m.b(new Runnable() { // from class: com.tkay.core.common.a.b.1
            @Override // java.lang.Runnable
            public final void run() {
                f fVar2 = new f();
                fVar2.f6022a = fVar.T();
                fVar2.b = fVar.U();
                fVar2.c = fVar.V();
                fVar2.d = 0;
                b.this.c.a(fVar2);
            }
        });
    }

    public final void b(final com.tkay.core.common.f.f fVar) {
        new StringBuilder("updateDspOfferShowRecord dspOfferId:").append(fVar.U());
        m.a();
        m.b(new Runnable() { // from class: com.tkay.core.common.a.b.2
            @Override // java.lang.Runnable
            public final void run() {
                f fVar2 = new f();
                fVar2.f6022a = fVar.T();
                fVar2.b = fVar.U();
                fVar2.c = fVar.V();
                fVar2.d = 1;
                b.this.c.b(fVar2);
            }
        });
    }

    public final void b() {
        m.a();
        m.b(new Runnable() { // from class: com.tkay.core.common.a.b.3
            @Override // java.lang.Runnable
            public final void run() {
                b.this.c.c();
            }
        });
    }

    public final List<d> a(int i) {
        return this.c.a(i);
    }

    public final void c(final com.tkay.core.common.f.f fVar) {
        if (fVar.W() == 1) {
            if (fVar.D() == 1 || fVar.D() == 4) {
                m.a();
                m.b(new Runnable() { // from class: com.tkay.core.common.a.b.4
                    @Override // java.lang.Runnable
                    public final void run() {
                        new StringBuilder("insertDspOfferInstallRecord dspOfferId:").append(fVar.U());
                        e eVar = new e();
                        eVar.f6022a = fVar.T();
                        eVar.b = fVar.U();
                        eVar.c = fVar.B();
                        b.this.d.a(eVar);
                    }
                });
                return;
            } else {
                StringBuilder sb = new StringBuilder("adxOffer.getClickType = ");
                sb.append(fVar.D());
                sb.append(",not need to record install");
                return;
            }
        }
        StringBuilder sb2 = new StringBuilder("adxOffer.getDspInstallIdUploadSwitch() = ");
        sb2.append(fVar.W());
        sb2.append(",not need to record install");
    }

    public final List<d> b(int i) {
        return this.d.a(i);
    }
}
