package com.igexin.push.c;

import java.util.Comparator;

class b implements Comparator<j> {
    final a a;

    b(a aVar) {
        this.a = aVar;
    }

    @Override
    public int compare(j jVar, j jVar2) {
        return (int) (jVar.e() - jVar2.e());
    }
}
