package com.tkay.expressad.exoplayer.e;

public final class c implements com.tkay.expressad.exoplayer.e.h {
    private static final java.lang.reflect.Constructor<? extends com.tkay.expressad.exoplayer.e.e> a = null;
    private int b;
    private int c;

    static {
            java.lang.String r0 = "com.tkay.expressad.exoplayer.ext.flac.FlacExtractor"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            java.lang.Class<com.tkay.expressad.exoplayer.e.e> r1 = com.tkay.expressad.exoplayer.e.e.class
            java.lang.Class r0 = r0.asSubclass(r1)     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            r1 = 0
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            goto L1e
        L14:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating FLAC extension"
            r1.<init>(r2, r0)
            throw r1
        L1d:
            r0 = 0
        L1e:
            com.tkay.expressad.exoplayer.e.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private synchronized com.tkay.expressad.exoplayer.e.c a(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.b = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized com.tkay.expressad.exoplayer.e.c b(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.c = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public final synchronized com.tkay.expressad.exoplayer.e.e[] a() {
            r6 = this;
            monitor-enter(r6)
            java.lang.reflect.Constructor<? extends com.tkay.expressad.exoplayer.e.e> r0 = com.tkay.expressad.exoplayer.e.c.a     // Catch: java.lang.Throwable -> L3b
            r1 = 2
            if (r0 != 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 3
        L9:
            com.tkay.expressad.exoplayer.e.e[] r0 = new com.tkay.expressad.exoplayer.e.e[r0]     // Catch: java.lang.Throwable -> L3b
            com.tkay.expressad.exoplayer.e.a.e r2 = new com.tkay.expressad.exoplayer.e.a.e     // Catch: java.lang.Throwable -> L3b
            int r3 = r6.c     // Catch: java.lang.Throwable -> L3b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3b
            r3 = 0
            r0[r3] = r2     // Catch: java.lang.Throwable -> L3b
            r2 = 1
            com.tkay.expressad.exoplayer.e.a.g r4 = new com.tkay.expressad.exoplayer.e.a.g     // Catch: java.lang.Throwable -> L3b
            int r5 = r6.b     // Catch: java.lang.Throwable -> L3b
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L3b
            r0[r2] = r4     // Catch: java.lang.Throwable -> L3b
            java.lang.reflect.Constructor<? extends com.tkay.expressad.exoplayer.e.e> r2 = com.tkay.expressad.exoplayer.e.c.a     // Catch: java.lang.Throwable -> L3b
            if (r2 == 0) goto L39
            java.lang.reflect.Constructor<? extends com.tkay.expressad.exoplayer.e.e> r2 = com.tkay.expressad.exoplayer.e.c.a     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L3b
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L3b
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L3b
            com.tkay.expressad.exoplayer.e.e r2 = (com.tkay.expressad.exoplayer.e.e) r2     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L3b
            r0[r1] = r2     // Catch: java.lang.Exception -> L30 java.lang.Throwable -> L3b
            goto L39
        L30:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "Unexpected error creating FLAC extractor"
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L3b
            throw r1     // Catch: java.lang.Throwable -> L3b
        L39:
            monitor-exit(r6)
            return r0
        L3b:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }
}
