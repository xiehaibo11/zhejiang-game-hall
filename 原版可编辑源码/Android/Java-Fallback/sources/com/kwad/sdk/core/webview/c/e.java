package com.kwad.sdk.core.webview.c;

public final class e implements com.kwad.sdk.core.b {
    private final java.lang.String aiE;
    private final int result;

    public e(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.result = r1
            r0.aiE = r2
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.result
            java.lang.String r2 = "result"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.aiE
            java.lang.String r2 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
