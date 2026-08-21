package com.kwad.sdk.a.a;

public class b {
    private static volatile com.kwad.sdk.a.a.b ahw;
    private java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> ahu;
    private java.io.File ahv;
    private boolean mHasInit;




    public interface a {
        void gB();

        void ya();
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.util.Stack r0 = new java.util.Stack
            r0.<init>()
            r1.ahu = r0
            return
    }

    static java.io.File a(com.kwad.sdk.a.a.b r0) {
            java.io.File r0 = r0.xX()
            return r0
    }

    static java.util.Stack a(com.kwad.sdk.a.a.b r0, java.util.Stack r1) {
            r0.ahu = r1
            return r1
    }

    static void a(com.kwad.sdk.a.a.b r0, com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0.ae(r1)
            return
    }

    private synchronized void ad(com.kwad.sdk.core.response.model.AdTemplate r8) {
            r7 = this;
            monitor-enter(r7)
            r0 = 0
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r1 = r7.ahu     // Catch: java.lang.Throwable -> L68
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L68
        L8:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L68
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2     // Catch: java.lang.Throwable -> L68
            long r2 = com.kwad.sdk.core.response.b.d.cq(r2)     // Catch: java.lang.Throwable -> L68
            long r4 = com.kwad.sdk.core.response.b.d.cq(r8)     // Catch: java.lang.Throwable -> L68
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L8
            r1.remove()     // Catch: java.lang.Throwable -> L68
            r0 = 1
            goto L8
        L25:
            if (r0 != 0) goto L29
            monitor-exit(r7)
            return
        L29:
            r8 = 0
            java.io.ObjectOutputStream r0 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L47
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L47
            java.io.File r2 = r7.ahv     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L47
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L47
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L42 java.lang.Exception -> L47
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r8 = r7.ahu     // Catch: java.lang.Exception -> L40 java.lang.Throwable -> L63
            r0.writeObject(r8)     // Catch: java.lang.Exception -> L40 java.lang.Throwable -> L63
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L68
            monitor-exit(r7)
            return
        L40:
            r8 = move-exception
            goto L4b
        L42:
            r0 = move-exception
            r6 = r0
            r0 = r8
            r8 = r6
            goto L64
        L47:
            r0 = move-exception
            r6 = r0
            r0 = r8
            r8 = r6
        L4b:
            java.lang.String r1 = "InstallTipsDataManager"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63
            java.lang.String r3 = " removeApkDownloadedData e"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L63
            r2.append(r8)     // Catch: java.lang.Throwable -> L63
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L63
            com.kwad.sdk.core.e.c.d(r1, r8)     // Catch: java.lang.Throwable -> L63
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L68
            monitor-exit(r7)
            return
        L63:
            r8 = move-exception
        L64:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L68
            throw r8     // Catch: java.lang.Throwable -> L68
        L68:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    private synchronized void ae(com.kwad.sdk.core.response.model.AdTemplate r5) {
            r4 = this;
            monitor-enter(r4)
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r0 = r4.ahu     // Catch: java.lang.Throwable -> L37
            r0.add(r5)     // Catch: java.lang.Throwable -> L37
            r5 = 0
            java.io.ObjectOutputStream r0 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L26
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L26
            java.io.File r2 = r4.xX()     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L26
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L26
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L21 java.lang.Exception -> L26
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r5 = r4.ahu     // Catch: java.lang.Exception -> L1f java.lang.Throwable -> L32
            r0.writeObject(r5)     // Catch: java.lang.Exception -> L1f java.lang.Throwable -> L32
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r4)
            return
        L1f:
            r5 = move-exception
            goto L2a
        L21:
            r0 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
            goto L33
        L26:
            r0 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
        L2a:
            com.kwad.sdk.core.e.c.printStackTrace(r5)     // Catch: java.lang.Throwable -> L32
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r4)
            return
        L32:
            r5 = move-exception
        L33:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L37
            throw r5     // Catch: java.lang.Throwable -> L37
        L37:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private static java.io.File ah(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.download.a.B(r1)
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = com.kwad.sdk.utils.q.L(r0)
            if (r1 == 0) goto L14
            return r0
        L14:
            r1 = 0
            return r1
    }

    static java.io.File ai(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.io.File r0 = ah(r0)
            return r0
    }

    static java.util.Stack b(com.kwad.sdk.a.a.b r0) {
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r0 = r0.ahu
            return r0
    }

    static void b(com.kwad.sdk.a.a.b r0, com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0.ad(r1)
            return
    }

