package com.kwad.framework.filedownloader;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;

public final class j {
    static int abd = 10;
    static int abe = 5;
    private final Executor aaZ;
    private final LinkedBlockingQueue<t> aba;
    private final Object abb;
    private final ArrayList<t> abc;
    private final Handler handler;

    static final class a {
        private static final j abh = new j(0);
    }

    static class b implements Handler.Callback {
        private b() {
        }

        b(byte b) {
            this();
        }

        private static void a(ArrayList<t> arrayList) {
            Iterator<t> it = arrayList.iterator();
            while (it.hasNext()) {
                it.next().tJ();
            }
            arrayList.clear();
        }

        @Override
        public final boolean handleMessage(Message message) {
            if (message.what == 1) {
                ((t) message.obj).tJ();
            } else if (message.what == 2) {
                a((ArrayList) message.obj);
                j.tF().push();
            }
            return true;
        }
    }

    private j() {
        this.aaZ = com.kwad.framework.filedownloader.f.b.j(5, "BlockCompleted");
        this.abb = new Object();
        this.abc = new ArrayList<>();
        this.handler = new Handler(Looper.getMainLooper(), new b((byte) 0));
        this.aba = new LinkedBlockingQueue<>();
    }

    j(byte b2) {
        this();
    }

    private void a(final t tVar, boolean z) {
        if (tVar.tK()) {
            tVar.tJ();
            return;
        }
        if (tVar.tL()) {
            this.aaZ.execute(new Runnable() {
                @Override
                public final void run() {
                    tVar.tJ();
                }
            });
            return;
        }
        if (!tG() && !this.aba.isEmpty()) {
            synchronized (this.abb) {
                if (!this.aba.isEmpty()) {
                    Iterator<t> it = this.aba.iterator();
                    while (it.hasNext()) {
                        b(it.next());
                    }
                }
                this.aba.clear();
            }
        }
        if (tG()) {
            c(tVar);
        } else {
            b(tVar);
        }
    }

    private void b(t tVar) {
        Handler handler = this.handler;
        handler.sendMessage(handler.obtainMessage(1, tVar));
    }

    private void c(t tVar) {
        synchronized (this.abb) {
            this.aba.offer(tVar);
        }
        push();
    }

    private void push() {
        synchronized (this.abb) {
            if (this.abc.isEmpty()) {
                if (this.aba.isEmpty()) {
                    return;
                }
                int i = 0;
                if (tG()) {
                    int i2 = abd;
                    int iMin = Math.min(this.aba.size(), abe);
                    while (i < iMin) {
                        this.abc.add(this.aba.remove());
                        i++;
                    }
                    i = i2;
                } else {
                    this.aba.drainTo(this.abc);
                }
                Handler handler = this.handler;
                handler.sendMessageDelayed(handler.obtainMessage(2, this.abc), i);
            }
        }
    }

    public static j tF() {
        return a.abh;
    }

    private static boolean tG() {
        return abd > 0;
    }

    final void a(t tVar) {
        a(tVar, false);
    }
}
