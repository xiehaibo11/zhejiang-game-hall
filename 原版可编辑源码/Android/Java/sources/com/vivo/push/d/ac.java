package com.vivo.push.d;

import java.util.List;

final class ac implements Runnable {
    final int a;
    final List b;
    final List c;
    final String d;
    final aa e;

    ac(aa aaVar, int i, List list, List list2, String str) {
        this.e = aaVar;
        this.a = i;
        this.b = list;
        this.c = list2;
        this.d = str;
    }

    @Override
    public final void run() {
        this.e.b.onSetAlias(this.e.a, this.a, this.b, this.c, this.d);
    }
}
