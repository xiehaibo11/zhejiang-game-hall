package com.kwad.sdk.core.webview.d.b;

public final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public boolean JC;
    public boolean JK;
    public java.lang.String JT;

    @java.lang.Deprecated
    public boolean UX;
    public int UZ;
    public com.kwad.sdk.core.webview.d.b.c Va;
    public int adStyle;
    public int azc;
    public int azd;
    public long creativeId;
    public int jG;

    public a() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.JK = r0
            r0 = -1
            r2.creativeId = r0
            r0 = -1
            r2.adStyle = r0
            return
    }

    public final boolean Ek() {
            r2 = this;
            int r0 = r2.UZ
            r1 = 1
            if (r1 != r0) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r3) {
            r2 = this;
            java.lang.String r0 = "logParam"
            super.parseJson(r3)
            int r1 = r2.jG     // Catch: java.lang.Throwable -> L2a
            if (r1 != 0) goto L2a
            int r1 = r2.azd     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto Le
            goto L2a
        Le:
            if (r3 == 0) goto L2a
            boolean r1 = r3.has(r0)     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L2a
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = "itemClickType"
            int r0 = r3.getInt(r0)     // Catch: java.lang.Throwable -> L2a
            r2.jG = r0     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = "sceneType"
            int r3 = r3.getInt(r0)     // Catch: java.lang.Throwable -> L2a
            r2.azd = r3     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }
}
