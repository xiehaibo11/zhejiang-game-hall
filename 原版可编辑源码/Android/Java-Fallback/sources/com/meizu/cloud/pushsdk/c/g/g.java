package com.meizu.cloud.pushsdk.c.g;

public final class g {
    private static final java.util.logging.Logger a = null;



    static {
            java.lang.Class<com.meizu.cloud.pushsdk.c.g.g> r0 = com.meizu.cloud.pushsdk.c.g.g.class
            java.lang.String r0 = r0.getName()
            java.util.logging.Logger r0 = java.util.logging.Logger.getLogger(r0)
            com.meizu.cloud.pushsdk.c.g.g.a = r0
            return
    }

    private g() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.meizu.cloud.pushsdk.c.g.c a(com.meizu.cloud.pushsdk.c.g.l r1) {
            if (r1 == 0) goto L8
            com.meizu.cloud.pushsdk.c.g.h r0 = new com.meizu.cloud.pushsdk.c.g.h
            r0.<init>(r1)
            return r0
        L8:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sink == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.meizu.cloud.pushsdk.c.g.d a(com.meizu.cloud.pushsdk.c.g.m r1) {
            if (r1 == 0) goto L8
            com.meizu.cloud.pushsdk.c.g.i r0 = new com.meizu.cloud.pushsdk.c.g.i
            r0.<init>(r1)
            return r0
        L8:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.meizu.cloud.pushsdk.c.g.l a(java.io.OutputStream r1) {
            com.meizu.cloud.pushsdk.c.g.n r0 = new com.meizu.cloud.pushsdk.c.g.n
            r0.<init>()
            com.meizu.cloud.pushsdk.c.g.l r1 = a(r1, r0)
            return r1
    }

    private static com.meizu.cloud.pushsdk.c.g.l a(java.io.OutputStream r1, com.meizu.cloud.pushsdk.c.g.n r2) {
            if (r1 == 0) goto L12
            if (r2 == 0) goto La
            com.meizu.cloud.pushsdk.c.g.g$1 r0 = new com.meizu.cloud.pushsdk.c.g.g$1
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

    public static com.meizu.cloud.pushsdk.c.g.m a(java.io.File r1) {
            if (r1 == 0) goto Lc
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r1)
            com.meizu.cloud.pushsdk.c.g.m r1 = a(r0)
            return r1
        Lc:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "file == null"
            r1.<init>(r0)
            throw r1
    }

    public static com.meizu.cloud.pushsdk.c.g.m a(java.io.InputStream r1) {
            com.meizu.cloud.pushsdk.c.g.n r0 = new com.meizu.cloud.pushsdk.c.g.n
            r0.<init>()
            com.meizu.cloud.pushsdk.c.g.m r1 = a(r1, r0)
            return r1
    }

    private static com.meizu.cloud.pushsdk.c.g.m a(java.io.InputStream r1, com.meizu.cloud.pushsdk.c.g.n r2) {
            if (r1 == 0) goto L12
            if (r2 == 0) goto La
            com.meizu.cloud.pushsdk.c.g.g$2 r0 = new com.meizu.cloud.pushsdk.c.g.g$2
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
}
