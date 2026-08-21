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

/* JADX INFO: loaded from: classes3.dex */
public final class g extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    BaseSplashATView f5660a;
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
            m.a().a(new AnonymousClass1(viewGroup));
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.d.g$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ViewGroup f5661a;

        AnonymousClass1(ViewGroup viewGroup) {
            this.f5661a = viewGroup;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (g.this.f instanceof com.tkay.expressad.splash.d.c) {
                ((com.tkay.expressad.splash.d.c) g.this.f).a(new q() { // from class: com.tkay.basead.d.g.1.1
                    @Override // com.tkay.expressad.out.q
                    public final void c() {
                    }

                    @Override // com.tkay.expressad.out.q
                    public final void d() {
                    }

                    @Override // com.tkay.expressad.out.q
                    public final void e() {
                    }

                    @Override // com.tkay.expressad.out.q
                    public final void a() {
                        if (g.this.h != null) {
                            g.this.h.onAdShow();
                        }
                    }

                    @Override // com.tkay.expressad.out.q
                    public final void a(String str) {
                        if (g.this.h != null) {
                            g.this.h.onShowFailed(com.tkay.basead.c.f.a(com.tkay.basead.c.f.k, str));
                        }
                    }

                    @Override // com.tkay.expressad.out.q
                    public final void a(final com.tkay.expressad.foundation.d.c cVar) {
                        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.basead.d.g.1.1.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                g.this.a(cVar, "");
                            }
                        });
                    }

                    @Override // com.tkay.expressad.out.q
                    public final void b() {
                        if (g.this.h != null) {
                            g.this.h.onAdClosed();
                        }
                        g.this.d();
                    }
                });
                ((com.tkay.expressad.splash.d.c) g.this.f).a(this.f5661a);
                return;
            }
            if (g.this.e.g()) {
                g.this.f5660a = new MraidSplashATView(this.f5661a.getContext(), g.this.c, g.this.e, g.this.h);
            } else if (BaseSdkSplashATView.isSinglePicture(g.this.e, g.this.c.m)) {
                g.this.f5660a = new SinglePictureSplashATView(this.f5661a.getContext(), g.this.c, g.this.e, g.this.h);
            } else {
                g.this.f5660a = new AsseblemSplashATView(this.f5661a.getContext(), g.this.c, g.this.e, g.this.h);
            }
            g.this.f5660a.setDontCountDown(g.this.k);
            this.f5661a.addView(g.this.f5660a);
        }
    }

    public final boolean f() {
        return this.f == null;
    }

    @Override // com.tkay.basead.d.b
    public final void b() {
        BaseSplashATView baseSplashATView = this.f5660a;
        if (baseSplashATView != null) {
            baseSplashATView.destroy();
            this.f5660a = null;
        }
        if (this.f == null || !(this.f instanceof com.tkay.expressad.splash.d.c)) {
            return;
        }
        ((com.tkay.expressad.splash.d.c) this.f).g();
    }
}
