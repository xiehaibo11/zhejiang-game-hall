package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

public final class aj implements com.kwad.sdk.core.webview.c.a {
    private KsAppDownloadListener Tn;
    private com.kwad.sdk.core.webview.c.c Tv;
    private final com.kwad.sdk.core.webview.b cE;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public double Vf;
        public int status;
    }

    public static final class b extends com.kwad.sdk.core.response.a.a {
        public String UA;
        public String UC;
        public long Vm;
        public String appName;
        public String icon;
        public String qm;
        public String url;
        public String version;
        public int versionCode;
    }

    public aj(com.kwad.sdk.core.webview.b bVar) {
        this.cE = bVar;
        try {
            this.mAdTemplate = new AdTemplate();
            AdTemplate adTemplate = this.cE.getAdTemplate();
            if (adTemplate != null) {
                if (adTemplate.mOriginJString != null) {
                    this.mAdTemplate.parseJson(new JSONObject(adTemplate.mOriginJString));
                } else {
                    this.mAdTemplate.parseJson(adTemplate.toJson());
                }
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    private void a(int i, float f) {
        if (this.Tv != null) {
            a aVar = new a();
            aVar.Vf = f;
            aVar.status = i;
            this.Tv.a(aVar);
        }
    }

    private static void a(AdInfo adInfo, b bVar) {
        adInfo.adBaseInfo.adOperationType = 1;
        adInfo.adBaseInfo.appPackageName = bVar.UA;
        adInfo.adBaseInfo.appName = bVar.appName;
        adInfo.adBaseInfo.appVersion = bVar.version;
        adInfo.adBaseInfo.packageSize = bVar.Vm;
        adInfo.adBaseInfo.appIconUrl = bVar.icon;
        adInfo.adBaseInfo.appDescription = bVar.qm;
        adInfo.adConversionInfo.appDownloadUrl = bVar.url;
        adInfo.downloadId = com.kwad.sdk.utils.ad.bp(adInfo.adConversionInfo.appDownloadUrl);
    }

    private KsAppDownloadListener rt() {
        return new com.kwad.sdk.core.download.a.a() {
            @Override
            public final void onDownloadFailed() {
                aj.this.a(1, 0.0f);
            }

            @Override
            public final void onDownloadFinished() {
                aj.this.a(5, 1.0f);
            }

            @Override
            public final void onIdle() {
                aj.this.a(1, 0.0f);
            }

            @Override
            public final void onInstalled() {
                aj.this.a(6, 1.0f);
            }

            @Override
            public final void onPaused(int i) {
                aj.this.a(3, (i * 1.0f) / 100.0f);
            }

            @Override
            public final void onProgressUpdate(int i) {
                aj.this.a(2, (i * 1.0f) / 100.0f);
            }
        };
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.e.d.c cVar2;
        int i;
        AdTemplate adTemplate = this.mAdTemplate;
        if (adTemplate == null) {
            cVar.onError(-1, "native photo is null");
            return;
        }
        if (com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(adTemplate))) {
            if (this.mApkDownloadHelper == null) {
                this.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate);
            }
            cVar2 = this.mApkDownloadHelper;
            i = 2;
        } else {
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
            b bVar = new b();
            try {
                bVar.parseJson(new JSONObject(str));
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
            a(adInfoCg, bVar);
            if (this.mApkDownloadHelper == null) {
                this.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate);
            }
            cVar2 = this.mApkDownloadHelper;
            i = 1;
        }
        cVar2.ar(i);
        this.Tv = cVar;
        KsAppDownloadListener ksAppDownloadListener = this.Tn;
        if (ksAppDownloadListener != null) {
            this.mApkDownloadHelper.d(ksAppDownloadListener);
            return;
        }
        KsAppDownloadListener ksAppDownloadListenerRt = rt();
        this.Tn = ksAppDownloadListenerRt;
        this.mApkDownloadHelper.b(ksAppDownloadListenerRt);
    }

    @Override
    public final String getKey() {
        return "registerApkStatusListener";
    }

    @Override
    public final void onDestroy() {
        KsAppDownloadListener ksAppDownloadListener;
        this.Tv = null;
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar == null || (ksAppDownloadListener = this.Tn) == null) {
            return;
        }
        cVar.c(ksAppDownloadListener);
        this.Tn = null;
    }
}
