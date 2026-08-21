package com.meizu.cloud.pushsdk.c.e;

public final class c {
    public static <T> com.meizu.cloud.pushsdk.c.a.c<T> a(com.meizu.cloud.pushsdk.c.a.b r2) {
            int r0 = r2.g()
            if (r0 == 0) goto L21
            r1 = 1
            if (r0 == r1) goto L1c
            r1 = 2
            if (r0 == r1) goto L17
            com.meizu.cloud.pushsdk.c.a.c r2 = new com.meizu.cloud.pushsdk.c.a.c
            com.meizu.cloud.pushsdk.c.b.a r0 = new com.meizu.cloud.pushsdk.c.b.a
            r0.<init>()
            r2.<init>(r0)
            return r2
        L17:
            com.meizu.cloud.pushsdk.c.a.c r2 = d(r2)
            return r2
        L1c:
            com.meizu.cloud.pushsdk.c.a.c r2 = c(r2)
            return r2
        L21:
            com.meizu.cloud.pushsdk.c.a.c r2 = b(r2)
            return r2
    }

    private static <T> com.meizu.cloud.pushsdk.c.a.c<T> b(com.meizu.cloud.pushsdk.c.a.b r4) {
            r0 = 0
            com.meizu.cloud.pushsdk.c.c.k r0 = com.meizu.cloud.pushsdk.c.e.a.a(r4)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            if (r0 != 0) goto L19
            com.meizu.cloud.pushsdk.c.a.c r1 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = new com.meizu.cloud.pushsdk.c.b.a     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r2.<init>()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = com.meizu.cloud.pushsdk.c.h.b.a(r2)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L19:
            com.meizu.cloud.pushsdk.c.a.e r1 = r4.f()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.a.e r2 = com.meizu.cloud.pushsdk.c.a.e.d     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            if (r1 != r2) goto L2d
            com.meizu.cloud.pushsdk.c.a.c r1 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L2d:
            int r1 = r0.a()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r2 = 400(0x190, float:5.6E-43)
            if (r1 < r2) goto L4e
            com.meizu.cloud.pushsdk.c.a.c r1 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = new com.meizu.cloud.pushsdk.c.b.a     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            int r3 = r0.a()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = com.meizu.cloud.pushsdk.c.h.b.a(r2, r4, r3)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L4e:
            com.meizu.cloud.pushsdk.c.a.c r1 = r4.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L59:
            r1 = move-exception
            goto L7c
        L5b:
            r1 = move-exception
            com.meizu.cloud.pushsdk.c.a.c r2 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.b.a r1 = com.meizu.cloud.pushsdk.c.h.b.a(r1)     // Catch: java.lang.Throwable -> L59
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r2
        L69:
            r1 = move-exception
            com.meizu.cloud.pushsdk.c.a.c r2 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.b.a r3 = new com.meizu.cloud.pushsdk.c.b.a     // Catch: java.lang.Throwable -> L59
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.b.a r1 = com.meizu.cloud.pushsdk.c.h.b.a(r3)     // Catch: java.lang.Throwable -> L59
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r2
        L7c:
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            throw r1
    }

