package com.igexin.b.a.d;

import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: loaded from: classes2.dex */
final class h implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final BlockingQueue<e> f2457a = new LinkedBlockingQueue();
    e b;
    e c;
    volatile int d;
    final /* synthetic */ g e;

    public h(g gVar, e eVar) {
        this.e = gVar;
        this.b = eVar;
    }

    public final void a() {
        this.f2457a.clear();
        this.c = null;
    }

    public final void a(e eVar) {
        if (this.d == 0) {
            this.d = eVar.z;
        }
        boolean z = true;
        while (z) {
            try {
                try {
                    eVar.b();
                    eVar.g();
                    eVar.e_();
                    if (!eVar.t) {
                        eVar.c();
                    }
                } catch (Exception e) {
                    com.igexin.b.a.c.b.a("TaskService" + e.toString(), new Object[0]);
                    eVar.t = true;
                    eVar.B = e;
                    eVar.t();
                    eVar.p();
                    this.e.i.a(eVar);
                    this.e.i.f();
                    if (!eVar.t) {
                        eVar.c();
                    }
                    if (eVar.k || !eVar.o || eVar.u == 0) {
                    }
                }
            } catch (Throwable th) {
                if (!eVar.t) {
                    eVar.c();
                }
                if (eVar.k || !eVar.o || eVar.u == 0) {
                    throw th;
                }
            }
            if (eVar.k || !eVar.o || eVar.u == 0) {
                eVar = null;
                z = false;
            }
        }
    }

    final e b() {
        while (this.d != 0) {
            try {
                e eVarPoll = this.f2457a.poll(this.e.e, TimeUnit.NANOSECONDS);
                if (eVarPoll != null) {
                    return eVarPoll;
                }
                if (this.f2457a.isEmpty()) {
                    ReentrantLock reentrantLock = this.e.c;
                    reentrantLock.lock();
                    try {
                        if (this.f2457a.isEmpty()) {
                            this.e.b.remove(Integer.valueOf(this.d));
                            this.c.e();
                            this.d = 0;
                            return null;
                        }
                    } finally {
                        reentrantLock.unlock();
                    }
                } else {
                    continue;
                }
            } catch (InterruptedException unused) {
            }
        }
        return null;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean zA = true;
        while (zA) {
            try {
                try {
                    e eVarB = this.b;
                    this.b = null;
                    while (true) {
                        if (eVarB == null) {
                            eVarB = b();
                            if (eVarB == null && (eVarB = this.e.a()) == null) {
                                break;
                            }
                        }
                        this.c = null;
                        a(eVarB);
                        this.c = eVarB;
                        eVarB = null;
                    }
                    zA = this.e.a(this);
                } catch (Exception e) {
                    com.igexin.b.a.c.b.a("TaskService|Worker|run()|error" + e.toString(), new Object[0]);
                    zA = this.e.a(this);
                    if (!zA) {
                    }
                }
                if (!zA) {
                    a();
                }
            } catch (Throwable th) {
                if (!this.e.a(this)) {
                    a();
                }
                throw th;
            }
        }
    }
}
