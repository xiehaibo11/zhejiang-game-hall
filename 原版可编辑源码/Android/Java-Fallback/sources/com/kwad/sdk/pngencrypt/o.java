package com.kwad.sdk.pngencrypt;

public final class o implements java.io.Closeable {
    protected com.kwad.sdk.pngencrypt.ErrorBehaviour aDC;
    public final com.kwad.sdk.pngencrypt.k aEC;
    public final boolean aEY;
    protected final com.kwad.sdk.pngencrypt.c aEZ;
    protected final com.kwad.sdk.pngencrypt.a aFa;
    protected final com.kwad.sdk.pngencrypt.chunk.w aFb;
    protected int aFc;
    private com.kwad.sdk.pngencrypt.i<? extends java.lang.Object> aFd;

    public o(java.io.InputStream r4, boolean r5) {
            r3 = this;
            r3.<init>()
            r5 = -1
            r3.aFc = r5
            com.kwad.sdk.pngencrypt.ErrorBehaviour r0 = com.kwad.sdk.pngencrypt.ErrorBehaviour.STRICT
            r3.aDC = r0
            com.kwad.sdk.pngencrypt.a r0 = new com.kwad.sdk.pngencrypt.a
            r0.<init>(r4)
            r3.aFa = r0
            r4 = 1
            r0.bt(r4)
            com.kwad.sdk.pngencrypt.c r0 = GW()
            r3.aEZ = r0
            com.kwad.sdk.pngencrypt.a r1 = r3.aFa     // Catch: java.lang.RuntimeException -> L6a
            r2 = 36
            int r0 = r1.b(r0, r2)     // Catch: java.lang.RuntimeException -> L6a
            if (r0 == r2) goto L2f
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException     // Catch: java.lang.RuntimeException -> L6a
            java.lang.String r1 = "Could not read first 36 bytes (PNG signature+IHDR chunk)"
            r0.<init>(r1)     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.core.e.c.printStackTrace(r0)     // Catch: java.lang.RuntimeException -> L6a
        L2f:
            com.kwad.sdk.pngencrypt.c r0 = r3.aEZ     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.pngencrypt.k r0 = r0.Gw()     // Catch: java.lang.RuntimeException -> L6a
            r3.aEC = r0     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.pngencrypt.c r0 = r3.aEZ     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.pngencrypt.e r0 = r0.Gx()     // Catch: java.lang.RuntimeException -> L6a
            if (r0 == 0) goto L40
            goto L41
        L40:
            r4 = 0
        L41:
            r3.aEY = r4     // Catch: java.lang.RuntimeException -> L6a
            r0 = 5024024(0x4ca918, double:2.4821977E-317)
            r3.aq(r0)     // Catch: java.lang.RuntimeException -> L6a
            r0 = 901001001(0x35b42f29, double:4.451536415E-315)
            r3.ao(r0)     // Catch: java.lang.RuntimeException -> L6a
            r0 = 2024024(0x1ee258, double:1.0000007E-317)
            r3.ap(r0)     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.pngencrypt.chunk.w r4 = new com.kwad.sdk.pngencrypt.chunk.w     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.pngencrypt.c r0 = r3.aEZ     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.pngencrypt.chunk.e r0 = r0.aDI     // Catch: java.lang.RuntimeException -> L6a
            r4.<init>(r0)     // Catch: java.lang.RuntimeException -> L6a
            r3.aFb = r4     // Catch: java.lang.RuntimeException -> L6a
            com.kwad.sdk.pngencrypt.i r4 = com.kwad.sdk.pngencrypt.m.GP()     // Catch: java.lang.RuntimeException -> L6a
            r3.a(r4)     // Catch: java.lang.RuntimeException -> L6a
            r3.aFc = r5     // Catch: java.lang.RuntimeException -> L6a
            return
        L6a:
            r4 = move-exception
            com.kwad.sdk.pngencrypt.a r5 = r3.aFa
            r5.close()
            com.kwad.sdk.pngencrypt.c r5 = r3.aEZ
            r5.close()
            throw r4
    }

