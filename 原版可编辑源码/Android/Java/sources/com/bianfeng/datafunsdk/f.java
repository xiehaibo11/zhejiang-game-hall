package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;

public class f implements Runnable {
    public DataFunBean a;
    public e b;
    public int c;

    public f(DataFunBean dataFunBean, e eVar) {
        this.a = dataFunBean;
        this.b = eVar;
    }

    @Override
    public void run() {
        if (this.c > 3) {
            this.b.d(this.a);
            return;
        }
        boolean zA = d.e().a(this.a);
        this.c++;
        if (zA) {
            this.b.a(this.a);
        } else {
            this.b.a(this);
        }
    }
}
