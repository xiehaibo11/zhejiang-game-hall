package com.kwad.components.core.n;

public class h {
    private static volatile com.kwad.components.core.n.h Pk;
    private final java.util.List<com.kwad.components.core.n.i> mListeners;






    public h() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.mListeners = r0
            return
    }

    static java.util.List a(com.kwad.components.core.n.h r0) {
            java.util.List<com.kwad.components.core.n.i> r0 = r0.mListeners
            return r0
    }

    private void c(com.kwad.sdk.g.a<com.kwad.components.core.n.i> r2) {
            r1 = this;
            com.kwad.components.core.n.h$5 r0 = new com.kwad.components.core.n.h$5
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
            return
    }

    public static com.kwad.components.core.n.h py() {
            com.kwad.components.core.n.h r0 = com.kwad.components.core.n.h.Pk
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.n.h> r0 = com.kwad.components.core.n.h.class
            monitor-enter(r0)
            com.kwad.components.core.n.h r1 = com.kwad.components.core.n.h.Pk     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.n.h r1 = new com.kwad.components.core.n.h     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.n.h.Pk = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.n.h r0 = com.kwad.components.core.n.h.Pk
            return r0
    }

    public final void a(com.kwad.components.core.n.c r2, android.os.Bundle r3) {
            r1 = this;
            com.kwad.components.core.n.h$1 r0 = new com.kwad.components.core.n.h$1
            r0.<init>(r1, r2, r3)
            r1.c(r0)
            return
    }

    public final void a(com.kwad.components.core.n.i r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.n.i> r0 = r1.mListeners
            r0.add(r2)
            return
    }

    public final void e(com.kwad.components.core.n.c r2) {
            r1 = this;
            com.kwad.components.core.n.h$2 r0 = new com.kwad.components.core.n.h$2
            r0.<init>(r1, r2)
            r1.c(r0)
            return
    }

    public final void f(com.kwad.components.core.n.c r2) {
            r1 = this;
            com.kwad.components.core.n.h$3 r0 = new com.kwad.components.core.n.h$3
            r0.<init>(r1, r2)
            r1.c(r0)
            return
    }

    public final void g(com.kwad.components.core.n.c r2) {
            r1 = this;
            com.kwad.components.core.n.h$4 r0 = new com.kwad.components.core.n.h$4
            r0.<init>(r1, r2)
            r1.c(r0)
            return
    }
}
