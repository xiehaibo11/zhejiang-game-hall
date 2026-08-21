package com.kwad.components.core.t;

public class b {
    private static volatile com.kwad.components.core.t.b Ri;


    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.core.t.b qj() {
            com.kwad.components.core.t.b r0 = com.kwad.components.core.t.b.Ri
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.t.b> r0 = com.kwad.components.core.t.b.class
            monitor-enter(r0)
            com.kwad.components.core.t.b r1 = com.kwad.components.core.t.b.Ri     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.t.b r1 = new com.kwad.components.core.t.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.t.b.Ri = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.t.b r0 = com.kwad.components.core.t.b.Ri
            return r0
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r2, org.json.JSONObject r3, com.kwad.sdk.core.report.j r4) {
            r1 = this;
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r3 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.a r3 = com.kwad.sdk.components.c.f(r3)
            com.kwad.sdk.components.DevelopMangerComponents r3 = (com.kwad.sdk.components.DevelopMangerComponents) r3
            if (r3 == 0) goto L1e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "processAdImpress notImpression: "
            r3.<init>(r0)
            r0 = 0
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "AdEventHelper"
            com.kwad.sdk.core.e.c.d(r0, r3)
        L1e:
            r3 = 0
            if (r4 == 0) goto L24
            r4.a(r2, r3, r3, r3)
        L24:
            com.kwad.sdk.core.report.a.b(r2, r3, r4)
            com.kwad.components.core.t.b$1 r3 = new com.kwad.components.core.t.b$1
            r3.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r3)
            com.kwad.components.core.c.f r3 = com.kwad.components.core.c.f.mu()
            r3.J(r2)
            return
    }
}
