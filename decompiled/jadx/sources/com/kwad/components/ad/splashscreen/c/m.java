package com.kwad.components.ad.splashscreen.c;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.content.Context;
import android.os.SystemClock;
import android.os.Vibrator;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.h;
import com.kwad.components.ad.splashscreen.widget.KsShakeView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class m extends e implements View.OnClickListener, com.kwad.components.ad.splashscreen.g, com.kwad.sdk.core.g.b, com.kwad.sdk.widget.c {
    private static long jM = 400;
    private boolean CC;
    private com.kwad.components.ad.splashscreen.f.a CY;
    private com.kwad.components.ad.splashscreen.d Dl;
    private ViewGroup Dp;
    private KsShakeView Dq;
    private TextView Dr;
    private com.kwad.sdk.core.g.d dO;
    private Vibrator dP;
    private long mStartTime;

    private void lf() {
        if (this.CM != null) {
            com.kwad.components.ad.splashscreen.f.a aVar = this.CY;
            if (aVar == null) {
                this.CY = new com.kwad.components.ad.splashscreen.f.a(getContext(), this.CM.mAdTemplate) { // from class: com.kwad.components.ad.splashscreen.c.m.3
                    @Override // com.kwad.components.ad.splashscreen.f.a
                    public final void aa(String str) {
                        if (m.this.Dr != null) {
                            m.this.Dr.setText("或点击" + str);
                        }
                    }
                };
            } else {
                aVar.setAdTemplate(this.CM.mAdTemplate);
            }
            com.kwad.components.core.e.d.c cVar = this.CM.mApkDownloadHelper;
            if (cVar != null) {
                cVar.b(this.CY);
            }
        }
    }

    private void ll() {
        TextView textView = this.Dr;
        if (textView != null) {
            textView.setText(this.Dl.kx());
        }
        KsShakeView ksShakeView = this.Dq;
        if (ksShakeView != null) {
            ksShakeView.ae(this.Dl.ky());
        }
    }

    private void lm() {
        if (this.Dp == null || this.CM == null) {
            return;
        }
        this.Dp.setVisibility(0);
        com.kwad.sdk.core.report.a.b(this.CM.mAdTemplate, 185, (JSONObject) null);
        com.kwad.components.core.webview.b.d.a.sb().aR(185);
    }

    @Override // com.kwad.components.ad.splashscreen.g
    public final void X(int i) {
    }

    @Override // com.kwad.sdk.core.g.b
    public final void a(final double d) {
        boolean zMZ = com.kwad.components.core.e.c.b.mZ();
        if (!this.CM.Ce.sB() || zMZ) {
            bj.a(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.m.4
                @Override // java.lang.Runnable
                public final void run() {
                    m.this.dO.CG();
                }
            }, null, 500L);
        } else {
            this.Dq.b(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.splashscreen.c.m.5
                @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
                public final void onAnimationEnd(Animator animator) {
                    super.onAnimationEnd(animator);
                    if (m.this.CM != null) {
                        m.this.CM.a(1, m.this.getContext(), 157, 2, new h.a() { // from class: com.kwad.components.ad.splashscreen.c.m.5.1
                            @Override // com.kwad.components.ad.splashscreen.h.a
                            public final void b(com.kwad.sdk.core.report.j jVar) {
                                jVar.i(d);
                            }
                        });
                    }
                    m.this.Dq.lH();
                    bj.a(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.m.5.2
                        @Override // java.lang.Runnable
                        public final void run() {
                            com.kwad.sdk.core.e.c.d("SplashShakePresenter", "onShakeEvent openGate2");
                            m.this.dO.CG();
                        }
                    }, null, 500L);
                }
            });
            bj.a(getContext(), this.dP);
        }
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        com.kwad.sdk.core.e.c.d("SplashShakePresenter", "onSingleTap: " + view);
        if (com.kwad.sdk.core.response.b.b.dp(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate)) && this.CM != null) {
            this.CM.c(1, getContext(), 158, 1);
        }
    }

    @Override // com.kwad.sdk.core.g.b
    public final void aT() {
        com.kwad.sdk.core.report.a.aC(this.CM.mAdTemplate);
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (this.CM == null) {
            return;
        }
        bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.m.1
            @Override // java.lang.Runnable
            public final void run() {
                m.this.CM.Cr = SystemClock.elapsedRealtime() - m.this.mStartTime;
            }
        });
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        getContext();
        this.Dl = com.kwad.components.ad.splashscreen.d.a(this.CM.mAdTemplate, adInfoCg, this.CM.mApkDownloadHelper, 2);
        float fBD = com.kwad.sdk.core.response.b.b.bD(this.CM.mAdTemplate);
        com.kwad.sdk.core.g.d dVar = this.dO;
        if (dVar == null) {
            com.kwad.sdk.core.g.d dVar2 = new com.kwad.sdk.core.g.d(fBD);
            this.dO = dVar2;
            dVar2.a(this);
        } else {
            dVar.e(fBD);
        }
        ll();
        if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            lf();
        }
        lm();
        this.dO.bg(getContext());
        this.Dq.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.m.2
            @Override // java.lang.Runnable
            public final void run() {
                m.this.Dq.lH();
            }
        });
        this.CC = com.kwad.sdk.core.response.b.c.bV(this.CM.mAdTemplate);
        new com.kwad.sdk.widget.f(this.Dq.getContext(), this.Dq, this);
        this.CM.a(this);
    }

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        com.kwad.sdk.core.e.c.d("SplashShakePresenter", "onSlide: enableSlickClick: " + this.CC);
        if (this.CC && this.CM != null) {
            this.CM.c(1, view.getContext(), 153, 1);
        }
    }

    @Override // com.kwad.components.ad.splashscreen.g
    public final void kD() {
        com.kwad.sdk.core.g.d dVar = this.dO;
        if (dVar != null) {
            dVar.bh(getContext());
        }
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        com.kwad.sdk.core.e.c.d("SplashShakePresenter", "onClick: " + view);
        if (!view.equals(this.Dq) || this.CM == null || this.CM.mAdTemplate == null || !com.kwad.sdk.core.response.b.b.dp(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            return;
        }
        this.CM.c(1, getContext(), 158, 1);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.mStartTime = SystemClock.elapsedRealtime();
        Context context = getContext();
        if (context != null) {
            this.dP = (Vibrator) context.getSystemService("vibrator");
        }
        ViewStub viewStub = (ViewStub) findViewById(R.id.ksad_shake_layout);
        this.Dp = (ViewGroup) (viewStub != null ? viewStub.inflate() : findViewById(R.id.ksad_shake_root));
        this.Dr = (TextView) this.Dp.findViewById(R.id.ksad_shake_action);
        KsShakeView ksShakeView = (KsShakeView) this.Dp.findViewById(R.id.ksad_shake_view);
        this.Dq = ksShakeView;
        ksShakeView.setOnClickListener(this);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.sdk.core.e.c.d("SplashShakePresenter", "onUnbind");
        if (this.CM != null) {
            this.CM.b(this);
        }
        com.kwad.sdk.core.g.d dVar = this.dO;
        if (dVar != null) {
            dVar.bh(getContext());
        }
        KsShakeView ksShakeView = this.Dq;
        if (ksShakeView != null) {
            ksShakeView.lI();
        }
    }
}
