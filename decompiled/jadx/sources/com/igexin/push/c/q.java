package com.igexin.push.c;

import com.igexin.push.config.SDKUrlConfig;
import java.util.concurrent.Future;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2482a = "DT_" + q.class.getName();
    private static ThreadPoolExecutor b;
    private Future<j> c;
    private j d;
    private p e;
    private boolean f;

    public static void a() {
        ThreadPoolExecutor threadPoolExecutor;
        if (SDKUrlConfig.getXfrAddress().length != 1 || (threadPoolExecutor = b) == null) {
            return;
        }
        try {
            threadPoolExecutor.shutdownNow();
            b = null;
        } catch (Throwable unused) {
        }
    }

    private void g() {
        if (b == null) {
            b = new ThreadPoolExecutor(0, 12, 60L, TimeUnit.SECONDS, new SynchronousQueue());
        }
        this.c = b.submit(new r(this));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String h() {
        return this.d.a() + "|" + this.d.c();
    }

    private void i() {
        try {
            if (this.c == null || this.c.isCancelled() || this.c.isDone()) {
                return;
            }
            this.c.cancel(true);
            this.c = null;
        } catch (Exception unused) {
        }
    }

    public void a(j jVar) {
        this.d = jVar;
    }

    public void a(p pVar) {
        synchronized (p.class) {
            this.e = pVar;
        }
    }

    public void a(boolean z) {
        this.f = z;
    }

    public j b() {
        return this.d;
    }

    protected void c() {
        synchronized (p.class) {
            if (this.e != null) {
                g();
            }
        }
    }

    public void d() {
        com.igexin.b.a.c.b.a(f2482a + "|stop " + h() + " task", new Object[0]);
        i();
    }

    public void e() {
        a((p) null);
        i();
    }
}
