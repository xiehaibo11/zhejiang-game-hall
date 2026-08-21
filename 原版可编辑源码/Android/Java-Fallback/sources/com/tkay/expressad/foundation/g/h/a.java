package com.tkay.expressad.foundation.g.h;

public final class a {
    public static java.util.concurrent.ThreadPoolExecutor a;
    private static java.util.concurrent.ThreadPoolExecutor b;
    private static java.util.concurrent.ThreadPoolExecutor c;




    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.concurrent.ThreadPoolExecutor a() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.tkay.expressad.foundation.g.h.a.a
            if (r0 != 0) goto L24
            com.tkay.expressad.foundation.g.h.a$1 r8 = new com.tkay.expressad.foundation.g.h.a$1
            r8.<init>()
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r2 = 5
            r3 = 10
            r4 = 15
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 60
            r7.<init>(r1)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            com.tkay.expressad.foundation.g.h.a.a = r0
        L24:
            java.util.concurrent.ThreadPoolExecutor r0 = com.tkay.expressad.foundation.g.h.a.a
            return r0
    }

    public static java.util.concurrent.ThreadPoolExecutor b() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.tkay.expressad.foundation.g.h.a.c
            if (r0 != 0) goto L22
            com.tkay.expressad.foundation.g.h.a$3 r8 = new com.tkay.expressad.foundation.g.h.a$3
            r8.<init>()
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r2 = 1
            r3 = 1
            r4 = 0
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r7.<init>(r1)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            com.tkay.expressad.foundation.g.h.a.c = r0
        L22:
            java.util.concurrent.ThreadPoolExecutor r0 = com.tkay.expressad.foundation.g.h.a.c
            return r0
    }

    private static java.util.concurrent.ThreadPoolExecutor c() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.tkay.expressad.foundation.g.h.a.b
            if (r0 != 0) goto L24
            com.tkay.expressad.foundation.g.h.a$2 r8 = new com.tkay.expressad.foundation.g.h.a$2
            r8.<init>()
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r2 = 5
            r3 = 200(0xc8, float:2.8E-43)
            r4 = 5
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 60
            r7.<init>(r1)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            com.tkay.expressad.foundation.g.h.a.b = r0
        L24:
            java.util.concurrent.ThreadPoolExecutor r0 = com.tkay.expressad.foundation.g.h.a.b
            return r0
    }
}
