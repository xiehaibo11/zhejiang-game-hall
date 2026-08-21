package com.kwad.sdk.core.a;

public final class a implements com.kwad.sdk.core.a.f {
    private static java.lang.String aof;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String AI() {
            java.lang.String r0 = com.kwad.sdk.core.a.a.aof
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.kwad.sdk.core.a.a.aof
            return r0
        Lb:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            if (r0 != 0) goto L1c
            java.lang.String r0 = ""
            return r0
        L1c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.getPackageName()
            r1.append(r2)
            java.lang.String r0 = com.kwad.sdk.utils.ay.cW(r0)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.kwad.sdk.core.a.a.aof = r0
            return r0
    }

    @Override
    public final void a(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, java.lang.String r3) {
            r0 = this;
            com.kwad.sdk.core.a.e.a(r1, r2, r3)
            return
    }

    @Override
    public final java.lang.String cQ(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "UTF-8"
            r1 = 0
            java.lang.String r1 = com.kwad.sdk.utils.p.db(r1)     // Catch: java.lang.Exception -> L25
            byte[] r2 = r5.getBytes()     // Catch: java.lang.Exception -> L25
            byte[] r2 = com.kwad.sdk.core.a.b.f(r2)     // Catch: java.lang.Exception -> L25
            byte[] r1 = r1.getBytes(r0)     // Catch: java.lang.Exception -> L25
            byte[] r1 = com.kwad.sdk.core.a.b.d(r1, r2)     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L25
            com.kwad.sdk.core.a.c$b r3 = com.kwad.sdk.core.a.c.AJ()     // Catch: java.lang.Exception -> L25
            byte[] r1 = r3.encode(r1)     // Catch: java.lang.Exception -> L25
            r2.<init>(r1, r0)     // Catch: java.lang.Exception -> L25
            return r2
        L25:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return r5
    }

    @Override
    public final void e(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = AI()
            java.lang.String r1 = "Ks-PkgId"
            r3.put(r1, r0)
            java.lang.String r0 = "Ks-Encoding"
            java.lang.String r1 = "2"
            r3.put(r0, r1)
            return
    }

    @Override
    public final java.lang.String getResponseData(java.lang.String r4) {
            r3 = this;
            r0 = 0
            java.lang.String r0 = com.kwad.sdk.utils.p.db(r0)     // Catch: java.lang.Exception -> L21
            com.kwad.sdk.core.a.c$a r1 = com.kwad.sdk.core.a.c.AL()     // Catch: java.lang.Exception -> L21
            byte[] r2 = r4.getBytes()     // Catch: java.lang.Exception -> L21
            byte[] r1 = r1.decode(r2)     // Catch: java.lang.Exception -> L21
            byte[] r0 = com.kwad.sdk.core.a.b.a(r0, r1)     // Catch: java.lang.Exception -> L21
            byte[] r0 = com.kwad.sdk.core.a.b.g(r0)     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = "UTF-8"
            r1.<init>(r0, r2)     // Catch: java.lang.Exception -> L21
            return r1
        L21:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return r4
    }
}
