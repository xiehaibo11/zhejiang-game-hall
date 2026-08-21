package com.kwad.sdk.k.a;

public final class b extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public int aGl;
    public int aGm;
    public int aGn;

    public b(int r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.aGl = r1
            r0.aGm = r2
            r0.aGn = r3
            return
    }

    public static synchronized com.kwad.sdk.k.a.b Hl() {
            java.lang.Class<com.kwad.sdk.k.a.b> r0 = com.kwad.sdk.k.a.b.class
            monitor-enter(r0)
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r1.xw()     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L14
            r1 = 0
            monitor-exit(r0)
            return r1
        L14:
            com.kwad.sdk.k.a.b r1 = com.kwad.sdk.utils.ax.Hl()     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)
            return r1
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static void a(com.kwad.sdk.k.a.b r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            r0 = -1
            java.lang.String r1 = "cellId"
            int r1 = r3.optInt(r1, r0)
            r2.aGl = r1
            java.lang.String r1 = "lac"
            int r1 = r3.optInt(r1, r0)
            r2.aGm = r1
            java.lang.String r1 = "bsss"
            int r3 = r3.optInt(r1, r0)
            r2.aGn = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.k.a.b r2, org.json.JSONObject r3) {
            int r0 = r2.aGl
            java.lang.String r1 = "cellId"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.aGm
            java.lang.String r1 = "lac"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r2 = r2.aGn
            java.lang.String r0 = "bsss"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            a(r0, r1)
            super.afterParseJson(r1)
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r0 = b(r1, r0)
            return r0
    }
}
