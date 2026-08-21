package com.tkay.basead.ui;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.FrameLayout;
import com.tkay.basead.ui.MraidContainerView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

public class MraidSplashATView extends BaseSplashATView {
    MraidContainerView a;

    public MraidSplashATView(Context context) {
        super(context);
    }

    public MraidSplashATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
    }

    @Override
    protected final void a() {
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_web_splash_ad_layout", "layout"), this);
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.d, this.c, new 1());
        this.a = mraidContainerView;
        mraidContainerView.setNeedRegisterVolumeChangeReceiver(true);
        this.a.init();
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_web", "id"));
        if (frameLayout != null) {
            frameLayout.addView(this.a, new FrameLayout.LayoutParams(-1, -1));
        }
    }

    final class 1 implements MraidContainerView.a {
        1() {
        }

        @Override
        public final void a(String str) {
            MraidSplashATView.this.d.v(str);
            MraidSplashATView.this.b(1);
        }

        @Override
        public final void a() {
            try {
                MraidSplashATView.a(MraidSplashATView.this);
            } catch (Throwable unused) {
            }
        }

        @Override
        public final void b() {
            MraidSplashATView.this.q();
            MraidSplashATView.this.r();
            MraidSplashATView.this.p();
        }
    }

    private void b() {
        MraidContainerView mraidContainerView = new MraidContainerView(getContext(), this.d, this.c, new 1());
        this.a = mraidContainerView;
        mraidContainerView.setNeedRegisterVolumeChangeReceiver(true);
        this.a.init();
        FrameLayout frameLayout = (FrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_web", "id"));
        if (frameLayout != null) {
            frameLayout.addView(this.a, new FrameLayout.LayoutParams(-1, -1));
        }
    }

    private void c() {
        if (this.d.g() && this.a == null) {
            return;
        }
        super.a(this.c.m.R() < 0 ? 100 : this.c.m.R(), new 2());
    }

    final class 2 implements Runnable {
        2() {
        }

        @Override
        public final void run() {
            if (MraidSplashATView.this.F == null) {
                return;
            }
            MraidSplashATView.super.h();
        }
    }

    @Override
    protected final void p() {
        int size = this.r.size();
        for (int i = 0; i < size; i++) {
            View view = this.r.get(i);
            if (view != null) {
                view.setOnClickListener(this.K);
            }
        }
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        MraidContainerView mraidContainerView = this.a;
        if (mraidContainerView != null) {
            mraidContainerView.fireMraidIsViewable(z);
        }
    }

    @Override
    public void destroy() {
        super.destroy();
        MraidContainerView mraidContainerView = this.a;
        if (mraidContainerView != null) {
            mraidContainerView.release();
        }
    }

    static void a(MraidSplashATView mraidSplashATView) {
        if (mraidSplashATView.d.g() && mraidSplashATView.a == null) {
            return;
        }
        super.a(mraidSplashATView.c.m.R() < 0 ? 100 : mraidSplashATView.c.m.R(), mraidSplashATView.new 2());
    }
}
