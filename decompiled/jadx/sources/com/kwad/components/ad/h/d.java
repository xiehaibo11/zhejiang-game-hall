package com.kwad.components.ad.h;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.FrameLayout;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends KSFrameLayout implements i, com.kwad.sdk.core.h.c {
    public static String oc = "PUSH_VIEW_TAG";
    private final com.kwad.components.core.widget.a.b bG;
    private am cG;
    private h lp;
    private AdTemplate od;
    private com.kwad.components.ad.b.a.b oe;
    private boolean of;
    private ViewGroup og;
    private boolean oh;

    public d(Context context, AdTemplate adTemplate) {
        super(context);
        this.of = false;
        setTag(oc);
        this.od = adTemplate;
        this.bG = new com.kwad.components.core.widget.a.b(this, 100);
        h hVar = new h(-1L, getContext()) { // from class: com.kwad.components.ad.h.d.1
            {
                super(-1L, context);
            }

            @Override // com.kwad.components.core.webview.b.h
            public final void a(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, l lVar, ViewGroup viewGroup) {
                super.a(bVar, cVar, lVar, viewGroup);
                lVar.c(new o(bVar, cVar, this) { // from class: com.kwad.components.ad.h.d.1.1
                    @Override // com.kwad.components.core.webview.jshandler.o
                    public final void J(int i) {
                        super.J(i);
                        if (i == 1) {
                            d.this.b((WebCloseStatus) null);
                        }
                    }
                });
            }
        };
        this.lp = hVar;
        hVar.a((Activity) null, this.od, this);
    }

    private void destroy() {
        this.lp.jv();
        ViewGroup viewGroup = this.og;
        if (viewGroup != null) {
            viewGroup.removeView(this);
        }
        ViewParent parent = getParent();
        if (parent instanceof ViewGroup) {
            ((ViewGroup) parent).removeView(this);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void fi() {
        if (this.oh) {
            return;
        }
        this.oh = true;
        fl();
        destroy();
    }

    private void fj() {
        com.kwad.components.ad.b.a.b bVar = this.oe;
        if (bVar != null) {
            bVar.T();
        }
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rz();
            this.cG.rA();
        }
    }

    private void fl() {
        com.kwad.components.ad.b.a.b bVar = this.oe;
        if (bVar != null) {
            bVar.U();
        }
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rB();
            this.cG.rC();
        }
    }

    private boolean fm() {
        try {
            com.kwad.sdk.core.c.b.AU();
            final Activity currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
            if (currentActivity != null && !currentActivity.isFinishing()) {
                View viewFindViewById = currentActivity.getWindow().getDecorView().findViewById(R.id.content);
                if (!(viewFindViewById instanceof ViewGroup)) {
                    return false;
                }
                this.og = (ViewGroup) viewFindViewById;
                this.og.addView(this, new ViewGroup.LayoutParams(-1, -1));
                com.kwad.sdk.core.c.b.AU();
                com.kwad.sdk.core.c.b.a(new com.kwad.sdk.core.c.d() { // from class: com.kwad.components.ad.h.d.2
                    @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
                    /* JADX INFO: renamed from: onActivityDestroyed */
                    public final void d(Activity activity) {
                        super.d(activity);
                        com.kwad.sdk.core.c.b.AU();
                        com.kwad.sdk.core.c.b.b((com.kwad.sdk.core.c.c) this);
                        if (activity.equals(currentActivity)) {
                            d.this.fi();
                        }
                    }
                });
                return true;
            }
            return false;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
            return false;
        }
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(com.kwad.components.core.webview.b.a.o oVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(p pVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(t tVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(am amVar) {
        this.cG = amVar;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        com.kwad.sdk.core.e.c.d("PushAdView", "onAdClicked");
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aK() {
        com.kwad.sdk.core.e.c.d("PushAdView", "onPageVisible: ");
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rD();
        }
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aL() {
        com.kwad.sdk.core.e.c.d("PushAdView", "onPageInvisible: ");
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rE();
        }
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void aa() {
        super.aa();
        this.bG.a(this);
        this.bG.sy();
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void ab() {
        super.ab();
        this.bG.release();
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(m mVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        float screenHeight = com.kwad.sdk.d.a.a.getScreenHeight(getContext());
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((screenHeight / fAH) + 0.5f);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(WebCloseStatus webCloseStatus) {
        fi();
    }

    public final boolean c(com.kwad.components.ad.b.a.b bVar) {
        this.oe = bVar;
        if (!this.of || !fm()) {
            return false;
        }
        fj();
        return true;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void cc() {
        com.kwad.sdk.core.e.c.d("PushAdView", "onTkLoadFailed");
        this.of = false;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void eh() {
        com.kwad.sdk.core.e.c.d("PushAdView", "onTkLoadSuccess");
        this.of = true;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void em() {
    }

    public final boolean fk() {
        return this.of;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final FrameLayout getTKContainer() {
        return this;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final String getTkTemplateId() {
        return j.b("ksad-push-card", this.od);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final com.kwad.sdk.widget.e getTouchCoordsView() {
        return this;
    }
}
