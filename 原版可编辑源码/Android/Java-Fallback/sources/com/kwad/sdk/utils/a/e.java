package com.kwad.sdk.utils.a;

public final class e {
    static boolean aGN;
    static java.util.concurrent.ExecutorService aLu;


    static {
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            com.kwad.sdk.utils.a.e.aLu = r0
            boolean r0 = KB()
            com.kwad.sdk.utils.a.e.aGN = r0
            return
    }

    private static boolean KB() {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.utils.a.e.aLu
            com.kwad.sdk.utils.a.d.setExecutor(r0)
            com.kwad.sdk.utils.a.e$1 r0 = new com.kwad.sdk.utils.a.e$1
            r0.<init>()
            com.kwad.sdk.utils.a.d.a(r0)
            r0 = 1
            com.kwad.sdk.utils.a.e.aGN = r0
            return r0
    }

    public static com.kwad.sdk.utils.a.c at(android.content.Context r1, java.lang.String r2) {
            boolean r0 = com.kwad.sdk.utils.a.e.aGN
            if (r0 != 0) goto L7
            KB()
        L7:
            java.lang.String r0 = "ks_union"
            java.lang.String r1 = com.kwad.sdk.utils.q.K(r1, r0)
            com.kwad.sdk.utils.a.c$a r0 = new com.kwad.sdk.utils.a.c$a
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.a.c r1 = r0.Kz()
            return r1
    }
}
