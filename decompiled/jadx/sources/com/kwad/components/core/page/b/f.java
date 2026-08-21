package com.kwad.components.core.page.b;

import android.text.TextUtils;
import android.view.ViewGroup;
import android.webkit.WebView;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.af;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends c {
    private int MS = -1;
    private ViewGroup MT;
    private final a MU;
    private WebView Ms;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private AdTemplate mAdTemplate;
    private final boolean mIsRewardLandPage;

    public interface a {
        void ax(int i);
    }

    public f(a aVar, boolean z) {
        this.MU = aVar;
        this.mIsRewardLandPage = z;
    }

    private void a(com.kwad.components.core.webview.a aVar) {
        com.kwad.sdk.core.e.c.d("LandPageWebViewPresenter", "registerWebCardHandler");
        com.kwad.components.core.e.d.c cVar = new com.kwad.components.core.e.d.c(this.MQ.mAdTemplate);
        aVar.a(new u(this.cE));
        aVar.a(new x(this.cE));
        aVar.a(new ap(this.cE, cVar));
        aVar.a(new t(this.cE));
        aVar.a(new am());
        aVar.a(new ah(oI(), com.kwad.sdk.core.response.b.b.bh(this.mAdTemplate)));
        aVar.a(new ab(this.cE));
        aVar.a(new af(getOpenNewPageListener()));
        aVar.a(new r(this.cE, cVar, null));
        aVar.a(new o(this.cE, cVar, null, 2, this.mIsRewardLandPage));
    }

    private void as(String str) {
        ax();
        this.Ms.loadUrl(str);
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.mAdTemplate);
        this.cE.MT = this.MT;
        this.cE.Ms = this.Ms;
    }

    private void ax() {
        ay();
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(this.Ms);
        this.cD = aVar;
        a(aVar);
        this.Ms.addJavascriptInterface(this.cD, "KwaiAd");
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    private af.a getOpenNewPageListener() {
        return new af.a() { // from class: com.kwad.components.core.page.b.f.2
            @Override // com.kwad.components.core.webview.jshandler.af.a
            public final void a(com.kwad.components.core.webview.a.b bVar) {
                AdWebViewActivityProxy.launch(f.this.Ms.getContext(), new AdWebViewActivityProxy.a.C0160a().aq(bVar.title).ar(bVar.url).ay(true).S(f.this.mAdTemplate).oA());
            }
        };
    }

    private ah.b oI() {
        return new ah.b() { // from class: com.kwad.components.core.page.b.f.1
            @Override // com.kwad.components.core.webview.jshandler.ah.b
            public final void a(ah.a aVar) {
                f.this.MS = aVar.status;
                if (f.this.MU != null) {
                    f.this.MU.ax(aVar.status);
                }
                if (aVar.status == 1) {
                    f.this.MT.setVisibility(0);
                } else {
                    f.this.Ms.setVisibility(8);
                }
            }
        };
    }

    @Override // com.kwad.components.core.page.b.c, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        AdTemplate adTemplate = this.MQ.mAdTemplate;
        this.mAdTemplate = adTemplate;
        String strBh = com.kwad.sdk.core.response.b.b.bh(adTemplate);
        if (!TextUtils.isEmpty(strBh)) {
            av();
            as(strBh);
        } else {
            a aVar = this.MU;
            if (aVar != null) {
                aVar.ax(this.MS);
            }
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.Ms = (WebView) findViewById(R.id.ksad_landing_page_webview);
        this.MT = (ViewGroup) findViewById(R.id.ksad_web_card_container);
        this.Ms.setBackgroundColor(0);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        ay();
    }
}
