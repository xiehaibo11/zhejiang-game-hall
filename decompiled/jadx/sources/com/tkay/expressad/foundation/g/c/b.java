package com.tkay.expressad.foundation.g.c;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected a f6875a;

    protected abstract List<a> b();

    public b(String str) {
        a aVar = new a();
        aVar.a(str);
        aVar.a(c.AD_ROOT);
        List<a> listB = b();
        if (listB.size() > 0) {
            aVar.a(listB);
        }
        this.f6875a = aVar;
    }

    public final a a() {
        return this.f6875a;
    }

    protected static a a(ArrayList<a> arrayList, c cVar, String str) {
        a aVar = new a();
        aVar.a(cVar);
        aVar.a(str);
        arrayList.add(aVar);
        return aVar;
    }
}
