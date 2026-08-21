package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class au implements com.kwad.sdk.core.webview.c.a {
    private static Handler VH;
    private com.kwad.components.core.e.d.c JG;
    private com.kwad.sdk.core.webview.b VG;
    private b VI;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int jG;
    }

    public interface b {
        void P(int i);
    }

    public au(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, b bVar2) {
        this.VG = bVar;
        this.JG = cVar;
        this.VI = bVar2;
        if (VH == null) {
            VH = new Handler(Looper.getMainLooper());
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            a aVar = new a();
            aVar.parseJson(new JSONObject(str));
            final int i = aVar.jG;
            VH.post(new Runnable() { // from class: com.kwad.components.core.webview.jshandler.au.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (au.this.VI != null) {
                        au.this.VI.P(i);
                    }
                }
            });
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "playableConvert";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
