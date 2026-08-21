package com.igexin.b.a.d;

import java.util.concurrent.ConcurrentLinkedQueue;

public class c {
    private final ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> a = new ConcurrentLinkedQueue<>();
    private final ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> b = new ConcurrentLinkedQueue<>();
    private ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> c = this.a;

    public synchronized void a() {
        this.c = this.a;
    }

    public synchronized void a(com.igexin.b.a.d.a.e eVar) {
        this.c.offer(eVar);
    }

    public synchronized void b() {
        ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> concurrentLinkedQueue = this.b;
        this.c = concurrentLinkedQueue;
        concurrentLinkedQueue.addAll(this.a);
        this.a.clear();
    }

    public synchronized boolean c() {
        return this.c.isEmpty();
    }

    public synchronized com.igexin.b.a.d.a.e d() {
        return this.c.poll();
    }
}
