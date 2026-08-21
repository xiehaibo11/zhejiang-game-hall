package com.tkay.basead.f;

import android.app.Activity;
import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.tkay.basead.a.a;
import com.tkay.basead.a.c;
import com.tkay.basead.c.i;
import java.util.List;
import java.util.Map;

public class e extends c {
    com.tkay.basead.e.a a;
    com.tkay.core.common.l.a.c k;
    com.tkay.basead.a.c l;
    View m;
    volatile boolean n;
    View.OnClickListener o;
    com.tkay.basead.a.a p;
    boolean q;
    private final String r;

    public static View k() {
        return null;
    }

    @Override
    public final void a(Activity activity, Map<String, Object> map) {
    }

    private void a(int i) {
        o();
        p();
        if (this.l == null) {
            this.l = new com.tkay.basead.a.c(this.c, this.d, this.g);
        }
        if (this.l.a()) {
            return;
        }
        this.l.a(new 2(i));
        this.l.a(new i(this.d.d, ""));
    }

    final class 2 implements c.b {
        final int a;

        @Override
        public final void b() {
        }

        @Override
        public final void c() {
        }

        2(int i) {
            this.a = i;
        }

        @Override
        public final void a() {
            if (e.this.a != null) {
                e.this.a.onAdClick(this.a);
            }
        }

        @Override
        public final void a(boolean z) {
            if (e.this.a != null) {
                e.this.a.onDeeplinkCallback(z);
            }
        }
    }

    private void b(View view) {
        if (this.d.m.F() != 2 || view == null || this.q) {
            return;
        }
        this.q = true;
        this.p = new com.tkay.basead.a.a(view, this.d, new 3());
    }

    final class 3 implements a.a {
        3() {
        }

        @Override
        public final void a(int i) {
            e.a(e.this, 2);
        }
    }

    private void n() {
        com.tkay.basead.a.a aVar = this.p;
        if (aVar != null) {
            aVar.a();
        }
    }

    private void o() {
        com.tkay.basead.a.a aVar = this.p;
        if (aVar != null) {
            aVar.b();
            this.p = null;
        }
    }

    public e(Context context, com.tkay.core.common.f.i iVar, String str, boolean z) {
        super(context, iVar, str, z);
        this.r = getClass().getSimpleName();
        this.o = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                e.a(e.this, 1);
            }
        };
        this.q = false;
    }

    public final String b() {
        return this.g != null ? this.g.r() : "";
    }

    public final String f() {
        return this.g != null ? this.g.s() : "";
    }

    public final String g() {
        return this.g != null ? this.g.w() : "";
    }

    public final String h() {
        return this.g != null ? this.g.t() : "";
    }

    public final String i() {
        return this.g != null ? this.g.u() : "";
    }

    public final String j() {
        return this.g != null ? this.g.v() : "";
    }

    public final void a(com.tkay.basead.e.a aVar) {
        this.a = aVar;
    }

    public final void a(View view) {
        c(view);
        a(view, this.o);
    }

    private void a(View view, View.OnClickListener onClickListener) {
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(viewGroup.getChildAt(i), onClickListener);
            }
            return;
        }
        view.setOnClickListener(onClickListener);
    }

    public final void l() {
        com.tkay.core.common.l.a.c cVar = this.k;
        if (cVar != null) {
            cVar.a();
        }
    }

    private void c(View view) {
        this.m = view;
        com.tkay.core.common.l.a.a aVar = new com.tkay.core.common.l.a.a() {
            @Override
            public final void recordImpression(View view2) {
                e.this.p();
            }
        };
        if (this.k == null) {
            view.getContext();
            this.k = new com.tkay.core.common.l.a.c();
        }
        this.k.a(view, aVar);
    }

    private void p() {
        if (this.n) {
            return;
        }
        this.n = true;
        com.tkay.basead.f.a.b.a(this.c).a(this.g);
        com.tkay.basead.a.b.a(8, this.g, new i(this.d.d, ""));
        com.tkay.basead.e.a aVar = this.a;
        if (aVar != null) {
            aVar.onAdShow();
        }
        n();
    }

    public final void m() {
        l();
        o();
        this.a = null;
        com.tkay.basead.a.c cVar = this.l;
        if (cVar != null) {
            cVar.d();
            this.l = null;
        }
        com.tkay.core.common.l.a.c cVar2 = this.k;
        if (cVar2 != null) {
            cVar2.b();
            this.k = null;
        }
    }

    public final void a(View view, List<View> list) {
        if (this.d.m.F() == 2 && view != null && !this.q) {
            this.q = true;
            this.p = new com.tkay.basead.a.a(view, this.d, new 3());
        }
        c(view);
        if (list != null) {
            for (View view2 : list) {
                if (view2 != null) {
                    view2.setOnClickListener(this.o);
                }
            }
            return;
        }
        view.setOnClickListener(this.o);
    }

    static void a(e eVar, int i) {
        eVar.o();
        eVar.p();
        if (eVar.l == null) {
            eVar.l = new com.tkay.basead.a.c(eVar.c, eVar.d, eVar.g);
        }
        if (eVar.l.a()) {
            return;
        }
        eVar.l.a(eVar.new 2(i));
        eVar.l.a(new i(eVar.d.d, ""));
    }
}
