package com.igexin.b.a.d;

import java.util.HashMap;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: loaded from: classes2.dex */
final class g {
    volatile int g;
    final /* synthetic */ f i;
    final ReentrantLock c = new ReentrantLock();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final BlockingQueue<e> f2456a = new SynchronousQueue();
    final HashMap<Integer, h> b = new HashMap<>();
    volatile long e = TimeUnit.SECONDS.toNanos(60);
    volatile int f = 0;
    ThreadFactory d = new i(this);
    volatile int h = Integer.MAX_VALUE;

    public g(f fVar) {
        this.i = fVar;
    }

    final e a() {
        e eVarPoll;
        while (true) {
            try {
                eVarPoll = this.g > this.f ? this.f2456a.poll(this.e, TimeUnit.NANOSECONDS) : this.f2456a.take();
            } catch (InterruptedException unused) {
            }
            if (eVarPoll != null) {
                return eVarPoll;
            }
            if (this.f2456a.isEmpty()) {
                return null;
            }
        }
    }

    final void a(e eVar) {
        if (eVar == null) {
            throw null;
        }
        if (eVar.z != 0) {
            ReentrantLock reentrantLock = this.c;
            reentrantLock.lock();
            try {
                h hVar = this.b.get(Integer.valueOf(eVar.z));
                if (hVar != null) {
                    hVar.f2457a.offer(eVar);
                    return;
                }
            } finally {
                reentrantLock.unlock();
            }
        }
        b(eVar);
    }

    final boolean a(h hVar) {
        ReentrantLock reentrantLock = this.c;
        reentrantLock.lock();
        try {
            int i = this.g - 1;
            this.g = i;
            if (i == 0 && !this.f2456a.isEmpty()) {
                Thread threadF = f(null);
                if (threadF != null) {
                    threadF.start();
                }
            } else if (!hVar.f2457a.isEmpty()) {
                return true;
            }
            this.b.remove(Integer.valueOf(hVar.d));
            return false;
        } finally {
            reentrantLock.unlock();
        }
    }

    final void b(e eVar) {
        if (this.g >= this.f || !c(eVar)) {
            if (!this.f2456a.offer(eVar)) {
                if (!d(eVar)) {
                }
            } else if (this.g == 0) {
                e(eVar);
            }
        }
    }

    final boolean c(e eVar) {
        ReentrantLock reentrantLock = this.c;
        reentrantLock.lock();
        try {
            Thread threadF = this.g < this.f ? f(eVar) : null;
            if (threadF == null) {
                return false;
            }
            threadF.start();
            return true;
        } finally {
            reentrantLock.unlock();
        }
    }

    final boolean d(e eVar) {
        ReentrantLock reentrantLock = this.c;
        reentrantLock.lock();
        try {
            Thread threadF = this.g < this.h ? f(eVar) : null;
            if (threadF == null) {
                return false;
            }
            threadF.start();
            return true;
        } finally {
            reentrantLock.unlock();
        }
    }

    final void e(e eVar) {
        ReentrantLock reentrantLock = this.c;
        reentrantLock.lock();
        try {
            Thread threadF = null;
            if (this.g < Math.max(this.f, 1) && !this.f2456a.isEmpty()) {
                threadF = f(null);
            }
            if (threadF != null) {
                threadF.start();
            }
        } finally {
            reentrantLock.unlock();
        }
    }

    final Thread f(e eVar) {
        h hVar = new h(this, eVar);
        if (eVar != null && eVar.z != 0) {
            this.b.put(Integer.valueOf(eVar.z), hVar);
        }
        Thread threadNewThread = this.d.newThread(hVar);
        if (threadNewThread != null) {
            this.g++;
        }
        return threadNewThread;
    }
}
