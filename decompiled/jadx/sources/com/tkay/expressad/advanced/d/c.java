package com.tkay.expressad.advanced.d;

import android.content.Context;
import android.util.Base64;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.webkit.WebView;
import com.tkay.core.common.a.g;
import com.tkay.core.common.b.m;
import com.tkay.expressad.advanced.c.c;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup;
import com.tkay.expressad.advanced.view.TYNativeAdvancedView;
import com.tkay.expressad.advanced.view.TYNativeAdvancedWebview;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.y;
import com.tkay.expressad.out.i;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class c implements g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6386a = 1;
    public static final int b = 2;
    public static final int c = 3;
    private static String g = "NativeAdvancedProvider";
    private JSONObject C;
    private ATOutNativeAdvancedViewGroup E;
    private boolean F;
    private boolean G;
    private boolean H;
    boolean e;
    com.tkay.expressad.foundation.d.d f;
    private String h;
    private String i;
    private com.tkay.expressad.advanced.c.a j;
    private com.tkay.expressad.advanced.c.b k;
    private b l;
    private i m;
    private d n;
    private TYNativeAdvancedView o;
    private TYNativeAdvancedWebview p;
    private com.tkay.expressad.advanced.view.a q;
    private com.tkay.expressad.d.c r;
    private boolean s;
    private int t = -1;
    private boolean u = false;
    private int v = 0;
    private boolean w = false;
    private int x = 0;
    private boolean y = false;
    private int z = 0;
    private int A = 0;
    private Object B = new Object();
    private boolean D = false;
    private boolean I = true;
    public boolean d = false;
    private ViewTreeObserver.OnScrollChangedListener J = new ViewTreeObserver.OnScrollChangedListener() { // from class: com.tkay.expressad.advanced.d.c.1
        @Override // android.view.ViewTreeObserver.OnScrollChangedListener
        public final void onScrollChanged() {
            if (c.this.I) {
                c.this.I = false;
                if (c.this.E != null) {
                    c.this.E.postDelayed(new Runnable() { // from class: com.tkay.expressad.advanced.d.c.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            c.this.I = true;
                        }
                    }, 1000L);
                }
                try {
                    c.this.j();
                } catch (Throwable unused) {
                }
            }
        }
    };

    @Override // com.tkay.core.common.a.g
    public boolean isReady() {
        return false;
    }

    public final boolean a() {
        return this.s;
    }

    public final void b() {
        this.s = false;
    }

    public final ATOutNativeAdvancedViewGroup c() {
        return this.E;
    }

    public c(String str, String str2, Context context) {
        com.tkay.expressad.advanced.view.a aVar;
        ViewGroup.LayoutParams layoutParams;
        this.i = str;
        this.h = str2;
        if (this.k == null) {
            com.tkay.expressad.advanced.c.b bVar = new com.tkay.expressad.advanced.c.b(m.a().f(), this.i, this.h);
            this.k = bVar;
            bVar.a(this);
        }
        if (this.p == null) {
            try {
                this.p = new TYNativeAdvancedWebview(m.a().f());
            } catch (Throwable unused) {
            }
            if (this.q == null) {
                try {
                    this.q = new com.tkay.expressad.advanced.view.a(this.h, this.k.b(), this);
                } catch (Throwable unused2) {
                }
            }
            TYNativeAdvancedWebview tYNativeAdvancedWebview = this.p;
            if (tYNativeAdvancedWebview != null && (aVar = this.q) != null) {
                tYNativeAdvancedWebview.setWebViewClient(aVar);
            }
        }
        if (this.o == null) {
            TYNativeAdvancedView tYNativeAdvancedView = new TYNativeAdvancedView(context);
            this.o = tYNativeAdvancedView;
            tYNativeAdvancedView.setAdvancedNativeWebview(this.p);
            TYNativeAdvancedWebview tYNativeAdvancedWebview2 = this.p;
            if (tYNativeAdvancedWebview2 != null && tYNativeAdvancedWebview2.getParent() == null) {
                this.o.addView(this.p, new ViewGroup.LayoutParams(-1, -1));
            }
        }
        if (this.E == null) {
            this.E = new ATOutNativeAdvancedViewGroup(m.a().f());
            if (this.z == 0 || this.A == 0) {
                layoutParams = new ViewGroup.LayoutParams(-1, -1);
            } else {
                layoutParams = new ViewGroup.LayoutParams(this.z, this.A);
            }
            this.E.setLayoutParams(layoutParams);
            this.E.setProvider(this);
            this.E.addView(this.o);
            this.E.getViewTreeObserver().addOnScrollChangedListener(this.J);
        }
    }

    private void a(JSONObject jSONObject) {
        this.D = true;
        b(jSONObject);
    }

    private void b(JSONObject jSONObject) {
        if (this.D) {
            this.C = jSONObject;
            TYNativeAdvancedWebview tYNativeAdvancedWebview = this.p;
            if (tYNativeAdvancedWebview == null || tYNativeAdvancedWebview.isDestroyed()) {
                return;
            }
            NativeAdvancedJsUtils.sendThirdToH5(this.p, NativeAdvancedJsUtils.d, "", jSONObject);
        }
    }

    private void f(int i) {
        TYNativeAdvancedWebview tYNativeAdvancedWebview = this.p;
        if (tYNativeAdvancedWebview == null || tYNativeAdvancedWebview.isDestroyed()) {
            return;
        }
        try {
            if (this.p != null) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(NativeAdvancedJsUtils.m, i);
                j.a();
                j.a((WebView) this.p, NativeAdvancedJsUtils.l, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public final int d() {
        return this.t;
    }

    public final void a(i iVar) {
        this.m = iVar;
    }

    public final void a(int i) {
        this.u = true;
        g(i);
    }

    private void g(int i) {
        if (this.u) {
            this.t = i;
            TYNativeAdvancedWebview tYNativeAdvancedWebview = this.p;
            if (tYNativeAdvancedWebview == null || tYNativeAdvancedWebview.isDestroyed()) {
                return;
            }
            int i2 = this.t;
            if (i2 == 1) {
                this.k.a(true);
                NativeAdvancedJsUtils.sendThirdToH5(this.p, NativeAdvancedJsUtils.f, "", null);
            } else if (i2 == 0) {
                this.k.a(false);
                NativeAdvancedJsUtils.sendThirdToH5(this.p, NativeAdvancedJsUtils.g, "", null);
            }
        }
    }

    public final void b(int i) {
        this.w = true;
        h(i);
    }

    private void h(int i) {
        if (this.w) {
            this.v = i;
            TYNativeAdvancedWebview tYNativeAdvancedWebview = this.p;
            if (tYNativeAdvancedWebview == null || tYNativeAdvancedWebview.isDestroyed()) {
                return;
            }
            NativeAdvancedJsUtils.sendThirdToH5(this.p, NativeAdvancedJsUtils.h, "mute", Integer.valueOf(i));
        }
    }

    public final void c(int i) {
        this.y = true;
        i(i);
    }

    private void i(int i) {
        if (this.y) {
            this.x = i;
            TYNativeAdvancedWebview tYNativeAdvancedWebview = this.p;
            if (tYNativeAdvancedWebview == null || tYNativeAdvancedWebview.isDestroyed()) {
                return;
            }
            NativeAdvancedJsUtils.sendThirdToH5(this.p, NativeAdvancedJsUtils.j, NativeAdvancedJsUtils.k, Integer.valueOf(i));
        }
    }

    private void g() {
        final com.tkay.expressad.foundation.d.c[] cVarArr = new com.tkay.expressad.foundation.d.c[1];
        com.tkay.expressad.advanced.c.a aVar = this.j;
        if (aVar != null) {
            cVarArr[0] = aVar.c();
        }
        if (cVarArr[0] != null) {
            if (this.r == null) {
                com.tkay.expressad.d.b.a();
                this.r = com.tkay.expressad.d.b.b(com.tkay.expressad.foundation.b.b.b().e(), this.h);
            }
            this.n = new d(this, this.m, this.r.a(), cVarArr[0]);
            if (this.e) {
                return;
            }
            this.e = true;
            com.tkay.expressad.advanced.c.c.a(this.o, cVarArr[0], this.i, this.h, this.t, new c.a() { // from class: com.tkay.expressad.advanced.d.c.2
                @Override // com.tkay.expressad.advanced.c.c.a
                public final void a() {
                    String unused = c.g;
                    c.this.a(cVarArr[0], false);
                }

                @Override // com.tkay.expressad.advanced.c.c.a
                public final void b() {
                    c.this.e = false;
                }
            });
        }
    }

    private String h() {
        if (this.d) {
            com.tkay.expressad.advanced.c.b bVar = this.k;
            return bVar != null ? bVar.a() : "";
        }
        com.tkay.expressad.advanced.c.a aVar = this.j;
        return aVar != null ? aVar.a() : "";
    }

    private void a(com.tkay.expressad.foundation.d.c cVar) {
        this.k.a(this.n);
        this.k.a(cVar, this.o, true);
    }

    private void i() {
        g(this.t);
        h(this.v);
        i(this.x);
        b(this.C);
        m.a().f();
        f(k.a());
    }

    public final void a(com.tkay.expressad.foundation.d.d dVar) {
        this.f = dVar;
        this.I = true;
        this.s = true;
        this.o.clearResStateAndRemoveClose();
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.c cVarD = com.tkay.expressad.d.b.d(com.tkay.expressad.foundation.b.b.b().e(), this.h);
        this.r = cVarD;
        if (cVarD == null) {
            this.r = com.tkay.expressad.d.c.y();
        }
        b bVar = new b(this);
        this.l = bVar;
        bVar.a(this.m);
        if (this.j == null) {
            this.j = new com.tkay.expressad.advanced.c.a(this.i, this.h);
        }
        b bVar2 = this.l;
        if (bVar2 != null) {
            this.j.a(bVar2);
        }
        this.o.resetLoadState();
        this.j.a(this.o);
        this.j.a(this.r);
        this.j.a(this.z, this.A);
        this.j.a(this.t);
        this.j.a(dVar);
    }

    private void a(Context context) {
        com.tkay.expressad.advanced.view.a aVar;
        ViewGroup.LayoutParams layoutParams;
        if (this.k == null) {
            com.tkay.expressad.advanced.c.b bVar = new com.tkay.expressad.advanced.c.b(m.a().f(), this.i, this.h);
            this.k = bVar;
            bVar.a(this);
        }
        if (this.p == null) {
            try {
                this.p = new TYNativeAdvancedWebview(m.a().f());
            } catch (Throwable unused) {
            }
            if (this.q == null) {
                try {
                    this.q = new com.tkay.expressad.advanced.view.a(this.h, this.k.b(), this);
                } catch (Throwable unused2) {
                }
            }
            TYNativeAdvancedWebview tYNativeAdvancedWebview = this.p;
            if (tYNativeAdvancedWebview != null && (aVar = this.q) != null) {
                tYNativeAdvancedWebview.setWebViewClient(aVar);
            }
        }
        if (this.o == null) {
            TYNativeAdvancedView tYNativeAdvancedView = new TYNativeAdvancedView(context);
            this.o = tYNativeAdvancedView;
            tYNativeAdvancedView.setAdvancedNativeWebview(this.p);
            TYNativeAdvancedWebview tYNativeAdvancedWebview2 = this.p;
            if (tYNativeAdvancedWebview2 != null && tYNativeAdvancedWebview2.getParent() == null) {
                this.o.addView(this.p, new ViewGroup.LayoutParams(-1, -1));
            }
        }
        if (this.E == null) {
            this.E = new ATOutNativeAdvancedViewGroup(m.a().f());
            if (this.z == 0 || this.A == 0) {
                layoutParams = new ViewGroup.LayoutParams(-1, -1);
            } else {
                layoutParams = new ViewGroup.LayoutParams(this.z, this.A);
            }
            this.E.setLayoutParams(layoutParams);
            this.E.setProvider(this);
            this.E.addView(this.o);
            this.E.getViewTreeObserver().addOnScrollChangedListener(this.J);
        }
    }

    public final String a(String str) {
        com.tkay.expressad.advanced.c.a aVar = this.j;
        return aVar != null ? aVar.a(str) : "";
    }

    private void b(int i, int i2) {
        if (i <= 0 || i2 <= 0) {
            return;
        }
        this.A = i;
        this.z = i2;
        this.E.setLayoutParams(new ViewGroup.LayoutParams(i2, i));
    }

    public final void d(int i) {
        if (i == 1) {
            this.F = true;
        } else if (i == 2) {
            this.G = true;
        } else if (i == 3) {
            this.H = true;
        }
        try {
            j();
        } catch (Throwable unused) {
        }
    }

    public final void e(int i) {
        if (i == 1) {
            this.F = false;
        } else if (i == 2) {
            this.G = false;
        } else if (i == 3) {
            this.H = false;
        }
        com.tkay.expressad.advanced.c.b bVar = this.k;
        if (bVar != null) {
            bVar.e();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void j() {
        if (this.F && this.G && this.H && !y.a(this.o.getAdvancedNativeWebview()) && this.E.getAlpha() >= 0.5f && this.E.getVisibility() == 0) {
            com.tkay.expressad.advanced.c.b bVar = this.k;
            if (bVar != null) {
                bVar.d();
            }
            g();
        }
    }

    private void k() {
        com.tkay.expressad.advanced.c.b bVar = this.k;
        if (bVar != null) {
            bVar.e();
        }
    }

    public final void e() {
        if (this.m != null) {
            this.m = null;
        }
        if (this.l != null) {
            this.l = null;
        }
        if (this.n != null) {
            this.n = null;
        }
        com.tkay.expressad.advanced.c.a aVar = this.j;
        if (aVar != null) {
            aVar.a((TYNativeAdvancedView) null);
            this.j.b();
        }
        com.tkay.expressad.advanced.c.b bVar = this.k;
        if (bVar != null) {
            bVar.c();
        }
        TYNativeAdvancedView tYNativeAdvancedView = this.o;
        if (tYNativeAdvancedView != null) {
            tYNativeAdvancedView.destroy();
        }
        com.tkay.expressad.advanced.a.c.c(this.f.f());
        com.tkay.expressad.advanced.view.a aVar2 = this.q;
        if (aVar2 != null) {
            aVar2.a();
        }
        ATOutNativeAdvancedViewGroup aTOutNativeAdvancedViewGroup = this.E;
        if (aTOutNativeAdvancedViewGroup != null) {
            aTOutNativeAdvancedViewGroup.getViewTreeObserver().removeOnScrollChangedListener(this.J);
            this.E.removeAllViews();
            this.E = null;
        }
    }

    public final void a(int i, int i2) {
        if (i <= 0 || i2 <= 0) {
            return;
        }
        this.A = i;
        this.z = i2;
        this.E.setLayoutParams(new ViewGroup.LayoutParams(i2, i));
    }

    final void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
        g(this.t);
        h(this.v);
        i(this.x);
        b(this.C);
        m.a().f();
        f(k.a());
        ATOutNativeAdvancedViewGroup aTOutNativeAdvancedViewGroup = this.E;
        if (aTOutNativeAdvancedViewGroup == null || aTOutNativeAdvancedViewGroup.getParent() == null) {
            return;
        }
        if (cVar != null && z) {
            if (this.r == null) {
                com.tkay.expressad.d.b.a();
                this.r = com.tkay.expressad.d.b.b(com.tkay.expressad.foundation.b.b.b().e(), this.h);
            }
            this.n = new d(this, this.m, this.r.a(), cVar);
        }
        if (this.k == null) {
            com.tkay.expressad.advanced.c.b bVar = new com.tkay.expressad.advanced.c.b(m.a().f(), this.i, this.h);
            this.k = bVar;
            bVar.a(this);
        }
        this.k.a(this.n);
        this.k.a(cVar, this.o, true);
    }
}
