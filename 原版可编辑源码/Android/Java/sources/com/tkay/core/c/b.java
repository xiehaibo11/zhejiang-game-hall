package com.tkay.core.c;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.af;
import com.tkay.core.common.h.g;
import com.tkay.core.common.h.k;
import com.tkay.core.common.l.p;
import com.tkay.core.common.n;
import com.tkay.core.common.r;
import com.tkay.core.common.res.b;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

public class b {
    public static final String a = b.class.getSimpleName();
    private static volatile b c = null;
    private static volatile com.tkay.core.c.a d = null;
    private Context e;
    private Object g = new Object();
    private boolean f = false;
    List<a> b = Collections.synchronizedList(new ArrayList(3));

    public interface a {
        void a();

        void b();
    }

    private static void h() {
    }

    static boolean a(b bVar) {
        bVar.f = false;
        return false;
    }

    private b(Context context) {
        this.e = context;
    }

    public static b a(Context context) {
        if (c == null) {
            synchronized (b.class) {
                if (c == null) {
                    c = new b(context);
                }
            }
        }
        return c;
    }

    private Context d() {
        return this.e;
    }

    private void b(Context context) {
        this.e = context;
    }

    private void a(a aVar) {
        synchronized (this.g) {
            if (this.g != null) {
                this.b.add(aVar);
            }
        }
    }

    private void e() {
        synchronized (this.g) {
            Iterator<a> it = this.b.iterator();
            while (it.hasNext()) {
                it.next();
            }
            this.b.clear();
        }
    }

    private void b(a aVar) {
        synchronized (this.g) {
            if (aVar != null) {
                this.b.remove(aVar);
            }
        }
    }

    public final boolean a(String str) {
        boolean z;
        com.tkay.core.c.a aVarB = b(str);
        if (aVarB != null) {
            c cVarA = aVarB.a();
            long jP = aVarB.P();
            long jCurrentTimeMillis = System.currentTimeMillis();
            boolean z2 = aVarB.L() + jP <= jCurrentTimeMillis;
            boolean z3 = cVarA != null && aVarB.L() + cVarA.a() <= jCurrentTimeMillis;
            Map<String, Object> map = aVarB.c;
            Map<String, Object> mapL = m.a().l();
            if (map != null) {
                z = !map.equals(mapL);
            } else {
                z = mapL != null;
            }
            if (!z2 && !z3 && !z) {
                return false;
            }
        }
        return true;
    }

    public final synchronized com.tkay.core.c.a b(String str) {
        af afVar;
        if (d == null) {
            try {
                if (this.e == null) {
                    this.e = m.a().f();
                }
                List<af> listA = com.tkay.core.common.c.d.a(com.tkay.core.common.c.c.a(this.e)).a(str, f.o.a);
                com.tkay.core.c.a aVarF = null;
                if (listA != null && listA.size() > 0 && (afVar = listA.get(0)) != null && (aVarF = com.tkay.core.c.a.f(afVar.d())) != null) {
                    aVarF.a(Long.parseLong(afVar.a()));
                }
                d = aVarF;
                if (aVarF == null) {
                    com.tkay.core.c.a aVar = new com.tkay.core.c.a();
                    aVar.b = true;
                    aVar.Q();
                    aVar.b("0");
                    aVar.a(0L);
                    aVar.W();
                    aVar.Z();
                    aVar.ab();
                    aVar.c("");
                    aVar.ae();
                    aVar.ag();
                    aVar.d("");
                    aVar.O();
                    aVar.K();
                    aVar.C();
                    aVar.E();
                    aVar.a("[\"com.tkay\"]");
                    aVar.y();
                    aVar.e();
                    aVar.i();
                    aVar.g();
                    aVar.k();
                    d = aVar;
                }
            } catch (Exception unused) {
            }
        }
        return d;
    }

    public static long a() {
        if (d == null || d.J() == 0) {
            return 51200L;
        }
        return d.J();
    }

    private static com.tkay.core.c.a f() {
        com.tkay.core.c.a aVar = new com.tkay.core.c.a();
        aVar.b = true;
        aVar.Q();
        aVar.b("0");
        aVar.a(0L);
        aVar.W();
        aVar.Z();
        aVar.ab();
        aVar.c("");
        aVar.ae();
        aVar.ag();
        aVar.d("");
        aVar.O();
        aVar.K();
        aVar.C();
        aVar.E();
        aVar.a("[\"com.tkay\"]");
        aVar.y();
        aVar.e();
        aVar.i();
        aVar.g();
        aVar.k();
        return aVar;
    }

