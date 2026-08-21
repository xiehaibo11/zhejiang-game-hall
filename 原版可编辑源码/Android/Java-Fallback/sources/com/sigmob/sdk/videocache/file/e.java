package com.sigmob.sdk.videocache.file;

public abstract class e implements com.sigmob.sdk.videocache.file.a {
    private final java.util.concurrent.ExecutorService a;

    private class a implements java.util.concurrent.Callable<java.lang.Void> {
        final com.sigmob.sdk.videocache.file.e a;
        private final java.io.File b;

        public a(com.sigmob.sdk.videocache.file.e r1, java.io.File r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        public java.lang.Void a() throws java.lang.Exception {
                r2 = this;
                com.sigmob.sdk.videocache.file.e r0 = r2.a
                java.io.File r1 = r2.b
                com.sigmob.sdk.videocache.file.e.a(r0, r1)
                r0 = 0
                return r0
        }

        @Override
        public java.lang.Void call() throws java.lang.Exception {
                r1 = this;
                java.lang.Void r0 = r1.a()
                return r0
        }
    }

    public e() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.a = r0
            return
    }

    static void a(com.sigmob.sdk.videocache.file.e r0, java.io.File r1) throws java.io.IOException {
            r0.b(r1)
            return
    }

    private void a(java.util.List<java.io.File> r8) {
            r7 = this;
            long r0 = r7.b(r8)
            int r2 = r8.size()
            java.util.Iterator r8 = r8.iterator()
        Lc:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto L5f
            java.lang.Object r3 = r8.next()
            java.io.File r3 = (java.io.File) r3
            boolean r4 = r7.a(r3, r0, r2)
            if (r4 != 0) goto Lc
            long r4 = r3.length()
            boolean r6 = r3.delete()
            if (r6 == 0) goto L45
            int r2 = r2 + (-1)
            long r0 = r0 - r4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Cache file "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = " is deleted because it exceeds cache limit"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.i(r3)
            goto Lc
        L45:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Error deleting file "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = " for trimming cache"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            goto Lc
        L5f:
            return
    }

    private long b(java.util.List<java.io.File> r5) {
            r4 = this;
            java.util.Iterator r5 = r5.iterator()
            r0 = 0
        L6:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L18
            java.lang.Object r2 = r5.next()
            java.io.File r2 = (java.io.File) r2
            long r2 = r2.length()
            long r0 = r0 + r2
            goto L6
        L18:
            return r0
    }

    private void b(java.io.File r1) throws java.io.IOException {
            r0 = this;
            com.sigmob.sdk.videocache.file.d.c(r1)
            java.io.File r1 = r1.getParentFile()
            java.util.List r1 = com.sigmob.sdk.videocache.file.d.b(r1)
            r0.a(r1)
            return
    }

    @Override
    public void a(java.io.File r3) throws java.io.IOException {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = r2.a
            com.sigmob.sdk.videocache.file.e$a r1 = new com.sigmob.sdk.videocache.file.e$a
            r1.<init>(r2, r3)
            r0.submit(r1)
            return
    }

    protected abstract boolean a(java.io.File r1, long r2, int r4);
}
