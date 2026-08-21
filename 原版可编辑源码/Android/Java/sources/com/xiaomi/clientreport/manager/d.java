package com.xiaomi.clientreport.manager;

import com.xiaomi.push.al;

class d extends al.a {
    final a a;

    d(a aVar) {
        this.a = aVar;
    }

    @Override
    public String a() {
        return "100888";
    }

    @Override
    public void run() {
        if (this.a.a() > 0) {
            this.a.a.execute(new e(this));
        }
    }
}
