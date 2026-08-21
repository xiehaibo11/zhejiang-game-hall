package com.kwad.framework.filedownloader.b;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import com.kwad.framework.filedownloader.b.a;
import com.kwad.framework.filedownloader.f.f;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.locks.LockSupport;

public final class c implements a {
    private volatile Thread abS;
    private Handler handler;
    private volatile List<Integer> abQ = new CopyOnWriteArrayList();
    private AtomicInteger abR = new AtomicInteger();
    private final b abN = new b();
    private final d abO = new d();
    private final long abP = com.kwad.framework.filedownloader.f.e.vO().aeK;

    public c() {
        HandlerThread handlerThread = new HandlerThread(f.bs("RemitHandoverToDB"), 10);
        handlerThread.start();
        this.handler = new Handler(handlerThread.getLooper(), new Handler.Callback() {
            @Override
            public final boolean handleMessage(Message message) {
                int i = message.what;
                if (i == 0) {
                    if (c.this.abS != null) {
                        LockSupport.unpark(c.this.abS);
                        c.a(c.this, (Thread) null);
                    }
                    return false;
                }
                try {
                    c.this.abR.set(i);
                    c.this.bk(i);
                    c.this.abQ.add(Integer.valueOf(i));
                    return false;
                } finally {
                    c.this.abR.set(0);
                    if (c.this.abS != null) {
                        LockSupport.unpark(c.this.abS);
                        c.a(c.this, (Thread) null);
                    }
                }
            }
        });
    }

    static Thread a(c cVar, Thread thread) {
        cVar.abS = null;
        return null;
    }

    private void bk(int i) {
        this.abO.b(this.abN.bf(i));
        List<com.kwad.framework.filedownloader.d.a> listBg = this.abN.bg(i);
        this.abO.bh(i);
        Iterator<com.kwad.framework.filedownloader.d.a> it = listBg.iterator();
        while (it.hasNext()) {
            this.abO.a(it.next());
        }
    }

    private boolean bl(int i) {
        return !this.abQ.contains(Integer.valueOf(i));
    }

    private void bm(int i) {
        this.handler.removeMessages(i);
        if (this.abR.get() != i) {
            bk(i);
            return;
        }
        this.abS = Thread.currentThread();
        this.handler.sendEmptyMessage(0);
        LockSupport.park();
    }

    @Override
    public final void a(int i, int i2, long j) {
        this.abN.a(i, i2, j);
        if (bl(i)) {
            return;
        }
        this.abO.a(i, i2, j);
    }

    @Override
    public final void a(int i, long j, String str, String str2) {
        this.abN.a(i, j, str, str2);
        if (bl(i)) {
            return;
        }
        this.abO.a(i, j, str, str2);
    }

    @Override
    public final void a(int i, String str, long j, long j2, int i2) {
        this.abN.a(i, str, j, j2, i2);
        if (bl(i)) {
            return;
        }
        this.abO.a(i, str, j, j2, i2);
    }

    @Override
    public final void a(int i, Throwable th) {
        this.abN.a(i, th);
        if (bl(i)) {
            return;
        }
        this.abO.a(i, th);
    }

    @Override
    public final void a(int i, Throwable th, long j) {
        this.abN.a(i, th, j);
        if (bl(i)) {
            bm(i);
        }
        this.abO.a(i, th, j);
        this.abQ.remove(Integer.valueOf(i));
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.d.a aVar) {
        this.abN.a(aVar);
        if (bl(aVar.getId())) {
            return;
        }
        this.abO.a(aVar);
    }

    @Override
    public final void b(com.kwad.framework.filedownloader.d.c cVar) {
        this.abN.b(cVar);
        if (bl(cVar.getId())) {
            return;
        }
        this.abO.b(cVar);
    }

    @Override
    public final void be(int i) {
        this.handler.sendEmptyMessageDelayed(i, this.abP);
    }

    @Override
    public final com.kwad.framework.filedownloader.d.c bf(int i) {
        return this.abN.bf(i);
    }

    @Override
    public final List<com.kwad.framework.filedownloader.d.a> bg(int i) {
        return this.abN.bg(i);
    }

    @Override
    public final void bh(int i) {
        this.abN.bh(i);
        if (bl(i)) {
            return;
        }
        this.abO.bh(i);
    }

    @Override
    public final boolean bi(int i) {
        this.abO.bi(i);
        return this.abN.bi(i);
    }

    @Override
    public final void bj(int i) {
        this.abN.bj(i);
        if (bl(i)) {
            return;
        }
        this.abO.bj(i);
    }

    @Override
    public final void c(int i, long j) {
        this.abN.c(i, j);
        if (bl(i)) {
            return;
        }
        this.abO.c(i, j);
    }

    @Override
    public final void clear() {
        this.abN.clear();
        this.abO.clear();
    }

    @Override
    public final void d(int i, long j) {
        this.abN.d(i, j);
        if (bl(i)) {
            this.handler.removeMessages(i);
            if (this.abR.get() == i) {
                this.abS = Thread.currentThread();
                this.handler.sendEmptyMessage(0);
                LockSupport.park();
                this.abO.d(i, j);
            }
        } else {
            this.abO.d(i, j);
        }
        this.abQ.remove(Integer.valueOf(i));
    }

    @Override
    public final void e(int i, long j) {
        this.abN.e(i, j);
        if (bl(i)) {
            bm(i);
        }
        this.abO.e(i, j);
        this.abQ.remove(Integer.valueOf(i));
    }

    @Override
    public final void q(int i, int i2) {
        this.abN.q(i, i2);
        if (bl(i)) {
            return;
        }
        this.abO.q(i, i2);
    }

    @Override
    public final a.a uh() {
        return this.abO.a(this.abN.abK, this.abN.abL);
    }
}
