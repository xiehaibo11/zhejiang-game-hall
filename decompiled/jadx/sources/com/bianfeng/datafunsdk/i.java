package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;

/* JADX INFO: compiled from: InsertByteDataTask.java */
/* JADX INFO: loaded from: classes.dex */
public class i implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public DataFunBean f1398a;
    public e b;

    public i(DataFunBean dataFunBean, e eVar) {
        this.b = eVar;
        this.f1398a = dataFunBean;
    }

    @Override // java.lang.Runnable
    public void run() {
        x.a("InsertEventTask--开始插入数据->");
        try {
            d.e().a(this.f1398a, this.b);
        } catch (Exception e) {
            e.printStackTrace();
            x.a("InsertEventTask--->" + e.getMessage());
        }
    }
}
