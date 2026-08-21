package com.kwad.components.ad.reward.presenter.f;

import android.text.TextUtils;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.e.l;
import com.kwad.components.ad.reward.page.BackPressHandleResult;
import com.kwad.components.core.i.a;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.components.core.webview.b.b;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.sdk.R;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class h extends a implements com.kwad.components.ad.reward.e.h, a.InterfaceC0155a {
    private com.kwad.components.core.webview.b.f lu;
    private List<com.kwad.components.core.i.c> tk;
    private FrameLayout wM;
    private FrameLayout wN;
    private FrameLayout wO;
    protected FrameLayout wg;
    private boolean wh = false;
    private final com.kwad.components.core.webview.b.e.a pg = new com.kwad.components.core.webview.b.e.a() { // from class: com.kwad.components.ad.reward.presenter.f.h.1
        @Override // com.kwad.components.core.webview.b.e.a
        public final void ck() {
            if (h.this.lu != null) {
                com.kwad.components.core.webview.b.b.a aVar = new com.kwad.components.core.webview.b.b.a();
                aVar.WQ = h.this.qx.fz ? 1 : 0;
                h.this.lu.b(aVar);
            }
        }
    };

    private void X(boolean z) {
        com.kwad.sdk.core.e.c.d("TkRewardPagePresenter", "fullTK: " + z);
        FrameLayout frameLayout = this.wg;
        if (frameLayout == null) {
            return;
        }
        frameLayout.setVisibility(z ? 0 : 8);
        this.wM.setVisibility(z ? 8 : 0);
        this.wN.setVisibility(z ? 8 : 0);
        this.wO.setVisibility(z ? 8 : 0);
    }

    private static List<AdTemplate> a(List<com.kwad.components.core.i.c> list, AdTemplate adTemplate) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(adTemplate);
        arrayList.addAll(com.kwad.components.core.i.c.j(list));
        return arrayList;
    }

    private com.kwad.components.core.webview.b.c ei() {
        return new com.kwad.components.core.webview.b.c() { // from class: com.kwad.components.ad.reward.presenter.f.h.6
            @Override // com.kwad.components.core.webview.b.c, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.c cVar2 = new com.kwad.components.core.webview.b.b.c();
                cVar2.WS = com.kwad.components.ad.reward.model.b.cK();
                cVar.a(cVar2);
            }
        };
    }

    private com.kwad.components.core.webview.b.f ej() {
        return new com.kwad.components.core.webview.b.f() { // from class: com.kwad.components.ad.reward.presenter.f.h.5
            @Override // com.kwad.components.core.webview.b.f, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.a aVar = new com.kwad.components.core.webview.b.b.a();
                aVar.WQ = h.this.qx.fz ? 1 : 0;
                cVar.a(aVar);
            }
        };
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void a(PlayableSource playableSource, l lVar) {
        FrameLayout frameLayout;
        if (this.wh || (frameLayout = this.wg) == null) {
            return;
        }
        frameLayout.setVisibility(8);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void a(t tVar) {
        com.kwad.sdk.core.e.c.d("TkRewardPagePresenter", "onSkipClick: " + tVar.Xf);
        if (this.qx != null && this.qx.mAdOpenInteractionListener != null) {
            this.qx.mAdOpenInteractionListener.onVideoSkipToEnd(tVar.Xf * 1000);
        }
        com.kwad.components.ad.reward.presenter.e.v(this.qx);
        com.kwad.components.ad.reward.j.a(this.qx.pd, new com.kwad.sdk.g.a<com.kwad.components.ad.reward.j.a>() { // from class: com.kwad.components.ad.reward.presenter.f.h.7
            private static void c(com.kwad.components.ad.reward.j.a aVar) {
                aVar.iQ();
            }

            @Override // com.kwad.sdk.g.a
            public final /* synthetic */ void accept(com.kwad.components.ad.reward.j.a aVar) {
                c(aVar);
            }
        });
    }

    @Override // com.kwad.components.ad.reward.presenter.f.a, com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.components.l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        lVar.c(new com.kwad.components.ad.reward.c.f(new com.kwad.components.ad.reward.c.d() { // from class: com.kwad.components.ad.reward.presenter.f.h.2
            @Override // com.kwad.components.ad.reward.c.d
            public final void a(com.kwad.components.ad.reward.c.b bVar2) {
                com.kwad.sdk.core.e.c.d("TkRewardPagePresenter", "onUpdateExtraReward : " + bVar2.gZ());
                h.this.a(bVar2);
            }
        }));
        this.lu = ej();
        this.qx.a(this.pg);
        lVar.c(this.lu);
        lVar.c(new com.kwad.components.core.webview.b.b(new b.a() { // from class: com.kwad.components.ad.reward.presenter.f.h.3
            @Override // com.kwad.components.core.webview.b.b.a
            public final void eo() {
                com.kwad.components.ad.reward.model.b.L(h.this.qx.mContext);
            }
        }));
        lVar.c(ei());
        lVar.c(new com.kwad.components.core.webview.jshandler.e(new com.kwad.components.core.webview.jshandler.i() { // from class: com.kwad.components.ad.reward.presenter.f.h.4
            @Override // com.kwad.components.core.webview.jshandler.i
            public final void a(com.kwad.components.core.webview.jshandler.e eVar, String str) {
                if (TextUtils.equals(str, "autoCallApp")) {
                    eVar.aM(com.kwad.components.ad.reward.j.g(com.kwad.sdk.core.response.b.d.cg(h.this.qx.mAdTemplate)) && com.kwad.sdk.core.d.a.AX() && h.this.qx.mScreenOrientation == 0);
                }
            }
        }));
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        if (aVar == null || com.kwad.sdk.core.response.b.d.b(this.qx.mAdTemplate, aVar.creativeId, aVar.adStyle)) {
            this.qx.mAdOpenInteractionListener.bE();
            return;
        }
        com.kwad.components.core.i.c cVarA = com.kwad.components.ad.reward.j.a(this.tk, aVar.creativeId);
        if (cVarA != null) {
            this.qx.a(cVarA);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (!this.wh) {
            X(true);
        }
        this.qx.pk = true ^ this.wh;
        this.qx.a((a.InterfaceC0155a) this);
        com.kwad.components.ad.reward.b.fp().a(this);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void b(WebCloseStatus webCloseStatus) {
        super.b(webCloseStatus);
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bS() {
        FrameLayout frameLayout;
        if (this.wh || (frameLayout = this.wg) == null) {
            return;
        }
        frameLayout.setVisibility(0);
    }

    @Override // com.kwad.components.ad.reward.e.h
    public final void bT() {
    }

    @Override // com.kwad.components.core.i.a.InterfaceC0155a
    public final void c(List<com.kwad.components.core.i.c> list) {
        if (list == null || list.size() == 0 || this.wk == null) {
            return;
        }
        this.tk = list;
        List<AdTemplate> listA = a(list, this.qx.mAdTemplate);
        com.kwad.sdk.core.webview.b bVarRG = this.wk.rG();
        if (bVarRG != null) {
            bVarRG.setAdTemplateList(listA);
        }
        com.kwad.components.ad.reward.j.l lVarJu = this.wk.ju();
        if (lVarJu != null) {
            lVarJu.e(listA);
        } else {
            this.wk.f(listA);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void cc() {
        super.cc();
        com.kwad.sdk.core.e.c.d("TkRewardPagePresenter", "onTkLoadFailed");
        this.wh = true;
        this.qx.pk = false;
        X(false);
    }

    public final BackPressHandleResult gA() {
        return this.wk == null ? BackPressHandleResult.NOT_HANDLED : this.wk.gA();
    }

    @Override // com.kwad.components.core.webview.b.i
    public FrameLayout getTKContainer() {
        return this.wg;
    }

    public String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-neo-video-card", this.qx.mAdTemplate);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public void onCreate() {
        super.onCreate();
        this.wg = (FrameLayout) findViewById(R.id.ksad_js_reward_card);
        this.wM = (FrameLayout) findViewById(R.id.ksad_js_top);
        this.wN = (FrameLayout) findViewById(R.id.ksad_js_middle);
        this.wO = (FrameLayout) findViewById(R.id.ksad_js_bottom);
    }

    @Override // com.kwad.components.core.i.a.InterfaceC0155a
    public final void onError(int i, String str) {
    }

    @Override // com.kwad.components.core.i.a.InterfaceC0155a
    public final void onRequestResult(int i) {
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.b((a.InterfaceC0155a) this);
        com.kwad.components.ad.reward.b.fp().b(this);
    }
}
