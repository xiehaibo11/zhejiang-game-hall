package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONException;
import org.json.JSONObject;

public final class r implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private boolean TN;
    private Handler TT;
    private boolean TX;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private final com.kwad.components.core.e.d.c mApkDownloadHelper;

    public r(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar) {
        this(bVar, cVar, aVar, false, false);
    }

    public r(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, com.kwad.sdk.core.webview.d.a.a aVar, boolean z, boolean z2) {
        this.TN = false;
        this.TX = false;
        this.TN = z;
        this.TT = new Handler(Looper.getMainLooper());
        this.TL = bVar;
        this.mApkDownloadHelper = cVar;
        this.TX = z2;
        if (cVar != null) {
            cVar.ar(1);
        }
        this.cH = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        Handler handler;
        Runnable runnable;
        if (this.TL.DY()) {
            cVar.onError(-1, "native adTemplate is null");
            return;
        }
        final com.kwad.sdk.core.webview.d.b.a aVar = new com.kwad.sdk.core.webview.d.b.a();
        try {
            aVar.parseJson(new JSONObject(str));
            aVar.JC = true;
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        if (!this.TL.ayg) {
            if (this.cH != null) {
                handler = this.TT;
                runnable = new Runnable() {
                    @Override
                    public final void run() {
                        if (r.this.cH != null) {
                            r.this.cH.a(aVar);
                        }
                    }
                };
            }
            cVar.a(null);
        }
        handler = this.TT;
        runnable = new Runnable() {
            @Override
            public final void run() {
                if (r.this.TL.ayh || aVar.UX) {
                    AdTemplate adTemplate = r.this.TL.getAdTemplate();
                    KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(adTemplate.mAdScene != null ? KSLoggerReporter.cs(adTemplate.mAdScene.getAdStyle()) : null, "adClick").c("isWebCard", Boolean.TRUE).report();
                    com.kwad.components.core.e.d.a.a(r.this.TL.MT.getContext(), r.this.TL.getAdTemplate(), new a.b() {
                        @Override
                        public final void onAdClicked() {
                            if (r.this.cH != null) {
                                r.this.cH.a(aVar);
                            }
                        }
                    }, r.this.mApkDownloadHelper, aVar.UX, r.this.TN, r.this.TX);
                }
            }
        };
        handler.post(runnable);
        cVar.a(null);
    }

    @Override
    public final String getKey() {
        return "convert";
    }

    @Override
    public final void onDestroy() {
        this.TT.removeCallbacksAndMessages(null);
        this.cH = null;
    }
}
