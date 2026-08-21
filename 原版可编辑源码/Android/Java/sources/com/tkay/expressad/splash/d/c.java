package com.tkay.expressad.splash.d;

import android.content.Context;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.tkay.core.common.a.g;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.u;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.out.p;
import com.tkay.expressad.out.q;
import com.tkay.expressad.out.t;
import com.tkay.expressad.splash.view.TYSplashPopView;
import com.tkay.expressad.splash.view.TYSplashView;
import com.tkay.expressad.splash.view.TYSplashWebview;

public final class c implements g {
    private static String b = "SplashProvider";
    private Context A;
    private boolean B;
    private com.tkay.expressad.foundation.d.c C;
    private TYSplashPopView D;
    private String c;
    private String d;
    private long f;
    private int g;
    private int h;
    private com.tkay.expressad.splash.c.c i;
    private com.tkay.expressad.splash.c.d j;
    private b k;
    private q l;
    private d m;
    private TYSplashView n;
    private TYSplashWebview o;
    private ViewGroup p;
    private View q;
    private com.tkay.expressad.d.c r;
    private boolean s;
    private ViewGroup t;
    private boolean u;
    private int w;
    private int x;
    private int e = 5;
    private int v = 1;
    private Object y = new Object();
    private Object z = new Object();
    public boolean a = false;
    private boolean E = false;
    private boolean F = false;

    private void b(ViewGroup viewGroup) {
        this.t = viewGroup;
    }

    public final boolean a() {
        return this.s;
    }

    public final void b() {
        this.s = false;
    }

    private void b(int i) {
        this.v = i;
    }

    public c(Context context, String str, String str2) {
        this.w = k.e(m.a().f());
        this.x = k.f(m.a().f());
        this.w = context.getResources().getDisplayMetrics().widthPixels;
        this.x = context.getResources().getDisplayMetrics().heightPixels;
        this.d = str;
        this.c = str2;
        this.A = context;
        if (this.j == null) {
            if (context != null) {
                this.j = new com.tkay.expressad.splash.c.d(context, str, str2);
            } else {
                this.j = new com.tkay.expressad.splash.c.d(m.a().f(), this.d, this.c);
            }
        }
        if (this.o == null) {
            try {
                if (context != null) {
                    this.o = new TYSplashWebview(context);
                } else {
                    this.o = new TYSplashWebview(m.a().f());
                }
            } catch (Exception unused) {
            }
            TYSplashWebview tYSplashWebview = this.o;
            if (tYSplashWebview != null) {
                tYSplashWebview.setWebViewClient(new com.tkay.expressad.splash.view.b(this.c, this.j.a()));
            }
        }
        if (this.n == null) {
            if (context != null) {
                this.n = new TYSplashView(context);
            } else {
                this.n = new TYSplashView(m.a().f());
            }
            this.n.setSplashWebview(this.o);
        }
    }

    private void a(long j) {
        this.f = j;
    }

    public final long c() {
        return this.f;
    }

    public final boolean d() {
        return this.u;
    }

    public final void a(boolean z) {
        this.F = z;
    }

    public final void a(p pVar) {
        if (this.k == null) {
            this.k = new b(this);
        }
        this.k.a(pVar);
    }

    public final void a(q qVar) {
        this.l = qVar;
    }

    public final void b(boolean z) {
        this.u = z;
    }

    public final void a(int i) {
        this.e = i;
    }

    public final int e() {
        return this.e;
    }

    public final void f() {
        a(100, 100);
    }

    private String h() {
        if (!this.a) {
            com.tkay.expressad.splash.c.c cVar = this.i;
            return cVar != null ? cVar.a() : "";
        }
        com.tkay.expressad.splash.c.d dVar = this.j;
        return dVar != null ? dVar.b() : "";
    }

    private void a(String str, ViewGroup viewGroup) {
        if (TextUtils.isEmpty(str)) {
            q qVar = this.l;
            if (qVar != null) {
                qVar.a("token is null or empty");
                return;
            }
            return;
        }
        a(viewGroup);
    }

