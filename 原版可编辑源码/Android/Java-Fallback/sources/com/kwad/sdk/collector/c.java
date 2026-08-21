package com.kwad.sdk.collector;

public final class c {




    public interface a {
        void b(com.kwad.sdk.collector.AppStatusRules r1);

        void k(int r1, java.lang.String r2);
    }

    public static void a(android.content.Context r1, com.kwad.sdk.collector.c.a r2) {
            if (r1 != 0) goto L3
            return
        L3:
            com.kwad.sdk.collector.c$1 r0 = new com.kwad.sdk.collector.c$1
            r0.<init>(r1, r2)
            com.kwad.sdk.collector.d.a(r1, r0)
            return
    }

    public static void b(android.content.Context r1, com.kwad.sdk.collector.c.a r2) {
            com.kwad.sdk.collector.c$2 r0 = new com.kwad.sdk.collector.c$2
            r0.<init>(r1)
            com.kwad.sdk.collector.c$3 r1 = new com.kwad.sdk.collector.c$3
            r1.<init>(r2)
            r0.request(r1)
            return
    }
}
