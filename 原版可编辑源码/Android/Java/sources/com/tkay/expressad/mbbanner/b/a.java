package com.tkay.expressad.mbbanner.b;

import com.tkay.expressad.foundation.d.d;
import com.tkay.expressad.foundation.h.y;
import com.tkay.expressad.out.TemplateBannerView;
import com.tkay.expressad.out.b;
import com.tkay.expressad.out.c;
import java.util.List;

public final class a {
    private static String b = "BannerController";
    c a;
    private String c;
    private String d;
    private boolean e;
    private int f;
    private TemplateBannerView g;
    private int h;
    private int i;
    private int j;
    private b l;
    private d m;
    private com.tkay.expressad.mbbanner.a.d.c n;
    private com.tkay.expressad.d.c o;
    private boolean p;
    private boolean q;
    private boolean r;
    private boolean s;
    private boolean t;
    private int k = -1;
    private com.tkay.expressad.mbbanner.a.c.c u = new com.tkay.expressad.mbbanner.a.c.c() {
        @Override
        public final void a(List<com.tkay.expressad.foundation.d.c> list) {
            if (a.this.l != null) {
                a.this.l.a();
            }
            String unused = a.b;
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
            if (a.this.l == null || z) {
                return;
            }
            a.this.l.b();
        }

        @Override
        public final void a(String str) {
            a.this.a(str);
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c cVar) {
            if (a.this.l != null) {
                a.this.l.a(cVar);
            }
        }

        @Override
        public final void a() {
            if (a.this.l != null) {
                b unused = a.this.l;
            }
        }

        @Override
        public final void b() {
            if (a.this.l != null) {
                b unused = a.this.l;
                a.this.t = true;
                com.tkay.expressad.mbbanner.a.d.a aVarA = com.tkay.expressad.mbbanner.a.d.a.a();
                String unused2 = a.this.d;
                aVarA.a(2, a.this.c);
            }
        }

        @Override
        public final void c() {
            if (a.this.l != null) {
                b unused = a.this.l;
                a.this.t = false;
                com.tkay.expressad.mbbanner.a.d.a aVarA = com.tkay.expressad.mbbanner.a.d.a.a();
                String unused2 = a.this.d;
                String str = a.this.c;
                new com.tkay.expressad.mbbanner.a.b.d(a.this.i + "x" + a.this.h, a.this.j * 1000);
                com.tkay.expressad.mbbanner.a.c.b unused3 = a.this.v;
                aVarA.a(3, str);
            }
        }

        @Override
        public final void d() {
            if (a.this.l != null) {
                a.this.l.f();
            }
        }

        @Override
        public final void a(boolean z) {
            if (!z) {
                com.tkay.expressad.mbbanner.a.d.a aVarA = com.tkay.expressad.mbbanner.a.d.a.a();
                String unused = a.this.d;
                String str = a.this.c;
                new com.tkay.expressad.mbbanner.a.b.d(a.this.i + "x" + a.this.h, a.this.j * 1000);
                com.tkay.expressad.mbbanner.a.c.b unused2 = a.this.v;
                aVarA.a(3, str);
                return;
            }
            com.tkay.expressad.mbbanner.a.d.a aVarA2 = com.tkay.expressad.mbbanner.a.d.a.a();
            String unused3 = a.this.d;
            aVarA2.a(2, a.this.c);
        }
    };
    private com.tkay.expressad.mbbanner.a.c.b v = new com.tkay.expressad.mbbanner.a.c.b() {
        @Override
        public final void a(d dVar) {
            a.this.m = dVar;
        }

        @Override
        public final void a(String str) {
            if (a.this.l != null) {
                a.this.l.a(str);
            }
            String unused = a.b;
        }

        @Override
        public final void a() throws Throwable {
            d unused = a.this.m;
            if (a.this.g != null) {
                a.j(a.this);
                a.this.h();
            }
        }

        @Override
        public final void b() {
            if (a.this.l != null) {
                a.this.l.a(com.tkay.expressad.mbbanner.a.a.c);
            }
            String unused = a.b;
        }
    };

    private static int a(int i) {
        if (i <= 0) {
            return i;
        }
        if (i < 10) {
            return 10;
        }
        if (i > 180) {
            return 180;
        }
        return i;
    }

    private static boolean i() {
        return true;
    }

    private static void j() {
    }

    static boolean j(a aVar) {
        aVar.s = true;
        return true;
    }

    public final String a() {
        d dVar = this.m;
        return (dVar == null || dVar.f() == null) ? "" : this.m.f();
    }

