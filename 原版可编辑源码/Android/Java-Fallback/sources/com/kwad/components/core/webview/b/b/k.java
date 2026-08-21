package com.kwad.components.core.webview.b.b;

public final class k extends com.kwad.sdk.core.response.a.a {
    public int WW;
    public int WX;
    public int WY;

    public k() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.WX = r0
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.WW
            java.lang.String r2 = "insertScreenAdShowStrategy"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.WY
            java.lang.String r2 = "isAutoShow"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.WX
            r2 = -1
            if (r1 == r2) goto L1d
            java.lang.String r2 = "triggerType"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
        L1d:
            return r0
    }
}
