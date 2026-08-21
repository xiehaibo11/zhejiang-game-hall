package com.kwad.components.core.webview.jshandler;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

public final class h implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.e.d.c JG;
    private KsAppDownloadListener Tn;
    private AdTemplate mAdTemplate;
    private Context mContext;
    private com.kwad.sdk.core.webview.c.c nA;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public String TB;
        public String packageName;
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int progress;
        public int status;
    }

    public h(Context context, AdTemplate adTemplate) {
        this.mContext = context;
        this.mAdTemplate = adTemplate;
    }

    private synchronized void j(String str, String str2) {
        this.JG = new com.kwad.components.core.e.d.c(this.mAdTemplate, null, str, str2);
        if (this.Tn == null) {
            KsAppDownloadListener ksAppDownloadListenerRt = rt();
            this.Tn = ksAppDownloadListenerRt;
            this.JG.b(ksAppDownloadListenerRt);
        }
    }

    private static boolean k(String str, String str2) {
        return TextUtils.isEmpty(str) || TextUtils.isEmpty(str2);
    }

    private void n(int i, int i2) {
        if (this.nA != null) {
            b bVar = new b();
            bVar.status = i;
            bVar.progress = i2;
            this.nA.a(bVar);
        }
    }

    private KsAppDownloadListener rt() {
        return new com.kwad.sdk.core.download.a.a() {
            @Override
            public final void onDownloadFailed() {
                h.this.n(0, 0);
            }

            @Override
            public final void onDownloadFinished() {
                h.this.n(8, 100);
            }

            @Override
            public final void onIdle() {
                h.this.n(0, 0);
            }

            @Override
            public final void onInstalled() {
                h.this.n(12, 100);
            }

            @Override
            public final void onPaused(int i) {
                h.this.n(4, i);
            }

            @Override
            public final void onProgressUpdate(int i) {
                if (i == 0) {
                    h.this.n(1, 0);
                } else {
                    h.this.n(2, i);
                }
            }
        };
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.nA = cVar;
        a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(str));
            if (k(aVar.TB, aVar.packageName)) {
                cVar.onError(-1, "param is empty");
                return;
            }
            if (this.JG == null) {
                j(aVar.TB, aVar.packageName);
            }
            if (this.JG.nF()) {
                return;
            }
            this.JG.d(this.Tn);
            this.JG.m(new a.a(this.mContext).am(true).an(false).P(this.mAdTemplate).ap(false));
        } catch (Exception unused) {
            cVar.onError(-1, "data parse error");
        }
    }

    @Override
    public final String getKey() {
        return "installAppForDownload";
    }

    @Override
    public final void onDestroy() {
        this.nA = null;
    }
}
