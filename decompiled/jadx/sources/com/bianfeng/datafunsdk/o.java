package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;

/* JADX INFO: compiled from: ByteDataRequest.java */
/* JADX INFO: loaded from: classes.dex */
public class o implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public s f1406a;
    public DataFunBean b;
    public r c;
    public int d = 0;

    public o(DataFunBean dataFunBean, r rVar) {
        this.c = rVar;
        this.b = dataFunBean;
        this.f1406a = new s(dataFunBean);
    }

    @Override // java.lang.Runnable
    public void run() {
        x.a("发送请求的次数" + this.d);
        if (this.d > 3) {
            this.c.b(this.b);
            return;
        }
        try {
            int iA = this.f1406a.a();
            this.d++;
            if (iA != 4) {
                this.c.a(this.b);
            } else {
                this.c.a(this);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
