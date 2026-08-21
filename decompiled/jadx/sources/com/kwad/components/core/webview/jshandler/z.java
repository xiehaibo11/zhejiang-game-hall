package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class z implements com.kwad.sdk.core.webview.c.a {
    private final Handler TT = new Handler(Looper.getMainLooper());
    private com.kwad.sdk.core.webview.c.c TU;
    private b cJ;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int UJ = -1;
        public int type;
    }

    public interface b {
        void a(a aVar);
    }

    public z(b bVar) {
        this.cJ = bVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(a aVar) {
        b bVar = this.cJ;
        if (bVar != null) {
            bVar.a(aVar);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        try {
            this.TU = cVar;
            final a aVar = new a();
            if (!TextUtils.isEmpty(str)) {
                aVar.parseJson(new JSONObject(str));
            }
            this.TT.post(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.z.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (z.this.TU != null) {
                        z.this.TU.a(null);
                    }
                    z.this.b(aVar);
                }
            });
        } catch (Exception e) {
            this.TU.onError(-1, e.getMessage());
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "hide";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.cJ = null;
        this.TU = null;
        this.TT.removeCallbacksAndMessages(null);
    }
}
