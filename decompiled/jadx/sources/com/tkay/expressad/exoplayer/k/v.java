package com.tkay.expressad.exoplayer.k;

import java.io.IOException;
import java.util.Collections;
import java.util.PriorityQueue;

/* JADX INFO: loaded from: classes3.dex */
public final class v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f6776a = new Object();
    private final PriorityQueue<Integer> b = new PriorityQueue<>(10, Collections.reverseOrder());
    private int c = Integer.MIN_VALUE;

    public static class a extends IOException {
        public a(int i, int i2) {
            super("Priority too low [priority=" + i + ", highest=" + i2 + "]");
        }
    }

    public final void a() {
        synchronized (this.f6776a) {
            this.b.add(0);
            this.c = Math.max(this.c, 0);
        }
    }

    public final void b() {
        synchronized (this.f6776a) {
            while (this.c != 0) {
                this.f6776a.wait();
            }
        }
    }

    private boolean b(int i) {
        boolean z;
        synchronized (this.f6776a) {
            z = this.c == i;
        }
        return z;
    }

    public final void a(int i) {
        synchronized (this.f6776a) {
            if (this.c != i) {
                throw new a(i, this.c);
            }
        }
    }

    public final void c() {
        synchronized (this.f6776a) {
            this.b.remove(0);
            this.c = this.b.isEmpty() ? Integer.MIN_VALUE : this.b.peek().intValue();
            this.f6776a.notifyAll();
        }
    }
}
