package com.kwad.components.ad.splashscreen.c.a;

import android.widget.FrameLayout;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import org.json.JSONObject;

public final class g extends com.kwad.components.ad.splashscreen.c.c.a implements com.kwad.sdk.core.h.c {
    private FrameLayout lr;
    private am wH;

    private o a(com.kwad.sdk.core.webview.b bVar) {
        return new o(bVar, this.CM.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (aVar != null) {
                    g.this.CM.mRootContainer.post(new Runnable() {
                        @Override
                        public final void run() {
                            g.this.CM.kE();
                        }
                    });
                }
            }
        });
    }

    private void aa(int i) {
        z.a aVar = new z.a();
        if (this.CM.mTimerHelper != null) {
            aVar.duration = this.CM.mTimerHelper.getTime();
        }
        j jVarA = new j().cm(6).a(aVar);
        jVarA.ch(i == 2 ? 14 : 1);
        com.kwad.sdk.core.report.a.b(this.CM.mAdTemplate, jVarA, (JSONObject) null);
    }

    private void ly() {
        this.CM.mRootContainer.findViewById(R.id.splash_play_card_view).setVisibility(8);
    }

    @Override
    public final void a(am amVar) {
        super.a(amVar);
        this.wH = amVar;
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(a(bVar));
    }

    @Override
    public final void aK() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rD();
        }
    }

    @Override
    public final void aL() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rE();
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.CM.Ce.a(this);
    }

    @Override
    public final void b(t.a aVar) {
        aVar.width = com.kwad.sdk.d.a.a.b(getContext(), this.CM.mRootContainer.getWidth());
        aVar.height = com.kwad.sdk.d.a.a.b(getContext(), this.CM.mRootContainer.getHeight());
    }

    @Override
    public final void b(WebCloseStatus webCloseStatus) {
        super.b(webCloseStatus);
        aa(webCloseStatus.closeType);
        if (webCloseStatus.closeType == 2) {
            this.CM.kM();
        } else {
            this.CM.kI();
        }
    }

    @Override
    public final void cc() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
        ly();
        this.lr.setVisibility(8);
    }

    @Override
    public final void eh() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rz();
            this.wH.rA();
        }
        ly();
        this.lr.setVisibility(0);
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.lr;
    }

    @Override
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-splash-end-card", this.CM.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.lr = (FrameLayout) findViewById(R.id.splash_end_card_view);
    }

    @Override
    public final void onUnbind() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
        super.onUnbind();
        this.CM.Ce.b(this);
    }
}
