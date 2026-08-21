package com.kwad.components.core.webview.a;

import android.text.TextUtils;
import android.webkit.JavascriptInterface;
import android.webkit.WebView;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bp;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private com.kwad.components.core.e.d.c JG;
    private WebView Ms;
    private boolean Td;
    private KsAppDownloadListener Tn;
    private int To = -100;
    private int Tp = 0;
    private com.kwad.sdk.core.webview.b cE;
    private AdTemplate mAdTemplate;

    /* JADX INFO: renamed from: com.kwad.components.core.webview.a.a$a, reason: collision with other inner class name */
    public static final class C0166a extends com.kwad.sdk.core.response.a.a {
        public String packageName;
        public String url;
    }

    public static final class b extends com.kwad.sdk.core.response.a.a {
        public int progress;
        public int status;
    }

    public a(WebView webView, com.kwad.sdk.core.webview.b bVar) {
        this.Ms = webView;
        this.mAdTemplate = bVar.getAdTemplate();
        this.cE = bVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aE(String str) {
        try {
            C0166a c0166a = new C0166a();
            c0166a.parseJson(new JSONObject(str));
            if (k(c0166a.url, c0166a.packageName)) {
                return;
            }
            if (this.JG == null) {
                j(c0166a.url, c0166a.packageName);
            }
            if (this.JG.nF()) {
                return;
            }
            this.JG.d(this.Tn);
            this.JG.m(new a.C0150a(this.cE.Ms.getContext()).am(true).an(false).P(this.mAdTemplate).ap(false));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    private void h(String str, String str2) {
        WebView webView;
        if (this.Td || TextUtils.isEmpty(str) || (webView = this.Ms) == null) {
            return;
        }
        bp.a(webView, str, str2);
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

    /* JADX INFO: Access modifiers changed from: private */
    public void n(int i, int i2) {
        this.Tp = i2;
        if (this.To != i) {
            this.To = i;
            StringBuilder sb = new StringBuilder();
            sb.append(i);
            h("onDownLoadStatusCallback", sb.toString());
        }
    }

    private KsAppDownloadListener rt() {
        return new com.kwad.sdk.core.download.a.a() { // from class: com.kwad.components.core.webview.a.a.2
            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFailed() {
                a.this.n(0, 0);
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFinished() {
                a.this.n(8, 100);
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onIdle() {
                a.this.n(0, 0);
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onInstalled() {
                a.this.n(12, 100);
            }

            @Override // com.kwad.sdk.core.download.a.a
            public final void onPaused(int i) {
                a.this.n(4, i);
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onProgressUpdate(int i) {
                if (i == 0) {
                    a.this.n(1, 0);
                } else {
                    a.this.n(2, i);
                }
            }
        };
    }

    public final void destroy() {
        this.Td = true;
        com.kwad.components.core.e.d.c cVar = this.JG;
        if (cVar != null) {
            cVar.c(this.Tn);
        }
    }

    @JavascriptInterface
    public final int getDownLoadStatus(String str, String str2) {
        if (k(str, str2)) {
            return 0;
        }
        if (this.JG == null) {
            j(str, str2);
        }
        return this.JG.nw();
    }

    @JavascriptInterface
    public final int getProgress(String str, String str2) {
        if (k(str, str2)) {
            return 0;
        }
        if (this.JG == null) {
            j(str, str2);
        }
        return this.Tp;
    }

    @JavascriptInterface
    public final void handleAdClick(final String str) {
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.webview.a.a.1
            @Override // java.lang.Runnable
            public final void run() {
                a.this.aE(str);
            }
        });
    }
}