    public final void a(ViewGroup viewGroup) {
        this.p = viewGroup;
        TYSplashView tYSplashView = this.n;
        if (tYSplashView != null) {
            tYSplashView.setDevContainer(viewGroup);
        }
        com.tkay.expressad.splash.c.c cVar = this.i;
        com.tkay.expressad.foundation.d.c cVarC = cVar != null ? cVar.c() : null;
        if (cVarC != null) {
            if (this.r == null) {
                com.tkay.expressad.d.b.a();
                this.r = com.tkay.expressad.d.b.a(com.tkay.expressad.foundation.b.b.b().e(), this.c);
            }
            this.m = new d(this, this.l, this.r.a(), cVarC);
            int i = this.e;
            if (i < 2 || i > 10) {
                this.e = 5;
            }
            a(cVarC, false);
            return;
        }
        q qVar = this.l;
        if (qVar != null) {
            qVar.a("campaignEx is vali");
        }
    }

    final void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
        if (cVar != null && z) {
            if (this.r == null) {
                com.tkay.expressad.d.b.a();
                this.r = com.tkay.expressad.d.b.a(com.tkay.expressad.foundation.b.b.b().e(), this.c);
            }
            this.m = new d(this, this.l, this.r.a(), cVar);
        }
        this.C = cVar;
        ViewGroup viewGroup = this.p;
        if (viewGroup == null) {
            d dVar = this.m;
            if (dVar != null) {
                dVar.a("container is null");
                return;
            }
            return;
        }
        if (this.j == null) {
            this.j = new com.tkay.expressad.splash.c.d(viewGroup.getContext(), this.d, this.c);
        }
        a(cVar, 0, z);
    }

    private void a(final com.tkay.expressad.foundation.d.c cVar, final int i, final boolean z) {
        if (!com.tkay.expressad.splash.c.b.a(this.n, cVar)) {
            if (i > 0) {
                this.j.a.postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        c.this.a(cVar, i - 1, z);
                    }
                }, 1L);
                return;
            }
            d dVar = this.m;
            if (dVar != null) {
                dVar.a("campaignEx is not ready");
                return;
            }
            return;
        }
        l();
        this.j.a(this.e);
        this.j.a(this.t);
        this.j.a(this.m);
        ViewGroup viewGroup = this.p;
        if (viewGroup != null) {
            viewGroup.removeAllViews();
            u.a(this.n);
            this.p.addView(this.n, new ViewGroup.LayoutParams(-1, -1));
        }
        this.j.a(this.u);
        this.j.a(cVar, this.n);
    }

    public final void a(com.tkay.expressad.foundation.d.d dVar) {
        synchronized (this.y) {
            if (this.s) {
                if (this.k != null) {
                    this.k.a("current unit is loading");
                    this.s = true;
                }
                return;
            }
            this.s = true;
            this.n.clearResState();
            this.r = new com.tkay.expressad.d.c();
            if (this.i == null) {
                this.i = new com.tkay.expressad.splash.c.c(this.d, this.c, this.f * 1000);
            }
            b bVar = this.k;
            if (bVar != null) {
                bVar.b("");
                this.i.a(this.k);
            }
            this.n.resetLoadState();
            this.i.b(this.e);
            this.i.a(this.n);
            this.i.a(this.r);
            this.i.a(this.w, this.x);
            this.i.b(this.u);
            this.i.a(this.F);
            this.i.a(this.v);
            this.i.a(dVar);
        }
    }

    private void a(Context context) {
        if (this.j == null) {
            if (context != null) {
                this.j = new com.tkay.expressad.splash.c.d(context, this.d, this.c);
            } else {
                this.j = new com.tkay.expressad.splash.c.d(m.a().f(), this.d, this.c);
            }
        }
        if (this.o == null) {
            try {
                if (context != null) {
                    this.o = new TYSplashWebview(context);
                } else {
                    this.o = new TYSplashWebview(m.a().f());
                }
            } catch (Exception unused) {
            }
            TYSplashWebview tYSplashWebview = this.o;
            if (tYSplashWebview != null) {
                tYSplashWebview.setWebViewClient(new com.tkay.expressad.splash.view.b(this.c, this.j.a()));
            }
        }
        if (this.n == null) {
            if (context != null) {
                this.n = new TYSplashView(context);
            } else {
                this.n = new TYSplashView(m.a().f());
            }
            this.n.setSplashWebview(this.o);
        }
    }

    private void a(View view, RelativeLayout.LayoutParams layoutParams) {
        this.q = view;
        if (view != null) {
            a(layoutParams.width, layoutParams.height);
            TYSplashView tYSplashView = this.n;
            if (tYSplashView != null) {
                tYSplashView.setIconVg(view, layoutParams);
            }
        }
    }

    private void c(boolean z) {
        this.B = z;
    }

    private ViewGroup a(t tVar) {
        TYSplashPopView tYSplashPopView = new TYSplashPopView(m.a().f(), new TYSplashPopView.a(this.d, this.c, tVar.a(), this.C), this.m);
        this.D = tYSplashPopView;
        return tYSplashPopView;
    }

    private void i() {
        this.E = true;
        TYSplashPopView tYSplashPopView = this.D;
        if (tYSplashPopView != null) {
            tYSplashPopView.startCountDown();
        }
    }

    private void j() {
        this.E = false;
        TYSplashPopView tYSplashPopView = this.D;
        if (tYSplashPopView != null) {
            tYSplashPopView.release();
        }
    }

    private void a(int i, int i2) {
        int iE = k.e(m.a().f());
        int iF = k.f(m.a().f());
        int i3 = this.v;
        if (i3 == 1) {
            if (iF >= i2 * 4) {
                this.x = iF - i2;
                this.w = iE;
                return;
            } else {
                this.x = 0;
                this.w = 0;
                return;
            }
        }
        if (i3 == 2) {
            if (iE >= i * 4) {
                this.w = iE - i;
                this.x = iF;
            } else {
                this.x = 0;
                this.w = 0;
            }
        }
    }

    private void k() {
        com.tkay.expressad.splash.c.d dVar = this.j;
        if (dVar != null) {
            dVar.d();
        }
        TYSplashPopView tYSplashPopView = this.D;
        if (tYSplashPopView == null || !this.E) {
            return;
        }
        tYSplashPopView.reStartCountDown();
    }

    private void l() {
        TYSplashWebview tYSplashWebview = this.o;
        if (tYSplashWebview != null) {
            tYSplashWebview.setOnTouchListener(new View.OnTouchListener() {
                final boolean a = true;

                @Override
                public final boolean onTouch(View view, MotionEvent motionEvent) {
                    return !this.a;
                }
            });
        }
        TYSplashView tYSplashView = this.n;
        if (tYSplashView != null) {
            tYSplashView.setOnTouchListener(new View.OnTouchListener() {
                final boolean a = true;

                @Override
                public final boolean onTouch(View view, MotionEvent motionEvent) {
                    return !this.a;
                }
            });
        }
    }

    private void m() {
        com.tkay.expressad.splash.c.d dVar = this.j;
        if (dVar != null) {
            dVar.e();
        }
        TYSplashPopView tYSplashPopView = this.D;
        if (tYSplashPopView == null || !this.E) {
            return;
        }
        tYSplashPopView.pauseCountDown();
    }

    public final void g() {
        this.C = null;
        if (this.l != null) {
            this.l = null;
        }
        if (this.k != null) {
            this.k = null;
        }
        if (this.m != null) {
            this.m = null;
        }
        com.tkay.expressad.splash.c.c cVar = this.i;
        if (cVar != null) {
            cVar.b();
        }
        com.tkay.expressad.splash.c.d dVar = this.j;
        if (dVar != null) {
            dVar.c();
        }
        if (this.A != null) {
            this.A = null;
        }
    }

    @Override
    public final boolean isReady() {
        return this.i.c() != null && com.tkay.expressad.splash.c.b.a(this.n, this.i.c());
    }
}
