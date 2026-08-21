package com.mbridge.msdk.foundation.same.e;

public final class b {
    java.util.concurrent.ThreadPoolExecutor a;
    java.util.HashMap<java.lang.Long, com.mbridge.msdk.foundation.same.e.a> b;
    java.lang.ref.WeakReference<android.content.Context> c;


    public b(android.content.Context r20) {
            r19 = this;
            r0 = r19
            r19.<init>()
            com.mbridge.msdk.foundation.tools.ab r1 = com.mbridge.msdk.foundation.tools.ab.a()
            r2 = 1
            java.lang.String r3 = "c_t_l_t_p"
            boolean r1 = r1.a(r3, r2)
            if (r1 == 0) goto L19
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.e.c.a()
            r0.a = r1
            goto L68
        L19:
            com.mbridge.msdk.foundation.tools.ab r1 = com.mbridge.msdk.foundation.tools.ab.a()
            java.lang.String r3 = "c_t_p_t_l"
            boolean r1 = r1.a(r3, r2)
            if (r1 == 0) goto L49
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()
            int r1 = r1.availableProcessors()
            int r1 = r1 * 2
            int r5 = r1 + 1
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor
            r6 = 15
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r9 = new java.util.concurrent.LinkedBlockingDeque
            r9.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r10 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r10.<init>()
            r3 = r1
            r4 = r5
            r3.<init>(r4, r5, r6, r8, r9, r10)
            r0.a = r1
            goto L63
        L49:
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor
            r12 = 0
            r13 = 2147483647(0x7fffffff, float:NaN)
            r14 = 15
            java.util.concurrent.TimeUnit r16 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r17 = new java.util.concurrent.LinkedBlockingDeque
            r17.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r18 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r18.<init>()
            r11 = r1
            r11.<init>(r12, r13, r14, r16, r17, r18)
            r0.a = r1
        L63:
            java.util.concurrent.ThreadPoolExecutor r1 = r0.a
            r1.allowCoreThreadTimeOut(r2)
        L68:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.b = r1
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r2 = r20
            r1.<init>(r2)
            r0.c = r1
            return
    }

    public b(android.content.Context r19, int r20) {
            r18 = this;
            r0 = r18
            r18.<init>()
            com.mbridge.msdk.foundation.tools.ab r1 = com.mbridge.msdk.foundation.tools.ab.a()
            r9 = 1
            java.lang.String r2 = "c_t_l_t_p"
            boolean r1 = r1.a(r2, r9)
            if (r1 == 0) goto L19
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.e.c.a()
            r0.a = r1
            goto L55
        L19:
            if (r20 != 0) goto L34
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor
            r11 = 1
            r12 = 5
            r13 = 15
            java.util.concurrent.TimeUnit r15 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r16 = new java.util.concurrent.LinkedBlockingDeque
            r16.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r17 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r17.<init>()
            r10 = r1
            r10.<init>(r11, r12, r13, r15, r16, r17)
            r0.a = r1
            goto L50
        L34:
            java.util.concurrent.ThreadPoolExecutor r10 = new java.util.concurrent.ThreadPoolExecutor
            int r1 = r20 * 2
            int r3 = r1 + 1
            r4 = 15
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r7 = new java.util.concurrent.LinkedBlockingDeque
            r7.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r8 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r8.<init>()
            r1 = r10
            r2 = r20
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r0.a = r10
        L50:
            java.util.concurrent.ThreadPoolExecutor r1 = r0.a
            r1.allowCoreThreadTimeOut(r9)
        L55:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.b = r1
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r2 = r19
            r1.<init>(r2)
            r0.c = r1
            return
    }

    private synchronized void b(com.mbridge.msdk.foundation.same.e.a r4, com.mbridge.msdk.foundation.same.e.a.b r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.HashMap<java.lang.Long, com.mbridge.msdk.foundation.same.e.a> r0 = r3.b     // Catch: java.lang.Throwable -> L18
            long r1 = r4.getId()     // Catch: java.lang.Throwable -> L18
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L18
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.same.e.b$1 r0 = new com.mbridge.msdk.foundation.same.e.b$1     // Catch: java.lang.Throwable -> L18
            r0.<init>(r3, r4, r5)     // Catch: java.lang.Throwable -> L18
            r4.setonStateChangeListener(r0)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r3)
            return
        L18:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void a() {
            r2 = this;
            monitor-enter(r2)
            java.util.HashMap<java.lang.Long, com.mbridge.msdk.foundation.same.e.a> r0 = r2.b     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            com.mbridge.msdk.foundation.same.e.a r1 = (com.mbridge.msdk.foundation.same.e.a) r1     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            r1.cancel()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            goto Lb
        L21:
            java.util.HashMap<java.lang.Long, com.mbridge.msdk.foundation.same.e.a> r0 = r2.b     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            r0.clear()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2a
            goto L2a
        L27:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
        L2a:
            monitor-exit(r2)
            return
    }

    public final synchronized void a(com.mbridge.msdk.foundation.same.e.a r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 == 0) goto L39
            java.util.HashMap<java.lang.Long, com.mbridge.msdk.foundation.same.e.a> r0 = r3.b     // Catch: java.lang.Throwable -> L36
            long r1 = r4.getId()     // Catch: java.lang.Throwable -> L36
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L36
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L39
            java.util.HashMap<java.lang.Long, com.mbridge.msdk.foundation.same.e.a> r0 = r3.b     // Catch: java.lang.Throwable -> L36
            long r1 = r4.getId()     // Catch: java.lang.Throwable -> L36
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L36
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L36
            com.mbridge.msdk.foundation.same.e.a r0 = (com.mbridge.msdk.foundation.same.e.a) r0     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L28
            r0.cancel()     // Catch: java.lang.Throwable -> L36
        L28:
            java.util.HashMap<java.lang.Long, com.mbridge.msdk.foundation.same.e.a> r0 = r3.b     // Catch: java.lang.Throwable -> L36
            long r1 = r4.getId()     // Catch: java.lang.Throwable -> L36
            java.lang.Long r4 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L36
            r0.remove(r4)     // Catch: java.lang.Throwable -> L36
            goto L39
        L36:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L39:
            monitor-exit(r3)
            return
    }

    public final void a(com.mbridge.msdk.foundation.same.e.a r1, com.mbridge.msdk.foundation.same.e.a.b r2) {
            r0 = this;
            r0.b(r1, r2)
            java.util.concurrent.ThreadPoolExecutor r2 = r0.a
            r2.execute(r1)
            return
    }

    public final void b(com.mbridge.msdk.foundation.same.e.a r2) {
            r1 = this;
            r0 = 0
            r1.b(r2, r0)
            java.util.concurrent.ThreadPoolExecutor r0 = r1.a
            r0.execute(r2)
            return
    }
}
