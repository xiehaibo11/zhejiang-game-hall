package com.igexin.push.core;

public class n {
    private static volatile com.igexin.push.core.n e;
    private final java.lang.Object a;
    private boolean b;
    private final java.util.Map<java.lang.String, java.lang.Object> c;
    private final java.util.concurrent.ExecutorService d;

    static {
            return
    }

    private n() {
            r8 = this;
            r8.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r8.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r8.c = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            r2 = 0
            r3 = 1
            r4 = 30
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            r8.d = r0
            r0 = 0
            r8.b = r0
            r8.b()
            return
    }

    public static com.igexin.push.core.n a() {
            com.igexin.push.core.n r0 = com.igexin.push.core.n.e
            if (r0 != 0) goto L17
            java.lang.Class<com.igexin.push.core.n> r0 = com.igexin.push.core.n.class
            monitor-enter(r0)
            com.igexin.push.core.n r1 = com.igexin.push.core.n.e     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.igexin.push.core.n r1 = new com.igexin.push.core.n     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.igexin.push.core.n.e = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.igexin.push.core.n r0 = com.igexin.push.core.n.e
            return r0
    }

    static void a(com.igexin.push.core.n r0) {
            r0.c()
            return
    }

    private void b() {
            r3 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.igexin.push.core.o r1 = new com.igexin.push.core.o
            r1.<init>(r3)
            java.lang.String r2 = "MessageTaskIDPreferences-load"
            r0.<init>(r1, r2)
            r0.start()
            return
    }

    private void c() {
            r7 = this;
            java.lang.Object r0 = r7.a
            monitor-enter(r0)
            boolean r1 = r7.b     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La4
            return
        L9:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La4
            r0 = 0
            r1 = 1
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            r4 = 604800000(0x240c8400, double:2.988109026E-315)
            long r2 = r2 - r4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            r4.<init>()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            java.lang.String r5 = " createtime >= "
            r4.append(r5)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            r4.append(r2)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            com.igexin.push.core.c r3 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            com.igexin.push.b.b r3 = r3.k()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            java.lang.String r4 = "message"
            java.lang.String r5 = "taskid"
            java.lang.String[] r5 = new java.lang.String[]{r5}     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            android.database.Cursor r2 = r3.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            if (r2 == 0) goto L58
            int r3 = r2.getCount()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            if (r3 > 0) goto L42
            goto L58
        L42:
            boolean r3 = r2.moveToNext()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            if (r3 == 0) goto L60
            java.util.Map<java.lang.String, java.lang.Object> r3 = r7.c     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            java.lang.String r4 = "taskid"
            int r4 = r2.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            java.lang.String r4 = r2.getString(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            goto L42
        L58:
            java.lang.String r0 = "MessageTaskIDPreference|db cnt = 0"
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
        L60:
            java.lang.Object r0 = r7.a
            monitor-enter(r0)
            r7.b = r1     // Catch: java.lang.Throwable -> L71
            java.lang.Object r1 = r7.a     // Catch: java.lang.Throwable -> L71
            r1.notifyAll()     // Catch: java.lang.Throwable -> L71
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto La0
            r2.close()     // Catch: java.lang.Throwable -> La0
            goto La0
        L71:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            throw r1
        L74:
            r0 = move-exception
            goto L7c
        L76:
            r0 = r2
            goto L90
        L78:
            r2 = move-exception
            r6 = r2
            r2 = r0
            r0 = r6
        L7c:
            java.lang.Object r3 = r7.a
            monitor-enter(r3)
            r7.b = r1     // Catch: java.lang.Throwable -> L8d
            java.lang.Object r1 = r7.a     // Catch: java.lang.Throwable -> L8d
            r1.notifyAll()     // Catch: java.lang.Throwable -> L8d
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L8d
            if (r2 == 0) goto L8c
            r2.close()     // Catch: java.lang.Throwable -> L8c
        L8c:
            throw r0
        L8d:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L8d
            throw r0
        L90:
            java.lang.Object r2 = r7.a
            monitor-enter(r2)
            r7.b = r1     // Catch: java.lang.Throwable -> La1
            java.lang.Object r1 = r7.a     // Catch: java.lang.Throwable -> La1
            r1.notifyAll()     // Catch: java.lang.Throwable -> La1
            monitor-exit(r2)     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto La0
            r0.close()     // Catch: java.lang.Throwable -> La0
        La0:
            return
        La1:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> La1
            throw r0
        La4:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La4
            throw r1
    }

    private void d() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
        L3:
            boolean r1 = r2.b     // Catch: java.lang.Throwable -> Lf
            if (r1 != 0) goto Ld
            java.lang.Object r1 = r2.a     // Catch: java.lang.InterruptedException -> L3 java.lang.Throwable -> Lf
            r1.wait()     // Catch: java.lang.InterruptedException -> L3 java.lang.Throwable -> Lf
            goto L3
        Ld:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            throw r1
    }

    public void a(java.lang.String r4, android.content.ContentValues r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            r3.d()
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.Object> r1 = r3.c     // Catch: java.lang.Throwable -> L1f
            r2 = 0
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            java.util.concurrent.ExecutorService r4 = r3.d
            com.igexin.push.core.p r0 = new com.igexin.push.core.p
            r0.<init>(r3, r5)
            r4.execute(r0)
            return
        L1f:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            throw r4
    }

    public boolean a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            r2.d()
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.c     // Catch: java.lang.Throwable -> L16
            boolean r3 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r3
        L16:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r3
    }

    public void b(java.lang.String r3, android.content.ContentValues r4) {
            r2 = this;
            boolean r0 = r2.a(r3)
            if (r0 != 0) goto L7
            return
        L7:
            java.util.concurrent.ExecutorService r0 = r2.d
            com.igexin.push.core.q r1 = new com.igexin.push.core.q
            r1.<init>(r2, r4, r3)
            r0.execute(r1)
            return
    }
}
