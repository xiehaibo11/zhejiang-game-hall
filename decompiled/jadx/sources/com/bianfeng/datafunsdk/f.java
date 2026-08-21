package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;

/* JADX INFO: compiled from: DelByteDataTask.java */
/* JADX INFO: loaded from: classes.dex */
public class f implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public DataFunBean f1396a;
    public e b;
    public int c;

    public f(DataFunBean dataFunBean, e eVar) {
        this.f1396a = dataFunBean;
        this.b = eVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.c > 3) {
            this.b.d(this.f1396a);
            return;
        }
        boolean zA = d.e().a(this.f1396a);
        this.c++;
        if (zA) {
            this.b.a(this.f1396a);
        } else {
            this.b.a(this);
        }
    }
}
