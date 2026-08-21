package com.kwad.components.ad.reward.j;

import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class f implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public boolean xy;
    }

    public void W(boolean z) {
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(final String str, com.kwad.sdk.core.webview.c.c cVar) {
        bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.j.f.1
            @Override // java.lang.Runnable
            public final void run() {
                boolean z;
                try {
                    a aVar = new a();
                    aVar.parseJson(new JSONObject(str));
                    z = aVar.xy;
                } catch (Exception unused) {
                    z = false;
                }
                f.this.W(z);
            }
        });
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "closeVideo";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
