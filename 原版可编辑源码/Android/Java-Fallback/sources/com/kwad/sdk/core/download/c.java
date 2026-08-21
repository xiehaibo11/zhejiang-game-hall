package com.kwad.sdk.core.download;

public final class c {
    private static final java.util.Map<java.lang.String, java.lang.Integer> anF = null;
    private static final java.util.Map<java.lang.String, java.lang.String> anI = null;
    private final java.util.WeakHashMap<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> anD;
    private final java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> anE;
    private final java.util.HashMap<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> anG;
    private final java.util.Map<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> anH;
    private final com.kwad.sdk.b.a anJ;
    private volatile boolean mHasInit;












    static final class a {
        static final com.kwad.sdk.core.download.c anR = null;

        static {
                com.kwad.sdk.core.download.c r0 = new com.kwad.sdk.core.download.c
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.core.download.c.a.anR = r0
                return
        }
    }

    static {
            com.kwad.sdk.utils.LruHashMap r0 = new com.kwad.sdk.utils.LruHashMap
            r1 = 10
            r0.<init>(r1)
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            com.kwad.sdk.core.download.c.anF = r0
            com.kwad.sdk.utils.LruHashMap r0 = new com.kwad.sdk.utils.LruHashMap
            r0.<init>(r1)
            com.kwad.sdk.core.download.c.anI = r0
            return
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r1.anD = r0
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r1.anE = r0
            r0 = 0
            r1.mHasInit = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.anG = r0
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r1.anH = r0
            com.kwad.sdk.core.download.c$3 r0 = new com.kwad.sdk.core.download.c$3
            r0.<init>(r1)
            r1.anJ = r0
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.download.c Aw() {
            com.kwad.sdk.core.download.c r0 = com.kwad.sdk.core.download.c.a.anR
            return r0
    }

    static java.util.Map Ax() {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.kwad.sdk.core.download.c.anI
            return r0
    }

    static void a(com.kwad.sdk.core.download.c r0, java.lang.String r1) {
            r0.cP(r1)
            return
    }

    private void a(java.lang.String r5, com.kwad.sdk.g.a<com.kwad.sdk.core.download.d> r6) {
            r4 = this;
            java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> r0 = r4.anE
            java.util.Set r0 = r0.keySet()
            java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> r1 = r4.anE
            monitor-enter(r1)
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L30
        Ld:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L2e
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L30
            com.kwad.sdk.core.download.d r2 = (com.kwad.sdk.core.download.d) r2     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto Ld
            java.lang.String r3 = r2.nx()     // Catch: java.lang.Throwable -> L30
            boolean r3 = android.text.TextUtils.equals(r3, r5)     // Catch: java.lang.Throwable -> L30
            if (r3 == 0) goto Ld
            r6.accept(r2)     // Catch: java.lang.Exception -> L29 java.lang.Throwable -> L30
            goto Ld
        L29:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)     // Catch: java.lang.Throwable -> L30
            goto Ld
        L2e:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L30
            throw r5
    }

