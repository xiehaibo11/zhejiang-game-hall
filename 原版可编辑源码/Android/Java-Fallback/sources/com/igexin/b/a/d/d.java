package com.igexin.b.a.d;

import com.igexin.b.a.d.e;

public class d<E extends com.igexin.b.a.d.e> {
    static final boolean i = false;
    public java.lang.String a;
    final transient java.util.concurrent.locks.ReentrantLock b;
    final transient java.util.concurrent.locks.Condition c;
    final java.util.TreeSet<E> d;
    final java.util.concurrent.atomic.AtomicInteger e;
    int f;
    com.igexin.b.a.d.f g;
    public final java.util.concurrent.atomic.AtomicLong h;

    static {
            java.lang.Class<com.igexin.b.a.d.d> r0 = com.igexin.b.a.d.d.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.igexin.b.a.d.d.i = r0
            return
    }

    public d(java.util.Comparator<? super E> r4, com.igexin.b.a.d.f r5) {
            r3 = this;
            r3.<init>()
            java.lang.Class r0 = r3.getClass()
            java.lang.String r0 = r0.getName()
            r3.a = r0
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            r3.b = r0
            java.util.concurrent.locks.Condition r0 = r0.newCondition()
            r3.c = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r3.e = r0
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r1 = -1
            r0.<init>(r1)
            r3.h = r0
            java.util.TreeSet r0 = new java.util.TreeSet
            r0.<init>(r4)
            r3.d = r0
            r3.g = r5
            return
    }

    private E e() {
            r3 = this;
            com.igexin.b.a.d.e r0 = r3.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r2 = r3.d
            boolean r2 = r2.remove(r0)
            if (r2 == 0) goto L11
            return r0
        L11:
            return r1
    }

    public final int a(E r5, long r6, java.util.concurrent.TimeUnit r8) {
            r4 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r4.b
            r0.lock()
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r1 = r4.d     // Catch: java.lang.Throwable -> L31
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto L12
            r5 = -1
            r0.unlock()
            return r5
        L12:
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r1 = r4.d     // Catch: java.lang.Throwable -> L31
            r1.remove(r5)     // Catch: java.lang.Throwable -> L31
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L31
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L31
            long r6 = r3.convert(r6, r8)     // Catch: java.lang.Throwable -> L31
            long r1 = r1 + r6
            r5.u = r1     // Catch: java.lang.Throwable -> L31
            boolean r5 = r4.a(r5)     // Catch: java.lang.Throwable -> L31
            if (r5 == 0) goto L2c
            r5 = 1
            goto L2d
        L2c:
            r5 = -2
        L2d:
            r0.unlock()
            return r5
        L31:
            r5 = move-exception
            r0.unlock()
            throw r5
    }

    E a() {
            r1 = this;
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r0 = r1.d     // Catch: java.util.NoSuchElementException -> L9
            java.lang.Object r0 = r0.first()     // Catch: java.util.NoSuchElementException -> L9
            com.igexin.b.a.d.e r0 = (com.igexin.b.a.d.e) r0     // Catch: java.util.NoSuchElementException -> L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final boolean a(E r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            java.util.concurrent.locks.ReentrantLock r1 = r5.b
            r1.lock()
            com.igexin.b.a.d.e r2 = r5.a()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            int r3 = r5.f     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r4 = 1
            int r3 = r3 + r4
            r5.f = r3     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r6.v = r3     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r3 = r5.d     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            boolean r3 = r3.add(r6)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            if (r3 != 0) goto L26
            int r2 = r6.v     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            int r2 = r2 - r4
            r6.v = r2     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r1.unlock()
            return r0
        L26:
            r6.n()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            if (r2 == 0) goto L37
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r3 = r5.d     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.util.Comparator r3 = r3.comparator()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            int r6 = r3.compare(r6, r2)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            if (r6 >= 0) goto L3c
        L37:
            java.util.concurrent.locks.Condition r6 = r5.c     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r6.signalAll()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
        L3c:
            r1.unlock()
            return r4
        L40:
            r6 = move-exception
            goto L4d
        L42:
            java.lang.String r6 = "ScheduleQueue|offer|error"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L40
            com.igexin.b.a.c.b.a(r6, r2)     // Catch: java.lang.Throwable -> L40
            r1.unlock()
            return r0
        L4d:
            r1.unlock()
            throw r6
    }

    public final boolean a(java.lang.Class r6) {
            r5 = this;
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            java.util.concurrent.locks.ReentrantLock r0 = r5.b
            r0.lock()
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L34
            r1.<init>()     // Catch: java.lang.Throwable -> L34
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r2 = r5.d     // Catch: java.lang.Throwable -> L34
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L34
        L14:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L34
            if (r3 == 0) goto L2a
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L34
            com.igexin.b.a.d.e r3 = (com.igexin.b.a.d.e) r3     // Catch: java.lang.Throwable -> L34
            java.lang.Class r4 = r3.getClass()     // Catch: java.lang.Throwable -> L34
            if (r4 != r6) goto L14
            r1.add(r3)     // Catch: java.lang.Throwable -> L34
            goto L14
        L2a:
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r6 = r5.d     // Catch: java.lang.Throwable -> L34
            r6.removeAll(r1)     // Catch: java.lang.Throwable -> L34
            r6 = 1
            r0.unlock()
            return r6
        L34:
            r6 = move-exception
            r0.unlock()
            throw r6
    }

