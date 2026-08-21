package com.tkay.basead.d;

import android.content.Context;
import android.view.View;
import com.tkay.basead.d.b;
import com.tkay.basead.ui.BaseBannerATView;
import com.tkay.basead.ui.MraidBannerATView;
import com.tkay.basead.ui.SdkBannerATView;
import com.tkay.expressad.out.TemplateBannerView;

/* JADX INFO: loaded from: classes3.dex */
public final class a extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    BaseBannerATView f5622a;
    private final String k;
    private com.tkay.expressad.out.b l;

    public a(Context context, b.a aVar, com.tkay.core.common.f.i iVar) {
        super(context, aVar, iVar);
        this.k = getClass().getSimpleName();
        this.l = new com.tkay.expressad.out.b() { // from class: com.tkay.basead.d.a.1
            @Override // com.tkay.expressad.out.b
            public final void a() {
            }

            @Override // com.tkay.expressad.out.b
            public final void a(String str) {
            }

            @Override // com.tkay.expressad.out.b
            public final void c() {
            }

            @Override // com.tkay.expressad.out.b
            public final void d() {
            }

            @Override // com.tkay.expressad.out.b
            public final void e() {
            }

            @Override // com.tkay.expressad.out.b
            public final void b() {
                if (a.this.h != null) {
                    a.this.h.onAdShow();
                }
            }

            @Override // com.tkay.expressad.out.b
            public final void a(final com.tkay.expressad.foundation.d.c cVar) {
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.basead.d.a.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        a.this.a(cVar, "");
                    }
                });
            }

            @Override // com.tkay.expressad.out.b
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
        if (this.f5622a == null && super.c()) {
            if (this.e.g()) {
                this.f5622a = new MraidBannerATView(this.b, this.c, this.e, this.h);
            } else {
                this.f5622a = new SdkBannerATView(this.b, this.c, this.e, this.h);
            }
        }
        return this.f5622a;
    }

    @Override // com.tkay.basead.d.b
    public final void b() {
        super.b();
        if (this.f instanceof TemplateBannerView) {
            ((TemplateBannerView) this.f).release();
        }
        this.f = null;
        this.h = null;
    }
}
