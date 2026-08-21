package com.kwad.sdk.core.network.a;

public final class a {
    private static com.kwad.sdk.export.proxy.AdHttpProxy apM;

    public static class a {
        public java.lang.String msg;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static boolean Bl() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            if (r0 == 0) goto Lf
            boolean r0 = r0.xJ()
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public static boolean a(java.lang.String r4, java.io.OutputStream r5, com.kwad.sdk.core.network.a.a.a r6, int r7) {
            boolean r0 = Bl()
            com.kwad.sdk.export.proxy.AdHttpProxy r1 = com.kwad.sdk.core.network.a.a.apM
            java.lang.String r2 = "VideoCacheHelper"
            if (r1 != 0) goto L2a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "isAdCacheEnable:"
            r1.<init>(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r2, r1)
            if (r0 == 0) goto L22
            com.kwad.sdk.export.proxy.AdHttpProxy r0 = com.kwad.sdk.g.wX()
            goto L27
        L22:
            com.kwad.sdk.core.network.c.a r0 = new com.kwad.sdk.core.network.c.a
            r0.<init>()
        L27:
            r1 = r0
            com.kwad.sdk.core.network.a.a.apM = r1
        L2a:
            java.lang.Boolean r0 = com.kwad.framework.b.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L3e
            boolean r0 = r1 instanceof com.kwad.sdk.core.network.c.b
            if (r0 == 0) goto L39
            java.lang.String r0 = "okHttp"
            goto L3b
        L39:
            java.lang.String r0 = "Http"
        L3b:
            com.kwad.sdk.core.e.c.d(r2, r0)
        L3e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = "downloadUrlToStream success size:"
            r0.<init>(r3)     // Catch: java.lang.Exception -> L5c
            r0.append(r7)     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = " url:"
            r0.append(r3)     // Catch: java.lang.Exception -> L5c
            r0.append(r4)     // Catch: java.lang.Exception -> L5c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L5c
            com.kwad.sdk.core.e.c.d(r2, r0)     // Catch: java.lang.Exception -> L5c
            r1.downloadUrlToStream(r4, r5, r7)     // Catch: java.lang.Exception -> L5c
            r4 = 1
            return r4
        L5c:
            r4 = move-exception
            java.lang.String r5 = android.util.Log.getStackTraceString(r4)
            com.kwad.sdk.core.e.c.d(r2, r5)
            java.lang.String r4 = r4.getMessage()
            r6.msg = r4
            r4 = 0
            return r4
    }
}
