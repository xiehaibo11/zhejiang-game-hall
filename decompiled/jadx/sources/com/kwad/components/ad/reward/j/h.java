package com.kwad.components.ad.reward.j;

import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class h implements com.kwad.sdk.core.webview.c.a {
    private a xA;

    public interface a {
        void Q(int i);
    }

    public h(a aVar) {
        this.xA = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.xA != null) {
            int iOptInt = 0;
            try {
                iOptInt = new JSONObject(str).optInt("severCheckResult");
            } catch (JSONException e) {
                e.printStackTrace();
            }
            this.xA.Q(iOptInt);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "hasReward";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.xA = null;
    }
}
