package com.tkay.basead.ui;

import android.content.Context;
import android.view.View;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

public abstract class BaseBannerATView extends BaseATView {
    public final String TAG;
    protected com.tkay.basead.e.a a;
    protected CloseImageView t;

    public BaseBannerATView(Context context) {
        super(context);
        this.TAG = getClass().getSimpleName();
    }

    public BaseBannerATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar);
        this.TAG = getClass().getSimpleName();
        this.a = aVar;
    }

    protected void b() {
        a(this.c.m.R() < 0 ? 100 : this.c.m.R(), new Runnable() {
            @Override
            public final void run() {
                BaseBannerATView.super.h();
            }
        });
    }

    protected void c() {
        this.t.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (BaseBannerATView.this.a != null) {
                    BaseBannerATView.this.a.onAdClosed();
                }
            }
        });
    }

    @Override
    protected final void e() {
        com.tkay.basead.a.b.a(8, this.d, i());
        com.tkay.basead.e.a aVar = this.a;
        if (aVar != null) {
            aVar.onAdShow();
        }
    }

    @Override
    protected final void a(int i) {
        com.tkay.basead.e.a aVar = this.a;
        if (aVar != null) {
            aVar.onAdClick(i);
        }
    }

    @Override
    protected final void f() {
        super.f();
        a(this.t, this.c.m.g());
    }

    @Override
    protected final void a(boolean z) {
        com.tkay.basead.e.a aVar = this.a;
        if (aVar != null) {
            aVar.onDeeplinkCallback(z);
        }
    }
}
