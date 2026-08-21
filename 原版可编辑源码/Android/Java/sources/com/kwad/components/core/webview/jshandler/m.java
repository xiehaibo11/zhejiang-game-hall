package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.utils.bj;
import org.json.JSONException;
import org.json.JSONObject;

public class m implements com.kwad.sdk.core.webview.c.a {
    protected void a(com.kwad.components.core.webview.b.b.x xVar) {
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        final com.kwad.components.core.webview.b.b.x xVar = new com.kwad.components.core.webview.b.b.x();
        try {
            xVar.parseJson(new JSONObject(str));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                if (xVar.rU()) {
                    m.this.a(xVar);
                    return;
                }
                if (xVar.rW()) {
                    m.this.b(xVar);
                } else if (xVar.rV()) {
                    m.this.c(xVar);
                } else if (xVar.isFailed()) {
                    m.this.d(xVar);
                }
            }
        });
    }

    protected void b(com.kwad.components.core.webview.b.b.x xVar) {
    }

    protected void c(com.kwad.components.core.webview.b.b.x xVar) {
    }

    protected void d(com.kwad.components.core.webview.b.b.x xVar) {
    }

    @Override
    public final String getKey() {
        return "updateVideoPlayStatus";
    }

    @Override
    public final void onDestroy() {
    }
}
