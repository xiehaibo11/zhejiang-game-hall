package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: compiled from: RequestQueueManager.java */
/* JADX INFO: loaded from: classes.dex */
public final class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ThreadPoolExecutor f1410a;
    public com.bianfeng.datafunsdk.a c;
    public LinkedBlockingQueue<Runnable> b = new LinkedBlockingQueue<>();
    public r d = new c();

    /* JADX INFO: compiled from: RequestQueueManager.java */
    public class a implements RejectedExecutionHandler {
        public a() {
        }

        @Override // java.util.concurrent.RejectedExecutionHandler
        public void rejectedExecution(Runnable runnable, ThreadPoolExecutor threadPoolExecutor) {
            t.this.b.add(runnable);
        }
    }

    /* JADX INFO: compiled from: RequestQueueManager.java */
    public class b implements Runnable {
        public b() {
        }

        @Override // java.lang.Runnable
        public void run() {
            t.b(t.this);
            throw null;
        }
    }

    /* JADX INFO: compiled from: RequestQueueManager.java */
    public class c implements r {
        public c() {
        }

        @Override // com.bianfeng.datafunsdk.r
        public void a(DataFunBean dataFunBean) {
            t.this.c.d(dataFunBean);
        }

        @Override // com.bianfeng.datafunsdk.r
        public void b(DataFunBean dataFunBean) {
            t.this.c.e(dataFunBean);
        }

        @Override // com.bianfeng.datafunsdk.r
        public void a(o oVar) {
            t.this.c.a(oVar);
        }
    }

    public t() {
        this.f1410a = null;
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors() + 1;
        int iAvailableProcessors2 = (Runtime.getRuntime().availableProcessors() * 2) + 1;
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors2, iAvailableProcessors2, TimeUnit.SECONDS, this.b, new a());
        this.f1410a = threadPoolExecutor;
        threadPoolExecutor.execute(new b());
    }

    public static /* synthetic */ void b(t tVar) {
        tVar.a();
        throw null;
    }

    public void a(com.bianfeng.datafunsdk.a aVar) {
        this.c = aVar;
    }

    public boolean b() {
        return this.b.isEmpty();
    }

    public void a(DataFunBean dataFunBean) {
        try {
            this.b.add(new o(dataFunBean, this.d));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void a(o oVar) {
        this.b.add(oVar);
    }

    public final void a() {
        while (true) {
            try {
                this.f1410a.execute(this.b.take());
            } catch (InterruptedException e) {
                e.printStackTrace();
                x.a("测试---" + e);
            }
        }
    }
}
