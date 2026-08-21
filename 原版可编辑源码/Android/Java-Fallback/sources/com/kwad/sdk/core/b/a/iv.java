package com.kwad.sdk.core.b.a;

public final class iv implements com.kwad.sdk.core.d<com.kwad.sdk.core.threads.d> {
    public iv() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.threads.d r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "rate_reciprocal"
            int r0 = r3.optInt(r0)
            r2.avr = r0
            java.lang.String r0 = "threshold"
            int r0 = r3.optInt(r0)
            r2.avx = r0
            java.lang.String r0 = "interval"
            long r0 = r3.optLong(r0)
            r2.interval = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.threads.d r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            int r0 = r4.avr
            if (r0 == 0) goto L12
            int r0 = r4.avr
            java.lang.String r1 = "rate_reciprocal"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L12:
            int r0 = r4.avx
            if (r0 == 0) goto L1d
            int r0 = r4.avx
            java.lang.String r1 = "threshold"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L1d:
            long r0 = r4.interval
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2c
            long r0 = r4.interval
            java.lang.String r4 = "interval"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L2c:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.threads.d r1 = (com.kwad.sdk.core.threads.d) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.threads.d r1 = (com.kwad.sdk.core.threads.d) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