    public static int cI(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L15
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.core.download.c.anF
            java.lang.Object r1 = r0.get(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            if (r1 == 0) goto L15
            int r1 = r1.intValue()
            return r1
        L15:
            r1 = 0
            return r1
    }

    private void cP(java.lang.String r7) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> r1 = r6.anE
            monitor-enter(r1)
            java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> r2 = r6.anE     // Catch: java.lang.Throwable -> L81
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L81
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L81
        L19:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L81
            if (r3 == 0) goto L3d
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L81
            com.kwad.sdk.core.download.d r3 = (com.kwad.sdk.core.download.d) r3     // Catch: java.lang.Throwable -> L81
            if (r3 == 0) goto L19
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L81
            if (r4 != 0) goto L19
            java.lang.String r4 = r3.ny()     // Catch: java.lang.Throwable -> L81
            boolean r4 = android.text.TextUtils.equals(r7, r4)     // Catch: java.lang.Throwable -> L81
            if (r4 == 0) goto L19
            r4 = 0
            r5 = 0
            r3.a(r4, r5, r0)     // Catch: java.lang.Throwable -> L81
            goto L19
        L3d:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L81
            com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
            com.kwad.sdk.d r0 = r0.wR()
            if (r0 == 0) goto L4b
            r0.bQ(r7)
        L4b:
            java.util.Map<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r0 = r6.anH
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r1 = r6.anH     // Catch: java.lang.Throwable -> L7e
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L7e
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L7e
        L58:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L7e
            if (r2 == 0) goto L7c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L7e
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L7e
            if (r2 == 0) goto L58
            java.lang.Object r2 = r2.getKey()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L7e
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L7e
            if (r3 != 0) goto L58
            boolean r2 = android.text.TextUtils.equals(r7, r2)     // Catch: java.lang.Throwable -> L7e
            if (r2 == 0) goto L58
            r1.remove()     // Catch: java.lang.Throwable -> L7e
            goto L58
        L7c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7e
            return
        L7e:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7e
            throw r7
        L81:
            r7 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L81
            throw r7
    }

