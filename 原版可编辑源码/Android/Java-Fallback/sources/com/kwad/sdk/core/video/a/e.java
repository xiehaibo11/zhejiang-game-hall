package com.kwad.sdk.core.video.a;

public final class e {
    private static boolean RT = false;
    private static final java.util.concurrent.atomic.AtomicBoolean Zs = null;
    private static java.util.concurrent.atomic.AtomicBoolean avS = null;
    private static int avT = -1;
    private static final java.util.concurrent.atomic.AtomicBoolean avU = null;
    private static int avV;

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.core.video.a.e.Zs = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            com.kwad.sdk.core.video.a.e.avU = r0
            return
    }

    public static int Ds() {
            int r0 = com.kwad.sdk.core.video.a.e.avV
            return r0
    }

    private static boolean Dt() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.core.video.a.e.avS
            if (r0 == 0) goto L9
            boolean r0 = r0.get()
            return r0
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 1
            r0.<init>(r1)
            com.kwad.sdk.core.video.a.e.avS = r0
            boolean r0 = r0.get()
            return r0
    }

    public static com.kwad.sdk.core.video.a.c a(android.content.Context r10, boolean r11, boolean r12, boolean r13) {
            java.lang.String r10 = "MediaPlayerImpl"
            r0 = 0
            r1 = 1
            boolean r2 = yG()     // Catch: java.lang.Throwable -> L34
            if (r2 == 0) goto L26
            if (r12 == 0) goto L26
            boolean r2 = Dt()     // Catch: java.lang.Throwable -> L34
            if (r2 == 0) goto L26
            java.lang.String r2 = "constructPlayer KwaiMediaPlayer"
            com.kwad.sdk.core.e.c.i(r10, r2)     // Catch: java.lang.Throwable -> L34
            com.kwad.sdk.core.video.a.d r2 = new com.kwad.sdk.core.video.a.d     // Catch: java.lang.Throwable -> L34
            r2.<init>()     // Catch: java.lang.Throwable -> L34
            r3 = 2
            com.kwad.sdk.core.video.a.e.avV = r3     // Catch: java.lang.Throwable -> L34
            r3 = r2
            com.kwad.sdk.core.video.a.d r3 = (com.kwad.sdk.core.video.a.d) r3     // Catch: java.lang.Throwable -> L34
            r3.bf(r11)     // Catch: java.lang.Throwable -> L34
            goto L32
        L26:
            java.lang.String r11 = "constructPlayer AndroidMediaPlayer"
            com.kwad.sdk.core.e.c.i(r10, r11)     // Catch: java.lang.Throwable -> L34
            com.kwad.sdk.core.video.a.b r2 = new com.kwad.sdk.core.video.a.b     // Catch: java.lang.Throwable -> L34
            r2.<init>()     // Catch: java.lang.Throwable -> L34
            com.kwad.sdk.core.video.a.e.avV = r1     // Catch: java.lang.Throwable -> L34
        L32:
            r7 = r0
            goto L4b
        L34:
            r11 = move-exception
            java.lang.String r2 = "constructPlayer exception, using AndroidMediaPlayer"
            com.kwad.sdk.core.e.c.e(r10, r2, r11)
            boolean r10 = com.kwad.sdk.core.video.a.e.RT
            if (r10 != 0) goto L43
            com.kwad.sdk.core.video.a.e.RT = r1
            com.kwad.sdk.service.c.gatherException(r11)
        L43:
            com.kwad.sdk.core.video.a.b r2 = new com.kwad.sdk.core.video.a.b
            r2.<init>()
            com.kwad.sdk.core.video.a.e.avV = r1
            r7 = r1
        L4b:
            java.lang.Class<com.kwad.sdk.service.a.e> r10 = com.kwad.sdk.service.a.e.class
            java.lang.Object r10 = com.kwad.sdk.service.ServiceProvider.get(r10)
            if (r10 == 0) goto L63
            java.lang.Class<com.kwad.sdk.service.a.e> r10 = com.kwad.sdk.service.a.e.class
            java.lang.Object r10 = com.kwad.sdk.service.ServiceProvider.get(r10)
            com.kwad.sdk.service.a.e r10 = (com.kwad.sdk.service.a.e) r10
            boolean r10 = r10.getIsExternal()
            if (r10 == 0) goto L63
            r4 = r1
            goto L64
        L63:
            r4 = r0
        L64:
            boolean r3 = yG()
            boolean r6 = Dt()
            int r9 = r2.getMediaPlayerType()
            r5 = r12
            r8 = r13
            int r10 = com.kwad.sdk.utils.am.a(r3, r4, r5, r6, r7, r8, r9)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r12 = "player v="
            r11.<init>(r12)
            java.lang.String r12 = java.lang.Integer.toBinaryString(r10)
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            com.kwad.sdk.core.e.c.cW(r11)
            int r11 = com.kwad.sdk.core.video.a.e.avT
            if (r11 == r10) goto L94
            com.kwad.sdk.core.video.a.e.avT = r10
            cy(r10)
        L94:
            return r2
    }

    private static void cy(int r3) {
            com.kwad.sdk.core.report.r r0 = new com.kwad.sdk.core.report.r
            r1 = 10212(0x27e4, double:5.0454E-320)
            r0.<init>(r1)
            r0.arX = r3
            com.kwad.sdk.core.report.i.a(r0)
            return
    }

    private static boolean yG() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.core.video.a.e.avU
            boolean r0 = r0.get()
            if (r0 != 0) goto L13
            java.lang.Boolean r0 = com.kwad.framework.a.a.HN
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }
}
