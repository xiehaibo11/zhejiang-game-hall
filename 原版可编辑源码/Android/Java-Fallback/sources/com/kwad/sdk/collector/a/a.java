package com.kwad.sdk.collector.a;

public final class a extends com.kwad.sdk.core.network.d {
    private com.kwad.sdk.collector.a.a.a ajO;

    static class a {
        private java.util.List<java.lang.String> ajP;

        public a(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.<init>()
                r0.ajP = r1
                return
        }

        public final org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                java.util.List<java.lang.String> r1 = r3.ajP
                java.lang.String r2 = "packageName"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public a(java.util.List<java.lang.String> r2) {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.collector.a.a$a r0 = new com.kwad.sdk.collector.a.a$a
            r0.<init>(r2)
            r1.ajO = r0
            org.json.JSONObject r2 = r0.toJson()
            java.lang.String r0 = "targetAppInfo"
            r1.putBody(r0, r2)
            java.lang.String r2 = "sdkVersion"
            java.lang.String r0 = "3.3.42"
            r1.putBody(r2, r0)
            java.lang.String r2 = "sdkVersionCode"
            r0 = 3034200(0x2e4c58, float:4.25182E-39)
            r1.putBody(r2, r0)
            return
    }

    @Override
    public final java.lang.String getUrl() {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.h.xi()
            return r0
    }
}
