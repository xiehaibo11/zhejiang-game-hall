package com.tkay.basead.d.b;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.a.b.b;
import com.tkay.basead.c.e;
import com.tkay.basead.c.f;
import com.tkay.basead.d.c.c;
import com.tkay.basead.g.d;
import com.tkay.core.api.AdError;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.y;
import com.tkay.core.common.h.k;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

public class a {
    private static volatile a c;
    ConcurrentHashMap<String, Boolean> a = new ConcurrentHashMap<>(3);
    private Context b;

    public interface a {
        void a();

        void a(y yVar);

        void a(y yVar, e eVar);
    }

    private a(Context context) {
        this.b = context.getApplicationContext();
    }

    public static a a(Context context) {
        if (c == null) {
            synchronized (a.class) {
                if (c == null) {
                    c = new a(context);
                }
            }
        }
        return c;
    }

    public final void a(i iVar, String str, a aVar) {
        int i;
        int i2;
        int i3;
        String[] strArrSplit;
        com.tkay.core.basead.b.a();
        String strA = com.tkay.core.basead.b.a(iVar);
        y yVarA = null;
        if (this.a.contains(strA) && this.a.get(strA).booleanValue()) {
            aVar.a(null, f.a(f.g, f.q));
            return;
        }
        this.a.put(strA, Boolean.TRUE);
        try {
            yVarA = a(iVar);
        } catch (Throwable unused) {
        }
        if (yVarA == null || yVarA.N()) {
            if (TextUtils.isEmpty(iVar.m.r())) {
                i3 = 0;
                i2 = 0;
            } else {
                try {
                    strArrSplit = iVar.m.r().split("x");
                    i = Integer.parseInt(strArrSplit[0]);
                } catch (Throwable unused2) {
                    i = 0;
                }
                try {
                    i2 = Integer.parseInt(strArrSplit[1]);
                } catch (Throwable unused3) {
                    i2 = 0;
                }
                i3 = i;
            }
            new d(iVar, i3, i2, c.a().a(this.b, c.a(iVar.b, iVar.c)), str).a(0, (k) new 1(iVar, aVar));
            return;
        }
        aVar.a();
        a(yVarA, iVar, aVar);
    }

    private void b(i iVar, String str, a aVar) {
        y yVarA;
        int i;
        int i2;
        int i3;
        String[] strArrSplit;
        try {
            yVarA = a(iVar);
        } catch (Throwable unused) {
            yVarA = null;
        }
        if (yVarA == null || yVarA.N()) {
            if (TextUtils.isEmpty(iVar.m.r())) {
                i3 = 0;
                i2 = 0;
            } else {
                try {
                    strArrSplit = iVar.m.r().split("x");
                    i = Integer.parseInt(strArrSplit[0]);
                } catch (Throwable unused2) {
                    i = 0;
                }
                try {
                    i2 = Integer.parseInt(strArrSplit[1]);
                } catch (Throwable unused3) {
                    i2 = 0;
                }
                i3 = i;
            }
            new d(iVar, i3, i2, c.a().a(this.b, c.a(iVar.b, iVar.c)), str).a(0, (k) new 1(iVar, aVar));
            return;
        }
        if (aVar != null) {
            aVar.a();
        }
        a(yVarA, iVar, aVar);
    }

    final class 1 implements k {
        final i a;
        final a b;

        @Override
        public final void onLoadStart(int i) {
        }

        1(i iVar, a aVar) {
            this.a = iVar;
            this.b = aVar;
        }

        @Override
        public final void onLoadFinish(int i, Object obj) {
            JSONObject jSONObject;
            y yVarA;
            try {
                jSONObject = new JSONObject(obj.toString());
                try {
                    jSONObject.put(b.a, System.currentTimeMillis());
                    yVarA = b.a(this.a, jSONObject);
                } catch (Exception unused) {
                    yVarA = null;
                }
            } catch (Exception unused2) {
                jSONObject = null;
            }
            if (yVarA != null) {
                com.tkay.basead.d.c.b.a(yVarA);
                if (yVarA.b() == 1 && com.tkay.basead.a.b.a(a.this.b.getApplicationContext(), yVarA.B())) {
                    c.a().a(a.this.b, c.a(this.a.b, this.a.c), yVarA, this.a.m);
                    a aVar = this.b;
                    if (aVar != null) {
                        aVar.a(null, f.a(f.i, "Application installed."));
                        return;
                    }
                    return;
                }
                if (yVarA.b() == 2 && !com.tkay.basead.a.b.a(a.this.b.getApplicationContext(), yVarA.B())) {
                    c.a().a(a.this.b, c.a(this.a.b, this.a.c), yVarA, this.a.m);
                    a aVar2 = this.b;
                    if (aVar2 != null) {
                        aVar2.a(null, f.a(f.i, "Application not installed yet."));
                        return;
                    }
                    return;
                }
                com.tkay.basead.d.c.a.a(this.a, yVarA);
                com.tkay.basead.a.b.a(10, yVarA, new com.tkay.basead.c.i(this.a.d, ""));
                com.tkay.core.basead.b.a();
                Context context = a.this.b;
                com.tkay.core.basead.b.a();
                com.tkay.core.basead.b.a(context, com.tkay.core.basead.b.a(this.a), jSONObject.toString());
                a aVar3 = this.b;
                if (aVar3 != null) {
                    aVar3.a();
                }
                a.this.a(yVarA, this.a, this.b);
                return;
            }
            a aVar4 = this.b;
            if (aVar4 != null) {
                aVar4.a(null, f.a(f.i, obj != null ? obj.toString() : "No Ad Return."));
            }
        }

        @Override
        public final void onLoadError(int i, String str, AdError adError) {
            a aVar = this.b;
            if (aVar != null) {
                aVar.a(null, f.a(f.i, str));
            }
        }

        @Override
        public final void onLoadCanceled(int i) {
            a aVar = this.b;
            if (aVar != null) {
                aVar.a(null, f.a(f.i, "Cancel Request."));
            }
        }
    }

    private void a(final y yVar, final i iVar, final a aVar) {
        com.tkay.basead.a.f.a();
        com.tkay.basead.a.f.a(iVar.b, yVar, iVar, new b.b() {
            @Override
            public final void a() {
                ConcurrentHashMap<String, Boolean> concurrentHashMap = a.this.a;
                com.tkay.core.basead.b.a();
                concurrentHashMap.put(com.tkay.core.basead.b.a(iVar), Boolean.FALSE);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a(yVar);
                }
            }

            @Override
            public final void a(e eVar) {
                ConcurrentHashMap<String, Boolean> concurrentHashMap = a.this.a;
                com.tkay.core.basead.b.a();
                concurrentHashMap.put(com.tkay.core.basead.b.a(iVar), Boolean.FALSE);
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a(yVar, eVar);
                }
            }
        });
    }

    public final y a(i iVar) {
        com.tkay.core.basead.b.a();
        String strA = com.tkay.core.basead.b.a(iVar);
        com.tkay.core.basead.b.a();
        String strA2 = com.tkay.core.basead.b.a(this.b, strA);
        y yVarA = null;
        if (TextUtils.isEmpty(strA2)) {
            return null;
        }
        try {
            yVarA = b.a(iVar, new JSONObject(strA2));
        } catch (Throwable unused) {
        }
        if (yVarA != null) {
            com.tkay.basead.d.c.b.a(yVarA);
            com.tkay.basead.d.c.a.a(iVar, yVarA);
        }
        return yVarA;
    }
}
