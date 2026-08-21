package com.bianfeng.datafunsdk;

import android.content.Context;
import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.datafunsdk.timer.SelectEventTimer;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class PostDatalib {
    public static volatile PostDatalib dataFun;
    public com.bianfeng.datafunsdk.a dataFunCallback = new a();
    public k dbQueueManager;
    public SelectEventTimer eventTimer;
    public boolean isFirst;
    public t requestManager;

    public class a implements com.bianfeng.datafunsdk.a {

        /* JADX INFO: renamed from: com.bianfeng.datafunsdk.PostDatalib$a$a, reason: collision with other inner class name */
        public class RunnableC0032a implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ DataFunBean f1388a;

            public RunnableC0032a(DataFunBean dataFunBean) {
                this.f1388a = dataFunBean;
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib 插入数据成功--");
                PostDatalib.this.postByteDataWhitHttp(this.f1388a);
            }
        }

        public class b implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ DataFunBean f1389a;

            public b(DataFunBean dataFunBean) {
                this.f1389a = dataFunBean;
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib 插入数据失败--");
                PostDatalib.this.postByteDataWhitHttp(this.f1389a);
            }
        }

        public class c implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ List f1390a;

            public c(List list) {
                this.f1390a = list;
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib 插入数据失败--" + this.f1390a.size());
                PostDatalib.this.postByteDataWhitHttp((List<DataFunBean>) this.f1390a);
            }
        }

        public class d implements Runnable {
            public d() {
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib 查询无结果--");
                PostDatalib.this.cancelTimer();
                if (y.a() == com.bianfeng.datafunsdk.g.NEED_DEL.ordinal()) {
                    PostDatalib.this.delBd();
                }
            }
        }

        public class e implements Runnable {
            public e() {
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib 查询开始--");
                PostDatalib.this.selectByteData();
            }
        }

        public class f implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ com.bianfeng.datafunsdk.f f1393a;

            public f(com.bianfeng.datafunsdk.f fVar) {
                this.f1393a = fVar;
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib  删除失败，=====要删除--");
                PostDatalib.this.delByteDataTask(this.f1393a);
            }
        }

        public class g implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ DataFunBean f1394a;

            public g(DataFunBean dataFunBean) {
                this.f1394a = dataFunBean;
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib suc--" + this.f1394a.getData());
                PostDatalib.this.delByteData(this.f1394a);
            }
        }

        public class h implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final /* synthetic */ o f1395a;

            public h(o oVar) {
                this.f1395a = oVar;
            }

            @Override // java.lang.Runnable
            public void run() {
                x.a("PostDatalib  上传失败，重复上抛");
                PostDatalib.this.postByteDataWhitHttp(this.f1395a);
            }
        }

        public a() {
        }

        @Override // com.bianfeng.datafunsdk.a
        public void a(List<DataFunBean> list) {
            Iterator<DataFunBean> it = list.iterator();
            while (it.hasNext()) {
                x.a("PostDatalib 查询到数据成功--" + it.next());
            }
            u.a(new c(list));
        }

        @Override // com.bianfeng.datafunsdk.a
        public void b(DataFunBean dataFunBean) {
            u.a(new b(dataFunBean));
        }

        @Override // com.bianfeng.datafunsdk.a
        public void c(DataFunBean dataFunBean) {
            u.a(new RunnableC0032a(dataFunBean));
        }

        @Override // com.bianfeng.datafunsdk.a
        public void d(DataFunBean dataFunBean) {
            u.a(new g(dataFunBean));
        }

        @Override // com.bianfeng.datafunsdk.a
        public void e(DataFunBean dataFunBean) {
            x.a("PostDatalib 上传失败 id==" + dataFunBean.getId());
            PostDatalib.this.startTimer();
        }

        @Override // com.bianfeng.datafunsdk.a
        public void f(DataFunBean dataFunBean) {
            x.a("PostDatalib 删除失败 超过三次了 id==" + dataFunBean.getId());
        }

        @Override // com.bianfeng.datafunsdk.a
        public void b() {
            u.a(new d());
        }

        @Override // com.bianfeng.datafunsdk.a
        public void a() {
            u.a(new e());
        }

        @Override // com.bianfeng.datafunsdk.a
        public void a(DataFunBean dataFunBean) {
            x.a("PostDatalib 删除成功--" + dataFunBean.getId());
        }

        @Override // com.bianfeng.datafunsdk.a
        public void a(com.bianfeng.datafunsdk.f fVar) {
            u.a(new f(fVar));
        }

        @Override // com.bianfeng.datafunsdk.a
        public void a(o oVar) {
            u.a(new h(oVar));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void delBd() {
        x.a("PostDatalib delBd--");
        k kVar = this.dbQueueManager;
        if (kVar != null) {
            kVar.a();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void delByteData(DataFunBean dataFunBean) {
        k kVar = this.dbQueueManager;
        if (kVar == null) {
            return;
        }
        kVar.b(dataFunBean);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void delByteDataTask(f fVar) {
        k kVar = this.dbQueueManager;
        if (kVar == null) {
            return;
        }
        kVar.a(fVar);
    }

    public static PostDatalib getInstance() {
        if (dataFun == null) {
            synchronized (PostDatalib.class) {
                if (dataFun == null) {
                    dataFun = new PostDatalib();
                }
            }
        }
        return dataFun;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void postByteDataWhitHttp(DataFunBean dataFunBean) {
        t tVar = this.requestManager;
        if (tVar != null) {
            tVar.a(dataFunBean);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void selectByteData() {
        k kVar = this.dbQueueManager;
        if (kVar == null) {
            return;
        }
        kVar.c();
    }

    public void cancelTimer() {
        SelectEventTimer selectEventTimer = this.eventTimer;
        if (selectEventTimer != null) {
            selectEventTimer.cancel();
        }
    }

    public String getVersion() {
        return "1.1.0";
    }

    public void init(Context context) {
        if (this.isFirst) {
            return;
        }
        synchronized (PostDatalib.class) {
            if (!this.isFirst) {
                this.isFirst = true;
                UtilsSdk.initContext(context);
                this.requestManager = new t();
                k kVar = new k();
                this.dbQueueManager = kVar;
                kVar.a(this.dataFunCallback);
                this.requestManager.a(this.dataFunCallback);
                SelectEventTimer selectEventTimer = SelectEventTimer.getInstance();
                this.eventTimer = selectEventTimer;
                selectEventTimer.setCallback(this.dataFunCallback);
                this.eventTimer.start();
            }
        }
    }

    public void postByteData(DataFunBean dataFunBean) {
        x.a("PostDatalib 开始插入数据--");
        k kVar = this.dbQueueManager;
        if (kVar != null) {
            kVar.a(dataFunBean);
        }
    }

    public void startTimer() {
        k kVar = this.dbQueueManager;
        if (kVar == null || this.requestManager == null || !kVar.b() || !this.requestManager.b()) {
            return;
        }
        x.a("PostDatalib startTimer--");
        this.eventTimer.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void postByteDataWhitHttp(o oVar) {
        t tVar = this.requestManager;
        if (tVar == null) {
            return;
        }
        tVar.a(oVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void postByteDataWhitHttp(List<DataFunBean> list) {
        if (this.requestManager == null) {
            return;
        }
        for (DataFunBean dataFunBean : list) {
            x.a("PostDatalib 查询到的数据上抛--");
            this.requestManager.a(dataFunBean);
        }
    }
}