    public a(TemplateBannerView templateBannerView, c cVar, String str, String str2) {
        this.g = templateBannerView;
        if (cVar != null) {
            this.h = cVar.a();
            this.i = cVar.b();
        }
        this.a = cVar;
        this.c = str2;
        this.d = str;
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), this.c);
        this.o = cVarC;
        if (cVarC == null) {
            this.o = com.tkay.expressad.d.c.c(this.c);
        }
        if (this.k == -1) {
            int iB = this.o.b();
            if (iB > 0) {
                if (iB < 10) {
                    iB = 10;
                } else if (iB > 180) {
                    iB = 180;
                }
            }
            this.j = iB;
        }
        if (this.f == 0) {
            boolean z = this.o.d() == 1;
            this.e = z;
            com.tkay.expressad.mbbanner.a.d.c cVar2 = this.n;
            if (cVar2 != null) {
                cVar2.a(z);
            }
        }
    }

    public final void a(c cVar) {
        if (cVar != null) {
            this.h = cVar.a();
            this.i = cVar.b();
        }
    }

    public final void a(boolean z) {
        this.e = z;
        this.f = z ? 1 : 2;
    }

    private void g() {
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), this.c);
        this.o = cVarC;
        if (cVarC == null) {
            this.o = com.tkay.expressad.d.c.c(this.c);
        }
        if (this.k == -1) {
            int iB = this.o.b();
            if (iB > 0) {
                if (iB < 10) {
                    iB = 10;
                } else if (iB > 180) {
                    iB = 180;
                }
            }
            this.j = iB;
        }
        if (this.f == 0) {
            boolean z = this.o.d() == 1;
            this.e = z;
            com.tkay.expressad.mbbanner.a.d.c cVar = this.n;
            if (cVar != null) {
                cVar.a(z);
            }
        }
    }

    public final void a(d dVar) {
        this.m = dVar;
        com.tkay.expressad.mbbanner.a.d.a.a().a(this.c, dVar, this.v);
    }

    public final void a(b bVar) {
        this.l = bVar;
    }

    public final void b() {
        this.r = true;
        if (this.l != null) {
            this.l = null;
        }
        if (this.v != null) {
            this.v = null;
        }
        if (this.u != null) {
            this.u = null;
        }
        if (this.g != null) {
            this.g = null;
        }
        com.tkay.expressad.mbbanner.a.d.a.a().a(4, this.c);
        com.tkay.expressad.mbbanner.a.d.a.a().a(this.c);
        com.tkay.expressad.mbbanner.a.d.a.a().b();
        com.tkay.expressad.mbbanner.a.d.c cVar = this.n;
        if (cVar != null) {
            cVar.a();
        }
    }

    private void h() throws Throwable {
        if (this.r || !this.s) {
            return;
        }
        if (this.m != null) {
            if (this.n == null) {
                this.n = new com.tkay.expressad.mbbanner.a.d.c(this.g, this.u, this.d, this.c, this.e, this.o);
            }
            this.n.a(this.a);
            this.n.b(this.p);
            this.n.c(this.q);
            this.n.a(this.e, this.f);
            this.n.a(this.m);
        } else {
            a(com.tkay.expressad.mbbanner.a.a.h);
        }
        this.s = false;
    }

    private void a(String str) {
        b bVar = this.l;
        if (bVar != null) {
            bVar.a(str);
        }
    }

    public final void b(boolean z) {
        this.p = z;
        l();
        h();
    }

    public final void c(boolean z) {
        this.q = z;
        l();
    }

    private void k() {
        TemplateBannerView templateBannerView = this.g;
        if (templateBannerView != null) {
            if (this.p && this.q && !this.t && !y.a(templateBannerView)) {
                com.tkay.expressad.mbbanner.a.d.a aVarA = com.tkay.expressad.mbbanner.a.d.a.a();
                String str = this.c;
                new com.tkay.expressad.mbbanner.a.b.d(this.i + "x" + this.h, this.j * 1000);
                aVarA.a(3, str);
            } else {
                com.tkay.expressad.mbbanner.a.d.a.a().a(2, this.c);
            }
            if (this.p) {
                return;
            }
            com.tkay.expressad.mbbanner.a.d.a.a().a(4, this.c);
            com.tkay.expressad.mbbanner.a.d.a.a().a(this.c);
        }
    }

    private void l() {
        k();
        com.tkay.expressad.mbbanner.a.d.c cVar = this.n;
        if (cVar != null) {
            cVar.b(this.p);
            this.n.c(this.q);
        }
    }

    public final void a(int i, int i2, int i3, int i4) {
        com.tkay.expressad.mbbanner.a.d.c cVar = this.n;
        if (cVar != null) {
            cVar.a(i, i2, i3, i4);
        }
    }

    public final void c() {
        com.tkay.expressad.mbbanner.a.d.a aVarA = com.tkay.expressad.mbbanner.a.d.a.a();
        String str = this.c;
        new com.tkay.expressad.mbbanner.a.b.d(this.i + "x" + this.h, this.j * 1000);
        aVarA.a(4, str);
    }

    public final void d() {
        com.tkay.expressad.mbbanner.a.d.a aVarA = com.tkay.expressad.mbbanner.a.d.a.a();
        String str = this.c;
        new com.tkay.expressad.mbbanner.a.b.d(this.i + "x" + this.h, this.j * 1000);
        aVarA.a(3, str);
    }

    private void f() {
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.c cVarC = com.tkay.expressad.d.b.c(com.tkay.expressad.foundation.b.b.b().e(), this.c);
        this.o = cVarC;
        if (cVarC == null) {
            this.o = com.tkay.expressad.d.c.c(this.c);
        }
        if (this.k == -1) {
            int iB = this.o.b();
            if (iB > 0) {
                if (iB < 10) {
                    iB = 10;
                } else if (iB > 180) {
                    iB = 180;
                }
            }
            this.j = iB;
        }
        if (this.f == 0) {
            boolean z = this.o.d() == 1;
            this.e = z;
            com.tkay.expressad.mbbanner.a.d.c cVar = this.n;
            if (cVar != null) {
                cVar.a(z);
            }
        }
    }
}
