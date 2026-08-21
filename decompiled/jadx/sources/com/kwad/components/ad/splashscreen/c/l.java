package com.kwad.components.ad.splashscreen.c;

import android.os.SystemClock;
import android.view.View;
import android.view.ViewStub;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.h;
import com.kwad.components.ad.splashscreen.widget.KsRotateView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class l extends i implements com.kwad.components.ad.splashscreen.g, com.kwad.sdk.core.g.a {
    private View Dg;
    private KsRotateView Dh;
    private TextView Di;
    private TextView Dj;
    private com.kwad.sdk.core.g.c Dk;
    private com.kwad.components.ad.splashscreen.d Dl;
    private Runnable Dm = new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.l.4
        @Override // java.lang.Runnable
        public final void run() {
            l.this.Dk.CG();
        }
    };
    private long mStartTime;

    @Override // com.kwad.components.ad.splashscreen.g
    public final void X(int i) {
    }

    @Override // com.kwad.components.ad.splashscreen.c.i
    protected final void Z(String str) {
        TextView textView = this.Dj;
        if (textView != null) {
            textView.setText(str);
        }
    }

    @Override // com.kwad.sdk.core.g.a
    public final void ab(final String str) {
        Runnable runnable;
        long j;
        boolean zSB = this.CM.Ce.sB();
        boolean zMZ = com.kwad.components.core.e.c.b.mZ();
        if (!zSB || zMZ) {
            runnable = this.Dm;
            j = com.tkay.expressad.d.a.b.aC;
        } else {
            this.Dh.lG();
            if (this.CM != null) {
                this.CM.a(1, getContext(), 161, 2, new h.a() { // from class: com.kwad.components.ad.splashscreen.c.l.3
                    @Override // com.kwad.components.ad.splashscreen.h.a
                    public final void b(com.kwad.sdk.core.report.j jVar) {
                        jVar.du(str);
                    }
                });
            }
            lg();
            runnable = this.Dm;
            j = 2000;
        }
        bj.a(runnable, null, j);
    }

    @Override // com.kwad.components.ad.splashscreen.c.i, com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.l.2
            @Override // java.lang.Runnable
            public final void run() {
                if (l.this.CM != null) {
                    l.this.CM.Cr = SystemClock.elapsedRealtime() - l.this.mStartTime;
                }
            }
        });
        if (this.CM != null) {
            this.CM.a(this);
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.i
    protected final void initView() {
        this.mStartTime = SystemClock.elapsedRealtime();
        ViewStub viewStub = (ViewStub) findViewById(R.id.ksad_rotate_layout);
        this.Dg = viewStub != null ? viewStub.inflate() : findViewById(R.id.ksad_rotate_root);
        this.Di = (TextView) findViewById(R.id.ksad_rotate_text);
        this.Dj = (TextView) findViewById(R.id.ksad_rotate_action);
        this.Dh = (KsRotateView) findViewById(R.id.ksad_rotate_view);
    }

    @Override // com.kwad.components.ad.splashscreen.g
    public final void kD() {
        com.kwad.sdk.core.g.c cVar = this.Dk;
        if (cVar != null) {
            cVar.bh(getContext());
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.i
    protected final void la() {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        getContext();
        com.kwad.components.ad.splashscreen.d dVarA = com.kwad.components.ad.splashscreen.d.a(this.CM.mAdTemplate, adInfoCg, this.CM.mApkDownloadHelper, 1);
        this.Dl = dVarA;
        TextView textView = this.Di;
        if (textView != null) {
            textView.setText(dVarA.getTitle());
        }
        TextView textView2 = this.Dj;
        if (textView2 != null) {
            textView2.setText(this.Dl.kx());
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.i
    protected final void lb() {
        if (this.Dg == null || this.CM == null) {
            return;
        }
        this.Dg.setVisibility(0);
        com.kwad.sdk.core.report.a.b(this.CM.mAdTemplate, 184, (JSONObject) null);
        com.kwad.components.core.webview.b.d.a.sb().aR(184);
    }

    @Override // com.kwad.components.ad.splashscreen.c.i
    protected final void lc() {
        AdMatrixInfo.RotateInfo rotateInfoBE = com.kwad.sdk.core.response.b.b.bE(this.CM.mAdTemplate);
        com.kwad.sdk.core.g.c cVar = this.Dk;
        if (cVar != null) {
            cVar.a(rotateInfoBE);
            return;
        }
        com.kwad.sdk.core.g.c cVar2 = new com.kwad.sdk.core.g.c(rotateInfoBE);
        this.Dk = cVar2;
        cVar2.a(this);
    }

    @Override // com.kwad.components.ad.splashscreen.c.i
    protected final void ld() {
        this.Dk.bg(getContext());
    }

    @Override // com.kwad.components.ad.splashscreen.c.i
    protected final void le() {
        this.Dh.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.l.1
            @Override // java.lang.Runnable
            public final void run() {
                l.this.Dh.le();
            }
        });
    }

    @Override // com.kwad.sdk.core.g.a
    public final void lk() {
        com.kwad.sdk.core.report.a.aC(this.CM.mAdTemplate);
    }

    @Override // com.kwad.components.ad.splashscreen.c.i, com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.sdk.core.e.c.d("SplashRotatePresenter", "onUnbind");
        com.kwad.sdk.core.g.c cVar = this.Dk;
        if (cVar != null) {
            cVar.bh(getContext());
        }
        if (this.CM != null) {
            this.CM.b(this);
        }
    }
}
