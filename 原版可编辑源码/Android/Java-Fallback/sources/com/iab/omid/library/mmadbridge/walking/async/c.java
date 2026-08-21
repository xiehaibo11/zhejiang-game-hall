package com.iab.omid.library.mmadbridge.walking.async;

public class c implements com.iab.omid.library.mmadbridge.walking.async.b.a {
    private final java.util.concurrent.BlockingQueue<java.lang.Runnable> a;
    private final java.util.concurrent.ThreadPoolExecutor b;
    private final java.util.ArrayDeque<com.iab.omid.library.mmadbridge.walking.async.b> c;
    private com.iab.omid.library.mmadbridge.walking.async.b d;

    public c() {
            r8 = this;
            r8.<init>()
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r8.c = r0
            r0 = 0
            r8.d = r0
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            r8.a = r7
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            r2 = 1
            r3 = 1
            r4 = 1
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            r8.b = r0
            return
    }

    private void a() {
            r2 = this;
            java.util.ArrayDeque<com.iab.omid.library.mmadbridge.walking.async.b> r0 = r2.c
            java.lang.Object r0 = r0.poll()
            com.iab.omid.library.mmadbridge.walking.async.b r0 = (com.iab.omid.library.mmadbridge.walking.async.b) r0
            r2.d = r0
            if (r0 == 0) goto L11
            java.util.concurrent.ThreadPoolExecutor r1 = r2.b
            r0.a(r1)
        L11:
            return
    }

    @Override
    public void a(com.iab.omid.library.mmadbridge.walking.async.b r1) {
            r0 = this;
            r1 = 0
            r0.d = r1
            r0.a()
            return
    }

    public void b(com.iab.omid.library.mmadbridge.walking.async.b r2) {
            r1 = this;
            r2.a(r1)
            java.util.ArrayDeque<com.iab.omid.library.mmadbridge.walking.async.b> r0 = r1.c
            r0.add(r2)
            com.iab.omid.library.mmadbridge.walking.async.b r2 = r1.d
            if (r2 != 0) goto Lf
            r1.a()
        Lf:
            return
    }
}
