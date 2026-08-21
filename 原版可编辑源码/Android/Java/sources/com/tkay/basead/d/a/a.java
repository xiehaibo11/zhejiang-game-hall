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

public class a {
    private static volatile a d;
    ConcurrentHashMap<String, Boolean> a = new ConcurrentHashMap<>(3);
    ConcurrentHashMap<String, g> b = new ConcurrentHashMap<>(2);
    private Context c;

    public interface a {
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

    public final void a(final i iVar, final a aVar) {
        if (this.a.contains(iVar.b + iVar.a)) {
            if (this.a.get(iVar.b + iVar.a).booleanValue()) {
                aVar.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.g, com.tkay.basead.c.f.q));
                return;
            }
        }
        this.a.put(iVar.b + iVar.a, Boolean.TRUE);
        com.tkay.core.common.l.b.a.a().b(new Runnable() {
            @Override
            public final void run() {
                a.a(a.this, iVar, aVar);
            }
        });
    }

    private void b(i iVar, a aVar) {
        f fVarA;
        try {
            fVarA = a(iVar);
        } catch (Throwable unused) {
            fVarA = null;
        }
        if (fVarA == null) {
            new com.tkay.basead.g.a(iVar).a(0, (k) new 2(iVar, aVar));
            return;
        }
        com.tkay.core.common.a.a.a();
        if (!com.tkay.core.common.a.a.d(this.c, fVarA.b())) {
            com.tkay.basead.a.b.a(10, fVarA, new com.tkay.basead.c.i(iVar.d, ""));
            com.tkay.core.common.a.a.a();
            com.tkay.core.common.a.a.c(this.c, fVarA.b());
        }
        d dVarA = a(fVarA, iVar);
        if (aVar != null) {
            aVar.a(fVarA);
        }
        a(fVarA, iVar, dVarA, aVar);
    }

    final class 2 implements k {
        final i a;
        final a b;

        @Override
        public final void onLoadStart(int i) {
        }

        2(i iVar, a aVar) {
            this.a = iVar;
            this.b = aVar;
        }

        @Override
        public final void onLoadFinish(int i, Object obj) {
            f fVarA;
            try {
                fVarA = c.a(this.a.a, new JSONObject(obj.toString()), this.a.f);
            } catch (Exception unused) {
                fVarA = null;
            }
            if (fVarA != null) {
                com.tkay.basead.d.c.b.a(fVarA);
                com.tkay.basead.d.c.a.a(this.a, fVarA);
                com.tkay.basead.d.c.d.a(this.a, fVarA);
                if (this.a.f == 67) {
                    com.tkay.core.common.d.c.a(a.this.c).a(fVarA.p(), fVarA.P());
                    com.tkay.core.common.d.b.a(a.this.c).a(fVarA.q(), fVarA.P());
                }
                com.tkay.basead.a.b.a(10, fVarA, new com.tkay.basead.c.i(this.a.d, ""));
                com.tkay.core.common.a.a.a();
                com.tkay.core.common.a.a.c(a.this.c, fVarA.b());
                com.tkay.core.common.a.a.a().a(a.this.c, this.a.f, this.a.c, this.a.a, obj.toString());
                d dVarA = a.this.a(fVarA, this.a);
                a aVar = this.b;
                if (aVar != null) {
                    aVar.a(fVarA);
                }
                a.this.a(fVarA, this.a, dVarA, this.b);
                return;
            }
            a aVar2 = this.b;
            if (aVar2 != null) {
                aVar2.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, obj != null ? obj.toString() : "No Ad Return."));
            }
        }

        @Override
        public final void onLoadError(int i, String str, AdError adError) {
            a aVar = this.b;
            if (aVar != null) {
                aVar.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, str));
            }
        }

        @Override
        public final void onLoadCanceled(int i) {
            a aVar = this.b;
            if (aVar != null) {
                aVar.a((f) null, com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, "Cancel Request."));
            }
        }
    }

    private synchronized d a(f fVar, i iVar) {
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

    private void a(final f fVar, final i iVar, d dVar, final a aVar) {
        if (!TextUtils.isEmpty(fVar.a())) {
            b.a().a(fVar, iVar, dVar, new b.a() {
                @Override
                public final void a(g gVar) {
                    a.this.a.put(iVar.b + iVar.a, Boolean.FALSE);
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a(fVar, gVar);
                    }
                }

                @Override
                public final void a(e eVar) {
                    a.this.a.put(iVar.b + iVar.a, Boolean.FALSE);
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a(fVar, eVar);
                    }
                }
            });
        } else {
            com.tkay.basead.a.f.a();
            com.tkay.basead.a.f.a(iVar.b, fVar, iVar, new b.b() {
                @Override
                public final void a() {
                    a.this.a.put(iVar.b + iVar.a, Boolean.FALSE);
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a(fVar, (g) null);
                    }
                }

                @Override
                public final void a(e eVar) {
                    a.this.a.put(iVar.b + iVar.a, Boolean.FALSE);
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.a(fVar, eVar);
                    }
                }
            });
        }
    }

    public final f a(i iVar) {
        String strA = com.tkay.core.common.a.a.a().a(this.c, iVar.a);
        f fVarA = null;
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        try {
            fVarA = c.a(iVar.a, new JSONObject(strA), iVar.f);
        } catch (Throwable unused) {
        }
        if (fVarA != null) {
            com.tkay.basead.d.c.b.a(fVarA);
            com.tkay.basead.d.c.a.a(iVar, fVarA);
            com.tkay.basead.d.c.d.a(iVar, fVarA);
        }
        return fVarA;
    }

    static void a(a aVar, i iVar, a aVar2) {
        f fVarA;
        try {
            fVarA = aVar.a(iVar);
        } catch (Throwable unused) {
            fVarA = null;
        }
        if (fVarA == null) {
            new com.tkay.basead.g.a(iVar).a(0, (k) aVar.new 2(iVar, aVar2));
            return;
        }
        com.tkay.core.common.a.a.a();
        if (!com.tkay.core.common.a.a.d(aVar.c, fVarA.b())) {
            com.tkay.basead.a.b.a(10, fVarA, new com.tkay.basead.c.i(iVar.d, ""));
            com.tkay.core.common.a.a.a();
            com.tkay.core.common.a.a.c(aVar.c, fVarA.b());
        }
        d dVarA = aVar.a(fVarA, iVar);
        if (aVar2 != null) {
            aVar2.a(fVarA);
        }
        aVar.a(fVarA, iVar, dVarA, aVar2);
    }
}
