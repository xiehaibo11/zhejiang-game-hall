package com.tkay.basead.d.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.a.b.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.a.b;
import com.tkay.core.api.AdError;
import com.tkay.core.common.a.c;
import com.tkay.core.common.a.g;
import com.tkay.core.common.f.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.h.k;
import com.tkay.expressad.foundation.d.d;
import java.util.ArrayList;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    private static volatile a d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    ConcurrentHashMap<String, Boolean> f5625a = new ConcurrentHashMap<>(3);
    ConcurrentHashMap<String, g> b = new ConcurrentHashMap<>(2);
    private Context c;

    /* JADX INFO: renamed from: com.tkay.basead.d.a.a$a, reason: collision with other inner class name */
    public interface InterfaceC0388a {
        void a(f fVar);

        void a(f fVar, e eVar);

        void a(f fVar, g gVar);
    }

    private a(Context context) {
        this.c = context.getApplicationContext();
    }

    public static a a(Context context) {
        if (d == null) {
            synchronized (a.class) {
                if (d == null) {
                    d = new a(context);
                }
            }
        }
        return d;
    }

    public final void a(final i iVar, final InterfaceC0388a interfaceC0388a) {
        if (this.f5625a.contains(iVar.b + iVar.f6156a)) {
            if (this.f5625a.get(iVar.b + iVar.f6156a).booleanValue()) {
                interfaceC0388a.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.g, com.tkay.basead.c.f.q));
                return;
            }
        }
        this.f5625a.put(iVar.b + iVar.f6156a, Boolean.TRUE);
        com.tkay.core.common.l.b.a.a().b(new Runnable() { // from class: com.tkay.basead.d.a.a.1
            @Override // java.lang.Runnable
            public final void run() {
                a.a(a.this, iVar, interfaceC0388a);
            }
        });
    }

    private void b(i iVar, InterfaceC0388a interfaceC0388a) {
        f fVarA;
        try {
            fVarA = a(iVar);
        } catch (Throwable unused) {
            fVarA = null;
        }
        if (fVarA == null) {
            new com.tkay.basead.g.a(iVar).a(0, (k) new AnonymousClass2(iVar, interfaceC0388a));
            return;
        }
        com.tkay.core.common.a.a.a();
        if (!com.tkay.core.common.a.a.d(this.c, fVarA.b())) {
            com.tkay.basead.a.b.a(10, fVarA, new com.tkay.basead.c.i(iVar.d, ""));
            com.tkay.core.common.a.a.a();
            com.tkay.core.common.a.a.c(this.c, fVarA.b());
        }
        d dVarA = a(fVarA, iVar);
        if (interfaceC0388a != null) {
            interfaceC0388a.a(fVarA);
        }
        a(fVarA, iVar, dVarA, interfaceC0388a);
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.a.a$2, reason: invalid class name */
    final class AnonymousClass2 implements k {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ i f5627a;
        final /* synthetic */ InterfaceC0388a b;

        @Override // com.tkay.core.common.h.k
        public final void onLoadStart(int i) {
        }

        AnonymousClass2(i iVar, InterfaceC0388a interfaceC0388a) {
            this.f5627a = iVar;
            this.b = interfaceC0388a;
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadFinish(int i, Object obj) {
            f fVarA;
            try {
                fVarA = c.a(this.f5627a.f6156a, new JSONObject(obj.toString()), this.f5627a.f);
            } catch (Exception unused) {
                fVarA = null;
            }
            if (fVarA != null) {
                com.tkay.basead.d.c.b.a(fVarA);
                com.tkay.basead.d.c.a.a(this.f5627a, fVarA);
                com.tkay.basead.d.c.d.a(this.f5627a, fVarA);
                if (this.f5627a.f == 67) {
                    com.tkay.core.common.d.c.a(a.this.c).a(fVarA.p(), fVarA.P());
                    com.tkay.core.common.d.b.a(a.this.c).a(fVarA.q(), fVarA.P());
                }
                com.tkay.basead.a.b.a(10, fVarA, new com.tkay.basead.c.i(this.f5627a.d, ""));
                com.tkay.core.common.a.a.a();
                com.tkay.core.common.a.a.c(a.this.c, fVarA.b());
                com.tkay.core.common.a.a.a().a(a.this.c, this.f5627a.f, this.f5627a.c, this.f5627a.f6156a, obj.toString());
                d dVarA = a.this.a(fVarA, this.f5627a);
                InterfaceC0388a interfaceC0388a = this.b;
                if (interfaceC0388a != null) {
                    interfaceC0388a.a(fVarA);
                }
                a.this.a(fVarA, this.f5627a, dVarA, this.b);
                return;
            }
            InterfaceC0388a interfaceC0388a2 = this.b;
            if (interfaceC0388a2 != null) {
                interfaceC0388a2.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, obj != null ? obj.toString() : "No Ad Return."));
            }
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadError(int i, String str, AdError adError) {
            InterfaceC0388a interfaceC0388a = this.b;
            if (interfaceC0388a != null) {
                interfaceC0388a.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, str));
            }
        }

        @Override // com.tkay.core.common.h.k
        public final void onLoadCanceled(int i) {
            InterfaceC0388a interfaceC0388a = this.b;
            if (interfaceC0388a != null) {
                interfaceC0388a.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, "Cancel Request."));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized d a(f fVar, i iVar) {
        if (TextUtils.isEmpty(fVar.a())) {
            return null;
        }
        d dVarA = d.a(fVar.a());
        ArrayList<com.tkay.expressad.foundation.d.c> arrayList = dVarA.J;
        b.a(fVar, arrayList.get(0));
        b.a(fVar, arrayList);
        b.a(iVar, arrayList);
        return dVarA;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final f fVar, final i iVar, d dVar, final InterfaceC0388a interfaceC0388a) {
        if (!TextUtils.isEmpty(fVar.a())) {
            b.a().a(fVar, iVar, dVar, new b.a() { // from class: com.tkay.basead.d.a.a.3
                @Override // com.tkay.basead.d.a.b.a
                public final void a(g gVar) {
                    a.this.f5625a.put(iVar.b + iVar.f6156a, Boolean.FALSE);
                    InterfaceC0388a interfaceC0388a2 = interfaceC0388a;
                    if (interfaceC0388a2 != null) {
                        interfaceC0388a2.a(fVar, gVar);
                    }
                }

                @Override // com.tkay.basead.d.a.b.a
                public final void a(e eVar) {
                    a.this.f5625a.put(iVar.b + iVar.f6156a, Boolean.FALSE);
                    InterfaceC0388a interfaceC0388a2 = interfaceC0388a;
                    if (interfaceC0388a2 != null) {
                        interfaceC0388a2.a(fVar, eVar);
                    }
                }
            });
        } else {
            com.tkay.basead.a.f.a();
            com.tkay.basead.a.f.a(iVar.b, fVar, iVar, new b.InterfaceC0384b() { // from class: com.tkay.basead.d.a.a.4
                @Override // com.tkay.basead.a.b.b.InterfaceC0384b
                public final void a() {
                    a.this.f5625a.put(iVar.b + iVar.f6156a, Boolean.FALSE);
                    InterfaceC0388a interfaceC0388a2 = interfaceC0388a;
                    if (interfaceC0388a2 != null) {
                        interfaceC0388a2.a(fVar, (g) null);
                    }
                }

                @Override // com.tkay.basead.a.b.b.InterfaceC0384b
                public final void a(e eVar) {
                    a.this.f5625a.put(iVar.b + iVar.f6156a, Boolean.FALSE);
                    InterfaceC0388a interfaceC0388a2 = interfaceC0388a;
                    if (interfaceC0388a2 != null) {
                        interfaceC0388a2.a(fVar, eVar);
                    }
                }
            });
        }
    }

    public final f a(i iVar) {
        String strA = com.tkay.core.common.a.a.a().a(this.c, iVar.f6156a);
        f fVarA = null;
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        try {
            fVarA = c.a(iVar.f6156a, new JSONObject(strA), iVar.f);
        } catch (Throwable unused) {
        }
        if (fVarA != null) {
            com.tkay.basead.d.c.b.a(fVarA);
            com.tkay.basead.d.c.a.a(iVar, fVarA);
            com.tkay.basead.d.c.d.a(iVar, fVarA);
        }
        return fVarA;
    }

    static /* synthetic */ void a(a aVar, i iVar, InterfaceC0388a interfaceC0388a) {
        f fVarA;
        try {
            fVarA = aVar.a(iVar);
        } catch (Throwable unused) {
            fVarA = null;
        }
        if (fVarA == null) {
            new com.tkay.basead.g.a(iVar).a(0, (k) aVar.new AnonymousClass2(iVar, interfaceC0388a));
            return;
        }
        com.tkay.core.common.a.a.a();
        if (!com.tkay.core.common.a.a.d(aVar.c, fVarA.b())) {
            com.tkay.basead.a.b.a(10, fVarA, new com.tkay.basead.c.i(iVar.d, ""));
            com.tkay.core.common.a.a.a();
            com.tkay.core.common.a.a.c(aVar.c, fVarA.b());
        }
        d dVarA = aVar.a(fVarA, iVar);
        if (interfaceC0388a != null) {
            interfaceC0388a.a(fVarA);
        }
        aVar.a(fVarA, iVar, dVarA, interfaceC0388a);
    }
}
