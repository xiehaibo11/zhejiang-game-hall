package com.igexin.push.core.a;

import com.igexin.push.core.bean.PushTaskBean;

class h implements Runnable {
    final PushTaskBean a;
    final String b;
    final e c;

    h(e eVar, PushTaskBean pushTaskBean, String str) {
        this.c = eVar;
        this.a = pushTaskBean;
        this.b = str;
    }

    @Override
    public void run() {
        this.c.b(this.a, this.b);
    }
}
