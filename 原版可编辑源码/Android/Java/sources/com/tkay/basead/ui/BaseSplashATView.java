package com.tkay.basead.ui;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.tkay.basead.c.e;
import com.tkay.basead.ui.BaseShakeView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.z;
import com.tkay.core.common.l.a.f;
import com.tkay.core.common.l.u;
import java.util.Timer;
import java.util.TimerTask;

public abstract class BaseSplashATView extends BaseATView {
    protected TextView A;
    protected CloseFrameLayout B;
    protected String C;
    protected Timer D;
    protected boolean E;
    protected com.tkay.basead.e.a F;
    protected b G;
    final long H;
    protected BaseShakeView I;
    GuideToClickView J;
    protected final View.OnClickListener K;
    boolean L;
    boolean M;
    boolean N;
    boolean O;
    private f.b a;
    private long t;

    public BaseSplashATView(Context context) {
        super(context);
        this.C = "Skip";
        this.H = 1000L;
        this.t = 5000L;
        this.K = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                BaseSplashATView.super.b(1);
            }
        };
        this.L = false;
        this.M = false;
        this.N = false;
    }

    public BaseSplashATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar);
        this.C = "Skip";
        this.H = 1000L;
        this.t = 5000L;
        this.K = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                BaseSplashATView.super.b(1);
            }
        };
        this.L = false;
        this.M = false;
        this.N = false;
        this.a = new f.b();
        this.F = aVar;
        this.C = getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_skip_text", com.tkay.expressad.foundation.h.i.g));
        this.A = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_skip", "id"));
        this.B = (CloseFrameLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_skip_area", "id"));
        this.t = this.c.m.n();
        a(this.B, this.c.m.h());
        this.E = false;
    }

    public void checkSkipViewLocation() {
        try {
            ViewGroup.LayoutParams layoutParams = this.A.getLayoutParams();
            if (layoutParams instanceof FrameLayout.LayoutParams) {
                int iB = ((FrameLayout.LayoutParams) layoutParams).topMargin + com.tkay.core.common.l.h.b(getContext());
                int[] iArr = new int[2];
                this.A.getLocationOnScreen(iArr);
                if (iArr[1] < iB) {
                    int i = iB - iArr[1];
                    ViewParent parent = this.A.getParent();
                    if (parent instanceof ViewGroup) {
                        ((ViewGroup) parent).setPadding(((ViewGroup) parent).getPaddingLeft(), ((ViewGroup) parent).getPaddingTop() + i, ((ViewGroup) parent).getPaddingRight(), ((ViewGroup) parent).getPaddingBottom());
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    protected final void a(e eVar) {
        if (this.L) {
            return;
        }
        this.L = true;
        com.tkay.basead.e.a aVar = this.F;
        if (aVar != null) {
            aVar.onShowFailed(eVar);
        }
    }

    @Override
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        if (i != 0 || this.M) {
            return;
        }
        this.M = true;
        if (this.O) {
            return;
        }
        this.B.setVisibility(0);
        this.B.setOnClickListener(new 2());
        this.N = false;
        Timer timer = new Timer();
        this.D = timer;
        timer.schedule(new 3(), 1000L, 1000L);
        a(this.t);
        this.t -= 1000;
    }

    public void setDontCountDown(boolean z) {
        CloseFrameLayout closeFrameLayout;
        this.O = z;
        if (!z || (closeFrameLayout = this.B) == null) {
            return;
        }
        closeFrameLayout.setVisibility(8);
    }

    private void b() {
        if (this.M) {
            return;
        }
        this.M = true;
        if (this.O) {
            return;
        }
        this.B.setVisibility(0);
        this.B.setOnClickListener(new 2());
        this.N = false;
        Timer timer = new Timer();
        this.D = timer;
        timer.schedule(new 3(), 1000L, 1000L);
        a(this.t);
        this.t -= 1000;
    }

    final class 2 implements View.OnClickListener {
        2() {
        }

        @Override
        public final void onClick(View view) {
            if (BaseSplashATView.this.c.m.p() == 0 || BaseSplashATView.this.N) {
                BaseSplashATView.this.s();
            }
        }
    }

    private void c() {
        this.B.setVisibility(0);
        this.B.setOnClickListener(new 2());
        this.N = false;
        Timer timer = new Timer();
        this.D = timer;
        timer.schedule(new 3(), 1000L, 1000L);
        a(this.t);
        this.t -= 1000;
    }

    final class 3 extends TimerTask {
        3() {
        }

        @Override
        public final void run() {
            BaseSplashATView baseSplashATView = BaseSplashATView.this;
            if (u.a(baseSplashATView, baseSplashATView.a)) {
                BaseSplashATView.this.post(new Runnable() {
                    @Override
                    public final void run() {
                        this.f$0.a();
                    }
                });
            }
        }

        private void a() {
            if (BaseSplashATView.this.t <= 0) {
                BaseSplashATView.e(BaseSplashATView.this);
            } else {
                BaseSplashATView baseSplashATView = BaseSplashATView.this;
                baseSplashATView.a(baseSplashATView.t);
            }
            BaseSplashATView.this.t -= 1000;
        }
    }

    private void a(long j) {
        if (this.c.m.p() == 0) {
            this.A.setText((j / 1000) + "s | " + this.C);
            return;
        }
        this.A.setText((j / 1000) + " s");
    }

    private void o() {
        s();
        this.A.setText(this.C);
        this.N = true;
    }

    private void s() {
        Timer timer = this.D;
        if (timer != null) {
            timer.cancel();
        }
        this.D = null;
        if (this.E) {
            return;
        }
        this.E = true;
        if (!this.L) {
            a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.k, "SplashView not showing on screen."));
        }
        com.tkay.basead.e.a aVar = this.F;
        if (aVar != null) {
            aVar.onAdClosed();
        }
    }

    @Override
    protected final void e() {
        this.L = true;
        com.tkay.basead.a.b.a(8, this.d, i());
        com.tkay.basead.e.a aVar = this.F;
        if (aVar != null) {
            aVar.onAdShow();
        }
    }

    @Override
    protected final void a(int i) {
        com.tkay.basead.e.a aVar = this.F;
        if (aVar != null) {
            aVar.onAdClick(i);
        }
    }

    @Override
    protected final void a(boolean z) {
        com.tkay.basead.e.a aVar = this.F;
        if (aVar != null) {
            aVar.onDeeplinkCallback(z);
        }
    }

    @Override
    protected final void f() {
        GuideToClickView guideToClickView = this.J;
        if (guideToClickView != null) {
            guideToClickView.setVisibility(8);
        }
        if (this.d instanceof z) {
            if (this.G == null) {
                this.G = new b(this);
            }
            this.G.b();
        }
    }

    @Override
    protected final void g() {
        if (!(this.d instanceof z) || this.G == null) {
            return;
        }
        post(new Runnable() {
            @Override
            public final void run() {
                BaseSplashATView.this.G.c();
            }
        });
    }

    @Override
    public void destroy() {
        super.destroy();
        this.F = null;
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        checkSkipViewLocation();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        s();
    }

    protected final void q() {
        if (m()) {
            BaseShakeView baseShakeView = (BaseShakeView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_shake_view", "id"));
            this.I = baseShakeView;
            baseShakeView.setVisibility(0);
            this.I.setOnShakeListener(new BaseShakeView.a() {
                @Override
                public final boolean a() {
                    if (BaseSplashATView.this.E) {
                        return false;
                    }
                    BaseSplashATView.this.b(4);
                    return true;
                }
            }, this.c.m);
            this.r.add(this.I);
        }
    }

    protected final void r() {
        GuideToClickView guideToClickView;
        this.J = (GuideToClickView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_guide_to_click_view", "id"));
        if (this.c.m.i() != 1 || (guideToClickView = this.J) == null) {
            return;
        }
        guideToClickView.setVisibility(0);
        this.r.add(this.J);
    }

    protected void p() {
        int size = this.r.size();
        for (int i = 0; i < size; i++) {
            View view = this.r.get(i);
            if (view != null) {
                view.setOnClickListener(this.K);
            }
        }
    }

    static void e(BaseSplashATView baseSplashATView) {
        baseSplashATView.s();
        baseSplashATView.A.setText(baseSplashATView.C);
        baseSplashATView.N = true;
    }
}
