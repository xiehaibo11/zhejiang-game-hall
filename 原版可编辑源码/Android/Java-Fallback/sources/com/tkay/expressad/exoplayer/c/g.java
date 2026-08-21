package com.tkay.expressad.exoplayer.c;

import com.tkay.expressad.exoplayer.c.e;
import com.tkay.expressad.exoplayer.c.f;
import java.lang.Exception;

public abstract class g<I extends com.tkay.expressad.exoplayer.c.e, O extends com.tkay.expressad.exoplayer.c.f, E extends java.lang.Exception> implements com.tkay.expressad.exoplayer.c.c<I, O, E> {
    private final java.lang.Thread a;
    private final java.lang.Object b;
    private final java.util.ArrayDeque<I> c;
    private final java.util.ArrayDeque<O> d;
    private final I[] e;
    private final O[] f;
    private int g;
    private int h;
    private I i;
    private E j;
    private boolean k;
    private boolean l;
    private int m;


    private g(I[] r4, O[] r5) {
            r3 = this;
            r3.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.b = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r3.c = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r3.d = r0
            r3.e = r4
            int r4 = r4.length
            r3.g = r4
            r4 = 0
            r0 = r4
        L1f:
            int r1 = r3.g
            if (r0 >= r1) goto L2e
            I extends com.tkay.expressad.exoplayer.c.e[] r1 = r3.e
            com.tkay.expressad.exoplayer.c.e r2 = r3.h()
            r1[r0] = r2
            int r0 = r0 + 1
            goto L1f
        L2e:
            r3.f = r5
            int r5 = r5.length
            r3.h = r5
        L33:
            int r5 = r3.h
            if (r4 >= r5) goto L42
            O extends com.tkay.expressad.exoplayer.c.f[] r5 = r3.f
            com.tkay.expressad.exoplayer.c.f r0 = r3.i()
            r5[r4] = r0
            int r4 = r4 + 1
            goto L33
        L42:
            com.tkay.expressad.exoplayer.c.g$1 r4 = new com.tkay.expressad.exoplayer.c.g$1
            r4.<init>(r3)
            r3.a = r4
            r4.start()
            return
    }

    private void a(int r5) {
            r4 = this;
            int r0 = r4.g
            I extends com.tkay.expressad.exoplayer.c.e[] r1 = r4.e
            int r1 = r1.length
            r2 = 0
            if (r0 != r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = r2
        Lb:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            I extends com.tkay.expressad.exoplayer.c.e[] r0 = r4.e
            int r1 = r0.length
        L11:
            if (r2 >= r1) goto L1b
            r3 = r0[r2]
            r3.d(r5)
            int r2 = r2 + 1
            goto L11
        L1b:
            return
    }

    static void a(com.tkay.expressad.exoplayer.c.g r1) {
        L0:
            boolean r0 = r1.o()     // Catch: java.lang.InterruptedException -> L7
            if (r0 != 0) goto L0
            return
        L7:
            r1 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r1)
            throw r0
    }

    private void b(I r4) {
            r3 = this;
            r4.a()
            I extends com.tkay.expressad.exoplayer.c.e[] r0 = r3.e
            int r1 = r3.g
            int r2 = r1 + 1
            r3.g = r2
            r0[r1] = r4
            return
    }

    private void b(O r4) {
            r3 = this;
            r4.a()
            O extends com.tkay.expressad.exoplayer.c.f[] r0 = r3.f
            int r1 = r3.h
            int r2 = r1 + 1
            r3.h = r2
            r0[r1] = r4
            return
    }

    private void l() {
            r1 = this;
            E extends java.lang.Exception r0 = r1.j
            if (r0 != 0) goto L5
            return
        L5:
            throw r0
    }

    private void m() {
            r1 = this;
            boolean r0 = r1.p()
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r1.b
            r0.notify()
        Lb:
            return
    }