    final boolean b() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.b
            r0.lock()
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r1 = r2.d     // Catch: java.lang.Throwable -> Lf
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> Lf
            r0.unlock()
            return r1
        Lf:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    public final E c() {
            r8 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r8.b
            r0.lockInterruptibly()
        L5:
            com.igexin.b.a.d.e r1 = r8.a()     // Catch: java.lang.Throwable -> Laa
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L1a
            java.util.concurrent.atomic.AtomicInteger r1 = r8.e     // Catch: java.lang.Throwable -> Laa
            r1.set(r2)     // Catch: java.lang.Throwable -> Laa
            r8.f = r3     // Catch: java.lang.Throwable -> Laa
            java.util.concurrent.locks.Condition r1 = r8.c     // Catch: java.lang.Throwable -> Laa
            r1.await()     // Catch: java.lang.Throwable -> Laa
            goto L5
        L1a:
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.NANOSECONDS     // Catch: java.lang.Throwable -> Laa
            long r4 = r1.a(r4)     // Catch: java.lang.Throwable -> Laa
            boolean r6 = r1.k     // Catch: java.lang.Throwable -> Laa
            if (r6 != 0) goto L2a
            boolean r6 = r1.m     // Catch: java.lang.Throwable -> Laa
            if (r6 == 0) goto L29
            goto L2a
        L29:
            r2 = r3
        L2a:
            r6 = 0
            int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r6 <= 0) goto L83
            if (r2 == 0) goto L33
            goto L83
        L33:
            java.util.concurrent.atomic.AtomicLong r2 = r8.h     // Catch: java.lang.Throwable -> Laa
            long r6 = r1.u     // Catch: java.lang.Throwable -> Laa
            r2.set(r6)     // Catch: java.lang.Throwable -> Laa
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laa
            r2.<init>()     // Catch: java.lang.Throwable -> Laa
            java.lang.String r6 = "schedule take|needAlarm = "
            r2.append(r6)     // Catch: java.lang.Throwable -> Laa
            com.igexin.b.a.d.f r6 = r8.g     // Catch: java.lang.Throwable -> Laa
            boolean r6 = r6.t     // Catch: java.lang.Throwable -> Laa
            r2.append(r6)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r6 = "|"
            r2.append(r6)     // Catch: java.lang.Throwable -> Laa
            java.lang.Class r6 = r1.getClass()     // Catch: java.lang.Throwable -> Laa
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> Laa
            r2.append(r6)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r6 = "@"
            r2.append(r6)     // Catch: java.lang.Throwable -> Laa
            int r6 = r1.hashCode()     // Catch: java.lang.Throwable -> Laa
            r2.append(r6)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Laa
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Laa
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Throwable -> Laa
            com.igexin.b.a.d.f r2 = r8.g     // Catch: java.lang.Throwable -> Laa
            boolean r2 = r2.t     // Catch: java.lang.Throwable -> Laa
            if (r2 == 0) goto L7d
            com.igexin.b.a.d.f r2 = r8.g     // Catch: java.lang.Throwable -> Laa
            long r6 = r1.u     // Catch: java.lang.Throwable -> Laa
            r2.a(r6)     // Catch: java.lang.Throwable -> Laa
        L7d:
            java.util.concurrent.locks.Condition r1 = r8.c     // Catch: java.lang.Throwable -> Laa
            r1.awaitNanos(r4)     // Catch: java.lang.Throwable -> Laa
            goto L5
        L83:
            com.igexin.b.a.d.e r1 = r8.e()     // Catch: java.lang.Throwable -> Laa
            boolean r2 = com.igexin.b.a.d.d.i     // Catch: java.lang.Throwable -> Laa
            if (r2 != 0) goto L94
            if (r1 == 0) goto L8e
            goto L94
        L8e:
            java.lang.AssertionError r1 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> Laa
            r1.<init>()     // Catch: java.lang.Throwable -> Laa
            throw r1     // Catch: java.lang.Throwable -> Laa
        L94:
            boolean r2 = r8.b()     // Catch: java.lang.Throwable -> Laa
            if (r2 != 0) goto L9f
            java.util.concurrent.locks.Condition r2 = r8.c     // Catch: java.lang.Throwable -> Laa
            r2.signalAll()     // Catch: java.lang.Throwable -> Laa
        L9f:
            java.util.concurrent.atomic.AtomicLong r2 = r8.h     // Catch: java.lang.Throwable -> Laa
            r3 = -1
            r2.set(r3)     // Catch: java.lang.Throwable -> Laa
            r0.unlock()
            return r1
        Laa:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    public final void d() {
            r1 = this;
            java.util.TreeSet<E extends com.igexin.b.a.d.e> r0 = r1.d
            r0.clear()
            return
    }
}
