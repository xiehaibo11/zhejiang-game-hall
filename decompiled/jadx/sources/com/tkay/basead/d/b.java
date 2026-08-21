package com.tkay.basead.d;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.a.c;
import com.tkay.basead.d.a.a;
import com.tkay.basead.d.b.a;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.y;
import com.tkay.core.common.f.z;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f5637a;
    protected Context b;
    protected com.tkay.core.common.f.i c;
    protected c d;
    protected z e;
    protected com.tkay.core.common.a.g f;
    protected com.tkay.basead.a.c g;
    protected com.tkay.basead.e.a h;
    protected ConcurrentHashMap<String, com.tkay.basead.a.c> i;
    protected String j;
    private boolean k = false;

    public enum a {
        ADX_OFFER_REQUEST_TYPE,
        ONLINE_API_OFFER_REQUEST_TYPE
    }

    static /* synthetic */ boolean a(b bVar) {
        bVar.k = true;
        return true;
    }

    public b(Context context, a aVar, com.tkay.core.common.f.i iVar) {
        this.b = context.getApplicationContext();
        this.f5637a = aVar;
        this.c = iVar;
    }

    public final void a(String str) {
        this.j = str;
    }

    public final void a(c cVar) {
        this.d = cVar;
        if (this.c.m instanceof aa) {
            aa aaVar = (aa) this.c.m;
            c cVar2 = this.d;
            if (aaVar == null || cVar2 == null) {
                return;
            }
            aaVar.v(cVar2.a());
            aaVar.w(cVar2.b());
            aaVar.a(cVar2.d());
            aaVar.p(cVar2.c());
            aaVar.o(cVar2.e());
            aaVar.b(cVar2.f());
            aaVar.n(cVar2.g());
            aaVar.a(cVar2.h());
            aaVar.b(cVar2.i());
            aaVar.b(cVar2.j());
        }
    }

    public final void a(com.tkay.basead.e.a aVar) {
        this.h = aVar;
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.b$4, reason: invalid class name */
    static /* synthetic */ class AnonymousClass4 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f5642a;

        static {
            int[] iArr = new int[a.values().length];
            f5642a = iArr;
            try {
                iArr[a.ADX_OFFER_REQUEST_TYPE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f5642a[a.ONLINE_API_OFFER_REQUEST_TYPE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    public final boolean c() {
        int i = AnonymousClass4.f5642a[this.f5637a.ordinal()];
        if (i == 1) {
            if (this.e == null) {
                this.e = com.tkay.basead.d.a.a.a(this.b).a(this.c);
            }
            com.tkay.core.common.a.g gVar = this.f;
            if (gVar != null) {
                return gVar.isReady();
            }
            if (this.k) {
                return true;
            }
            z zVar = this.e;
            if (zVar == null || !com.tkay.basead.a.b.c.a(zVar, this.c)) {
                return false;
            }
            this.k = true;
            return true;
        }
        if (i != 2) {
            return false;
        }
        if (this.e == null) {
            this.e = com.tkay.basead.d.b.a.a(this.b).a(this.c);
        }
        if (this.k) {
            return true;
        }
        z zVar2 = this.e;
        if (zVar2 == null || !(zVar2 instanceof y) || ((y) zVar2).N() || !com.tkay.basead.a.b.c.a(this.e, this.c)) {
            return false;
        }
        this.k = true;
        return true;
    }

    public final void a(com.tkay.basead.e.c cVar) {
        int i = AnonymousClass4.f5642a[this.f5637a.ordinal()];
        if (i != 1) {
            if (i != 2) {
                return;
            }
            try {
                com.tkay.basead.d.b.a.a(this.b).a(this.c, this.j, new AnonymousClass2(cVar));
                return;
            } catch (Throwable th) {
                th.printStackTrace();
                cVar.onAdLoadFailed(com.tkay.basead.c.f.a("-9999", th.getMessage()));
                return;
            }
        }
        try {
            if (this.c != null && !TextUtils.isEmpty(this.c.b) && !TextUtils.isEmpty(this.c.f6156a)) {
                com.tkay.basead.d.a.a.a(this.b).a(this.c, new AnonymousClass1(cVar));
                return;
            }
            cVar.onAdLoadFailed(com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.v));
        } catch (Throwable th2) {
            th2.printStackTrace();
            cVar.onAdLoadFailed(com.tkay.basead.c.f.a("-9999", th2.getMessage()));
        }
    }

    protected final String a(z zVar) {
        return this.c.b + this.c.c + this.c.f + zVar.p() + System.currentTimeMillis();
    }

    private void b(com.tkay.basead.e.c cVar) {
        try {
            if (this.c != null && !TextUtils.isEmpty(this.c.b) && !TextUtils.isEmpty(this.c.f6156a)) {
                com.tkay.basead.d.a.a.a(this.b).a(this.c, new AnonymousClass1(cVar));
                return;
            }
            if (cVar != null) {
                cVar.onAdLoadFailed(com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.v));
            }
        } catch (Throwable th) {
            th.printStackTrace();
            if (cVar != null) {
                cVar.onAdLoadFailed(com.tkay.basead.c.f.a("-9999", th.getMessage()));
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.b$1, reason: invalid class name */
    final class AnonymousClass1 implements a.InterfaceC0388a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.basead.e.c f5638a;

        AnonymousClass1(com.tkay.basead.e.c cVar) {
            this.f5638a = cVar;
        }

        @Override // com.tkay.basead.d.a.a.InterfaceC0388a
        public final void a(com.tkay.core.common.f.f fVar) {
            b.this.a(fVar);
            com.tkay.basead.e.c cVar = this.f5638a;
            if (cVar != null) {
                cVar.onAdDataLoaded();
            }
        }

        @Override // com.tkay.basead.d.a.a.InterfaceC0388a
        public final void a(com.tkay.core.common.f.f fVar, com.tkay.core.common.a.g gVar) {
            b.this.e = fVar;
            b.this.f = gVar;
            b bVar = b.this;
            bVar.g = new com.tkay.basead.a.c(bVar.b, b.this.c, b.this.e);
            b.this.g.a(new c.b() { // from class: com.tkay.basead.d.b.1.1
                @Override // com.tkay.basead.a.c.b
                public final void b() {
                }

                @Override // com.tkay.basead.a.c.b
                public final void c() {
                }

                @Override // com.tkay.basead.a.c.b
                public final void a() {
                    if (b.this.h != null) {
                        b.this.h.onAdClick(1);
                    }
                }

                @Override // com.tkay.basead.a.c.b
                public final void a(boolean z) {
                    if (b.this.h != null) {
                        b.this.h.onDeeplinkCallback(z);
                    }
                }
            });
            com.tkay.basead.a.b.a(33, fVar, new com.tkay.basead.c.i(b.this.c.d, ""));
            b.a(b.this);
            com.tkay.basead.e.c cVar = this.f5638a;
            if (cVar != null) {
                cVar.onAdCacheLoaded();
            }
        }

        @Override // com.tkay.basead.d.a.a.InterfaceC0388a
        public final void a(com.tkay.core.common.f.f fVar, com.tkay.basead.c.e eVar) {
            b.a(b.this, fVar, eVar, this.f5638a, true);
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.b$2, reason: invalid class name */
    final class AnonymousClass2 implements a.InterfaceC0391a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.basead.e.c f5640a;

        AnonymousClass2(com.tkay.basead.e.c cVar) {
            this.f5640a = cVar;
        }

        @Override // com.tkay.basead.d.b.a.InterfaceC0391a
        public final void a() {
            com.tkay.basead.e.c cVar = this.f5640a;
            if (cVar != null) {
                cVar.onAdDataLoaded();
            }
        }

        @Override // com.tkay.basead.d.b.a.InterfaceC0391a
        public final void a(y yVar) {
            b.this.e = yVar;
            com.tkay.basead.a.b.a(33, b.this.e, new com.tkay.basead.c.i(b.this.c.d, ""));
            b.a(b.this);
            com.tkay.basead.e.c cVar = this.f5640a;
            if (cVar != null) {
                cVar.onAdCacheLoaded();
            }
        }

        @Override // com.tkay.basead.d.b.a.InterfaceC0391a
        public final void a(y yVar, com.tkay.basead.c.e eVar) {
            b.a(b.this, yVar, eVar, this.f5640a, false);
        }
    }

    private void c(com.tkay.basead.e.c cVar) {
        try {
            com.tkay.basead.d.b.a.a(this.b).a(this.c, this.j, new AnonymousClass2(cVar));
        } catch (Throwable th) {
            th.printStackTrace();
            if (cVar != null) {
                cVar.onAdLoadFailed(com.tkay.basead.c.f.a("-9999", th.getMessage()));
            }
        }
    }

    private void a(com.tkay.core.common.f.h hVar, com.tkay.basead.c.e eVar, com.tkay.basead.e.c cVar, boolean z) {
        if (hVar != null) {
            com.tkay.basead.a.b.a(34, hVar, new com.tkay.basead.c.i(this.c.d, ""));
        }
        if (hVar instanceof y) {
            com.tkay.core.basead.b.a();
            Context contextF = m.a().f();
            com.tkay.core.basead.b.a();
            com.tkay.core.basead.b.b(contextF, com.tkay.core.basead.b.a(this.c));
        }
        if (z) {
            try {
                com.tkay.core.b.c.a().a(this.c.c);
                com.tkay.core.b.c.a();
                com.tkay.core.b.c.b(this.c.c);
                com.tkay.core.common.a.a.a().b(m.a().f(), this.c.f6156a);
            } catch (Throwable unused) {
            }
        }
        if (cVar != null) {
            cVar.onAdLoadFailed(eVar);
        }
    }

    protected final synchronized void a(com.tkay.expressad.foundation.d.c cVar, String str) {
        try {
            if (this.g == null) {
                return;
            }
            if (this.i == null) {
                this.i = new ConcurrentHashMap<>(2);
            }
            com.tkay.basead.a.c cVarA = this.i.get(cVar.aZ());
            if (cVarA == null) {
                cVarA = com.tkay.basead.d.a.b.a(this.g, cVar);
                this.i.put(cVar.aZ(), cVarA);
            }
            if (cVarA != null) {
                com.tkay.basead.c.i iVar = new com.tkay.basead.c.i(this.c.d, str);
                iVar.g = new com.tkay.basead.c.a();
                cVarA.a(new c.b() { // from class: com.tkay.basead.d.b.3
                    @Override // com.tkay.basead.a.c.b
                    public final void b() {
                    }

                    @Override // com.tkay.basead.a.c.b
                    public final void c() {
                    }

                    @Override // com.tkay.basead.a.c.b
                    public final void a() {
                        if (b.this.h != null) {
                            b.this.h.onAdClick(1);
                        }
                    }

                    @Override // com.tkay.basead.a.c.b
                    public final void a(boolean z) {
                        if (b.this.h != null) {
                            b.this.h.onDeeplinkCallback(z);
                        }
                    }
                });
                cVarA.a(iVar);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    protected final synchronized void d() {
        if (this.g != null) {
            this.g.d();
            this.g = null;
        }
        if (this.i != null && this.i.size() > 0) {
            Iterator<Map.Entry<String, com.tkay.basead.a.c>> it = this.i.entrySet().iterator();
            while (it.hasNext()) {
                com.tkay.basead.a.c value = it.next().getValue();
                if (value != null) {
                    value.d();
                    it.remove();
                }
            }
        }
    }

    public final com.tkay.core.common.f.h e() {
        return this.e;
    }

    public void b() {
        this.e = null;
    }

    protected final void a(com.tkay.core.common.f.f fVar) {
        if (fVar.c() == 1) {
            com.tkay.core.common.a.b.a().b();
            if (com.tkay.core.common.l.h.a(this.b, fVar.B())) {
                StringBuilder sb = new StringBuilder("check offer installed(onAdDataLoaded):ture,dsp offerid:");
                sb.append(fVar.U());
                sb.append(",packagename:");
                sb.append(fVar.B());
                com.tkay.core.common.a.b.a().c(fVar);
                return;
            }
            StringBuilder sb2 = new StringBuilder("check offer installed(onAdDataLoaded):false,need record show,dsp offerid:");
            sb2.append(fVar.U());
            sb2.append(",packagename:");
            sb2.append(fVar.B());
            com.tkay.core.common.a.b.a().a(fVar);
        }
    }

    static /* synthetic */ void a(b bVar, com.tkay.core.common.f.h hVar, com.tkay.basead.c.e eVar, com.tkay.basead.e.c cVar, boolean z) {
        if (hVar != null) {
            com.tkay.basead.a.b.a(34, hVar, new com.tkay.basead.c.i(bVar.c.d, ""));
        }
        if (hVar instanceof y) {
            com.tkay.core.basead.b.a();
            Context contextF = m.a().f();
            com.tkay.core.basead.b.a();
            com.tkay.core.basead.b.b(contextF, com.tkay.core.basead.b.a(bVar.c));
        }
        if (z) {
            try {
                com.tkay.core.b.c.a().a(bVar.c.c);
                com.tkay.core.b.c.a();
                com.tkay.core.b.c.b(bVar.c.c);
                com.tkay.core.common.a.a.a().b(m.a().f(), bVar.c.f6156a);
            } catch (Throwable unused) {
            }
        }
        if (cVar != null) {
            cVar.onAdLoadFailed(eVar);
        }
    }
}
