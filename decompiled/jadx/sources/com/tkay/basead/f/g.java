package com.tkay.basead.f;

import android.app.Activity;
import android.content.Context;
import android.view.ViewGroup;
import com.tkay.basead.ui.AsseblemSplashATView;
import com.tkay.basead.ui.BaseSdkSplashATView;
import com.tkay.basead.ui.BaseSplashATView;
import com.tkay.basead.ui.SinglePictureSplashATView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.i;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class g extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.tkay.basead.e.a f5694a;
    BaseSplashATView k;
    boolean l;

    @Override // com.tkay.basead.f.a
    public final void a(Activity activity, Map<String, Object> map) {
    }

    public g(Context context, i iVar, String str) {
        super(context, iVar, str, false);
    }

    public final void b() {
        this.l = true;
    }

    public final void a(final ViewGroup viewGroup) {
        m.a().a(new Runnable() { // from class: com.tkay.basead.f.g.1
            @Override // java.lang.Runnable
            public final void run() {
                if (BaseSdkSplashATView.isSinglePicture(g.this.g, g.this.d.m)) {
                    g.this.k = new SinglePictureSplashATView(viewGroup.getContext(), g.this.d, g.this.g, g.this.f5694a);
                } else {
                    g.this.k = new AsseblemSplashATView(viewGroup.getContext(), g.this.d, g.this.g, g.this.f5694a);
                }
                g.this.k.setDontCountDown(g.this.l);
                viewGroup.addView(g.this.k);
            }
        });
    }

    public final void a(com.tkay.basead.e.a aVar) {
        this.f5694a = aVar;
    }

    @Override // com.tkay.basead.f.c, com.tkay.basead.f.a
    public final boolean a() {
        try {
            if (d()) {
                return com.tkay.basead.f.a.a.a(this.c).a(this.g, this.d, this.f);
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public final void f() {
        this.f5694a = null;
        BaseSplashATView baseSplashATView = this.k;
        if (baseSplashATView != null) {
            baseSplashATView.destroy();
            this.k = null;
        }
    }
}
