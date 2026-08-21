package com.loc;

import com.loc.cs;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executor;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ThreadPoolExecutor;

/* JADX INFO: compiled from: BasePool.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class ct {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected ThreadPoolExecutor f2913a;
    private ConcurrentHashMap<cs, Future<?>> c = new ConcurrentHashMap<>();
    protected cs.a b = new cs.a() { // from class: com.loc.ct.1
        @Override // com.loc.cs.a
        public final void a(cs csVar) {
            ct.this.a(csVar);
        }
    };

    private synchronized void a(cs csVar, Future<?> future) {
        try {
            this.c.put(csVar, future);
        } catch (Throwable th) {
            av.b(th, "TPool", "addQueue");
            th.printStackTrace();
        }
    }

    private synchronized boolean c(cs csVar) {
        boolean zContainsKey;
        try {
            zContainsKey = this.c.containsKey(csVar);
        } catch (Throwable th) {
            av.b(th, "TPool", "contain");
            th.printStackTrace();
            zContainsKey = false;
        }
        return zContainsKey;
    }

    protected final synchronized void a(cs csVar) {
        try {
            this.c.remove(csVar);
        } catch (Throwable th) {
            av.b(th, "TPool", "removeQueue");
            th.printStackTrace();
        }
    }

    public final Executor b() {
        return this.f2913a;
    }

    public final void b(cs csVar) {
        ThreadPoolExecutor threadPoolExecutor;
        if (c(csVar) || (threadPoolExecutor = this.f2913a) == null || threadPoolExecutor.isShutdown()) {
            return;
        }
        csVar.e = this.b;
        try {
            Future<?> futureSubmit = this.f2913a.submit(csVar);
            if (futureSubmit == null) {
                return;
            }
            a(csVar, futureSubmit);
        } catch (RejectedExecutionException e) {
            av.b(e, "TPool", "addTask");
        }
    }
}
