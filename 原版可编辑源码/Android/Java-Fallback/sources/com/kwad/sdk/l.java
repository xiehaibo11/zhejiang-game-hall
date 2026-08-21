package com.kwad.sdk;

public final class l {
    private static int ahl;




    public static void S(long r2) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto Lc
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r2
            goto Le
        Lc:
            r0 = -1
        Le:
            int r2 = com.kwad.sdk.l.ahl
            int r2 = r2 + 1
            com.kwad.sdk.l.ahl = r2
            com.kwad.sdk.l$1 r2 = new com.kwad.sdk.l$1
            r2.<init>(r0)
            com.kwad.sdk.utils.g.execute(r2)
            return
    }

    public static void T(long r2) {
            r0 = 10000(0x2710, double:4.9407E-320)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L8
            r2 = -1
        L8:
            com.kwad.sdk.l$2 r0 = new com.kwad.sdk.l$2
            r0.<init>(r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public static void a(com.kwai.adclient.kscommerciallogger.model.d r1, java.lang.String r2) {
            com.kwad.sdk.l$3 r0 = new com.kwad.sdk.l$3
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    static int xS() {
            int r0 = com.kwad.sdk.l.ahl
            return r0
    }
}
