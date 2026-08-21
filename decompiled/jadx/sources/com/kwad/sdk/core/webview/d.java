package com.kwad.sdk.core.webview;

import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.webview.a.c;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private long ayq;
    private boolean ayr;

    public static void d(c.a aVar) {
        if (aVar != null) {
            com.kwad.sdk.core.report.a.e(aVar.getAdTemplate(), aVar.getClientParams());
        }
    }

    public final void a(c.a aVar) {
        if (aVar != null) {
            com.kwad.sdk.core.report.a.b(aVar.getAdTemplate(), aVar.getClientParams());
        }
        if (aVar != null) {
            this.ayq = System.currentTimeMillis();
        }
    }

    public final void b(c.a aVar) {
        if (aVar != null) {
            z.b clientParams = aVar.getClientParams();
            if (clientParams == null) {
                clientParams = new z.b();
            }
            clientParams.Kh = System.currentTimeMillis() - this.ayq;
            com.kwad.sdk.core.report.a.d(aVar.getAdTemplate(), clientParams);
        }
    }

    public final void c(c.a aVar) {
        if (aVar == null || this.ayr) {
            return;
        }
        this.ayr = true;
        if (this.ayq > 0) {
            if (aVar.getClientParams() == null) {
                aVar.b(new z.b());
            }
            aVar.getClientParams().atn = System.currentTimeMillis() - this.ayq;
            this.ayq = -1L;
        }
        com.kwad.sdk.core.report.a.c(aVar.getAdTemplate(), aVar.getClientParams());
    }
}
