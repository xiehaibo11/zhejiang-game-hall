package com.tkay.basead.ui;

import android.content.Context;
import android.view.View;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

/* JADX INFO: loaded from: classes3.dex */
public abstract class BaseBannerATView extends BaseATView {
    public final String TAG;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected com.tkay.basead.e.a f5731a;
    protected CloseImageView t;

    public BaseBannerATView(Context context) {
        super(context);
        this.TAG = getClass().getSimpleName();
    }

    public BaseBannerATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar);
        this.TAG = getClass().getSimpleName();
        this.f5731a = aVar;
    }

    protected void b() {
        a(this.c.m.R() < 0 ? 100 : this.c.m.R(), new Runnable() { // from class: com.tkay.basead.ui.BaseBannerATView.1
            @Override // java.lang.Runnable
            public final void run() {
                BaseBannerATView.super.h();
            }
        });
    }

    protected void c() {
        this.t.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.basead.ui.BaseBannerATView.2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (BaseBannerATView.this.f5731a != null) {
                    BaseBannerATView.this.f5731a.onAdClosed();
                }
            }
        });
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void e() {
        com.tkay.basead.a.b.a(8, this.d, i());
        com.tkay.basead.e.a aVar = this.f5731a;
        if (aVar != null) {
            aVar.onAdShow();
        }
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void a(int i) {
        com.tkay.basead.e.a aVar = this.f5731a;
        if (aVar != null) {
            aVar.onAdClick(i);
        }
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void f() {
        super.f();
        a(this.t, this.c.m.g());
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void a(boolean z) {
        com.tkay.basead.e.a aVar = this.f5731a;
        if (aVar != null) {
            aVar.onDeeplinkCallback(z);
        }
    }
}
