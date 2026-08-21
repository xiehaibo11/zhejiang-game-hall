package com.kwad.components.ad.reward.j;

import org.json.JSONException;
import org.json.JSONObject;

public final class h implements com.kwad.sdk.core.webview.c.a {
    private a xA;

    public interface a {
        void Q(int i);
    }

    public h(a aVar) {
        this.xA = aVar;
    }

    @Override
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

    @Override
    public final String getKey() {
        return "hasReward";
    }

    @Override
    public final void onDestroy() {
        this.xA = null;
    }
}
