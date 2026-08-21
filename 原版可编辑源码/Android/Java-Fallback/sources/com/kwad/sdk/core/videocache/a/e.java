package com.kwad.sdk.core.videocache.a;

public abstract class e implements com.kwad.sdk.core.videocache.a.a {
    private final java.util.concurrent.ExecutorService awY;

    class a implements java.util.concurrent.Callable<java.lang.Void> {
        final com.kwad.sdk.core.videocache.a.e awZ;
        private final java.io.File file;

        public a(com.kwad.sdk.core.videocache.a.e r1, java.io.File r2) {
                r0 = this;
                r0.awZ = r1
                r0.<init>()
                r0.file = r2
                return
        }

        private java.lang.Void Ak() {
                r2 = this;
                com.kwad.sdk.core.videocache.a.e r0 = r2.awZ
                java.io.File r1 = r2.file
                com.kwad.sdk.core.videocache.a.e.a(r0, r1)
                r0 = 0
                return r0
        }

        @Override
        public final java.lang.Void call() {
                r1 = this;
                java.lang.Void r0 = r1.Ak()
                return r0
        }
    }

    public e() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CQ()
            r1.awY = r0
            return
    }

    static void a(com.kwad.sdk.core.videocache.a.e r0, java.io.File r1) {
            r0.z(r1)
            return
    }

    private void x(java.util.List<java.io.File> r7) {
            r6 = this;
            long r0 = y(r7)
            r7.size()
            java.util.Iterator r7 = r7.iterator()
        Lb:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L42
            java.lang.Object r2 = r7.next()
            java.io.File r2 = (java.io.File) r2
            boolean r3 = r6.aj(r0)
            if (r3 != 0) goto Lb
            long r3 = r2.length()
            boolean r5 = r2.delete()
            if (r5 == 0) goto L29
            long r0 = r0 - r3
            goto Lb
        L29:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Error deleting file "
            r3.<init>(r4)
            r3.append(r2)
            java.lang.String r2 = " for trimming cache"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "LruDiskUsage"
            com.kwad.sdk.core.e.c.e(r3, r2)
            goto Lb
        L42:
            return
    }

    private static long y(java.util.List<java.io.File> r4) {
            java.util.Iterator r4 = r4.iterator()
            r0 = 0
        L6:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L18
            java.lang.Object r2 = r4.next()
            java.io.File r2 = (java.io.File) r2
            long r2 = r2.length()
            long r0 = r0 + r2
            goto L6
        L18:
            return r0
    }

    private void z(java.io.File r1) {
            r0 = this;
            com.kwad.sdk.core.videocache.a.d.w(r1)
            java.io.File r1 = r1.getParentFile()
            java.util.List r1 = com.kwad.sdk.core.videocache.a.d.v(r1)
            r0.x(r1)
            return
    }

    protected abstract boolean aj(long r1);

    @Override
    public final void s(java.io.File r3) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = r2.awY
            com.kwad.sdk.core.videocache.a.e$a r1 = new com.kwad.sdk.core.videocache.a.e$a
            r1.<init>(r2, r3)
            r0.submit(r1)
            return
    }
}
