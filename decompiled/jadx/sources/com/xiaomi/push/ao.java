package com.xiaomi.push;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes4.dex */
public class ao {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8037a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Handler f115a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private a f116a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile b f117a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile boolean f118a;
    private final boolean b;

    class a extends Thread {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private final LinkedBlockingQueue<b> f119a;

        public a() {
            super("PackageProcessor");
            this.f119a = new LinkedBlockingQueue<>();
        }

        private void a(int i, b bVar) {
            try {
                ao.this.f115a.sendMessage(ao.this.f115a.obtainMessage(i, bVar));
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }

        public void a(b bVar) {
            try {
                this.f119a.add(bVar);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            long j = ao.this.f8037a > 0 ? ao.this.f8037a : Long.MAX_VALUE;
            while (!ao.this.f118a) {
                try {
                    b bVarPoll = this.f119a.poll(j, TimeUnit.SECONDS);
                    ao.this.f117a = bVarPoll;
                    if (bVarPoll != null) {
                        a(0, bVarPoll);
                        bVarPoll.b();
                        a(1, bVarPoll);
                    } else if (ao.this.f8037a > 0) {
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

        /* JADX INFO: renamed from: c */
        public void mo221c() {
        }
    }

    public ao() {
        this(false);
    }

    public ao(boolean z) {
        this(z, 0);
    }

    public ao(boolean z, int i) {
        this.f115a = null;
        this.f118a = false;
        this.f8037a = 0;
        this.f115a = new ap(this, Looper.getMainLooper());
        this.b = z;
        this.f8037a = i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a() {
        this.f116a = null;
        this.f118a = true;
    }

    public synchronized void a(b bVar) {
        if (this.f116a == null) {
            a aVar = new a();
            this.f116a = aVar;
            aVar.setDaemon(this.b);
            this.f118a = false;
            this.f116a.start();
        }
        this.f116a.a(bVar);
    }

    public void a(b bVar, long j) {
        this.f115a.postDelayed(new aq(this, bVar), j);
    }
}
