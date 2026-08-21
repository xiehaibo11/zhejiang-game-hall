package com.tkay.basead.d;

import android.content.Context;
import android.view.View;
import com.tkay.basead.d.b;
import com.tkay.basead.ui.BaseBannerATView;
import com.tkay.basead.ui.MraidBannerATView;
import com.tkay.basead.ui.SdkBannerATView;
import com.tkay.expressad.out.TemplateBannerView;

public final class a extends b {
    BaseBannerATView a;
    private final String k;
    private com.tkay.expressad.out.b l;

    public a(Context context, b.a aVar, com.tkay.core.common.f.i iVar) {
        super(context, aVar, iVar);
        this.k = getClass().getSimpleName();
        this.l = new com.tkay.expressad.out.b() {
            @Override
            public final void a() {
            }

            @Override
            public final void a(String str) {
            }

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
            public final void b() {
                if (a.this.h != null) {
                    a.this.h.onAdShow();
                }
            }

            @Override
            public final void a(final com.tkay.expressad.foundation.d.c cVar) {
                com.tkay.core.common.l.b.a.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.a(cVar, "");
                    }
                });
            }

            @Override
            public final void f() {
                if (a.this.h != null) {
                    a.this.h.onAdClosed();
                }
                a.this.d();
            }
        };
    }

    public final View a() {
        if ((this.f instanceof TemplateBannerView) && this.f != null) {
            ((TemplateBannerView) this.f).setBannerAdListener(this.l);
            return (TemplateBannerView) this.f;
        }
        if (this.a == null && super.c()) {
            if (this.e.g()) {
                this.a = new MraidBannerATView(this.b, this.c, this.e, this.h);
            } else {
                this.a = new SdkBannerATView(this.b, this.c, this.e, this.h);
            }
        }
        return this.a;
    }

    @Override
    public final void b() {
        super.b();
        if (this.f instanceof TemplateBannerView) {
            ((TemplateBannerView) this.f).release();
        }
        this.f = null;
        this.h = null;
    }
}
