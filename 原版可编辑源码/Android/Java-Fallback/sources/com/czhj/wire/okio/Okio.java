package com.czhj.wire.okio;

public final class Okio {
    static final java.util.logging.Logger a = null;




    static {
            java.lang.Class<com.czhj.wire.okio.Okio> r0 = com.czhj.wire.okio.Okio.class
            java.lang.String r0 = r0.getName()
            java.util.logging.Logger r0 = java.util.logging.Logger.getLogger(r0)
            com.czhj.wire.okio.Okio.a = r0
            return
    }

    private Okio() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.czhj.wire.okio.AsyncTimeout a(java.net.Socket r1) {
            com.czhj.wire.okio.Okio$3 r0 = new com.czhj.wire.okio.Okio$3
            r0.<init>(r1)
            return r0
    }

    private static com.czhj.wire.okio.Sink a(java.io.OutputStream r1, com.czhj.wire.okio.Timeout r2) {
            if (r1 == 0) goto L12
            if (r2 == 0) goto La
            com.czhj.wire.okio.Okio$1 r0 = new com.czhj.wire.okio.Okio$1
            r0.<init>(r2, r1)
            return r0
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "timeout == null"
            r1.<init>(r2)
            throw r1
        L12:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "out == null"
            r1.<init>(r2)
            throw r1
    }

    private static com.czhj.wire.okio.Source a(java.io.InputStream r1, com.czhj.wire.okio.Timeout r2) {
            if (r1 == 0) goto L12
            if (r2 == 0) goto La
            com.czhj.wire.okio.Okio$2 r0 = new com.czhj.wire.okio.Okio$2
            r0.<init>(r2, r1)
            return r0
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "timeout == null"
            r1.<init>(r2)
            throw r1
        L12:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "in == null"
            r1.<init>(r2)
            throw r1
    }

    static boolean a(java.lang.AssertionError r1) {
            java.lang.Throwable r0 = r1.getCause()
            if (r0 == 0) goto L1a
            java.lang.String r0 = r1.getMessage()
            if (r0 == 0) goto L1a
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "getsockname failed"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L1a
            r1 = 1
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
    }

    public static com.czhj.wire.okio.Sink appendingSink(java.io.File r2) throws java.io.FileNotFoundException {
            if (r2 == 0) goto Ld
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r1 = 1
            r0.<init>(r2, r1)
            com.czhj.wire.okio.Sink r2 = sink(r0)
            return r2
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "file == null"
            r2.<init>(r0)
            throw r2
    }

    public static com.czhj.wire.okio.BufferedSink buffer(com.czhj.wire.okio.Sink r1) {
            if (r1 == 0) goto L8
            com.czhj.wire.okio.RealBufferedSink r0 = new com.czhj.wire.okio.RealBufferedSink
            r0.<init>(r1)
            return r0
        L8:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sink == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.czhj.wire.okio.BufferedSource buffer(com.czhj.wire.okio.Source r1) {
            if (r1 == 0) goto L8
            com.czhj.wire.okio.RealBufferedSource r0 = new com.czhj.wire.okio.RealBufferedSource
            r0.<init>(r1)
            return r0
        L8:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.czhj.wire.okio.Sink sink(java.io.File r1) throws java.io.FileNotFoundException {
            if (r1 == 0) goto Lc
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r1)
            com.czhj.wire.okio.Sink r1 = sink(r0)
            return r1
        Lc:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "file == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.czhj.wire.okio.Sink sink(java.io.OutputStream r1) {
            com.czhj.wire.okio.Timeout r0 = new com.czhj.wire.okio.Timeout
            r0.<init>()
            com.czhj.wire.okio.Sink r1 = a(r1, r0)
            return r1
    }

    public static com.czhj.wire.okio.Sink sink(java.net.Socket r1) throws java.io.IOException {
            if (r1 == 0) goto L13
            com.czhj.wire.okio.AsyncTimeout r0 = a(r1)
            java.io.OutputStream r1 = r1.getOutputStream()
            com.czhj.wire.okio.Sink r1 = a(r1, r0)
            com.czhj.wire.okio.Sink r1 = r0.sink(r1)
            return r1
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "socket == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.czhj.wire.okio.Sink sink(java.nio.file.Path r2, java.nio.file.OpenOption... r3) throws java.io.IOException {
            if (r2 == 0) goto L24
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L19
            r1 = 26
            if (r0 < r1) goto L11
            java.io.OutputStream r2 = java.nio.file.Files.newOutputStream(r2, r3)     // Catch: java.lang.Throwable -> L19
            com.czhj.wire.okio.Sink r2 = sink(r2)     // Catch: java.lang.Throwable -> L19
            return r2
        L11:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "no support os version"
            r2.<init>(r3)
            throw r2
        L19:
            r2 = move-exception
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
        L24:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "path == null"
            r2.<init>(r3)
            throw r2
    }

    public static com.czhj.wire.okio.Source source(java.io.File r1) throws java.io.FileNotFoundException {
            if (r1 == 0) goto Lc
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r1)
            com.czhj.wire.okio.Source r1 = source(r0)
            return r1
        Lc:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "file == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.czhj.wire.okio.Source source(java.io.InputStream r1) {
            com.czhj.wire.okio.Timeout r0 = new com.czhj.wire.okio.Timeout
            r0.<init>()
            com.czhj.wire.okio.Source r1 = a(r1, r0)
            return r1
    }

    public static com.czhj.wire.okio.Source source(java.net.Socket r1) throws java.io.IOException {
            if (r1 == 0) goto L13
            com.czhj.wire.okio.AsyncTimeout r0 = a(r1)
            java.io.InputStream r1 = r1.getInputStream()
            com.czhj.wire.okio.Source r1 = a(r1, r0)
            com.czhj.wire.okio.Source r1 = r0.source(r1)
            return r1
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "socket == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.czhj.wire.okio.Source source(java.nio.file.Path r2, java.nio.file.OpenOption... r3) throws java.io.IOException {
            if (r2 == 0) goto L24
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L19
            r1 = 26
            if (r0 < r1) goto L11
            java.io.InputStream r2 = java.nio.file.Files.newInputStream(r2, r3)     // Catch: java.lang.Throwable -> L19
            com.czhj.wire.okio.Source r2 = source(r2)     // Catch: java.lang.Throwable -> L19
            return r2
        L11:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "no support os version"
            r2.<init>(r3)
            throw r2
        L19:
            r2 = move-exception
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
        L24:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "path == null"
            r2.<init>(r3)
            throw r2
    }
}
