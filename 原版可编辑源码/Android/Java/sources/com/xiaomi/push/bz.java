package com.xiaomi.push;

import com.xiaomi.push.al;
import java.lang.ref.WeakReference;

class bz extends al.a {
    final bx a;

    bz(bx bxVar) {
        this.a = bxVar;
    }

    @Override
    public String a() {
        return "10054";
    }

    @Override
    public void run() {
        com.xiaomi.channel.commonutils.logger.b.c("exec== DbSizeControlJob");
        cj.a(this.a.a).a(new cc(this.a.c(), new WeakReference(this.a.a)));
        this.a.b("check_time");
    }
}
