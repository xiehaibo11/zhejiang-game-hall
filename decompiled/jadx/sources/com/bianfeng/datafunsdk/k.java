package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import java.util.List;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: compiled from: DBQueueManager.java */
/* JADX INFO: loaded from: classes.dex */
public class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ThreadPoolExecutor f1400a;
    public com.bianfeng.datafunsdk.a c;
    public LinkedBlockingQueue<Runnable> b = new LinkedBlockingQueue<>();
    public e d = new c();

    /* JADX INFO: compiled from: DBQueueManager.java */
    public class a implements RejectedExecutionHandler {
        public a() {
        }

        @Override // java.util.concurrent.RejectedExecutionHandler
        public void rejectedExecution(Runnable runnable, ThreadPoolExecutor threadPoolExecutor) {
            k.this.b.add(runnable);
        }
    }

    /* JADX INFO: compiled from: DBQueueManager.java */
    public class b implements Runnable {
        public b() {
        }

        @Override // java.lang.Runnable
        public void run() {
            try {
                k.b(k.this);
                throw null;
            } catch (YmnException e) {
                e.printStackTrace();
            }
        }
    }

    /* JADX INFO: compiled from: DBQueueManager.java */
    public class c implements e {
        public c() {
        }

        @Override // com.bianfeng.datafunsdk.e
        public void a(List<DataFunBean> list) {
            k.this.c.a(list);
        }

        @Override // com.bianfeng.datafunsdk.e
        public void b(DataFunBean dataFunBean) {
            k.this.c.c(dataFunBean);
        }

        @Override // com.bianfeng.datafunsdk.e
        public void c(DataFunBean dataFunBean) {
            x.a("onInsertFail 失败");
            k.this.c.b(dataFunBean);
        }

        @Override // com.bianfeng.datafunsdk.e
        public void d(DataFunBean dataFunBean) {
            k.this.c.f(dataFunBean);
        }

        @Override // com.bianfeng.datafunsdk.e
        public void a() {
            k.this.c.b();
        }

        @Override // com.bianfeng.datafunsdk.e
        public void a(DataFunBean dataFunBean) {
            k.this.c.a(dataFunBean);
        }

        @Override // com.bianfeng.datafunsdk.e
        public void a(f fVar) {
            k.this.c.a(fVar);
        }
    }

    public k() {
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors() + 1;
        int iAvailableProcessors2 = (Runtime.getRuntime().availableProcessors() * 2) + 1;
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors2, iAvailableProcessors2, TimeUnit.SECONDS, this.b, new a());
        this.f1400a = threadPoolExecutor;
        threadPoolExecutor.execute(new b());
    }

    public static /* synthetic */ void b(k kVar) throws YmnException {
        kVar.d();
        throw null;
    }

    public final void d() throws YmnException {
        while (true) {
            try {
                this.f1400a.execute(this.b.take());
            } catch (Exception e) {
                throw new YmnException(e);
            }
        }
    }

    public void a(com.bianfeng.datafunsdk.a aVar) {
        this.c = aVar;
    }

    public boolean b() {
        return this.b.isEmpty();
    }

    public void c() {
        this.b.add(new j(this.d));
    }

    public void a(DataFunBean dataFunBean) {
        x.a("PostDatalib 开始插入数据--addDbByteData");
        new i(dataFunBean, this.d).run();
    }

    public void b(DataFunBean dataFunBean) {
        this.b.add(new f(dataFunBean, this.d));
    }

    public void a(f fVar) {
        this.b.add(fVar);
    }

    public void a() {
        this.b.add(new h());
    }
}