    private void GS() {
            r2 = this;
        L0:
            com.kwad.sdk.pngencrypt.c r0 = r2.aEZ
            int r0 = r0.aDH
            r1 = 4
            if (r0 >= r1) goto L1c
            com.kwad.sdk.pngencrypt.a r0 = r2.aFa
            com.kwad.sdk.pngencrypt.c r1 = r2.aEZ
            int r0 = r0.a(r1)
            if (r0 > 0) goto L0
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r1 = "Premature ending reading first chunks"
            r0.<init>(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            goto L0
        L1c:
            return
    }

    private void GV() {
            r2 = this;
            com.kwad.sdk.pngencrypt.c r0 = r2.aEZ
            r1 = 0
            r0.bv(r1)
            return
    }

    private static com.kwad.sdk.pngencrypt.c GW() {
            com.kwad.sdk.pngencrypt.c r0 = new com.kwad.sdk.pngencrypt.c
            r1 = 0
            r0.<init>(r1)
            return r0
    }

    private void a(com.kwad.sdk.pngencrypt.i<? extends java.lang.Object> r1) {
            r0 = this;
            r0.aFd = r1
            return
    }

    private void ao(long r3) {
            r2 = this;
            com.kwad.sdk.pngencrypt.c r3 = r2.aEZ
            r0 = 901001001(0x35b42f29, double:4.451536415E-315)
            r3.ao(r0)
            return
    }

    private void ap(long r3) {
            r2 = this;
            com.kwad.sdk.pngencrypt.c r3 = r2.aEZ
            r0 = 2024024(0x1ee258, double:1.0000007E-317)
            r3.ap(r0)
            return
    }

    private void aq(long r3) {
            r2 = this;
            com.kwad.sdk.pngencrypt.c r3 = r2.aEZ
            r0 = 5024024(0x4ca918, double:2.4821977E-317)
            r3.aq(r0)
            return
    }

    public final com.kwad.sdk.pngencrypt.chunk.w GT() {
            r1 = this;
            com.kwad.sdk.pngencrypt.c r0 = r1.aEZ
            boolean r0 = r0.Gu()
            if (r0 == 0) goto Lb
            r1.GS()
        Lb:
            com.kwad.sdk.pngencrypt.chunk.w r0 = r1.aFb
            return r0
    }

    public final void GU() {
            r1 = this;
            r1.GV()
            com.kwad.sdk.pngencrypt.c r0 = r1.aEZ
            boolean r0 = r0.Gu()
            if (r0 == 0) goto Le
            r1.GS()
        Le:
            r1.end()
            return
    }

    @Override
    public final void close() {
            r1 = this;
            com.kwad.sdk.pngencrypt.c r0 = r1.aEZ
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.pngencrypt.a r0 = r1.aFa
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return
    }

    public final void end() {
            r2 = this;
            com.kwad.sdk.pngencrypt.c r0 = r2.aEZ     // Catch: java.lang.Throwable -> L3e
            boolean r0 = r0.Gu()     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto Lb
            r2.GS()     // Catch: java.lang.Throwable -> L3e
        Lb:
            com.kwad.sdk.pngencrypt.c r0 = r2.aEZ     // Catch: java.lang.Throwable -> L3e
            com.kwad.sdk.pngencrypt.j r0 = r0.Gv()     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto L28
            com.kwad.sdk.pngencrypt.c r0 = r2.aEZ     // Catch: java.lang.Throwable -> L3e
            com.kwad.sdk.pngencrypt.j r0 = r0.Gv()     // Catch: java.lang.Throwable -> L3e
            boolean r0 = r0.isDone()     // Catch: java.lang.Throwable -> L3e
            if (r0 != 0) goto L28
            com.kwad.sdk.pngencrypt.c r0 = r2.aEZ     // Catch: java.lang.Throwable -> L3e
            com.kwad.sdk.pngencrypt.j r0 = r0.Gv()     // Catch: java.lang.Throwable -> L3e
            r0.GC()     // Catch: java.lang.Throwable -> L3e
        L28:
            com.kwad.sdk.pngencrypt.c r0 = r2.aEZ     // Catch: java.lang.Throwable -> L3e
            boolean r0 = r0.isDone()     // Catch: java.lang.Throwable -> L3e
            if (r0 != 0) goto L3a
            com.kwad.sdk.pngencrypt.a r0 = r2.aFa     // Catch: java.lang.Throwable -> L3e
            com.kwad.sdk.pngencrypt.c r1 = r2.aEZ     // Catch: java.lang.Throwable -> L3e
            int r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L3e
            if (r0 > 0) goto L28
        L3a:
            r2.close()
            return
        L3e:
            r0 = move-exception
            r2.close()
            throw r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.kwad.sdk.pngencrypt.k r1 = r2.aEC
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = " interlaced="
            r0.append(r1)
            boolean r1 = r2.aEY
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