    private void n() {
            r2 = this;
        L0:
            boolean r0 = r2.o()     // Catch: java.lang.InterruptedException -> L7
            if (r0 != 0) goto L0
            return
        L7:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r0)
            throw r1
    }

    private boolean o() {
            r6 = this;
            java.lang.Object r0 = r6.b
            monitor-enter(r0)
        L3:
            boolean r1 = r6.l     // Catch: java.lang.Throwable -> L8f
            if (r1 != 0) goto L13
            boolean r1 = r6.p()     // Catch: java.lang.Throwable -> L8f
            if (r1 != 0) goto L13
            java.lang.Object r1 = r6.b     // Catch: java.lang.Throwable -> L8f
            r1.wait()     // Catch: java.lang.Throwable -> L8f
            goto L3
        L13:
            boolean r1 = r6.l     // Catch: java.lang.Throwable -> L8f
            r2 = 0
            if (r1 == 0) goto L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8f
            return r2
        L1a:
            java.util.ArrayDeque<I extends com.tkay.expressad.exoplayer.c.e> r1 = r6.c     // Catch: java.lang.Throwable -> L8f
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L8f
            com.tkay.expressad.exoplayer.c.e r1 = (com.tkay.expressad.exoplayer.c.e) r1     // Catch: java.lang.Throwable -> L8f
            O extends com.tkay.expressad.exoplayer.c.f[] r3 = r6.f     // Catch: java.lang.Throwable -> L8f
            int r4 = r6.h     // Catch: java.lang.Throwable -> L8f
            r5 = 1
            int r4 = r4 - r5
            r6.h = r4     // Catch: java.lang.Throwable -> L8f
            r3 = r3[r4]     // Catch: java.lang.Throwable -> L8f
            r6.k = r2     // Catch: java.lang.Throwable -> L8f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8f
            boolean r0 = r1.c()
            if (r0 == 0) goto L3a
            r0 = 4
            r3.b(r0)
            goto L62
        L3a:
            boolean r0 = r1.b()
            if (r0 == 0) goto L45
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r3.b(r0)
        L45:
            java.lang.Exception r0 = r6.k()     // Catch: java.lang.OutOfMemoryError -> L4c java.lang.RuntimeException -> L53
            r6.j = r0     // Catch: java.lang.OutOfMemoryError -> L4c java.lang.RuntimeException -> L53
            goto L59
        L4c:
            java.lang.Exception r0 = r6.j()
            r6.j = r0
            goto L59
        L53:
            java.lang.Exception r0 = r6.j()
            r6.j = r0
        L59:
            E extends java.lang.Exception r0 = r6.j
            if (r0 == 0) goto L62
            java.lang.Object r0 = r6.b
            monitor-enter(r0)
            monitor-exit(r0)
            return r2
        L62:
            java.lang.Object r0 = r6.b
            monitor-enter(r0)
            boolean r4 = r6.k     // Catch: java.lang.Throwable -> L8c
            if (r4 == 0) goto L6d
            r6.b(r3)     // Catch: java.lang.Throwable -> L8c
            goto L87
        L6d:
            boolean r4 = r3.b()     // Catch: java.lang.Throwable -> L8c
            if (r4 == 0) goto L7c
            int r2 = r6.m     // Catch: java.lang.Throwable -> L8c
            int r2 = r2 + r5
            r6.m = r2     // Catch: java.lang.Throwable -> L8c
            r6.b(r3)     // Catch: java.lang.Throwable -> L8c
            goto L87
        L7c:
            int r4 = r6.m     // Catch: java.lang.Throwable -> L8c
            r3.b = r4     // Catch: java.lang.Throwable -> L8c
            r6.m = r2     // Catch: java.lang.Throwable -> L8c
            java.util.ArrayDeque<O extends com.tkay.expressad.exoplayer.c.f> r2 = r6.d     // Catch: java.lang.Throwable -> L8c
            r2.addLast(r3)     // Catch: java.lang.Throwable -> L8c
        L87:
            r6.b(r1)     // Catch: java.lang.Throwable -> L8c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L8c
            return r5
        L8c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L8f:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private boolean p() {
            r1 = this;
            java.util.ArrayDeque<I extends com.tkay.expressad.exoplayer.c.e> r0 = r1.c
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le
            int r0 = r1.h
            if (r0 <= 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    public final void a(I r3) {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            r2.l()     // Catch: java.lang.Throwable -> L1d
            I extends com.tkay.expressad.exoplayer.c.e r1 = r2.i     // Catch: java.lang.Throwable -> L1d
            if (r3 != r1) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            com.tkay.expressad.exoplayer.k.a.a(r1)     // Catch: java.lang.Throwable -> L1d
            java.util.ArrayDeque<I extends com.tkay.expressad.exoplayer.c.e> r1 = r2.c     // Catch: java.lang.Throwable -> L1d
            r1.addLast(r3)     // Catch: java.lang.Throwable -> L1d
            r2.m()     // Catch: java.lang.Throwable -> L1d
            r3 = 0
            r2.i = r3     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    protected final void a(O r2) {
            r1 = this;
            java.lang.Object r0 = r1.b
            monitor-enter(r0)
            r1.b(r2)     // Catch: java.lang.Throwable -> Lb
            r1.m()     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    @Override
    public final void a(java.lang.Object r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.c.e r1 = (com.tkay.expressad.exoplayer.c.e) r1
            r0.a(r1)
            return
    }

    @Override
    public final java.lang.Object b() {
            r1 = this;
            com.tkay.expressad.exoplayer.c.e r0 = r1.f()
            return r0
    }

    @Override
    public final java.lang.Object c() {
            r1 = this;
            com.tkay.expressad.exoplayer.c.f r0 = r1.g()
            return r0
    }

    @Override
    public final void d() {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            r1 = 1
            r2.k = r1     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            r2.m = r1     // Catch: java.lang.Throwable -> L3f
            I extends com.tkay.expressad.exoplayer.c.e r1 = r2.i     // Catch: java.lang.Throwable -> L3f
            if (r1 == 0) goto L15
            I extends com.tkay.expressad.exoplayer.c.e r1 = r2.i     // Catch: java.lang.Throwable -> L3f
            r2.b(r1)     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            r2.i = r1     // Catch: java.lang.Throwable -> L3f
        L15:
            java.util.ArrayDeque<I extends com.tkay.expressad.exoplayer.c.e> r1 = r2.c     // Catch: java.lang.Throwable -> L3f
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3f
            if (r1 != 0) goto L29
            java.util.ArrayDeque<I extends com.tkay.expressad.exoplayer.c.e> r1 = r2.c     // Catch: java.lang.Throwable -> L3f
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L3f
            com.tkay.expressad.exoplayer.c.e r1 = (com.tkay.expressad.exoplayer.c.e) r1     // Catch: java.lang.Throwable -> L3f
            r2.b(r1)     // Catch: java.lang.Throwable -> L3f
            goto L15
        L29:
            java.util.ArrayDeque<O extends com.tkay.expressad.exoplayer.c.f> r1 = r2.d     // Catch: java.lang.Throwable -> L3f
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3f
            if (r1 != 0) goto L3d
            java.util.ArrayDeque<O extends com.tkay.expressad.exoplayer.c.f> r1 = r2.d     // Catch: java.lang.Throwable -> L3f
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L3f
            com.tkay.expressad.exoplayer.c.f r1 = (com.tkay.expressad.exoplayer.c.f) r1     // Catch: java.lang.Throwable -> L3f
            r2.b(r1)     // Catch: java.lang.Throwable -> L3f
            goto L29
        L3d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3f
            return
        L3f:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public final void e() {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            r1 = 1
            r2.l = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r1 = r2.b     // Catch: java.lang.Throwable -> L1a
            r1.notify()     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            java.lang.Thread r0 = r2.a     // Catch: java.lang.InterruptedException -> L12
            r0.join()     // Catch: java.lang.InterruptedException -> L12
            return
        L12:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
            return
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final I f() {
            r4 = this;
            java.lang.Object r0 = r4.b
            monitor-enter(r0)
            r4.l()     // Catch: java.lang.Throwable -> L24
            I extends com.tkay.expressad.exoplayer.c.e r1 = r4.i     // Catch: java.lang.Throwable -> L24
            r2 = 1
            if (r1 != 0) goto Ld
            r1 = r2
            goto Le
        Ld:
            r1 = 0
        Le:
            com.tkay.expressad.exoplayer.k.a.b(r1)     // Catch: java.lang.Throwable -> L24
            int r1 = r4.g     // Catch: java.lang.Throwable -> L24
            if (r1 != 0) goto L17
            r1 = 0
            goto L20
        L17:
            I extends com.tkay.expressad.exoplayer.c.e[] r1 = r4.e     // Catch: java.lang.Throwable -> L24
            int r3 = r4.g     // Catch: java.lang.Throwable -> L24
            int r3 = r3 - r2
            r4.g = r3     // Catch: java.lang.Throwable -> L24
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L24
        L20:
            r4.i = r1     // Catch: java.lang.Throwable -> L24
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            return r1
        L24:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final O g() {
            r2 = this;
            java.lang.Object r0 = r2.b
            monitor-enter(r0)
            r2.l()     // Catch: java.lang.Throwable -> L1b
            java.util.ArrayDeque<O extends com.tkay.expressad.exoplayer.c.f> r1 = r2.d     // Catch: java.lang.Throwable -> L1b
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L1b
            if (r1 == 0) goto L11
            r1 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return r1
        L11:
            java.util.ArrayDeque<O extends com.tkay.expressad.exoplayer.c.f> r1 = r2.d     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r1 = r1.removeFirst()     // Catch: java.lang.Throwable -> L1b
            com.tkay.expressad.exoplayer.c.f r1 = (com.tkay.expressad.exoplayer.c.f) r1     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return r1
        L1b:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    protected abstract I h();

    protected abstract O i();

    protected abstract E j();

    protected abstract E k();
}
