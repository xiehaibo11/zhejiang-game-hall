package com.kwad.components.ad.reward.j;

import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

public class f implements com.kwad.sdk.core.webview.c.a {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public boolean xy;
    }

    public void W(boolean z) {
    }

    @Override
    public final void a(final String str, com.kwad.sdk.core.webview.c.c cVar) {
        bj.postOnUiThread(new Runnable() {
            @Override
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

    @Override
    public final String getKey() {
        return "closeVideo";
    }

    @Override
    public final void onDestroy() {
    }
}
