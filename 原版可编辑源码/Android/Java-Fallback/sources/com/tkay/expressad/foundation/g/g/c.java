package com.tkay.expressad.foundation.g.g;

public final class c {
    java.util.concurrent.ThreadPoolExecutor a;
    java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> b;
    java.lang.ref.WeakReference<android.content.Context> c;


    public c(android.content.Context r10) {
            r9 = this;
            r9.<init>()
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r6 = new java.util.concurrent.LinkedBlockingDeque
            r6.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r7 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r7.<init>()
            r1 = 0
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = 15
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            r9.a = r8
            r0 = 1
            r8.allowCoreThreadTimeOut(r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r9.b = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r10)
            r9.c = r0
            return
    }

    private c(android.content.Context r10, byte r11) {
            r9 = this;
            r9.<init>()
            java.lang.Runtime r11 = java.lang.Runtime.getRuntime()
            int r11 = r11.availableProcessors()
            int r11 = r11 * 2
            r0 = 1
            int r3 = r11 + 1
            java.util.concurrent.ThreadPoolExecutor r11 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r7 = new java.util.concurrent.LinkedBlockingDeque
            r7.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r8 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r8.<init>()
            r4 = 1
            r1 = r11
            r2 = r3
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r9.a = r11
            r11.allowCoreThreadTimeOut(r0)
            java.util.HashMap r11 = new java.util.HashMap
            r11.<init>()
            r9.b = r11
            java.lang.ref.WeakReference r11 = new java.lang.ref.WeakReference
            r11.<init>(r10)
            r9.c = r11
            return
    }

    public c(android.content.Context r11, int r12) {
            r10 = this;
            r10.<init>()
            r8 = 1
            if (r12 != 0) goto L1f
            java.util.concurrent.ThreadPoolExecutor r9 = new java.util.concurrent.ThreadPoolExecutor
            r1 = 1
            r2 = 5
            r3 = 15
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r6 = new java.util.concurrent.LinkedBlockingDeque
            r6.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r7 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r7.<init>()
            r0 = r9
            r0.<init>(r1, r2, r3, r5, r6, r7)
            r10.a = r9
            goto L3a
        L1f:
            java.util.concurrent.ThreadPoolExecutor r9 = new java.util.concurrent.ThreadPoolExecutor
            int r0 = r12 * 2
            int r2 = r0 + 1
            r3 = 15
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r6 = new java.util.concurrent.LinkedBlockingDeque
            r6.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r7 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r7.<init>()
            r0 = r9
            r1 = r12
            r0.<init>(r1, r2, r3, r5, r6, r7)
            r10.a = r9
        L3a:
            java.util.concurrent.ThreadPoolExecutor r0 = r10.a
            r0.allowCoreThreadTimeOut(r8)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r10.b = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r11)
            r10.c = r0
            return
    }

    private void b() {
            r4 = this;
            java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> r0 = r4.b
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.tkay.expressad.foundation.g.g.a r1 = (com.tkay.expressad.foundation.g.g.a) r1
            com.tkay.expressad.foundation.g.g.a$a r2 = r1.c
            com.tkay.expressad.foundation.g.g.a$a r3 = com.tkay.expressad.foundation.g.g.a.a.c
            if (r2 != r3) goto L26
            r1.g()
            goto La
        L26:
            com.tkay.expressad.foundation.g.g.a$a r2 = r1.c
            com.tkay.expressad.foundation.g.g.a$a r3 = com.tkay.expressad.foundation.g.g.a.a.a
            if (r2 != r3) goto La
            java.util.concurrent.ThreadPoolExecutor r2 = r4.a
            r2.execute(r1)
            goto La
        L32:
            return
    }

    private synchronized void b(com.tkay.expressad.foundation.g.g.a r3) {
            r2 = this;
            monitor-enter(r2)
            if (r3 == 0) goto L39
            java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> r3 = r2.b     // Catch: java.lang.Throwable -> L36
            long r0 = com.tkay.expressad.foundation.g.g.a.e()     // Catch: java.lang.Throwable -> L36
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L36
            boolean r3 = r3.containsKey(r0)     // Catch: java.lang.Throwable -> L36
            if (r3 == 0) goto L39
            java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> r3 = r2.b     // Catch: java.lang.Throwable -> L36
            long r0 = com.tkay.expressad.foundation.g.g.a.e()     // Catch: java.lang.Throwable -> L36
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L36
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Throwable -> L36
            com.tkay.expressad.foundation.g.g.a r3 = (com.tkay.expressad.foundation.g.g.a) r3     // Catch: java.lang.Throwable -> L36
            if (r3 == 0) goto L28
            r3.f()     // Catch: java.lang.Throwable -> L36
        L28:
            java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> r3 = r2.b     // Catch: java.lang.Throwable -> L36
            long r0 = com.tkay.expressad.foundation.g.g.a.e()     // Catch: java.lang.Throwable -> L36
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L36
            r3.remove(r0)     // Catch: java.lang.Throwable -> L36
            goto L39
        L36:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L39:
            monitor-exit(r2)
            return
    }

    private synchronized void b(com.tkay.expressad.foundation.g.g.a r4, com.tkay.expressad.foundation.g.g.a.b r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> r0 = r3.b     // Catch: java.lang.Throwable -> L17
            long r1 = com.tkay.expressad.foundation.g.g.a.e()     // Catch: java.lang.Throwable -> L17
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L17
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L17
            com.tkay.expressad.foundation.g.g.c$1 r0 = new com.tkay.expressad.foundation.g.g.c$1     // Catch: java.lang.Throwable -> L17
            r0.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L17
            r4.d = r0     // Catch: java.lang.Throwable -> L17
            monitor-exit(r3)
            return
        L17:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void a() {
            r2 = this;
            monitor-enter(r2)
            java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> r0 = r2.b     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            com.tkay.expressad.foundation.g.g.a r1 = (com.tkay.expressad.foundation.g.g.a) r1     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            r1.f()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            goto Lb
        L21:
            java.util.HashMap<java.lang.Long, com.tkay.expressad.foundation.g.g.a> r0 = r2.b     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            r0.clear()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2b
            monitor-exit(r2)
            return
        L28:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
        L2b:
            monitor-exit(r2)
            return
    }

    public final void a(com.tkay.expressad.foundation.g.g.a r2) {
            r1 = this;
            r0 = 0
            r1.b(r2, r0)
            java.util.concurrent.ThreadPoolExecutor r0 = r1.a
            r0.execute(r2)
            return
    }

    public final void a(com.tkay.expressad.foundation.g.g.a r1, com.tkay.expressad.foundation.g.g.a.b r2) {
            r0 = this;
            r0.b(r1, r2)
            java.util.concurrent.ThreadPoolExecutor r2 = r0.a
            r2.execute(r1)
            return
    }
}
