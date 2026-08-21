package com.kwad.components.core.t;

public class a {
    private static volatile com.kwad.components.core.t.a Rg;
    private com.kwad.sdk.utils.h Rc;
    private java.util.List<java.lang.ref.WeakReference<com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener>> Rd;
    private boolean Re;
    private boolean Rf;


    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.Rd = r0
            r0 = 0
            r1.Re = r0
            r1.Rf = r0
            r1.init(r2)
            return
    }

    static java.util.List a(com.kwad.components.core.t.a r0) {
            java.util.List<java.lang.ref.WeakReference<com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener>> r0 = r0.Rd
            return r0
    }

    static boolean a(com.kwad.components.core.t.a r0, boolean r1) {
            r1 = 1
            r0.Rf = r1
            return r1
    }

    public static com.kwad.components.core.t.a al(android.content.Context r2) {
            com.kwad.components.core.t.a r0 = com.kwad.components.core.t.a.Rg
            if (r0 != 0) goto L1b
            java.lang.Class<com.kwad.components.core.t.a> r0 = com.kwad.components.core.t.a.class
            monitor-enter(r0)
            com.kwad.components.core.t.a r1 = com.kwad.components.core.t.a.Rg     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.kwad.components.core.t.a r1 = new com.kwad.components.core.t.a     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.kwad.components.core.t.a.Rg = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.kwad.components.core.t.a r2 = com.kwad.components.core.t.a.Rg
            return r2
    }

    private void init(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.Re = r0
            com.kwad.sdk.utils.h r0 = new com.kwad.sdk.utils.h
            r0.<init>(r2)
            r1.Rc = r0
            com.kwad.components.core.t.a$1 r2 = new com.kwad.components.core.t.a$1
            r2.<init>(r1)
            r0.c(r2)
            return
    }

    public final void a(com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r3) {
            r2 = this;
            java.util.List<java.lang.ref.WeakReference<com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener>> r0 = r2.Rd
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.add(r1)
            return
    }

    public final boolean aJ(boolean r3) {
            r2 = this;
            com.kwad.sdk.utils.h r0 = r2.Rc
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            if (r3 != 0) goto Ld
            boolean r3 = r2.Re
            if (r3 == 0) goto Ld
            return r1
        Ld:
            r3 = 1
            r2.Re = r3
            r2.Rf = r1
            com.kwad.sdk.utils.h r3 = r2.Rc
            boolean r3 = r3.HT()
            return r3
    }

    public final void b(com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener r3) {
            r2 = this;
            java.util.List<java.lang.ref.WeakReference<com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener>> r0 = r2.Rd
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r1.get()
            if (r1 != r3) goto L6
        L1a:
            r0.remove()
            goto L6
        L1e:
            return
    }

    public final boolean qh() {
            r1 = this;
            boolean r0 = r1.Rf
            return r0
    }

    public final boolean qi() {
            r1 = this;
            boolean r0 = r1.Re
            return r0
    }
}
