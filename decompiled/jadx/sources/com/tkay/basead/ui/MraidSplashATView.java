package com.tkay.basead.ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.FrameLayout;
import com.tkay.basead.ui.MraidContainerView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

/* JADX INFO: loaded from: classes3.dex */
public class MraidSplashATView extends BaseSplashATView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    MraidContainerView f5801a;

    public MraidSplashATView(Context context) {
        super(context);
    }

    public MraidSplashATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void a() {
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_web_splash_ad_layout", "layout"), this);
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.d, this.c, new AnonymousClass1());
        this.f5801a = mraidContainerView;
        mraidContainerView.setNeedRegisterVolumeChangeReceiver(true);
        this.f5801a.init();
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_web", "id"));
        if (frameLayout != null) {
            frameLayout.addView(this.f5801a, new FrameLayout.LayoutParams(-1, -1));
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.MraidSplashATView$1, reason: invalid class name */
    final class AnonymousClass1 implements MraidContainerView.a {
        AnonymousClass1() {
        }

        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void a(String str) {
            MraidSplashATView.this.d.v(str);
            MraidSplashATView.this.b(1);
        }

        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void a() {
            try {
                MraidSplashATView.a(MraidSplashATView.this);
            } catch (Throwable unused) {
            }
        }

        @Override // com.tkay.basead.ui.MraidContainerView.a
        public final void b() {
            MraidSplashATView.this.q();
            MraidSplashATView.this.r();
            MraidSplashATView.this.p();
        }
    }

    private void b() {
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.d, this.c, new AnonymousClass1());
        this.f5801a = mraidContainerView;
        mraidContainerView.setNeedRegisterVolumeChangeReceiver(true);
        this.f5801a.init();
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_web", "id"));
        if (frameLayout != null) {
            frameLayout.addView(this.f5801a, new FrameLayout.LayoutParams(-1, -1));
        }
    }

    private void c() {
        if (this.d.g() && this.f5801a == null) {
            return;
        }
        super.a(this.c.m.R() < 0 ? 100 : this.c.m.R(), new AnonymousClass2());
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.MraidSplashATView$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {
        AnonymousClass2() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (MraidSplashATView.this.F == null) {
                return;
            }
            MraidSplashATView.super.h();
        }
    }

    @Override // com.tkay.basead.ui.BaseSplashATView
    protected final void p() {
        int size = this.r.size();
        for (int i = 0; i < size; i++) {
            View view = this.r.get(i);
            if (view != null) {
                view.setOnClickListener(this.K);
            }
        }
    }

    @Override // android.view.View
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        MraidContainerView mraidContainerView = this.f5801a;
        if (mraidContainerView != null) {
            mraidContainerView.fireMraidIsViewable(z);
        }
    }

    @Override // com.tkay.basead.ui.BaseSplashATView, com.tkay.basead.ui.BaseATView
    public void destroy() {
        super.destroy();
        MraidContainerView mraidContainerView = this.f5801a;
        if (mraidContainerView != null) {
            mraidContainerView.release();
        }
    }

    static /* synthetic */ void a(MraidSplashATView mraidSplashATView) {
        if (mraidSplashATView.d.g() && mraidSplashATView.f5801a == null) {
            return;
        }
        super.a(mraidSplashATView.c.m.R() < 0 ? 100 : mraidSplashATView.c.m.R(), mraidSplashATView.new AnonymousClass2());
    }
}
