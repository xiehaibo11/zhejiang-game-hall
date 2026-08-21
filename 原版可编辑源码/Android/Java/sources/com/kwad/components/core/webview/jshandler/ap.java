package com.kwad.components.core.webview.jshandler;

import android.support.v4.app.NotificationCompat;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

public final class ap implements com.kwad.sdk.core.webview.c.a {
    private KsAppDownloadListener Tn;
    private com.kwad.sdk.core.webview.c.c Tv;
    private KsAppDownloadListener Vt;
    private final com.kwad.sdk.core.webview.b cE;
    private final com.kwad.components.core.e.d.c mApkDownloadHelper;

    public static final class a implements com.kwad.sdk.core.b {
        public float Vv;
        public long creativeId;
        public int status;
        public long totalBytes;

        @Override
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, NotificationCompat.CATEGORY_PROGRESS, this.Vv);
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", this.status);
            com.kwad.sdk.utils.t.putValue(jSONObject, DBDefinition.TOTAL_BYTES, this.totalBytes);
            com.kwad.sdk.utils.t.putValue(jSONObject, "creativeId", this.creativeId);
            return jSONObject;
        }
    }

    public ap(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar) {
        this.cE = bVar;
        this.mApkDownloadHelper = cVar;
    }

    public ap(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, KsAppDownloadListener ksAppDownloadListener) {
        this.cE = bVar;
        this.mApkDownloadHelper = cVar;
        this.Vt = ksAppDownloadListener;
    }

    private void a(int i, float f) {
        if (this.Tv != null) {
            a aVar = new a();
            aVar.Vv = f;
            aVar.status = i;
            aVar.totalBytes = com.kwad.sdk.core.response.b.d.cg(this.cE.getAdTemplate()).totalBytes;
            this.Tv.a(aVar);
        }
    }

    private KsAppDownloadListener rt() {
        return new com.kwad.sdk.core.download.a.a() {
            @Override
            public final void onDownloadFailed() {
                ap.this.a(1, 0.0f);
            }

            @Override
            public final void onDownloadFinished() {
                ap.this.a(5, 1.0f);
            }

            @Override
            public final void onIdle() {
                ap.this.a(1, 0.0f);
            }

            @Override
            public final void onInstalled() {
                ap.this.a(6, 1.0f);
                if (ap.this.Vt != null) {
                    ap.this.Vt.onInstalled();
                }
            }

            @Override
            public final void onPaused(int i) {
                ap.this.a(3, (i * 1.0f) / 100.0f);
            }

            @Override
            public final void onProgressUpdate(int i) {
                ap.this.a(2, (i * 1.0f) / 100.0f);
            }
        };
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.cE.DY()) {
            cVar.onError(-1, "native photo is null");
            return;
        }
        this.Tv = cVar;
        com.kwad.components.core.e.d.c cVar2 = this.mApkDownloadHelper;
        if (cVar2 != null) {
            KsAppDownloadListener ksAppDownloadListener = this.Tn;
            if (ksAppDownloadListener != null) {
                cVar2.d(ksAppDownloadListener);
                return;
            }
            KsAppDownloadListener ksAppDownloadListenerRt = rt();
            this.Tn = ksAppDownloadListenerRt;
            this.mApkDownloadHelper.b(ksAppDownloadListenerRt);
        }
    }

    @Override
    public final String getKey() {
        return "registerProgressListener";
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