    private static com.tkay.core.c.a a(Context context, String str) {
        af afVar;
        List<af> listA = com.tkay.core.common.c.d.a(com.tkay.core.common.c.c.a(context)).a(str, f.o.a);
        com.tkay.core.c.a aVarF = null;
        if (listA != null && listA.size() > 0 && (afVar = listA.get(0)) != null && (aVarF = com.tkay.core.c.a.f(afVar.d())) != null) {
            aVarF.a(Long.parseLong(afVar.a()));
        }
        return aVarF;
    }

    private static com.tkay.core.c.a a(Context context, String str, String str2) {
        com.tkay.core.common.c.d.a(com.tkay.core.common.c.c.a(context)).a(str, str2, f.o.a);
        com.tkay.core.c.a aVarF = com.tkay.core.c.a.f(str2);
        aVarF.a(System.currentTimeMillis());
        p.a(context, com.tkay.core.common.b.f.o, f.o.j, aVarF.U());
        return aVarF;
    }

    private boolean g() {
        return this.f;
    }

    public final synchronized void a(final String str, String str2) {
        if (this.f) {
            return;
        }
        this.f = true;
        new com.tkay.core.common.h.d(this.e, str, str2).a(0, new k() {
            @Override
            public final void onLoadStart(int i) {
            }

            @Override
            public final void onLoadFinish(int i, Object obj) {
                b.a(b.this);
                b bVar = b.this;
                b.a(bVar, bVar.e, obj, str);
            }

            @Override
            public final void onLoadError(int i, String str3, AdError adError) {
                b.a(b.this);
                String str4 = b.a;
                b.this.e();
            }

            @Override
            public final void onLoadCanceled(int i) {
                b.a(b.this);
                b.this.e();
            }
        });
    }

    private static void a(Context context, com.tkay.core.c.a aVar) {
        if (aVar == null) {
            return;
        }
        String strN = aVar.n();
        if (TextUtils.isEmpty(strN)) {
            return;
        }
        com.tkay.core.common.res.b.a(context).a(new com.tkay.core.common.res.e(3, strN), (b.a) null);
    }

    private void a(JSONObject jSONObject) {
        JSONObject jSONObjectAm;
        try {
            com.tkay.core.c.a aVarB = b(m.a().o());
            if (aVarB == null || (jSONObjectAm = aVarB.am()) == null) {
                return;
            }
            jSONObject.put("a_c", jSONObjectAm);
        } catch (Exception unused) {
        }
    }

    public final void b() {
        m mVarA = m.a();
        final String strO = mVarA.o();
        String strP = mVarA.p();
        final Context context = this.e;
        if (context == null || TextUtils.isEmpty(strO) || TextUtils.isEmpty(strP)) {
            return;
        }
        new g(context, strO, strP).a(0, new k() {
            @Override
            public final void onLoadStart(int i) {
            }

            @Override
            public final void onLoadFinish(int i, Object obj) {
                b.a(b.this, context, obj, strO);
            }

            @Override
            public final void onLoadError(int i, String str, AdError adError) {
                b.this.e();
            }

            @Override
            public final void onLoadCanceled(int i) {
                b.this.e();
            }
        });
    }

    private void a(Context context, Object obj, String str) {
        if (obj != null) {
            com.tkay.core.c.a aVarA = a(context, str, obj.toString());
            d = aVarA;
            if (aVarA != null) {
                String strS = d.s();
                if (!TextUtils.isEmpty(strS) && TextUtils.isEmpty(m.a().x())) {
                    m.a().i(strS);
                }
                r.a(context).a(d);
                com.tkay.core.c.a aVar = d;
                if (aVar != null) {
                    String strN = aVar.n();
                    if (!TextUtils.isEmpty(strN)) {
                        com.tkay.core.common.res.b.a(context).a(new com.tkay.core.common.res.e(3, strN), (b.a) null);
                    }
                }
                com.tkay.core.common.l.b.a.a().a(new 3());
                com.tkay.core.common.c.a().a(d.b());
            }
            e();
        }
    }

    final class 3 implements Runnable {
        3() {
        }

        @Override
        public final void run() {
            n.a().a(b.d.c());
        }
    }

    static void a(b bVar, Context context, Object obj, String str) {
        if (obj != null) {
            com.tkay.core.c.a aVarA = a(context, str, obj.toString());
            d = aVarA;
            if (aVarA != null) {
                String strS = d.s();
                if (!TextUtils.isEmpty(strS) && TextUtils.isEmpty(m.a().x())) {
                    m.a().i(strS);
                }
                r.a(context).a(d);
                com.tkay.core.c.a aVar = d;
                if (aVar != null) {
                    String strN = aVar.n();
                    if (!TextUtils.isEmpty(strN)) {
                        com.tkay.core.common.res.b.a(context).a(new com.tkay.core.common.res.e(3, strN), (b.a) null);
                    }
                }
                com.tkay.core.common.l.b.a.a().a(bVar.new 3());
                com.tkay.core.common.c.a().a(d.b());
            }
            bVar.e();
        }
    }
}
