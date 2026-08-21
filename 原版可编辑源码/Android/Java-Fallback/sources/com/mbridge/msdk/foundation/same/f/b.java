package com.mbridge.msdk.foundation.same.f;

public final class b {
    public static java.util.concurrent.ThreadPoolExecutor a;
    private static java.util.concurrent.ThreadPoolExecutor b;
    private static java.util.concurrent.ThreadPoolExecutor c;
    private static java.util.concurrent.ThreadPoolExecutor d;
    private static android.os.Handler e;
    private static java.util.concurrent.ThreadPoolExecutor f;
    private static java.util.concurrent.ThreadPoolExecutor g;







    private static class a extends android.os.Handler {
        public a() {
                r1 = this;
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r1.<init>(r0)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r1) {
                r0 = this;
                super.handleMessage(r1)
                return
        }
    }

    static {
            return
    }

    public static java.util.concurrent.ThreadPoolExecutor a() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a
            if (r0 != 0) goto L24
            com.mbridge.msdk.foundation.same.f.b$1 r8 = new com.mbridge.msdk.foundation.same.f.b$1
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
            com.mbridge.msdk.foundation.same.f.b.a = r0
        L24:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a
            return r0
    }

    public static java.util.concurrent.ThreadPoolExecutor b() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.b
            if (r0 != 0) goto L24
            com.mbridge.msdk.foundation.same.f.b$2 r8 = new com.mbridge.msdk.foundation.same.f.b$2
            r8.<init>()
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r2 = 5
            r3 = 10
            r4 = 5
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 60
            r7.<init>(r1)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            com.mbridge.msdk.foundation.same.f.b.b = r0
        L24:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.b
            return r0
    }

    public static java.util.concurrent.ThreadPoolExecutor c() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.c
            if (r0 != 0) goto L22
            com.mbridge.msdk.foundation.same.f.b$3 r8 = new com.mbridge.msdk.foundation.same.f.b$3
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
            com.mbridge.msdk.foundation.same.f.b.c = r0
        L22:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.c
            return r0
    }

    public static java.util.concurrent.ThreadPoolExecutor d() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.d
            if (r0 != 0) goto L22
            com.mbridge.msdk.foundation.same.f.b$4 r8 = new com.mbridge.msdk.foundation.same.f.b$4
            r8.<init>()
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r2 = 1
            r3 = 3
            r4 = 0
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 3
            r7.<init>(r1)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            com.mbridge.msdk.foundation.same.f.b.d = r0
        L22:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.d
            return r0
    }

    public static java.util.concurrent.ThreadPoolExecutor e() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.f
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.same.f.b$5 r8 = new com.mbridge.msdk.foundation.same.f.b$5
            r8.<init>()
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            int r0 = r0 * 2
            int r3 = r0 + 1
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r4 = 0
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 30
            r7.<init>(r1)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r1 = r0
            r2 = r3
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            com.mbridge.msdk.foundation.same.f.b.f = r0
        L2e:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.f
            return r0
    }

    public static java.util.concurrent.ThreadPoolExecutor f() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.g
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.same.f.b$6 r8 = new com.mbridge.msdk.foundation.same.f.b$6
            r8.<init>()
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            int r0 = r0 * 2
            int r3 = r0 + 1
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r4 = 0
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 30
            r7.<init>(r1)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r9 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r9.<init>()
            r1 = r0
            r2 = r3
            r1.<init>(r2, r3, r4, r6, r7, r8, r9)
            com.mbridge.msdk.foundation.same.f.b.g = r0
        L2e:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.g
            return r0
    }

    public static android.os.Handler g() {
            android.os.Handler r0 = com.mbridge.msdk.foundation.same.f.b.e
            if (r0 != 0) goto Lb
            com.mbridge.msdk.foundation.same.f.b$a r0 = new com.mbridge.msdk.foundation.same.f.b$a
            r0.<init>()
            com.mbridge.msdk.foundation.same.f.b.e = r0
        Lb:
            android.os.Handler r0 = com.mbridge.msdk.foundation.same.f.b.e
            return r0
    }
}
