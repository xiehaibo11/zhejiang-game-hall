package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;

public class i implements Runnable {
    public DataFunBean a;
    public e b;

    public i(DataFunBean dataFunBean, e eVar) {
        this.b = eVar;
        this.a = dataFunBean;
    }

    @Override
    public void run() {
        x.a("InsertEventTask--开始插入数据->");
        try {
            d.e().a(this.a, this.b);
        } catch (Exception e) {
            e.printStackTrace();
            x.a("InsertEventTask--->" + e.getMessage());
        }
    }
}
