package com.meizu.cloud.pushsdk.d.b.a;

public class a extends com.meizu.cloud.pushsdk.d.b.a {
    private final java.lang.String h;
    private com.meizu.cloud.pushsdk.d.d.d i;
    private int j;




    public a(com.meizu.cloud.pushsdk.d.b.a.a r3) {
            r2 = this;
            r2.<init>(r3)
            java.lang.Class<com.meizu.cloud.pushsdk.d.b.a.a> r3 = com.meizu.cloud.pushsdk.d.b.a.a.class
            java.lang.String r3 = r3.getSimpleName()
            r2.h = r3
            com.meizu.cloud.pushsdk.d.d.a r3 = new com.meizu.cloud.pushsdk.d.d.a
            android.content.Context r0 = r2.a
            int r1 = r2.e
            r3.<init>(r0, r1)
            r2.i = r3
            boolean r3 = r3.a()
            if (r3 != 0) goto L2f
            com.meizu.cloud.pushsdk.d.d.c r3 = new com.meizu.cloud.pushsdk.d.d.c
            int r0 = r2.e
            r3.<init>(r0)
            r2.i = r3
            java.lang.String r3 = r2.h
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "init memory store"
            com.meizu.cloud.pushsdk.d.f.c.a(r3, r1, r0)
        L2f:
            return
    }

    static int a(com.meizu.cloud.pushsdk.d.b.a.a r0, com.meizu.cloud.pushsdk.c.c.i r1) {
            int r0 = r0.a(r1)
            return r0
    }

