package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import org.json.JSONException;
import org.json.JSONObject;

public final class ah implements com.kwad.sdk.core.webview.c.a {
    private Handler TT = new Handler(Looper.getMainLooper());
    private com.kwad.sdk.core.webview.c.c TU;
    private b cK;
    private String mUrl;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public String errorMsg;
        public int status;

        public final boolean isSuccess() {
            return this.status == 1;
        }
    }

    public interface b {
        void a(a aVar);
    }

    @Deprecated
    public ah(b bVar) {
        this.cK = bVar;
    }

    public ah(b bVar, String str) {
        this.cK = bVar;
        this.mUrl = str;
    }

    private void b(a aVar) {
        b bVar = this.cK;
        if (bVar != null) {
            bVar.a(aVar);
        }
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.TU = cVar;
        try {
            final a aVar = new a();
            aVar.parseJson(new JSONObject(str));
            this.TT.post(new Runnable() {
                @Override
                public final void run() {
                    ah.this.b(aVar);
                    if (ah.this.TU != null) {
                        ah.this.TU.a(null);
                    }
                }
            });
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.e("WebCardPageStatusHandler", "handleJsCall error: " + e);
            com.kwad.sdk.core.webview.b.c.b.ad(this.mUrl, e.getMessage());
            cVar.onError(-1, e.getMessage());
        }
    }

    @Override
    public final String getKey() {
        return "pageStatus";
    }

    @Override
    public final void onDestroy() {
        this.cK = null;
        this.TU = null;
        this.TT.removeCallbacksAndMessages(null);
    }
}
