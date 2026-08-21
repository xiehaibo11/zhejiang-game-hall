package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class y implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private final Handler TT = new Handler(Looper.getMainLooper());
    private final AdTemplate mAdTemplate = new AdTemplate();
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public String UA;
        public int UB;
        public String UC;
        public String UD;
        public String UE;

        @Deprecated
        public boolean UF;
        public boolean UG;
        public boolean UH;
        public String appId;
        public String appName;
        public String icon;
        public String qm;
        public int type;
        public String url;
        public String version;
        public int versionCode;
    }

    public y(com.kwad.sdk.core.webview.b bVar) {
        this.TL = bVar;
        try {
            AdTemplate adTemplate = this.TL.getAdTemplate();
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

    private static void a(AdInfo adInfo, a aVar) {
        AdInfo.AdConversionInfo adConversionInfo = adInfo.adConversionInfo;
        adConversionInfo.deeplinkUrl = aVar.UD;
        adConversionInfo.marketUrl = aVar.UE;
        adInfo.adBaseInfo.adOperationType = aVar.type;
        adInfo.adBaseInfo.appPackageName = aVar.UA;
        adInfo.adBaseInfo.appName = aVar.appName;
        adInfo.adBaseInfo.appVersion = aVar.version;
        adInfo.adBaseInfo.packageSize = aVar.UB;
        adInfo.adBaseInfo.appIconUrl = aVar.icon;
        adInfo.adBaseInfo.appDescription = aVar.qm;
        if (!com.kwad.sdk.core.response.b.a.ax(adInfo)) {
            adInfo.adConversionInfo.h5Url = aVar.url;
        } else {
            adInfo.adConversionInfo.appDownloadUrl = aVar.url;
            adInfo.downloadId = com.kwad.sdk.utils.ad.bp(adInfo.adConversionInfo.appDownloadUrl);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.e.d.c cVar2;
        int i;
        if (com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))) {
            if (this.mApkDownloadHelper == null) {
                this.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate);
            }
            cVar2 = this.mApkDownloadHelper;
            i = 2;
        } else {
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
            a aVar = new a();
            try {
                aVar.parseJson(new JSONObject(str));
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
            a(adInfoCg, aVar);
            if (this.mApkDownloadHelper == null) {
                this.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate);
            }
            cVar2 = this.mApkDownloadHelper;
            i = 1;
        }
        cVar2.ar(i);
        this.TT.post(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.y.1
            @Override // java.lang.Runnable
            public final void run() {
                com.kwad.components.core.e.d.a.a(new a.C0150a(y.this.TL.MT.getContext()).P(y.this.mAdTemplate).b(y.this.mApkDownloadHelper).a(new a.b() { // from class: com.kwad.components.core.webview.jshandler.y.1.1
                    @Override // com.kwad.components.core.e.d.a.b
                    public final void onAdClicked() {
                    }
                }));
            }
        });
        cVar.a(null);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "handleAdUrl";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.TT.removeCallbacksAndMessages(null);
    }
}