    private java.util.LinkedList<com.meizu.cloud.pushsdk.d.b.g> a(java.util.LinkedList<com.meizu.cloud.pushsdk.d.b.e> r11) {
            r10 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            java.util.Iterator r2 = r11.iterator()
        Le:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L2a
            java.lang.Object r3 = r2.next()
            com.meizu.cloud.pushsdk.d.b.e r3 = (com.meizu.cloud.pushsdk.d.b.e) r3
            com.meizu.cloud.pushsdk.c.c.i r3 = r3.a()
            java.util.concurrent.Callable r3 = r10.b(r3)
            java.util.concurrent.Future r3 = com.meizu.cloud.pushsdk.d.b.a.b.a(r3)
            r1.add(r3)
            goto Le
        L2a:
            java.lang.String r2 = r10.h
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]
            int r5 = r1.size()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r6 = 0
            r4[r6] = r5
            java.lang.String r5 = "Request Futures: %s"
            com.meizu.cloud.pushsdk.d.f.c.b(r2, r5, r4)
            r2 = r6
        L40:
            int r4 = r1.size()
            if (r2 >= r4) goto Lc7
            r4 = -1
            java.lang.Object r5 = r1.get(r2)     // Catch: java.util.concurrent.TimeoutException -> L5c java.util.concurrent.ExecutionException -> L6d java.lang.InterruptedException -> L7e
            java.util.concurrent.Future r5 = (java.util.concurrent.Future) r5     // Catch: java.util.concurrent.TimeoutException -> L5c java.util.concurrent.ExecutionException -> L6d java.lang.InterruptedException -> L7e
            r7 = 5
            java.util.concurrent.TimeUnit r9 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.util.concurrent.TimeoutException -> L5c java.util.concurrent.ExecutionException -> L6d java.lang.InterruptedException -> L7e
            java.lang.Object r5 = r5.get(r7, r9)     // Catch: java.util.concurrent.TimeoutException -> L5c java.util.concurrent.ExecutionException -> L6d java.lang.InterruptedException -> L7e
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.util.concurrent.TimeoutException -> L5c java.util.concurrent.ExecutionException -> L6d java.lang.InterruptedException -> L7e
            int r4 = r5.intValue()     // Catch: java.util.concurrent.TimeoutException -> L5c java.util.concurrent.ExecutionException -> L6d java.lang.InterruptedException -> L7e
            goto L8e
        L5c:
            r5 = move-exception
            java.lang.String r7 = r10.h
            java.lang.Object[] r8 = new java.lang.Object[r3]
            java.lang.String r5 = r5.getMessage()
            r8[r6] = r5
            java.lang.String r5 = "Request Future had a timeout: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r7, r5, r8)
            goto L8e
        L6d:
            r5 = move-exception
            java.lang.String r7 = r10.h
            java.lang.Object[] r8 = new java.lang.Object[r3]
            java.lang.String r5 = r5.getMessage()
            r8[r6] = r5
            java.lang.String r5 = "Request Future failed: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r7, r5, r8)
            goto L8e
        L7e:
            r5 = move-exception
            java.lang.String r7 = r10.h
            java.lang.Object[] r8 = new java.lang.Object[r3]
            java.lang.String r5 = r5.getMessage()
            r8[r6] = r5
            java.lang.String r5 = "Request Future was interrupted: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r7, r5, r8)
        L8e:
            java.lang.Object r5 = r11.get(r2)
            com.meizu.cloud.pushsdk.d.b.e r5 = (com.meizu.cloud.pushsdk.d.b.e) r5
            boolean r5 = r5.c()
            if (r5 == 0) goto Lad
            com.meizu.cloud.pushsdk.d.b.g r4 = new com.meizu.cloud.pushsdk.d.b.g
            java.lang.Object r5 = r11.get(r2)
            com.meizu.cloud.pushsdk.d.b.e r5 = (com.meizu.cloud.pushsdk.d.b.e) r5
            java.util.LinkedList r5 = r5.b()
            r4.<init>(r3, r5)
            r0.add(r4)
            goto Lc3
        Lad:
            com.meizu.cloud.pushsdk.d.b.g r5 = new com.meizu.cloud.pushsdk.d.b.g
            boolean r4 = r10.a(r4)
            java.lang.Object r7 = r11.get(r2)
            com.meizu.cloud.pushsdk.d.b.e r7 = (com.meizu.cloud.pushsdk.d.b.e) r7
            java.util.LinkedList r7 = r7.b()
            r5.<init>(r4, r7)
            r0.add(r5)
        Lc3:
            int r2 = r2 + 1
            goto L40
        Lc7:
            return r0
    }

    private java.util.concurrent.Callable<java.lang.Boolean> a(java.lang.Long r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.d.b.a.a$3 r0 = new com.meizu.cloud.pushsdk.d.b.a.a$3
            r0.<init>(r1, r2)
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean a(com.meizu.cloud.pushsdk.d.b.a.a r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.g
            return r0
    }

    private java.util.LinkedList<java.lang.Boolean> b(java.util.LinkedList<java.lang.Long> r9) {
            r8 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.LinkedList r1 = new java.util.LinkedList
            r1.<init>()
            java.util.Iterator r9 = r9.iterator()
        Le:
            boolean r2 = r9.hasNext()
            if (r2 == 0) goto L26
            java.lang.Object r2 = r9.next()
            java.lang.Long r2 = (java.lang.Long) r2
            java.util.concurrent.Callable r2 = r8.a(r2)
            java.util.concurrent.Future r2 = com.meizu.cloud.pushsdk.d.b.a.b.a(r2)
            r1.add(r2)
            goto Le
        L26:
            java.lang.String r9 = r8.h
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]
            int r4 = r1.size()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r5 = 0
            r3[r5] = r4
            java.lang.String r4 = "Removal Futures: %s"
            com.meizu.cloud.pushsdk.d.f.c.b(r9, r4, r3)
            r9 = r5
        L3c:
            int r3 = r1.size()
            if (r9 >= r3) goto L94
            java.lang.Object r3 = r1.get(r9)     // Catch: java.util.concurrent.TimeoutException -> L57 java.util.concurrent.ExecutionException -> L68 java.lang.InterruptedException -> L79
            java.util.concurrent.Future r3 = (java.util.concurrent.Future) r3     // Catch: java.util.concurrent.TimeoutException -> L57 java.util.concurrent.ExecutionException -> L68 java.lang.InterruptedException -> L79
            r6 = 5
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.util.concurrent.TimeoutException -> L57 java.util.concurrent.ExecutionException -> L68 java.lang.InterruptedException -> L79
            java.lang.Object r3 = r3.get(r6, r4)     // Catch: java.util.concurrent.TimeoutException -> L57 java.util.concurrent.ExecutionException -> L68 java.lang.InterruptedException -> L79
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.util.concurrent.TimeoutException -> L57 java.util.concurrent.ExecutionException -> L68 java.lang.InterruptedException -> L79
            boolean r3 = r3.booleanValue()     // Catch: java.util.concurrent.TimeoutException -> L57 java.util.concurrent.ExecutionException -> L68 java.lang.InterruptedException -> L79
            goto L8a
        L57:
            r3 = move-exception
            java.lang.String r4 = r8.h
            java.lang.Object[] r6 = new java.lang.Object[r2]
            java.lang.String r3 = r3.getMessage()
            r6[r5] = r3
            java.lang.String r3 = "Removal Future had a timeout: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r4, r3, r6)
            goto L89
        L68:
            r3 = move-exception
            java.lang.String r4 = r8.h
            java.lang.Object[] r6 = new java.lang.Object[r2]
            java.lang.String r3 = r3.getMessage()
            r6[r5] = r3
            java.lang.String r3 = "Removal Future failed: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r4, r3, r6)
            goto L89
        L79:
            r3 = move-exception
            java.lang.String r4 = r8.h
            java.lang.Object[] r6 = new java.lang.Object[r2]
            java.lang.String r3 = r3.getMessage()
            r6[r5] = r3
            java.lang.String r3 = "Removal Future was interrupted: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r4, r3, r6)
        L89:
            r3 = r5
        L8a:
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.add(r3)
            int r9 = r9 + 1
            goto L3c
        L94:
            return r0
    }

    private java.util.concurrent.Callable<java.lang.Integer> b(com.meizu.cloud.pushsdk.c.c.i r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.d.b.a.a$2 r0 = new com.meizu.cloud.pushsdk.d.b.a.a$2
            r0.<init>(r1, r2)
            return r0
    }

    static void b(com.meizu.cloud.pushsdk.d.b.a.a r0) {
            r0.c()
            return
    }

    static com.meizu.cloud.pushsdk.d.d.d c(com.meizu.cloud.pushsdk.d.b.a.a r0) {
            com.meizu.cloud.pushsdk.d.d.d r0 = r0.i
            return r0
    }

    private void c() {
            r9 = this;
            android.content.Context r0 = r9.a
            boolean r0 = com.meizu.cloud.pushsdk.d.f.e.a(r0)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L12c
            com.meizu.cloud.pushsdk.d.d.d r0 = r9.i
            long r3 = r0.c()
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto Lc5
            r9.j = r2
            com.meizu.cloud.pushsdk.d.d.d r0 = r9.i
            com.meizu.cloud.pushsdk.d.b.c r0 = r0.d()
            java.util.LinkedList r0 = r9.a(r0)
            java.util.LinkedList r0 = r9.a(r0)
            java.lang.String r3 = r9.h
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r5 = "Processing emitter results."
            com.meizu.cloud.pushsdk.d.f.c.c(r3, r5, r4)
            java.util.LinkedList r3 = new java.util.LinkedList
            r3.<init>()
            java.util.Iterator r0 = r0.iterator()
            r4 = r2
            r5 = r4
        L3a:
            boolean r6 = r0.hasNext()
            if (r6 == 0) goto L70
            java.lang.Object r6 = r0.next()
            com.meizu.cloud.pushsdk.d.b.g r6 = (com.meizu.cloud.pushsdk.d.b.g) r6
            boolean r7 = r6.a()
            if (r7 == 0) goto L5d
            java.util.LinkedList r7 = r6.b()
            r3.addAll(r7)
            java.util.LinkedList r6 = r6.b()
            int r6 = r6.size()
            int r4 = r4 + r6
            goto L3a
        L5d:
            java.util.LinkedList r6 = r6.b()
            int r6 = r6.size()
            int r5 = r5 + r6
            java.lang.String r6 = r9.h
            java.lang.Object[] r7 = new java.lang.Object[r2]
            java.lang.String r8 = "Request sending failed but we will retry later."
            com.meizu.cloud.pushsdk.d.f.c.a(r6, r8, r7)
            goto L3a
        L70:
            r9.b(r3)
            java.lang.String r0 = r9.h
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r4)
            r3[r2] = r6
            java.lang.String r6 = "Success Count: %s"
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r6, r3)
            java.lang.String r0 = r9.h
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r5)
            r3[r2] = r6
            java.lang.String r6 = "Failure Count: %s"
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r6, r3)
            com.meizu.cloud.pushsdk.d.b.f r0 = r9.b
            if (r0 == 0) goto La0
            com.meizu.cloud.pushsdk.d.b.f r0 = r9.b
            if (r5 == 0) goto L9d
            r0.a(r4, r5)
            goto La0
        L9d:
            r0.a(r4)
        La0:
            if (r5 <= 0) goto L128
            if (r4 != 0) goto L128
            android.content.Context r0 = r9.a
            boolean r0 = com.meizu.cloud.pushsdk.d.f.e.a(r0)
            if (r0 == 0) goto Lbb
            java.lang.String r0 = r9.h
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r4 = r9.b()
            r3[r2] = r4
            java.lang.String r4 = "Ensure collector path is valid: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r0, r4, r3)
        Lbb:
            java.lang.String r0 = r9.h
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = "Emitter loop stopping: failures."
            com.meizu.cloud.pushsdk.d.f.c.a(r0, r4, r3)
            goto L135
        Lc5:
            int r0 = r9.j
            int r3 = r9.d
            if (r0 < r3) goto Le3
            java.lang.String r0 = r9.h
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = "Emitter loop stopping: empty limit reached."
            com.meizu.cloud.pushsdk.d.f.c.a(r0, r4, r3)
            java.util.concurrent.atomic.AtomicBoolean r0 = r9.g
            r0.compareAndSet(r1, r2)
            com.meizu.cloud.pushsdk.d.b.f r0 = r9.b
            if (r0 == 0) goto L13a
            com.meizu.cloud.pushsdk.d.b.f r0 = r9.b
            r0.a(r1)
            goto L13a
        Le3:
            int r0 = r9.j
            int r0 = r0 + r1
            r9.j = r0
            java.lang.String r0 = r9.h
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Emitter database empty: "
            r1.append(r3)
            int r3 = r9.j
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.meizu.cloud.pushsdk.d.f.c.a(r0, r1, r3)
            java.util.concurrent.TimeUnit r0 = r9.f     // Catch: java.lang.InterruptedException -> L10b
            int r1 = r9.c     // Catch: java.lang.InterruptedException -> L10b
            long r3 = (long) r1     // Catch: java.lang.InterruptedException -> L10b
            r0.sleep(r3)     // Catch: java.lang.InterruptedException -> L10b
            goto L128
        L10b:
            r0 = move-exception
            java.lang.String r1 = r9.h
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Emitter thread sleep interrupted: "
            r3.append(r4)
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.meizu.cloud.pushsdk.d.f.c.a(r1, r0, r2)
        L128:
            r9.c()
            goto L13a
        L12c:
            java.lang.String r0 = r9.h
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = "Emitter loop stopping: emitter offline."
            com.meizu.cloud.pushsdk.d.f.c.a(r0, r4, r3)
        L135:
            java.util.concurrent.atomic.AtomicBoolean r0 = r9.g
            r0.compareAndSet(r1, r2)
        L13a:
            return
    }

    @Override
    public void a() {
            r1 = this;
            com.meizu.cloud.pushsdk.d.b.a.a$1 r0 = new com.meizu.cloud.pushsdk.d.b.a.a$1
            r0.<init>(r1)
            com.meizu.cloud.pushsdk.d.b.a.b.a(r0)
            return
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.d.a.a r5, boolean r6) {
            r4 = this;
            com.meizu.cloud.pushsdk.d.d.d r0 = r4.i
            r0.a(r5)
            java.lang.String r5 = r4.h
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isRunning "
            r0.append(r1)
            java.util.concurrent.atomic.AtomicBoolean r1 = r4.g
            r0.append(r1)
            java.lang.String r1 = " attemptEmit "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.meizu.cloud.pushsdk.d.f.c.a(r5, r0, r2)
            if (r6 != 0) goto L4f
            java.util.concurrent.TimeUnit r5 = r4.f     // Catch: java.lang.InterruptedException -> L32
            r2 = 1
            r5.sleep(r2)     // Catch: java.lang.InterruptedException -> L32
            goto L4f
        L32:
            r5 = move-exception
            java.lang.String r6 = r4.h
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Emitter add thread sleep interrupted: "
            r0.append(r2)
            java.lang.String r5 = r5.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.meizu.cloud.pushsdk.d.f.c.a(r6, r5, r0)
        L4f:
            java.util.concurrent.atomic.AtomicBoolean r5 = r4.g
            r6 = 1
            boolean r5 = r5.compareAndSet(r1, r6)
            if (r5 == 0) goto L5b
            r4.c()
        L5b:
            return
    }
}
