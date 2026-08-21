package com.kwad.sdk.core.network;

public abstract class BaseRealData extends com.kwad.sdk.core.network.BaseResultData {
    public BaseRealData() {
            r0 = this;
            r0.<init>()
            return
    }

    protected abstract void parseData(org.json.JSONObject r1);

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            super.parseJson(r3)
            if (r3 != 0) goto L6
            return
        L6:
            r0 = 0
            java.lang.String r1 = "data"
            java.lang.String r3 = r3.optString(r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = com.kwad.sdk.core.a.d.getResponseData(r3)     // Catch: java.lang.Exception -> L25
            if (r3 == 0) goto L22
            boolean r1 = r3.isEmpty()     // Catch: java.lang.Exception -> L25
            if (r1 != 0) goto L22
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L25
            r1.<init>(r3)     // Catch: java.lang.Exception -> L25
            r2.parseData(r1)     // Catch: java.lang.Exception -> L25
            goto L31
        L22:
            r2.result = r0     // Catch: java.lang.Exception -> L25
            return
        L25:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            r2.result = r0
            java.lang.String r3 = r3.getMessage()
            r2.errorMsg = r3
        L31:
            return
    }
}
