package com.kwad.sdk.core.webview.b.b;

import com.kwad.framework.filedownloader.m;
import com.kwad.framework.filedownloader.r;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.m.l;

public final class a {

    public interface a {
        void c(com.kwad.sdk.h.a.b bVar);

        void d(com.kwad.sdk.h.a.b bVar);

        void e(com.kwad.sdk.h.a.b bVar);
    }

    public static void a(final com.kwad.sdk.h.a.b bVar, final a aVar) {
        c.d("HybridDownloader", "reportHybrid: download+++url " + bVar.packageUrl);
        aVar.c(bVar);
        bVar.an(System.currentTimeMillis());
        com.kwad.sdk.core.webview.b.c.b.a(bVar, 1);
        r.ao(l.KT());
        r.tW();
        r.aX(bVar.packageUrl).e(bVar).aU(bVar.aCd).aU(true).a(new m() {
            @Override
            public final void a(com.kwad.framework.filedownloader.a aVar2, Throwable th) {
                super.a(aVar2, th);
                com.kwad.sdk.core.webview.b.c.b.a(bVar, 0, 1, th.getMessage());
                aVar.e((com.kwad.sdk.h.a.b) aVar2.getTag());
            }

            @Override
            public final void c(com.kwad.framework.filedownloader.a aVar2) {
                super.c(aVar2);
                if (aVar2.sX() == -3) {
                    aVar.d(bVar);
                    return;
                }
                aVar.e(bVar);
                com.kwad.sdk.core.webview.b.c.b.a(bVar, 0, 1, "task.getStatus()=" + ((int) aVar2.sX()));
            }
        }).start();
    }
}
