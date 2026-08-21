package com.kwad.components.core.e.a;

public final class e {
    private final java.util.List<com.kwad.components.core.e.a.b> IV;
    private final java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> IW;
    private final java.util.concurrent.atomic.AtomicBoolean IX;
    private final java.util.Set<java.lang.String> IY;
    private final java.lang.String TAG;
    private final java.util.concurrent.atomic.AtomicBoolean ol;



    static class a {
        private static final com.kwad.components.core.e.a.e Jc = null;

        static {
                com.kwad.components.core.e.a.e r0 = new com.kwad.components.core.e.a.e
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.core.e.a.e.a.Jc = r0
                return
        }

        static com.kwad.components.core.e.a.e mR() {
                com.kwad.components.core.e.a.e r0 = com.kwad.components.core.e.a.e.a.Jc
                return r0
        }
    }

    private e() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "InstalledActivateManager"
            r1.TAG = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.IV = r0
            java.util.Stack r0 = new java.util.Stack
            r0.<init>()
            r1.IW = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            r1.ol = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            r1.IX = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.IY = r0
            return
    }

    e(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void M(com.kwad.sdk.core.response.model.AdTemplate r4) {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.IX
            boolean r0 = r0.get()
            java.lang.String r1 = "InstalledActivateManager"
            if (r0 != 0) goto L2b
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.ol
            boolean r0 = r0.get()
            if (r0 == 0) goto L13
            goto L2b
        L13:
            java.lang.String r0 = "showInstalledActivate"
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.IX
            r1 = 1
            r0.set(r1)
            com.kwad.components.core.e.a.e$1 r0 = new com.kwad.components.core.e.a.e$1
            r0.<init>(r3, r4)
            long r1 = com.kwad.sdk.core.response.b.b.bR(r4)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            return
        L2b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "mLoadDisable: "
            r0.<init>(r2)
            java.util.concurrent.atomic.AtomicBoolean r2 = r3.ol
            boolean r2 = r2.get()
            r0.append(r2)
            java.lang.String r2 = ", mLoadDisable: "
            r0.append(r2)
            java.util.concurrent.atomic.AtomicBoolean r2 = r3.IX
            boolean r2 = r2.get()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r0 = r3.IW
            r0.add(r4)
            return
    }

    private void N(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            com.kwad.components.core.e.a.e$2 r0 = new com.kwad.components.core.e.a.e$2
            r0.<init>(r1)
            boolean r2 = a(r2, r0)
            if (r2 != 0) goto Le
            r1.mO()
        Le:
            return
    }

    static java.util.concurrent.atomic.AtomicBoolean a(com.kwad.components.core.e.a.e r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.IX
            return r0
    }

    static void a(com.kwad.components.core.e.a.e r0, com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0.N(r1)
            return
    }

    private static boolean a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.e.a.b r3) {
            java.lang.String r0 = "InstalledActivateManager"
            java.lang.String r1 = "showToActivityWindow"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.e.a.h r0 = new com.kwad.components.core.e.a.h
            r0.<init>()
            boolean r2 = r0.b(r2, r3)
            return r2
    }

    static java.util.Set b(com.kwad.components.core.e.a.e r0) {
            java.util.Set<java.lang.String> r0 = r0.IY
            return r0
    }

    static void c(com.kwad.components.core.e.a.e r0) {
            r0.mO()
            return
    }

    public static com.kwad.components.core.e.a.e mN() {
            com.kwad.components.core.e.a.e r0 = com.kwad.components.core.e.a.e.a.mR()
            return r0
    }

    private synchronized void mO() {
            r1 = this;
            monitor-enter(r1)
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.IW     // Catch: java.lang.Throwable -> L18
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto Lb
            monitor-exit(r1)
            return
        Lb:
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.IW     // Catch: java.lang.Throwable -> L18
            java.lang.Object r0 = r0.pop()     // Catch: java.lang.Throwable -> L18
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0     // Catch: java.lang.Throwable -> L18
            r1.M(r0)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r1)
            return
        L18:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void L(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            monitor-enter(r2)
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)     // Catch: java.lang.Throwable -> L24
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aq(r0)     // Catch: java.lang.Throwable -> L24
            boolean r1 = com.kwad.sdk.core.response.b.b.bQ(r3)     // Catch: java.lang.Throwable -> L24
            if (r1 == 0) goto L22
            java.util.Set<java.lang.String> r1 = r2.IY     // Catch: java.lang.Throwable -> L24
            boolean r1 = r1.contains(r0)     // Catch: java.lang.Throwable -> L24
            if (r1 == 0) goto L18
            goto L22
        L18:
            java.util.Set<java.lang.String> r1 = r2.IY     // Catch: java.lang.Throwable -> L24
            r1.add(r0)     // Catch: java.lang.Throwable -> L24
            r2.M(r3)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r2)
            return
        L22:
            monitor-exit(r2)
            return
        L24:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(com.kwad.components.core.e.a.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.e.a.b> r0 = r1.IV
            r0.add(r2)
            return
    }

    public final void b(com.kwad.components.core.e.a.b r2) {
            r1 = this;
            java.util.List<com.kwad.components.core.e.a.b> r0 = r1.IV
            r0.remove(r2)
            return
    }

    public final void en() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.ol
            r1 = 0
            r0.set(r1)
            java.util.List<com.kwad.components.core.e.a.b> r0 = r2.IV
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.e.a.b r1 = (com.kwad.components.core.e.a.b) r1
            r1.fh()
            goto Lc
        L1c:
            return
    }

    public final void es() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.ol
            r1 = 1
            r0.set(r1)
            java.util.List<com.kwad.components.core.e.a.b> r0 = r2.IV
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.e.a.b r1 = (com.kwad.components.core.e.a.b) r1
            r1.mL()
            goto Lc
        L1c:
            return
    }

    public final boolean isShowing() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.ol
            boolean r0 = r0.get()
            return r0
    }
}
