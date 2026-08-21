package com.igexin.b.a.d;

public class c {
    private final java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> a;
    private final java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> b;
    private java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> c;

    public c() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            r1.a = r0
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            r1.b = r0
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r0 = r1.a
            r1.c = r0
            return
    }

    public synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r0 = r1.a     // Catch: java.lang.Throwable -> L7
            r1.c = r0     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized void a(com.igexin.b.a.d.a.e r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r0 = r1.c     // Catch: java.lang.Throwable -> L8
            r0.offer(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void b() {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r0 = r2.b     // Catch: java.lang.Throwable -> L11
            r2.c = r0     // Catch: java.lang.Throwable -> L11
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r1 = r2.a     // Catch: java.lang.Throwable -> L11
            r0.addAll(r1)     // Catch: java.lang.Throwable -> L11
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r0 = r2.a     // Catch: java.lang.Throwable -> L11
            r0.clear()     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return
        L11:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized boolean c() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r0 = r1.c     // Catch: java.lang.Throwable -> L9
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized com.igexin.b.a.d.a.e d() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> r0 = r1.c     // Catch: java.lang.Throwable -> Lb
            java.lang.Object r0 = r0.poll()     // Catch: java.lang.Throwable -> Lb
            com.igexin.b.a.d.a.e r0 = (com.igexin.b.a.d.a.e) r0     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return r0
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
