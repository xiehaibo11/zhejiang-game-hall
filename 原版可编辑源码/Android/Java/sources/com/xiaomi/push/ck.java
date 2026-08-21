package com.xiaomi.push;

import com.xiaomi.push.al;
import com.xiaomi.push.cj;

class ck extends al.a {
    final cj a;

    ck(cj cjVar) {
        this.a = cjVar;
    }

    @Override
    public String a() {
        return "100957";
    }

    @Override
    public void run() {
        synchronized (this.a.a) {
            if (this.a.a.size() > 0) {
                if (this.a.a.size() > 1) {
                    this.a.a(this.a.a);
                } else {
                    this.a.b((cj.a) this.a.a.get(0));
                }
                this.a.a.clear();
                System.gc();
            }
        }
    }
}
