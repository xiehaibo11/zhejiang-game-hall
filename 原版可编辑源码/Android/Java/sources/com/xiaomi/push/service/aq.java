package com.xiaomi.push.service;

import com.xiaomi.push.fj;
import java.util.Iterator;
import java.util.List;

final class aq implements Runnable {
    final List a;
    final boolean a;

    aq(List list, boolean z) {
        this.a = list;
        this.a = z;
    }

    @Override
    public void run() {
        boolean zB = ap.b("www.baidu.com:80");
        Iterator it = this.a.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            zB = zB || ap.b((String) it.next());
            if (zB && !this.a) {
                break;
            }
        }
        fj.a(zB ? 1 : 2);
    }
}
