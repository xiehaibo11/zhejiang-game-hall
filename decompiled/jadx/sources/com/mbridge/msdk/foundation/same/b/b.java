package com.mbridge.msdk.foundation.same.b;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: DirectoryContext.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected a f3402a;

    protected abstract List<a> b();

    public b(String str) {
        a aVar = new a();
        aVar.a(str);
        aVar.a(c.AD_ROOT);
        List<a> listB = b();
        if (listB != null && listB.size() > 0) {
            aVar.a(listB);
        }
        this.f3402a = aVar;
    }

    public final a a() {
        return this.f3402a;
    }

    protected final a a(ArrayList<a> arrayList, c cVar, String str) {
        a aVar = new a();
        aVar.a(cVar);
        aVar.a(str);
        arrayList.add(aVar);
        return aVar;
    }
}