    private static <T> com.meizu.cloud.pushsdk.c.a.c<T> c(com.meizu.cloud.pushsdk.c.a.b r4) {
            com.meizu.cloud.pushsdk.c.c.k r0 = com.meizu.cloud.pushsdk.c.e.a.b(r4)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            if (r0 != 0) goto L15
            com.meizu.cloud.pushsdk.c.a.c r4 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            com.meizu.cloud.pushsdk.c.b.a r0 = new com.meizu.cloud.pushsdk.c.b.a     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            r0.<init>()     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            com.meizu.cloud.pushsdk.c.b.a r0 = com.meizu.cloud.pushsdk.c.h.b.a(r0)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            r4.<init>(r0)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            return r4
        L15:
            int r1 = r0.a()     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            r2 = 400(0x190, float:5.6E-43)
            if (r1 < r2) goto L33
            com.meizu.cloud.pushsdk.c.a.c r1 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            com.meizu.cloud.pushsdk.c.b.a r2 = new com.meizu.cloud.pushsdk.c.b.a     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            r2.<init>(r0)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            int r3 = r0.a()     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            com.meizu.cloud.pushsdk.c.b.a r4 = com.meizu.cloud.pushsdk.c.h.b.a(r2, r4, r3)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            r1.<init>(r4)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            r1.a(r0)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            return r1
        L33:
            com.meizu.cloud.pushsdk.c.a.c r4 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            java.lang.String r1 = "success"
            r4.<init>(r1)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            r4.a(r0)     // Catch: java.lang.Exception -> L3e com.meizu.cloud.pushsdk.c.b.a -> L49
            return r4
        L3e:
            r4 = move-exception
            com.meizu.cloud.pushsdk.c.a.c r0 = new com.meizu.cloud.pushsdk.c.a.c
            com.meizu.cloud.pushsdk.c.b.a r4 = com.meizu.cloud.pushsdk.c.h.b.a(r4)
            r0.<init>(r4)
            return r0
        L49:
            r4 = move-exception
            com.meizu.cloud.pushsdk.c.a.c r0 = new com.meizu.cloud.pushsdk.c.a.c
            com.meizu.cloud.pushsdk.c.b.a r1 = new com.meizu.cloud.pushsdk.c.b.a
            r1.<init>(r4)
            com.meizu.cloud.pushsdk.c.b.a r4 = com.meizu.cloud.pushsdk.c.h.b.a(r1)
            r0.<init>(r4)
            return r0
    }

    private static <T> com.meizu.cloud.pushsdk.c.a.c<T> d(com.meizu.cloud.pushsdk.c.a.b r4) {
            r0 = 0
            com.meizu.cloud.pushsdk.c.c.k r0 = com.meizu.cloud.pushsdk.c.e.a.c(r4)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            if (r0 != 0) goto L19
            com.meizu.cloud.pushsdk.c.a.c r1 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = new com.meizu.cloud.pushsdk.c.b.a     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r2.<init>()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = com.meizu.cloud.pushsdk.c.h.b.a(r2)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L19:
            com.meizu.cloud.pushsdk.c.a.e r1 = r4.f()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.a.e r2 = com.meizu.cloud.pushsdk.c.a.e.d     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            if (r1 != r2) goto L2d
            com.meizu.cloud.pushsdk.c.a.c r1 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L2d:
            int r1 = r0.a()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r2 = 400(0x190, float:5.6E-43)
            if (r1 < r2) goto L4e
            com.meizu.cloud.pushsdk.c.a.c r1 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = new com.meizu.cloud.pushsdk.c.b.a     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            int r3 = r0.a()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.b.a r2 = com.meizu.cloud.pushsdk.c.h.b.a(r2, r4, r3)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L4e:
            com.meizu.cloud.pushsdk.c.a.c r1 = r4.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            r1.a(r0)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5b com.meizu.cloud.pushsdk.c.b.a -> L69
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r1
        L59:
            r1 = move-exception
            goto L77
        L5b:
            r1 = move-exception
            com.meizu.cloud.pushsdk.c.a.c r2 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.b.a r1 = com.meizu.cloud.pushsdk.c.h.b.a(r1)     // Catch: java.lang.Throwable -> L59
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r2
        L69:
            r1 = move-exception
            com.meizu.cloud.pushsdk.c.a.c r2 = new com.meizu.cloud.pushsdk.c.a.c     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.b.a r1 = com.meizu.cloud.pushsdk.c.h.b.a(r1)     // Catch: java.lang.Throwable -> L59
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L59
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            return r2
        L77:
            com.meizu.cloud.pushsdk.c.h.a.a(r0, r4)
            throw r1
    }
}
