package com.kwad.sdk.core.videocache.c;

public final class a {
    private static com.kwad.sdk.core.videocache.f axa;

    public static com.kwad.sdk.core.videocache.f bj(android.content.Context r1) {
            com.kwad.sdk.core.videocache.f r0 = com.kwad.sdk.core.videocache.c.a.axa
            if (r0 != 0) goto Lb
            com.kwad.sdk.core.videocache.f r1 = bk(r1)
            com.kwad.sdk.core.videocache.c.a.axa = r1
            return r1
        Lb:
            return r0
    }

    private static com.kwad.sdk.core.videocache.f bk(android.content.Context r3) {
            com.kwad.sdk.core.videocache.f$a r0 = new com.kwad.sdk.core.videocache.f$a
            r0.<init>(r3)
            r1 = 104857600(0x6400000, double:5.1806538E-316)
            com.kwad.sdk.core.videocache.f$a r3 = r0.ah(r1)
            com.kwad.sdk.core.videocache.f r3 = r3.DE()
            return r3
    }
}
