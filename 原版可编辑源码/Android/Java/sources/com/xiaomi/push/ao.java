package com.xiaomi.push;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;

public class ao {
    private int a;
    private Handler a;
    private a a;
    private volatile b a;
    private volatile boolean a;
    private final boolean b;

    class a extends Thread {
        private final LinkedBlockingQueue<b> a;

        public a() {
            super("PackageProcessor");
            this.a = new LinkedBlockingQueue<>();
        }

        private void a(int i, b bVar) {
            try {
                ao.this.a.sendMessage(ao.this.a.obtainMessage(i, bVar));
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }

        public void a(b bVar) {
            try {
                this.a.add(bVar);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override
        public void run() {
            long j = ao.this.a > 0 ? ao.this.a : Long.MAX_VALUE;
            while (!ao.this.a) {
                try {
                    b bVarPoll = this.a.poll(j, TimeUnit.SECONDS);
                    ao.this.a = bVarPoll;
                    if (bVarPoll != null) {
                        a(0, bVarPoll);
                        bVarPoll.b();
                        a(1, bVarPoll);
                    } else if (ao.this.a > 0) {
                        ao.this.a();
                    }
                } catch (InterruptedException e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
            }
        }
    }

    public abstract class b {
        public void a() {
        }

        public abstract void b();

        public void c() {
        }
    }

    public ao() {
        this(false);
    }

    public ao(boolean z) {
        this(z, 0);
    }

    public ao(boolean z, int i) {
        this.a = null;
        this.a = false;
        this.a = 0;
        this.a = new ap(this, Looper.getMainLooper());
        this.b = z;
        this.a = i;
    }

    private synchronized void a() {
        this.a = null;
        this.a = true;
    }

    public synchronized void a(b bVar) {
        if (this.a == null) {
            a aVar = new a();
            this.a = aVar;
            aVar.setDaemon(this.b);
            this.a = false;
            this.a.start();
        }
        this.a.a(bVar);
    }

    public void a(b bVar, long j) {
        this.a.postDelayed(new aq(this, bVar), j);
    }
}
