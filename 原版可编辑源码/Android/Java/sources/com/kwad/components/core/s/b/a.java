package com.kwad.components.core.s.b;

import android.widget.FrameLayout;
import com.kwad.components.core.n.c;
import com.kwad.components.core.s.a.b;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.webview.c.g;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.be;
import com.kwad.sdk.widget.e;

public final class a extends Presenter implements i {
    private FrameLayout QW;
    private am QX;
    protected boolean QY;
    protected b QZ;
    private com.kwad.components.core.l.a.a Ra = new com.kwad.components.core.l.a.a() {
        @Override
        public final void c(c cVar) {
            a.this.qe();
        }

        @Override
        public final void d(c cVar) {
            a.this.qf();
        }

        @Override
        public final void ge() {
        }

        @Override
        public final void gf() {
            a.this.qg();
        }
    };
    private h lp;

    private void qd() {
        am amVar = this.QX;
        if (amVar == null) {
            return;
        }
        if (this.QY) {
            amVar.rD();
            return;
        }
        amVar.rz();
        this.QX.rA();
        this.QY = true;
    }

    private void qe() {
        qd();
    }

    private void qf() {
        am amVar = this.QX;
        if (amVar == null || !this.QY) {
            return;
        }
        amVar.rE();
    }

    private void qg() {
        am amVar = this.QX;
        if (amVar == null || !this.QY) {
            return;
        }
        amVar.rB();
        this.QX.rC();
    }

    @Override
    public final void a(o oVar) {
    }

    @Override
    public final void a(p pVar) {
    }

    @Override
    public final void a(t tVar) {
    }

    @Override
    public final void a(am amVar) {
        this.QX = amVar;
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
    }

    @Override
    public final void ah() {
        super.ah();
        this.QZ = (b) Gk();
        this.QW = (FrameLayout) findViewById(R.id.ksad_js_container);
        h hVar = new h(getContext(), 1000);
        this.lp = hVar;
        hVar.a(this.QZ.QO);
        if (this.QZ.QR != null) {
            this.QZ.QR.a(this.lp);
            this.lp.a(new g() {
                @Override
                public final void callTKBridge(String str) {
                    if (a.this.QZ.QR != null) {
                        a.this.QZ.QR.callTKBridge(str);
                    }
                }
            });
            this.lp.a("hasTKBridge", Boolean.TRUE);
        }
        this.lp.a(getActivity(), this.QZ.mAdTemplate, this);
        this.QZ.Lg.add(this.Ra);
    }

    @Override
    public final void b(m mVar) {
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        aVar.width = (int) ((be.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((be.getScreenHeight(getContext()) / fAH) + 0.5f);
    }

    @Override
    public final void b(WebCloseStatus webCloseStatus) {
        getActivity().finish();
    }

    @Override
    public final void cc() {
    }

    @Override
    public final void eh() {
        qd();
    }

    @Override
    public final void em() {
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.QW;
    }

    @Override
    public final String getTkTemplateId() {
        return this.QZ.QO.templateId;
    }

    @Override
    public final e getTouchCoordsView() {
        return this.QZ.mRootContainer;
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        qg();
        this.lp.jv();
        this.QZ.Lg.remove(this.Ra);
    }
}
