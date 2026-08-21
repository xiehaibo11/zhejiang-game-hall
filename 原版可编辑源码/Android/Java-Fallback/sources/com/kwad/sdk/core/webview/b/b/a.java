package com.kwad.sdk.core.webview.b.b;

public final class a {


    public interface a {
        void c(com.kwad.sdk.h.a.b r1);

        void d(com.kwad.sdk.h.a.b r1);

        void e(com.kwad.sdk.h.a.b r1);
    }

    public static void a(com.kwad.sdk.h.a.b r3, com.kwad.sdk.core.webview.b.b.a.a r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "reportHybrid: download+++url "
            r0.<init>(r1)
            java.lang.String r1 = r3.packageUrl
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HybridDownloader"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r4.c(r3)
            long r0 = java.lang.System.currentTimeMillis()
            r3.an(r0)
            r0 = 1
            com.kwad.sdk.core.webview.b.c.b.a(r3, r0)
            android.app.Application r1 = com.kwad.sdk.m.l.KT()
            com.kwad.framework.filedownloader.r.ao(r1)
            com.kwad.framework.filedownloader.r.tW()
            java.lang.String r1 = r3.packageUrl
            com.kwad.framework.filedownloader.a r1 = com.kwad.framework.filedownloader.r.aX(r1)
            com.kwad.framework.filedownloader.a r1 = r1.e(r3)
            java.lang.String r2 = r3.aCd
            com.kwad.framework.filedownloader.a r1 = r1.aU(r2)
            com.kwad.framework.filedownloader.a r0 = r1.aU(r0)
            com.kwad.sdk.core.webview.b.b.a$1 r1 = new com.kwad.sdk.core.webview.b.b.a$1
            r1.<init>(r4, r3)
            com.kwad.framework.filedownloader.a r3 = r0.a(r1)
            r3.start()
            return
    }
}
