package com.tkay.basead.d;

import android.content.Context;
import android.view.ViewGroup;
import com.tkay.basead.d.b;
import com.tkay.basead.ui.AsseblemSplashATView;
import com.tkay.basead.ui.BaseSdkSplashATView;
import com.tkay.basead.ui.BaseSplashATView;
import com.tkay.basead.ui.MraidSplashATView;
import com.tkay.basead.ui.SinglePictureSplashATView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.u;
import com.tkay.expressad.out.q;

public final class g extends b {
    BaseSplashATView a;
    boolean k;

    public g(Context context, b.a aVar, com.tkay.core.common.f.i iVar) {
        super(context, aVar, iVar);
    }

    public final void a() {
        this.k = true;
    }

    public final void a(ViewGroup viewGroup) {
        if (super.c()) {
            u.a(false);
            m.a().a(new 1(viewGroup));
        }
    }

    final class 1 implements Runnable {
        final ViewGroup a;

        1(ViewGroup viewGroup) {
            this.a = viewGroup;
        }

        @Override
        public final void run() {
            if (g.this.f instanceof com.tkay.expressad.splash.d.c) {
                ((com.tkay.expressad.splash.d.c) g.this.f).a(new q() {
                    @Override
                    public final void c() {
                    }

                    @Override
                    public final void d() {
                    }

                    @Override
                    public final void e() {
                    }

                    @Override
                    public final void a() {
                        if (g.this.h != null) {
                            g.this.h.onAdShow();
                        }
                    }

                    @Override
                    public final void a(String str) {
                        if (g.this.h != null) {
                            g.this.h.onShowFailed(com.tkay.basead.c.f.a(com.tkay.basead.c.f.k, str));
                        }
                    }

                    @Override
                    public final void a(final com.tkay.expressad.foundation.d.c cVar) {
                        com.tkay.core.common.l.b.a.a().a(new Runnable() {
                            @Override
                            public final void run() {
                                g.this.a(cVar, "");
                            }
                        });
                    }

                    @Override
                    public final void b() {
                        if (g.this.h != null) {
                            g.this.h.onAdClosed();
                        }
                        g.this.d();
                    }
                });
                ((com.tkay.expressad.splash.d.c) g.this.f).a(this.a);
                return;
            }
            if (g.this.e.g()) {
                g.this.a = new MraidSplashATView(this.a.getContext(), g.this.c, g.this.e, g.this.h);
            } else if (BaseSdkSplashATView.isSinglePicture(g.this.e, g.this.c.m)) {
                g.this.a = new SinglePictureSplashATView(this.a.getContext(), g.this.c, g.this.e, g.this.h);
            } else {
                g.this.a = new AsseblemSplashATView(this.a.getContext(), g.this.c, g.this.e, g.this.h);
            }
            g.this.a.setDontCountDown(g.this.k);
            this.a.addView(g.this.a);
        }
    }

    public final boolean f() {
        return this.f == null;
    }

    @Override
    public final void b() {
        BaseSplashATView baseSplashATView = this.a;
        if (baseSplashATView != null) {
            baseSplashATView.destroy();
            this.a = null;
        }
        if (this.f == null || !(this.f instanceof com.tkay.expressad.splash.d.c)) {
            return;
        }
        ((com.tkay.expressad.splash.d.c) this.f).g();
    }
}
