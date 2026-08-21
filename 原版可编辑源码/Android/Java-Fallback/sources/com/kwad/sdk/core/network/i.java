package com.kwad.sdk.core.network;

public class i {
    private static volatile com.kwad.sdk.core.network.i apf;
    private java.util.List<com.kwad.sdk.core.network.i.a> ape;

    public interface a {
        void a(com.kwad.sdk.core.network.g r1, int r2);
    }

    private i() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.ape = r0
            return
    }

    public static com.kwad.sdk.core.network.i Bh() {
            com.kwad.sdk.core.network.i r0 = com.kwad.sdk.core.network.i.apf
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.network.i> r0 = com.kwad.sdk.core.network.i.class
            monitor-enter(r0)
            com.kwad.sdk.core.network.i r1 = com.kwad.sdk.core.network.i.apf     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.network.i r1 = new com.kwad.sdk.core.network.i     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.network.i.apf = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.network.i r0 = com.kwad.sdk.core.network.i.apf
            return r0
    }

    public final void a(com.kwad.sdk.core.network.i.a r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.core.network.i$a> r0 = r1.ape
            r0.add(r2)
            return
    }

    final void b(com.kwad.sdk.core.network.g r3, int r4) {
            r2 = this;
            java.util.List<com.kwad.sdk.core.network.i$a> r0 = r2.ape
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.network.i$a r1 = (com.kwad.sdk.core.network.i.a) r1
            r1.a(r3, r4)
            goto L6
        L16:
            return
    }
}
