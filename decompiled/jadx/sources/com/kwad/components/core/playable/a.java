package com.kwad.components.core.playable;

import android.content.Context;
import android.os.Build;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.e.d.c;
import com.kwad.components.core.webview.b.a.f;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.au;
import com.kwad.components.core.webview.jshandler.e;
import com.kwad.components.core.webview.jshandler.i;
import com.kwad.components.core.webview.jshandler.v;
import com.kwad.components.core.webview.jshandler.w;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.core.webview.b;
import com.kwad.sdk.utils.bj;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements i {
    private final KsAdWebView Pb;
    private long Pc;
    private int Pd;
    private PlayableSource Pe = PlayableSource.UNKNOWN_TRYPLAY_ENTRY_SOURCE;
    private List<ah.b> Pf = new CopyOnWriteArrayList();
    private List<KsAdWebView.d> Pg = new CopyOnWriteArrayList();
    private com.kwad.components.core.webview.a cD;
    private am cG;
    private AdTemplate mAdTemplate;
    private c mApkDownloadHelper;
    private Context mContext;
    private AdBaseFrameLayout mRootContainer;

    /* JADX INFO: renamed from: com.kwad.components.core.playable.a$a, reason: collision with other inner class name */
    static class C0164a implements au.b {
        private final WeakReference<a> Pi;

        public C0164a(a aVar) {
            this.Pi = new WeakReference<>(aVar);
        }

        @Override // com.kwad.components.core.webview.jshandler.au.b
        public final void P(int i) {
            a aVar = this.Pi.get();
            if (aVar != null) {
                aVar.az(i);
            }
        }
    }

    public a(KsAdWebView ksAdWebView) {
        this.Pb = ksAdWebView;
        ksAdWebView.setOnTouchListener(new View.OnTouchListener() { // from class: com.kwad.components.core.playable.a.1
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() != 0) {
                    return false;
                }
                a.this.Pc = SystemClock.elapsedRealtime();
                a.this.Pb.getClientConfig().bk(true);
                return false;
            }
        });
        ksAdWebView.setClientConfig(ksAdWebView.getClientConfig().cy(this.mAdTemplate).b(getWebListener()));
        a(this.Pb);
    }

    private static void a(KsAdWebView ksAdWebView) {
        if (Build.VERSION.SDK_INT < 17 || !d.zL()) {
            return;
        }
        ksAdWebView.getSettings().setMediaPlaybackRequiresUserGesture(false);
    }

    private void a(b bVar, com.kwad.components.core.webview.a aVar, c cVar) {
        aVar.a(new au(bVar, cVar, new C0164a(this)));
        aVar.a(new ah(new ah.b() { // from class: com.kwad.components.core.playable.a.3
            @Override // com.kwad.components.core.webview.jshandler.ah.b
            public final void a(ah.a aVar2) {
                a.this.Pd = aVar2.status;
                if (aVar2.status == 1 && a.this.mAdTemplate != null) {
                    com.kwad.sdk.core.report.a.aE(a.this.mAdTemplate);
                }
                Iterator it = a.this.Pf.iterator();
                while (it.hasNext()) {
                    ((ah.b) it.next()).a(aVar2);
                }
            }
        }, getUrl()));
        aVar.a(new ab(bVar));
        this.cG = new am();
        aVar.a(new w());
        aVar.a(new v(bVar));
        aVar.a(new f());
        aVar.a(this.cG);
        aVar.a(new e(this));
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void az(int i) {
        if (getAdTemplate() == null) {
            return;
        }
        long jZM = d.zM();
        if (jZM <= 0 || SystemClock.elapsedRealtime() - this.Pc <= jZM) {
            z.b bVar = new z.b();
            bVar.jG = i;
            bVar.jI = this.mRootContainer.getTouchCoords();
            com.kwad.components.core.e.d.a.a(new a.C0150a(this.mContext).P(this.mAdTemplate).b(this.mApkDownloadHelper).am(false).a(bVar).ao(true));
        }
    }

    private AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    private String getUrl() {
        AdTemplate adTemplate = this.mAdTemplate;
        return adTemplate == null ? "" : com.kwad.sdk.core.response.b.a.bB(com.kwad.sdk.core.response.b.d.cg(adTemplate));
    }

    private KsAdWebView.d getWebListener() {
        return new KsAdWebView.d() { // from class: com.kwad.components.core.playable.a.2
            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onPageFinished() {
                Iterator it = a.this.Pg.iterator();
                while (it.hasNext()) {
                    ((KsAdWebView.d) it.next()).onPageFinished();
                }
            }

            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onPageStart() {
                Iterator it = a.this.Pg.iterator();
                while (it.hasNext()) {
                    ((KsAdWebView.d) it.next()).onPageStart();
                }
            }

            @Override // com.kwad.sdk.core.webview.KsAdWebView.d
            public final void onReceivedHttpError(int i, String str, String str2) {
                Iterator it = a.this.Pg.iterator();
                while (it.hasNext()) {
                    ((KsAdWebView.d) it.next()).onReceivedHttpError(i, str, str2);
                }
            }
        };
    }

    private void oV() {
        if (com.kwad.sdk.core.response.b.a.bx(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)) > 0) {
            bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.core.playable.a.4
                @Override // java.lang.Runnable
                public final void run() {
                    a.this.Pb.getClientConfig().bk(true);
                }
            }, com.kwad.sdk.core.response.b.a.bx(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)));
        }
        if (com.kwad.sdk.core.response.b.a.bx(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)) == 0) {
            this.Pb.getClientConfig().bk(true);
        }
        if (com.kwad.sdk.core.response.b.a.bZ(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)) > 0) {
            this.Pb.getClientConfig().bk(this.mAdTemplate.converted);
        }
    }

    public final void a(ah.b bVar) {
        this.Pf.add(bVar);
    }

    @Override // com.kwad.components.core.webview.jshandler.i
    public final void a(e eVar, String str) {
        AdTemplate adTemplate;
        if ("playableSrc".equals(str)) {
            eVar.f(this.Pe);
        }
        if (!"getAdType".equals(str) || (adTemplate = this.mAdTemplate) == null) {
            return;
        }
        eVar.aM(adTemplate.adStyle);
    }

    public final void a(AdTemplate adTemplate, AdBaseFrameLayout adBaseFrameLayout, c cVar) {
        if (this.Pb == null) {
            com.kwad.sdk.core.e.c.w("PlayableViewHelper", "registerJsBridge mPlayableView is null");
            return;
        }
        this.mContext = adBaseFrameLayout.getContext();
        this.mRootContainer = adBaseFrameLayout;
        this.mAdTemplate = adTemplate;
        this.mApkDownloadHelper = cVar;
        this.Pd = -1;
        b bVar = new b();
        bVar.setAdTemplate(adTemplate);
        bVar.mScreenOrientation = 0;
        bVar.aye = this.mRootContainer;
        bVar.MT = this.mRootContainer;
        bVar.Ms = this.Pb;
        ay();
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(this.Pb);
        this.cD = aVar;
        a(bVar, aVar, cVar);
        this.Pb.addJavascriptInterface(this.cD, "KwaiAd");
    }

    public final void a(KsAdWebView.d dVar) {
        this.Pg.add(dVar);
    }

    public final void b(ah.b bVar) {
        this.Pf.remove(bVar);
    }

    public final void e(PlayableSource playableSource) {
        if (playableSource != null) {
            this.Pe = playableSource;
        }
        if (this.Pb == null) {
            return;
        }
        oV();
        com.kwad.sdk.core.e.c.d("PlayableViewHelper", "showPlayable");
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rz();
        }
        this.Pb.setVisibility(0);
        am amVar2 = this.cG;
        if (amVar2 != null) {
            amVar2.rA();
        }
    }

    public final long getLoadTime() {
        KsAdWebView ksAdWebView = this.Pb;
        if (ksAdWebView != null) {
            return ksAdWebView.getLoadTime();
        }
        return -1L;
    }

    public final void hH() {
        com.kwad.sdk.core.e.c.d("PlayableViewHelper", "showPlayable");
        if (this.Pb == null) {
            return;
        }
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rB();
        }
        this.Pb.setVisibility(8);
        am amVar2 = this.cG;
        if (amVar2 != null) {
            amVar2.rC();
        }
        this.Pb.reload();
    }

    public final void pv() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    public final void pw() {
        KsAdWebView ksAdWebView;
        if (this.mAdTemplate == null || (ksAdWebView = this.Pb) == null) {
            return;
        }
        ksAdWebView.getClientConfig().bk(false);
        String url = getUrl();
        if (!TextUtils.isEmpty(url)) {
            this.Pb.loadUrl(url);
        }
        com.kwad.sdk.core.report.a.aF(this.mAdTemplate);
    }

    public final boolean px() {
        return this.Pb != null && this.Pd == 1;
    }
}