    private void f(java.lang.String r5, com.kwad.sdk.core.download.f r6) {
            r4 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r0 = r4.anH
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4d
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            if (r1 == 0) goto La
            java.lang.Object r1 = r1.getValue()
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            if (r1 == 0) goto La
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r1)
            com.kwad.sdk.core.a r3 = com.kwad.sdk.core.a.yT()
            r3.c(r5, r1)
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            if (r3 != 0) goto La
            java.lang.String r2 = r2.downloadId
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto La
            boolean r2 = r1.mDownloadFinishReported
            if (r2 != 0) goto La
            boolean r2 = r6.Az()
            r3 = 1
            if (r2 == 0) goto L4a
            com.kwad.sdk.core.download.a.c(r3, r1)
            r6.Ay()
        L4a:
            r1.mDownloadFinishReported = r3
            goto La
        L4d:
            return
    }

    public final void G(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.kwad.sdk.core.download.c.anF
            r2 = 8
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r4, r2)
            com.kwad.sdk.core.download.c$6 r1 = new com.kwad.sdk.core.download.c$6
            r1.<init>(r3, r4, r5, r0)
            r3.a(r4, r1)
            r3.f(r4, r0)
            return
    }

    public final void a(com.kwad.sdk.core.download.d r2) {
            r1 = this;
            java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.anE
            r0.remove(r2)
            return
    }

    public final void a(com.kwad.sdk.core.download.d r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            r1 = this;
            java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.anE
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r9, int r10, int r11, int r12) {
            r8 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.core.download.c.anF
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.put(r9, r1)
            com.kwad.sdk.core.download.c$5 r0 = new com.kwad.sdk.core.download.c$5
            r2 = r0
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            r8.a(r9, r0)
            return
    }

    public final synchronized void aV(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mHasInit     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L26
            if (r2 != 0) goto L8
            goto L26
        L8:
            com.kwad.sdk.b.b r2 = com.kwad.sdk.b.b.yB()     // Catch: java.lang.Throwable -> L20
            com.kwad.sdk.b.a r0 = r1.anJ     // Catch: java.lang.Throwable -> L20
            r2.b(r0)     // Catch: java.lang.Throwable -> L20
            java.util.Map<com.kwad.sdk.core.download.d, com.kwad.sdk.core.response.model.AdTemplate> r2 = r1.anE     // Catch: java.lang.Throwable -> L20
            r2.clear()     // Catch: java.lang.Throwable -> L20
            java.util.Map<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r2 = r1.anH     // Catch: java.lang.Throwable -> L20
            r2.clear()     // Catch: java.lang.Throwable -> L20
            r2 = 0
            r1.mHasInit = r2     // Catch: java.lang.Throwable -> L20
            monitor-exit(r1)
            return
        L20:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r1)
            return
        L26:
            monitor-exit(r1)
            return
        L28:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void aq(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aq(r0)     // Catch: java.lang.Throwable -> L14
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L13
            java.util.Map<java.lang.String, com.kwad.sdk.core.response.model.AdTemplate> r1 = r2.anH     // Catch: java.lang.Throwable -> L14
            r1.put(r0, r3)     // Catch: java.lang.Throwable -> L14
        L13:
            return
        L14:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
            return
    }

    public final void b(java.lang.String r8, int r9, java.lang.String r10) {
            r7 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r9 = com.kwad.sdk.core.download.c.anF
            r0 = 7
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r9.put(r8, r0)
            com.kwad.sdk.core.download.f r6 = new com.kwad.sdk.core.download.f
            r6.<init>()
            com.kwad.sdk.core.download.c$7 r9 = new com.kwad.sdk.core.download.c$7
            r4 = 0
            r1 = r9
            r2 = r7
            r3 = r8
            r5 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            r7.a(r8, r9)
            return
    }

    public final void cJ(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.core.download.c.anF
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.put(r3, r1)
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            com.kwad.sdk.core.download.c$4 r1 = new com.kwad.sdk.core.download.c$4
            r1.<init>(r2, r3, r0)
            r2.a(r3, r1)
            return
    }

    public final void cK(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.kwad.sdk.core.download.c.anF
            r2 = 4
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r4, r2)
            com.kwad.sdk.core.download.c$8 r1 = new com.kwad.sdk.core.download.c$8
            r1.<init>(r3, r4, r0)
            r3.a(r4, r1)
            return
    }

    public final void cL(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.kwad.sdk.core.download.c.anF
            r2 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r4, r2)
            com.kwad.sdk.core.download.c$9 r1 = new com.kwad.sdk.core.download.c$9
            r1.<init>(r3, r4, r0)
            r3.a(r4, r1)
            return
    }

    public final void cM(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.kwad.sdk.core.download.c.anF
            r2 = 5
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r4, r2)
            com.kwad.sdk.core.download.c$10 r1 = new com.kwad.sdk.core.download.c$10
            r1.<init>(r3, r4, r0)
            r3.a(r4, r1)
            return
    }

    public final void cN(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.kwad.sdk.core.download.c.anF
            r2 = 9
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r4, r2)
            com.kwad.sdk.core.download.c$11 r1 = new com.kwad.sdk.core.download.c$11
            r1.<init>(r3, r4, r0)
            r3.a(r4, r1)
            return
    }

    public final void cO(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.download.f r0 = new com.kwad.sdk.core.download.f
            r0.<init>()
            com.kwad.sdk.core.download.c$2 r1 = new com.kwad.sdk.core.download.c$2
            r1.<init>(r2, r3, r0)
            r2.a(r3, r1)
            return
    }

    public final synchronized void init(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mHasInit     // Catch: java.lang.Throwable -> L24
            if (r0 != 0) goto L22
            if (r2 != 0) goto L8
            goto L22
        L8:
            com.kwad.sdk.c r2 = com.kwad.sdk.c.wP()     // Catch: java.lang.Throwable -> L24
            com.kwad.sdk.core.download.c$1 r0 = new com.kwad.sdk.core.download.c$1     // Catch: java.lang.Throwable -> L24
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L24
            r2.a(r0)     // Catch: java.lang.Throwable -> L24
            com.kwad.sdk.b.b r2 = com.kwad.sdk.b.b.yB()     // Catch: java.lang.Throwable -> L24
            com.kwad.sdk.b.a r0 = r1.anJ     // Catch: java.lang.Throwable -> L24
            r2.a(r0)     // Catch: java.lang.Throwable -> L24
            r2 = 1
            r1.mHasInit = r2     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)
            return
        L22:
            monitor-exit(r1)
            return
        L24:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
