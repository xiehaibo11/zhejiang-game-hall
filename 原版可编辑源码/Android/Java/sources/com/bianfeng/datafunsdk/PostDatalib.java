package com.bianfeng.datafunsdk;

import android.content.Context;
import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.datafunsdk.timer.SelectEventTimer;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.util.Iterator;
import java.util.List;

public class PostDatalib {
    public static volatile PostDatalib dataFun;
    public com.bianfeng.datafunsdk.a dataFunCallback = new a();
    public k dbQueueManager;
    public SelectEventTimer eventTimer;
    public boolean isFirst;
    public t requestManager;

    public class a implements com.bianfeng.datafunsdk.a {

        public class a implements Runnable {
            public final DataFunBean a;

            public a(DataFunBean dataFunBean) {
                this.a = dataFunBean;
            }

            @Override
            public void run() {
                x.a("PostDatalib 插入数据成功--");
                PostDatalib.this.postByteDataWhitHttp(this.a);
            }
        }

        public class b implements Runnable {
            public final DataFunBean a;

            public b(DataFunBean dataFunBean) {
                this.a = dataFunBean;
            }

            @Override
            public void run() {
                x.a("PostDatalib 插入数据失败--");
                PostDatalib.this.postByteDataWhitHttp(this.a);
            }
        }

        public class c implements Runnable {
            public final List a;

            public c(List list) {
                this.a = list;
            }

            @Override
            public void run() {
                x.a("PostDatalib 插入数据失败--" + this.a.size());
                PostDatalib.this.postByteDataWhitHttp((List<DataFunBean>) this.a);
            }
        }

        public class d implements Runnable {
            public d() {
            }

            @Override
            public void run() {
                x.a("PostDatalib 查询无结果--");
                PostDatalib.this.cancelTimer();
                if (y.a() == com.bianfeng.datafunsdk.g.b.ordinal()) {
                    PostDatalib.this.delBd();
                }
            }
        }

        public class e implements Runnable {
            public e() {
            }

            @Override
            public void run() {
                x.a("PostDatalib 查询开始--");
                PostDatalib.this.selectByteData();
            }
        }

        public class f implements Runnable {
            public final com.bianfeng.datafunsdk.f a;

            public f(com.bianfeng.datafunsdk.f fVar) {
                this.a = fVar;
            }

            @Override
            public void run() {
                x.a("PostDatalib  删除失败，=====要删除--");
                PostDatalib.this.delByteDataTask(this.a);
            }
        }

        public class g implements Runnable {
            public final DataFunBean a;

            public g(DataFunBean dataFunBean) {
                this.a = dataFunBean;
            }

            @Override
            public void run() {
                x.a("PostDatalib suc--" + this.a.getData());
                PostDatalib.this.delByteData(this.a);
            }
        }

        public class h implements Runnable {
            public final o a;

            public h(o oVar) {
                this.a = oVar;
            }

            @Override
            public void run() {
                x.a("PostDatalib  上传失败，重复上抛");
                PostDatalib.this.postByteDataWhitHttp(this.a);
            }
        }

        public a() {
        }

        @Override
        public void a(List<DataFunBean> list) {
            Iterator<DataFunBean> it = list.iterator();
            while (it.hasNext()) {
                x.a("PostDatalib 查询到数据成功--" + it.next());
            }
            u.a(new c(list));
        }

        @Override
        public void b(DataFunBean dataFunBean) {
            u.a(new b(dataFunBean));
        }

        @Override
        public void c(DataFunBean dataFunBean) {
            u.a(new a(dataFunBean));
        }

        @Override
        public void d(DataFunBean dataFunBean) {
            u.a(new g(dataFunBean));
        }

        @Override
        public void e(DataFunBean dataFunBean) {
            x.a("PostDatalib 上传失败 id==" + dataFunBean.getId());
            PostDatalib.this.startTimer();
        }

        @Override
        public void f(DataFunBean dataFunBean) {
            x.a("PostDatalib 删除失败 超过三次了 id==" + dataFunBean.getId());
        }

        @Override
        public void b() {
            u.a(new d());
        }

        @Override
        public void a() {
            u.a(new e());
        }

        @Override
        public void a(DataFunBean dataFunBean) {
            x.a("PostDatalib 删除成功--" + dataFunBean.getId());
        }

        @Override
        public void a(com.bianfeng.datafunsdk.f fVar) {
            u.a(new f(fVar));
        }

        @Override
        public void a(o oVar) {
            u.a(new h(oVar));
        }
    }

    private void delBd() {
        x.a("PostDatalib delBd--");
        k kVar = this.dbQueueManager;
        if (kVar != null) {
            kVar.a();
        }
    }

    private void delByteData(DataFunBean dataFunBean) {
        k kVar = this.dbQueueManager;
        if (kVar == null) {
            return;
        }
        kVar.b(dataFunBean);
    }

    private void delByteDataTask(f fVar) {
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

    private void postByteDataWhitHttp(DataFunBean dataFunBean) {
        t tVar = this.requestManager;
        if (tVar != null) {
            tVar.a(dataFunBean);
        }
    }

    private void selectByteData() {
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

    private void postByteDataWhitHttp(o oVar) {
        t tVar = this.requestManager;
        if (tVar == null) {
            return;
        }
        tVar.a(oVar);
    }

    private void postByteDataWhitHttp(List<DataFunBean> list) {
        if (this.requestManager == null) {
            return;
        }
        for (DataFunBean dataFunBean : list) {
            x.a("PostDatalib 查询到的数据上抛--");
            this.requestManager.a(dataFunBean);
        }
    }
}
