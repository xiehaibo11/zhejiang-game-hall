package com.bytedance.pangle.a;

public final class a {
    final java.util.concurrent.CountDownLatch a;
    java.lang.Throwable b;


    public interface a {
        void a();
    }

    private a(com.bytedance.pangle.a.a.a[] r5) {
            r4 = this;
            r4.<init>()
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
            int r1 = r5.length
            r0.<init>(r1)
            r4.a = r0
            int r0 = r5.length
            r1 = 0
        Ld:
            if (r1 >= r0) goto L1c
            r2 = r5[r1]
            com.bytedance.pangle.a.a$1 r3 = new com.bytedance.pangle.a.a$1
            r3.<init>(r4, r2)
            com.bytedance.pangle.d.e.a(r3)
            int r1 = r1 + 1
            goto Ld
        L1c:
            return
    }

    public static void a(com.bytedance.pangle.a.a.a... r1) {
            com.bytedance.pangle.a.a r0 = new com.bytedance.pangle.a.a
            r0.<init>(r1)
            java.util.concurrent.CountDownLatch r1 = r0.a     // Catch: java.lang.InterruptedException -> L10
            r1.await()     // Catch: java.lang.InterruptedException -> L10
            java.lang.Throwable r1 = r0.b
            if (r1 != 0) goto Lf
            return
        Lf:
            throw r1
        L10:
            r1 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r1)
            throw r0
    }
}
