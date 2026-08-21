package com.kwad.components.ad.reward.j;

public final class h implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.ad.reward.j.h.a xA;

    public interface a {
        void Q(int r1);
    }

    public h(com.kwad.components.ad.reward.j.h.a r1) {
            r0 = this;
            r0.<init>()
            r0.xA = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.ad.reward.j.h$a r3 = r1.xA
            if (r3 == 0) goto L1a
            r3 = 0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r0.<init>(r2)     // Catch: org.json.JSONException -> L11
            java.lang.String r2 = "severCheckResult"
            int r3 = r0.optInt(r2)     // Catch: org.json.JSONException -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            com.kwad.components.ad.reward.j.h$a r2 = r1.xA
            r2.Q(r3)
        L1a:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "hasReward"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.xA = r0
            return
    }
}
