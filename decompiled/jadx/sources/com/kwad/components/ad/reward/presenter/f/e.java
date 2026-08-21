package com.kwad.components.ad.reward.presenter.f;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.core.webview.b.b;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.response.model.AdInfo;

/* JADX INFO: loaded from: classes2.dex */
public final class e extends d implements com.kwad.components.ad.reward.presenter.platdetail.actionbar.a {
    private com.kwad.components.core.webview.b.f lu;
    private final com.kwad.components.core.webview.b.e.a pg = new com.kwad.components.core.webview.b.e.a() { // from class: com.kwad.components.ad.reward.presenter.f.e.4
        @Override // com.kwad.components.core.webview.b.e.a
        public final void ck() {
            if (e.this.lu != null) {
                com.kwad.components.core.webview.b.b.a aVar = new com.kwad.components.core.webview.b.b.a();
                aVar.WQ = e.this.qx.fz ? 1 : 0;
                e.this.lu.b(aVar);
            }
        }
    };
    private ViewGroup wA;
    private ViewGroup wB;
    private View wC;
    private ViewGroup wD;
    private FrameLayout wE;
    private ViewGroup wz;

    private void R(final int i) {
        this.qx.mRootContainer.postDelayed(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.f.e.3
            @Override // java.lang.Runnable
            public final void run() {
                int iJe = e.this.je();
                int iS = e.this.S(i);
                if (e.this.wE != null) {
                    FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) e.this.wE.getLayoutParams();
                    layoutParams.width = -1;
                    int height = (e.this.qx.mRootContainer.getHeight() - iJe) - iS;
                    if (height < 0) {
                        height = 0;
                    }
                    layoutParams.topMargin = iJe;
                    layoutParams.height = height;
                    e.this.wE.setLayoutParams(layoutParams);
                }
            }
        }, 800L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int S(int i) {
        ViewGroup viewGroup = this.wA;
        if (viewGroup != null && viewGroup.getHeight() > 0) {
            return this.wA.getHeight();
        }
        ViewGroup viewGroup2 = this.wD;
        return (viewGroup2 == null || viewGroup2.getHeight() <= 0) ? i > 0 ? i : com.kwad.sdk.d.a.a.a(getContext(), 120.0f) : this.wD.getHeight();
    }

    private com.kwad.components.core.webview.b.c ei() {
        return new com.kwad.components.core.webview.b.c() { // from class: com.kwad.components.ad.reward.presenter.f.e.7
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
        return new com.kwad.components.core.webview.b.f() { // from class: com.kwad.components.ad.reward.presenter.f.e.6
            @Override // com.kwad.components.core.webview.b.f, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.a aVar = new com.kwad.components.core.webview.b.b.a();
                aVar.WQ = e.this.qx.fz ? 1 : 0;
                cVar.a(aVar);
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int je() {
        ViewGroup viewGroup;
        int height;
        if (this.wz.getHeight() > 0) {
            viewGroup = this.wz;
        } else {
            if (com.kwad.sdk.core.response.b.a.aH(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate)) && (height = ((ViewGroup.MarginLayoutParams) this.wC.getLayoutParams()).topMargin + 0 + this.wC.getHeight()) > 0) {
                return height;
            }
            viewGroup = this.wB;
        }
        return viewGroup.getHeight();
    }

    private com.kwad.components.core.webview.b.e jf() {
        return new com.kwad.components.core.webview.b.e() { // from class: com.kwad.components.ad.reward.presenter.f.e.5
            @Override // com.kwad.components.core.webview.b.e, com.kwad.sdk.core.webview.c.a
            public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
                super.a(str, cVar);
                com.kwad.components.core.webview.b.b.i iVar = new com.kwad.components.core.webview.b.b.i();
                AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(e.this.qx.mAdTemplate);
                iVar.rewardTime = e.this.qx.pm ? com.kwad.sdk.core.response.b.a.aG(adInfoCg) && com.kwad.components.core.r.a.pS().pT() == 0 ? com.kwad.sdk.core.response.b.a.aE(adInfoCg) : com.kwad.sdk.core.response.b.a.aC(adInfoCg) : 0;
                cVar.a(iVar);
            }
        };
    }

    @Override // com.kwad.components.ad.reward.presenter.platdetail.actionbar.a
    public final void a(RewardActionBarControl.ShowActionBarResult showActionBarResult, View view) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        R(layoutParams != null ? layoutParams instanceof ViewGroup.MarginLayoutParams ? ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin + layoutParams.height : layoutParams.height : 0);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        super.a(lVar, bVar);
        this.lu = ej();
        this.qx.a(this.pg);
        lVar.c(this.lu);
        lVar.c(jf());
        lVar.c(new com.kwad.components.core.webview.b.b(new b.a() { // from class: com.kwad.components.ad.reward.presenter.f.e.1
            @Override // com.kwad.components.core.webview.b.b.a
            public final void eo() {
                com.kwad.components.ad.reward.model.b.L(e.this.qx.mContext);
            }
        }));
        lVar.c(ei());
        lVar.c(new com.kwad.components.core.webview.jshandler.e(new com.kwad.components.core.webview.jshandler.i() { // from class: com.kwad.components.ad.reward.presenter.f.e.2
            @Override // com.kwad.components.core.webview.jshandler.i
            public final void a(com.kwad.components.core.webview.jshandler.e eVar, String str) {
                if (TextUtils.equals(str, "autoCallApp")) {
                    eVar.aM(com.kwad.components.ad.reward.j.g(com.kwad.sdk.core.response.b.d.cg(e.this.qx.mAdTemplate)) && com.kwad.sdk.core.d.a.AX() && e.this.qx.mScreenOrientation == 0);
                }
            }
        }));
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.qx.oY.a(this);
        this.wE.setVisibility(0);
        R(0);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.components.core.webview.b.i
    public final void cc() {
        super.cc();
        this.wE.setVisibility(8);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d
    protected final boolean cd() {
        return !this.qx.oV.jR();
    }

    @Override // com.kwad.components.core.webview.b.i
    public final FrameLayout getTKContainer() {
        return this.wE;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final String getTkTemplateId() {
        return com.kwad.components.core.webview.b.j.b("ksad-video-middle-card", this.qx.mAdTemplate);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.wE = (FrameLayout) findViewById(R.id.ksad_js_middle);
        this.wz = (ViewGroup) findViewById(R.id.ksad_js_top);
        this.wB = (ViewGroup) findViewById(R.id.ksad_play_detail_top_toolbar);
        this.wA = (ViewGroup) findViewById(R.id.ksad_js_bottom);
        this.wD = (ViewGroup) findViewById(R.id.ksad_play_web_card_webView);
        this.wC = findViewById(R.id.ksad_compliance_view);
    }

    @Override // com.kwad.components.ad.reward.presenter.f.d, com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.qx.oY.b(this);
        this.qx.a((com.kwad.components.core.webview.b.e.a) null);
    }
}