    private synchronized java.io.File xX() {
            r3 = this;
            monitor-enter(r3)
            java.io.File r0 = r3.ahv     // Catch: java.lang.Throwable -> L59
            if (r0 == 0) goto L9
            java.io.File r0 = r3.ahv     // Catch: java.lang.Throwable -> L59
            monitor-exit(r3)
            return r0
        L9:
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()     // Catch: java.lang.Throwable -> L59
            android.content.Context r0 = r0.getContext()     // Catch: java.lang.Throwable -> L59
            if (r0 != 0) goto L16
            r0 = 0
            monitor-exit(r3)
            return r0
        L16:
            java.lang.String r0 = com.kwad.sdk.utils.av.cN(r0)     // Catch: java.lang.Throwable -> L59
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L59
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L59
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L59
            if (r2 != 0) goto L28
            r1.mkdir()     // Catch: java.lang.Throwable -> L59
        L28:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L59
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L59
            r2.<init>()     // Catch: java.lang.Throwable -> L59
            r2.append(r0)     // Catch: java.lang.Throwable -> L59
            java.lang.String r0 = java.io.File.separator     // Catch: java.lang.Throwable -> L59
            r2.append(r0)     // Catch: java.lang.Throwable -> L59
            java.lang.String r0 = "uninstall_ad"
            r2.append(r0)     // Catch: java.lang.Throwable -> L59
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L59
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L59
            r3.ahv = r1     // Catch: java.lang.Throwable -> L59
            boolean r0 = r1.exists()     // Catch: java.lang.Throwable -> L59
            if (r0 != 0) goto L55
            java.io.File r0 = r3.ahv     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L59
            r0.createNewFile()     // Catch: java.lang.Exception -> L51 java.lang.Throwable -> L59
            goto L55
        L51:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L59
        L55:
            java.io.File r0 = r3.ahv     // Catch: java.lang.Throwable -> L59
            monitor-exit(r3)
            return r0
        L59:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public static com.kwad.sdk.a.a.b xY() {
            com.kwad.sdk.a.a.b r0 = com.kwad.sdk.a.a.b.ahw
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.a.a.b> r0 = com.kwad.sdk.a.a.b.class
            monitor-enter(r0)
            com.kwad.sdk.a.a.b r1 = com.kwad.sdk.a.a.b.ahw     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.a.a.b r1 = new com.kwad.sdk.a.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.a.a.b.ahw = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.a.a.b r0 = com.kwad.sdk.a.a.b.ahw
            return r0
    }

    public final synchronized void a(com.kwad.sdk.a.a.b.a r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mHasInit     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            r0 = 1
            r1.mHasInit = r0     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.a.a.b$1 r0 = new com.kwad.sdk.a.a.b$1     // Catch: java.lang.Throwable -> L14
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.utils.g.execute(r0)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r1)
            return
        L14:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void af(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.sdk.a.a.b$2 r0 = new com.kwad.sdk.a.a.b$2
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public final void ag(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.sdk.a.a.b$3 r0 = new com.kwad.sdk.a.a.b$3
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public final synchronized com.kwad.sdk.core.response.model.AdTemplate xZ() {
            r9 = this;
            monitor-enter(r9)
            r0 = 0
            java.util.Stack<com.kwad.sdk.core.response.model.AdTemplate> r1 = r9.ahu     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r1 = r1.clone()     // Catch: java.lang.Throwable -> L4d
            java.util.Stack r1 = (java.util.Stack) r1     // Catch: java.lang.Throwable -> L4d
        La:
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Throwable -> L4d
            if (r2 != 0) goto L4b
            java.lang.Object r2 = r1.pop()     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto La
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r2)     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r3.adBaseInfo     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r3.appPackageName     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.KsAdSDKImpl r4 = com.kwad.sdk.KsAdSDKImpl.get()     // Catch: java.lang.Throwable -> L4d
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Throwable -> L4d
            java.io.File r5 = ah(r2)     // Catch: java.lang.Throwable -> L4d
            if (r5 == 0) goto La
            boolean r6 = r5.exists()     // Catch: java.lang.Throwable -> L4d
            if (r6 == 0) goto La
            long r5 = r5.lastModified()     // Catch: java.lang.Throwable -> L4d
            r7 = 604800000(0x240c8400, double:2.988109026E-315)
            long r5 = r5 + r7
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4d
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto La
            boolean r3 = com.kwad.sdk.utils.ak.ak(r4, r3)     // Catch: java.lang.Throwable -> L4d
            if (r3 != 0) goto La
            r0 = r2
        L4b:
            monitor-exit(r9)
            return r0
        L4d:
            r0 = move-exception
            monitor-exit(r9)
            throw r0
    }
}
