package com.kwad.sdk.core.webview;

public final class d {
    private long ayq;
    private boolean ayr;

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(com.kwad.sdk.core.webview.a.c.a r1) {
            if (r1 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.getAdTemplate()
            com.kwad.sdk.core.report.z$b r1 = r1.getClientParams()
            com.kwad.sdk.core.report.a.e(r0, r1)
        Ld:
            return
    }

    public final void a(com.kwad.sdk.core.webview.a.c.a r3) {
            r2 = this;
            if (r3 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.getAdTemplate()
            com.kwad.sdk.core.report.z$b r1 = r3.getClientParams()
            com.kwad.sdk.core.report.a.b(r0, r1)
        Ld:
            if (r3 == 0) goto L15
            long r0 = java.lang.System.currentTimeMillis()
            r2.ayq = r0
        L15:
            return
    }

    public final void b(com.kwad.sdk.core.webview.a.c.a r6) {
            r5 = this;
            if (r6 == 0) goto L1d
            com.kwad.sdk.core.report.z$b r0 = r6.getClientParams()
            if (r0 != 0) goto Ld
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
        Ld:
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.ayq
            long r1 = r1 - r3
            r0.Kh = r1
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.getAdTemplate()
            com.kwad.sdk.core.report.a.d(r6, r0)
        L1d:
            return
    }

    public final void c(com.kwad.sdk.core.webview.a.c.a r6) {
            r5 = this;
            if (r6 == 0) goto L3b
            boolean r0 = r5.ayr
            if (r0 != 0) goto L3b
            r0 = 1
            r5.ayr = r0
            long r0 = r5.ayq
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L30
            com.kwad.sdk.core.report.z$b r0 = r6.getClientParams()
            if (r0 != 0) goto L1f
            com.kwad.sdk.core.report.z$b r0 = new com.kwad.sdk.core.report.z$b
            r0.<init>()
            r6.b(r0)
        L1f:
            com.kwad.sdk.core.report.z$b r0 = r6.getClientParams()
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.ayq
            long r1 = r1 - r3
            r0.atn = r1
            r0 = -1
            r5.ayq = r0
        L30:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r6.getAdTemplate()
            com.kwad.sdk.core.report.z$b r6 = r6.getClientParams()
            com.kwad.sdk.core.report.a.c(r0, r6)
        L3b:
            return
    }
}
