package com.kwad.components.core.webview.b.c;

import android.content.DialogInterface;
import android.widget.FrameLayout;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.b.y;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.webview.c.g;
import com.kwad.sdk.utils.be;

/* JADX INFO: loaded from: classes2.dex */
public class c extends a {
    private FrameLayout QW;
    private d VP;
    private p Xq;
    private am Xr;
    private com.kwad.components.core.webview.b.e.d Xs = new com.kwad.components.core.webview.b.e.d() { // from class: com.kwad.components.core.webview.b.c.c.2
        @Override // com.kwad.components.core.webview.b.e.d
        public final void gg() {
            if (c.this.Xr != null) {
                c.this.Xr.rz();
                c.this.Xr.rA();
            }
        }

        @Override // com.kwad.components.core.webview.b.e.d
        public final void go() {
            if (c.this.Xr != null) {
                c.this.Xr.rB();
                c.this.Xr.rC();
            }
        }
    };
    private String xD;

    /* JADX INFO: Access modifiers changed from: private */
    public void rY() {
        if (this.Xl.Xp != null) {
            this.Xl.Xp.gi();
        }
        com.kwad.components.core.webview.b.d.b.sf().aS(getTkTemplateId());
        if (this.Xl.Xn != null) {
            this.Xl.Xn.callbackPageStatus(false, "render failed");
        }
    }

    @Override // com.kwad.components.core.webview.b.c.a, com.kwad.components.core.webview.b.i
    public final void a(p pVar) {
        this.Xq = pVar;
        long j = this.Xl.xI;
        if (this.Xq == null || j <= 0) {
            return;
        }
        y yVar = new y();
        yVar.nM = (int) ((j / 1000.0f) + 0.5f);
        this.Xq.a(yVar);
    }

    @Override // com.kwad.components.core.webview.b.c.a, com.kwad.components.core.webview.b.i
    public final void a(t tVar) {
        super.a(tVar);
        d dVar = this.VP;
        if (dVar != null) {
            dVar.dismiss();
        }
        if (this.Xl.QM != null) {
            this.Xl.QM.H(true);
        }
    }

    @Override // com.kwad.components.core.webview.b.c.a
    protected final void a(b bVar) {
        super.a(bVar);
        this.xD = this.Xl.xD;
        this.VP = this.Xl.VP;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(am amVar) {
        this.Xr = amVar;
    }

    @Override // com.kwad.components.core.webview.b.c.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        d dVar = this.VP;
        if (dVar != null) {
            dVar.a(this.Xs);
        }
        if (this.Xl.Xn != null) {
            this.lp.a(new g() { // from class: com.kwad.components.core.webview.b.c.c.1
                @Override // com.kwad.sdk.core.webview.c.g
                public final void callTKBridge(String str) {
                    c.this.Xl.Xn.callTKBridge(str);
                }
            });
            this.Xl.Xn.a(this.lp);
            this.lp.a("hasTKBridge", Boolean.TRUE);
        }
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        aVar.width = (int) ((be.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((be.getScreenHeight(getContext()) / fAH) + 0.5f);
    }

    @Override // com.kwad.components.core.webview.b.c.a, com.kwad.components.core.webview.b.i
    public void b(WebCloseStatus webCloseStatus) {
        super.b(webCloseStatus);
        if (this.Xl.Xn != null) {
            this.Xl.Xn.callbackDialogDismiss();
        }
    }

    public void cc() {
        d dVar = this.VP;
        if (dVar == null) {
            rY();
            return;
        }
        if (dVar.isShowing()) {
            this.VP.d(new DialogInterface.OnDismissListener() { // from class: com.kwad.components.core.webview.b.c.c.3
                @Override // android.content.DialogInterface.OnDismissListener
                public final void onDismiss(DialogInterface dialogInterface) {
                    c.this.VP.e(this);
                    c.this.rY();
                }
            });
        } else {
            rY();
        }
        this.VP.dismiss();
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void eh() {
        if (this.Xl.Xn != null) {
            this.Xl.Xn.callbackPageStatus(true, null);
        }
    }

    @Override // com.kwad.components.core.webview.b.c.a, com.kwad.components.core.webview.b.i
    public final void em() {
        super.em();
        if (this.Xl.Xo) {
            if (this.Xl.QM != null) {
                this.Xl.QM.H(true);
            }
        } else {
            d dVar = this.VP;
            if (dVar != null) {
                dVar.dismiss();
            }
            if (this.Xl.QM != null) {
                this.Xl.QM.gp();
            }
        }
    }

    @Override // com.kwad.components.core.webview.b.i
    public FrameLayout getTKContainer() {
        return this.QW;
    }

    @Override // com.kwad.components.core.webview.b.i
    public String getTkTemplateId() {
        return this.Xl.QO != null ? this.Xl.QO.templateId : j.b(this.xD, this.Xl.mAdTemplate);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.QW = (FrameLayout) findViewById(R.id.ksad_tk_dialog_container);
    }
}
