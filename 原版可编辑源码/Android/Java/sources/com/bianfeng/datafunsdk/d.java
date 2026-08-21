package com.bianfeng.datafunsdk;

import com.bianfeng.datafunsdk.bean.DataFunBean;
import java.util.List;

public class d extends l<DataFunBean> {
    public static volatile d g;
    public boolean f = a(DataFunBean.class);

    public static d e() {
        if (g == null) {
            synchronized (d.class) {
                if (g == null) {
                    g = new d();
                }
            }
        }
        return g;
    }

    public synchronized void a(DataFunBean dataFunBean, e eVar) {
        x.a("PostDatalib 开始插入数据--insert");
        if (!this.f) {
            eVar.c(dataFunBean);
            return;
        }
        try {
            long jLongValue = b(dataFunBean).longValue();
            dataFunBean.setId((int) jLongValue);
            if (jLongValue > 1.61061273525E9d) {
                y.a(g.b.ordinal());
            }
            if (jLongValue != -1) {
                eVar.b(dataFunBean);
            } else {
                eVar.c(dataFunBean);
            }
        } catch (Exception e) {
            e.printStackTrace();
            eVar.c(dataFunBean);
        }
    }

    public void a(e eVar, String str, String str2) {
        if (!this.f) {
            eVar.a();
            return;
        }
        try {
            List<DataFunBean> listA = a(str, str2);
            if (listA.isEmpty()) {
                eVar.a();
            } else {
                eVar.a(listA);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public boolean a(DataFunBean dataFunBean) {
        int iA;
        if (!this.f) {
            return true;
        }
        try {
            iA = a(dataFunBean);
        } catch (Exception e) {
            e.printStackTrace();
            x.a("ByteDataTask deleteEvent 异常");
            iA = 0;
        }
        return iA != 0;
    }
}
