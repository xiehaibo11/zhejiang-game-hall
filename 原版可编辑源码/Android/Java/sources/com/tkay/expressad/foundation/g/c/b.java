package com.tkay.expressad.foundation.g.c;

import java.util.ArrayList;
import java.util.List;

public abstract class b {
    protected a a;

    protected abstract List<a> b();

    public b(String str) {
        a aVar = new a();
        aVar.a(str);
        aVar.a(c.a);
        List<a> listB = b();
        if (listB.size() > 0) {
            aVar.a(listB);
        }
        this.a = aVar;
    }

    public final a a() {
        return this.a;
    }

    protected static a a(ArrayList<a> arrayList, c cVar, String str) {
        a aVar = new a();
        aVar.a(cVar);
        aVar.a(str);
        arrayList.add(aVar);
        return aVar;
    }
}
