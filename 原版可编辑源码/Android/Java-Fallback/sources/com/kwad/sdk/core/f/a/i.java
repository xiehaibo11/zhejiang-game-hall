package com.kwad.sdk.core.f.a;

public final class i {
    private android.content.Context mContext;

    public i(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    public final java.lang.String getOAID() {
            r5 = this;
            java.lang.String r0 = "com.android.id.impl.IdProviderImpl"
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L23
            java.lang.Object r0 = com.kwad.sdk.utils.s.g(r0, r2)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = "getOAID"
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L23
            android.content.Context r4 = r5.mContext     // Catch: java.lang.Exception -> L23
            r3[r1] = r4     // Catch: java.lang.Exception -> L23
            java.lang.Object r0 = com.kwad.sdk.utils.s.f(r0, r2, r3)     // Catch: java.lang.Exception -> L23
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L23
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "getOAID oaid:"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L25
            r1.append(r0)     // Catch: java.lang.Exception -> L25
            goto L25
        L23:
            java.lang.String r0 = ""
        L25:
            return r0
    }
}
