package com.kwad.sdk.k.a;

public final class f extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public int aGw;
    public int aGx;

    public f() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.aGw = r0
            r1.aGx = r0
            return
    }

    public static synchronized com.kwad.sdk.k.a.f Hm() {
            java.lang.Class<com.kwad.sdk.k.a.f> r0 = com.kwad.sdk.k.a.f.class
            monitor-enter(r0)
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r1.xu()     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L14
            r1 = 0
            monitor-exit(r0)
            return r1
        L14:
            com.kwad.sdk.k.a.f r1 = com.kwad.sdk.utils.ax.Hm()     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)
            return r1
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private void a(com.kwad.sdk.k.a.f r3, org.json.JSONObject r4) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r0 = -1
            java.lang.String r1 = "phoneCount"
            int r1 = r4.optInt(r1, r0)
            r3.aGw = r1
            java.lang.String r1 = "activePhoneCount"
            int r0 = r4.optInt(r1, r0)
            r3.aGx = r0
            super.afterToJson(r4)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.k.a.f r2, org.json.JSONObject r3) {
            int r0 = r2.aGw
            java.lang.String r1 = "phoneCount"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r2 = r2.aGx
            java.lang.String r0 = "activePhoneCount"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            r0.a(r0, r1)
            r0.afterParseJson(r1)
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r0 = b(r1, r0)
            r1.afterToJson(r0)
            return r0
    }
}
