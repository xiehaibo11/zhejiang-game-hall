package com.igexin.b.a.d;

import java.util.concurrent.ConcurrentLinkedQueue;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> f2452a = new ConcurrentLinkedQueue<>();
    private final ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> b = new ConcurrentLinkedQueue<>();
    private ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> c = this.f2452a;

    public synchronized void a() {
        this.c = this.f2452a;
    }

    public synchronized void a(com.igexin.b.a.d.a.e eVar) {
        this.c.offer(eVar);
    }

    public synchronized void b() {
        ConcurrentLinkedQueue<com.igexin.b.a.d.a.e> concurrentLinkedQueue = this.b;
        this.c = concurrentLinkedQueue;
        concurrentLinkedQueue.addAll(this.f2452a);
        this.f2452a.clear();
    }

    public synchronized boolean c() {
        return this.c.isEmpty();
    }

    public synchronized com.igexin.b.a.d.a.e d() {
        return this.c.poll();
    }
}
