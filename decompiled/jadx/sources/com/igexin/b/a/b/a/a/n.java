package com.igexin.b.a.b.a.a;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes2.dex */
public final class n extends a {
    private com.igexin.b.a.b.a.a.a.c L;
    private com.igexin.b.a.b.d M;
    public com.igexin.b.a.b.b i;
    p j;

    public n(p pVar, com.igexin.b.a.b.b bVar, com.igexin.b.a.b.d dVar) {
        super(-2036, null, bVar);
        this.i = bVar;
        this.M = dVar;
        this.j = pVar;
    }

    public void a(com.igexin.b.a.b.a.a.a.c cVar) {
        this.L = cVar;
    }

    @Override // com.igexin.b.a.d.e
    public void b() {
        super.b();
        Thread threadCurrentThread = Thread.currentThread();
        com.igexin.b.a.c.b.a("GS-W|" + threadCurrentThread + " running", new Object[0]);
        f fVarA = f.a();
        while (this.h && !threadCurrentThread.isInterrupted() && !this.e) {
            try {
                fVarA.f2432a.lock();
                if (fVarA.c.isEmpty() && this.h) {
                    fVarA.b.await();
                }
                m mVarPoll = fVarA.c.poll();
                if (mVarPoll != null && this.h) {
                    mVarPoll.d = this.M;
                    if (this.M != null && this.j != null && this.h) {
                        this.f = b.NORMAL;
                        if (this.L != null && this.h) {
                            this.L.a(mVarPoll);
                        }
                        this.j.a((byte[]) this.i.d(null, this.M, mVarPoll.c));
                        com.igexin.b.a.c.b.a("GS-W|" + mVarPoll.toString() + " --> " + mVarPoll.c.getClass().getName() + "-- send success", new Object[0]);
                    }
                }
            } finally {
                try {
                } finally {
                    try {
                        fVarA.f2432a.unlock();
                    } catch (Exception unused) {
                    }
                }
            }
        }
        this.e = true;
        com.igexin.b.a.c.b.a("GS-W|finish ~~~~~~", new Object[0]);
    }

    @Override // com.igexin.b.a.d.a.e
    public final int b_() {
        return -2036;
    }

    @Override // com.igexin.b.a.b.e, com.igexin.b.a.d.e
    public void f() {
        super.f();
        com.igexin.b.a.c.b.a("GS-W|wt dispose", new Object[0]);
        if (this.L != null) {
            if (this.f != b.EXCEPTION) {
                this.L.a(this);
            } else if (!TextUtils.isEmpty(this.g)) {
                this.L.a(new Exception(this.g));
            }
        }
        this.L = null;
    }

    public void j() {
        this.h = false;
        this.f = b.INTERRUPT;
        f fVarA = f.a();
        try {
            if (!this.e) {
                fVarA.f2432a.lock();
                fVarA.b.signalAll();
            }
        } catch (Exception unused) {
        } catch (Throwable th) {
            try {
                fVarA.f2432a.unlock();
            } catch (Exception unused2) {
            }
            throw th;
        }
        try {
            fVarA.f2432a.unlock();
        } catch (Exception unused3) {
        }
    }
}
