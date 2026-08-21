package com.meizu.cloud.pushsdk.c.g;

public class n {
    public static final com.meizu.cloud.pushsdk.c.g.n a = null;
    private boolean b;
    private long c;


    static {
            com.meizu.cloud.pushsdk.c.g.n$1 r0 = new com.meizu.cloud.pushsdk.c.g.n$1
            r0.<init>()
            com.meizu.cloud.pushsdk.c.g.n.a = r0
            return
    }

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public void a() {
            r4 = this;
            boolean r0 = java.lang.Thread.interrupted()
            if (r0 != 0) goto L21
            boolean r0 = r4.b
            if (r0 == 0) goto L20
            long r0 = r4.c
            long r2 = java.lang.System.nanoTime()
            long r0 = r0 - r2
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L18
            goto L20
        L18:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "deadline reached"
            r0.<init>(r1)
            throw r0
        L20:
            return
        L21:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "thread interrupted"
            r0.<init>(r1)
            throw r0
    }
}
