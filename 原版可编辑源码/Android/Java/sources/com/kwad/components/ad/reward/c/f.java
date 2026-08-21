package com.kwad.components.ad.reward.c;

import com.kwad.sdk.utils.bj;
import org.json.JSONException;
import org.json.JSONObject;

public final class f implements com.kwad.sdk.core.webview.c.a {
    private d qp;

    public f(d dVar) {
        this.qp = dVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        try {
            final b bVar = new b();
            bVar.parseJson(new JSONObject(str));
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    if (f.this.qp != null) {
                        f.this.qp.a(bVar);
                    }
                }
            });
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
    }

    @Override
    public final String getKey() {
        return "updateExtraReward";
    }

    @Override
    public final void onDestroy() {
        this.qp = null;
    }
}
