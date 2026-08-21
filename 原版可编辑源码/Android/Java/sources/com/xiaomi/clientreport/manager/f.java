package com.xiaomi.clientreport.manager;

import com.xiaomi.push.al;

class f extends al.a {
    final a a;

    f(a aVar) {
        this.a = aVar;
    }

    @Override
    public String a() {
        return "100889";
    }

    @Override
    public void run() {
        if (this.a.b() > 0) {
            this.a.a.execute(new g(this));
        }
    }
}
