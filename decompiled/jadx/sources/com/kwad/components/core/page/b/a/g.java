package com.kwad.components.core.page.b.a;

import android.app.Activity;
import android.view.MotionEvent;
import android.view.View;
import com.kwad.components.core.webview.b;
import com.kwad.components.core.webview.b.b.k;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.ak;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.as;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class g extends a {
    private com.kwad.components.core.webview.b Nv;
    private am Nx;
    private ak Ny;
    private KsAdWebView mAdWebView;
    private boolean Nw = false;
    private final com.kwad.sdk.core.c.c xj = new com.kwad.sdk.core.c.d() { // from class: com.kwad.components.core.page.b.a.g.1
        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
        /* JADX INFO: renamed from: onActivityDestroyed */
        public final void d(Activity activity) {
            super.d(activity);
            if (g.this.mAdWebView == null || g.this.getActivity() == null || !g.this.getActivity().equals(activity)) {
                return;
            }
            g.this.mAdWebView.onActivityDestroy();
            g.a(g.this, (KsAdWebView) null);
        }

        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
        /* JADX INFO: renamed from: onActivityPaused */
        public final void b(Activity activity) {
            super.b(activity);
            g.this.hide();
        }

        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
        /* JADX INFO: renamed from: onActivityResumed */
        public final void c(Activity activity) {
            super.c(activity);
            g.this.show();
        }
    };
    private ak.b Na = new ak.b() { // from class: com.kwad.components.core.page.b.a.g.2
        @Override // com.kwad.components.core.webview.jshandler.ak.b
        public final void oW() {
            if (g.this.Ny != null) {
                g.this.Ny.ry();
            }
        }
    };
    private com.kwad.components.core.webview.c Nz = new com.kwad.components.core.webview.c() { // from class: com.kwad.components.core.page.b.a.g.3
        @Override // com.kwad.components.core.webview.c
        public final void a(com.kwad.components.core.webview.a aVar, com.kwad.sdk.core.webview.b bVar) {
            aVar.a(new as(new as.b() { // from class: com.kwad.components.core.page.b.a.g.3.1
                @Override // com.kwad.components.core.webview.jshandler.as.b
                public final void a(as.a aVar2) {
                    if (g.this.MW.MZ == null || aVar2 == null) {
                        return;
                    }
                    g.this.MW.MZ.ay(aVar2.visibility);
                }
            }));
            g.this.Ny = new ak(new ak.c() { // from class: com.kwad.components.core.page.b.a.g.3.2
                @Override // com.kwad.components.core.webview.jshandler.ak.c
                public final void pa() {
                    g.this.MW.a(g.this.Na);
                }
            });
            aVar.a(g.this.Ny);
            aVar.a(new com.kwad.components.core.webview.b.a.b(bVar, g.this.MW.mAdTemplate));
            k kVar = new k();
            kVar.WY = g.this.MW.mAutoShow ? 1 : 0;
            aVar.a(new com.kwad.components.core.webview.b.a.g(kVar));
        }

        @Override // com.kwad.components.core.webview.c
        public final void a(ah.a aVar) {
            g.this.MW.Nb = aVar.isSuccess();
        }

        @Override // com.kwad.components.core.webview.c
        public final void b(WebCloseStatus webCloseStatus) {
            if (g.this.MW.mWebCardCloseListener != null) {
                g.this.MW.mWebCardCloseListener.a(webCloseStatus);
            }
        }

        @Override // com.kwad.components.core.webview.c
        public final void c(am amVar) {
            g.this.Nx = amVar;
        }

        @Override // com.kwad.components.core.webview.c
        public final boolean oX() {
            return true;
        }

        @Override // com.kwad.components.core.webview.c
        public final boolean oY() {
            return true;
        }

        @Override // com.kwad.components.core.webview.c
        public final void oZ() {
            g.this.Nw = false;
        }

        @Override // com.kwad.components.core.webview.c
        public final void onPageFinished() {
            g.this.Nw = true;
            if (g.this.MW.oK()) {
                g.this.show();
            }
        }
    };

    static /* synthetic */ KsAdWebView a(g gVar, KsAdWebView ksAdWebView) {
        gVar.mAdWebView = null;
        return null;
    }

    private void eK() {
        this.Nv = new com.kwad.components.core.webview.b();
        this.Nv.a(new b.a().X(this.MW.mAdTemplate).aD(this.MW.mPageUrl).d(this.mAdWebView).k(this.MW.gg).a(this.Nz).b(this.MW.MY));
        oV();
        this.mAdWebView.loadUrl(this.MW.mPageUrl);
        this.mAdWebView.onActivityCreate();
    }

    private void oV() {
        KsAdWebView ksAdWebView;
        this.mAdWebView.setClientConfig(this.mAdWebView.getClientConfig().bm(true).cy(this.MW.mAdTemplate).bk(false));
        if (com.kwad.sdk.core.response.b.a.bw(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate)) > 0) {
            bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.core.page.b.a.g.4
                @Override // java.lang.Runnable
                public final void run() {
                    if (g.this.mAdWebView != null) {
                        g.this.mAdWebView.getClientConfig().bk(true);
                    }
                }
            }, com.kwad.sdk.core.response.b.a.bw(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate)));
        } else if (com.kwad.sdk.core.response.b.a.bw(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate)) == 0 && (ksAdWebView = this.mAdWebView) != null) {
            ksAdWebView.getClientConfig().bk(true);
        }
        if (com.kwad.sdk.core.response.b.a.bZ(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate)) > 0) {
            this.mAdWebView.getClientConfig().bk(this.MW.mAdTemplate.converted);
        }
        this.mAdWebView.setOnTouchListener(new View.OnTouchListener() { // from class: com.kwad.components.core.page.b.a.g.5
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() != 0) {
                    return false;
                }
                g.this.mAdWebView.getClientConfig().bk(true);
                return false;
            }
        });
    }

    @Override // com.kwad.components.core.page.b.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        eK();
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.a(this.xj);
    }

    public final void hide() {
        am amVar = this.Nx;
        if (amVar != null) {
            amVar.rB();
        }
        if (this.MW.gg != null) {
            this.MW.gg.setVisibility(8);
        }
        am amVar2 = this.Nx;
        if (amVar2 != null) {
            amVar2.rC();
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.mAdWebView = (KsAdWebView) findViewById(R.id.ksad_video_webview);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.Nv.jv();
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.b(this.xj);
    }

    public final void show() {
        if (this.Nw) {
            am amVar = this.Nx;
            if (amVar != null) {
                amVar.rz();
            }
            try {
                if (this.MW.gg != null) {
                    this.MW.gg.setVisibility(0);
                }
            } catch (Exception e) {
                com.kwad.components.core.d.a.b(e);
            }
            am amVar2 = this.Nx;
            if (amVar2 != null) {
                amVar2.rA();
            }
        }
    }
}
