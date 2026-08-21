package com.kwad.sdk.pngencrypt;

public class a implements java.io.Closeable {
    static final boolean $assertionsDisabled = false;
    private int aDi;
    private boolean aDj;
    private long aDk;
    private byte[] buf;
    private boolean eof;
    private int offset;
    private java.io.InputStream stream;

    static {
            return
    }

    public a(java.io.InputStream r2) {
            r1 = this;
            r0 = 16384(0x4000, float:2.2959E-41)
            r1.<init>(r2, r0)
            return
    }

    private a(java.io.InputStream r3, int r4) {
            r2 = this;
            r2.<init>()
            r4 = 0
            r2.eof = r4
            r4 = 1
            r2.aDj = r4
            r0 = 0
            r2.aDk = r0
            r2.stream = r3
            r3 = 16384(0x4000, float:2.2959E-41)
            byte[] r3 = new byte[r3]
            r2.buf = r3
            return
    }

    private void Gl() {
            r5 = this;
            int r0 = r5.aDi
            if (r0 > 0) goto L39
            boolean r0 = r5.eof
            if (r0 == 0) goto L9
            goto L39
        L9:
            r0 = 0
            r5.offset = r0     // Catch: java.io.IOException -> L30
            java.io.InputStream r0 = r5.stream     // Catch: java.io.IOException -> L30
            byte[] r1 = r5.buf     // Catch: java.io.IOException -> L30
            int r0 = r0.read(r1)     // Catch: java.io.IOException -> L30
            r5.aDi = r0     // Catch: java.io.IOException -> L30
            if (r0 != 0) goto L23
            com.kwad.sdk.pngencrypt.PngjException r0 = new com.kwad.sdk.pngencrypt.PngjException     // Catch: java.io.IOException -> L30
            java.lang.String r1 = "This should not happen: stream.read(buf) returned 0"
            r0.<init>(r1)     // Catch: java.io.IOException -> L30
            com.kwad.sdk.core.e.c.printStackTrace(r0)     // Catch: java.io.IOException -> L30
            goto L39
        L23:
            if (r0 >= 0) goto L29
            r5.close()     // Catch: java.io.IOException -> L30
            goto L39
        L29:
            long r1 = r5.aDk     // Catch: java.io.IOException -> L30
            long r3 = (long) r0     // Catch: java.io.IOException -> L30
            long r1 = r1 + r3
            r5.aDk = r1     // Catch: java.io.IOException -> L30
            return
        L30:
            r0 = move-exception
            com.kwad.sdk.pngencrypt.PngjException r1 = new com.kwad.sdk.pngencrypt.PngjException
            r1.<init>(r0)
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L39:
            return
    }

    private int a(com.kwad.sdk.pngencrypt.f r4, int r5) {
            r3 = this;
            r3.Gl()
            if (r5 <= 0) goto La
            int r0 = r3.aDi
            if (r5 >= r0) goto La
            goto Lc
        La:
            int r5 = r3.aDi
        Lc:
            r0 = -1
            if (r5 <= 0) goto L37
            byte[] r1 = r3.buf
            int r2 = r3.offset
            int r5 = r4.b(r1, r2, r5)
            if (r5 <= 0) goto L23
            int r1 = r3.offset
            int r1 = r1 + r5
            r3.offset = r1
            int r1 = r3.aDi
            int r1 = r1 - r5
            r3.aDi = r1
        L23:
            if (r5 <= 0) goto L26
            return r5
        L26:
            boolean r4 = r4.isDone()
            if (r4 != 0) goto L36
            com.kwad.sdk.pngencrypt.PngjException r4 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r5 = "This should not happen!"
            r4.<init>(r5)
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L36:
            return r0
        L37:
            boolean r5 = r3.eof
            if (r5 != 0) goto L45
            com.kwad.sdk.pngencrypt.PngjException r5 = new com.kwad.sdk.pngencrypt.PngjException
            java.lang.String r1 = "This should not happen"
            r5.<init>(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r5)
        L45:
            boolean r4 = r4.isDone()
            if (r4 == 0) goto L4c
            return r0
        L4c:
            r4 = 0
            return r4
    }

    public final int a(com.kwad.sdk.pngencrypt.f r2) {
            r1 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            int r2 = r1.a(r2, r0)
            return r2
    }

    public final int b(com.kwad.sdk.pngencrypt.f r3, int r4) {
            r2 = this;
            r4 = 36
            r0 = r4
        L3:
            if (r0 <= 0) goto Le
            int r1 = r2.a(r3, r0)
            if (r1 > 0) goto Lc
            return r1
        Lc:
            int r0 = r0 - r1
            goto L3
        Le:
            return r4
    }

    public final void bt(boolean r1) {
            r0 = this;
            r0.aDj = r1
            return
    }

    @Override
    public void close() {
            r3 = this;
            r0 = 1
            r3.eof = r0
            r0 = 0
            r3.buf = r0
            r1 = 0
            r3.aDi = r1
            r3.offset = r1
            java.io.InputStream r1 = r3.stream
            if (r1 == 0) goto L16
            boolean r2 = r3.aDj
            if (r2 == 0) goto L16
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
        L16:
            r3.stream = r0
            return
    }
}
