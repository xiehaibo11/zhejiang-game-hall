package com.mbridge.msdk.foundation.same.b;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: Directory.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private c f3401a;
    private String b;
    private a c;
    private List<a> d;

    public final c a() {
        return this.f3401a;
    }

    public final void a(c cVar) {
        this.f3401a = cVar;
    }

    public final String b() {
        return this.b;
    }

    public final void a(String str) {
        this.b = str;
    }

    public final a c() {
        return this.c;
    }

    public final List<a> d() {
        return this.d;
    }

    private void a(a aVar) {
        if (this.d == null) {
            this.d = new ArrayList();
        }
        aVar.c = this;
        this.d.add(aVar);
    }

    public final void a(c cVar, String str) {
        a aVar = new a();
        aVar.f3401a = cVar;
        aVar.b = str;
        a(aVar);
    }

    public final void a(List<a> list) {
        if (list == null || list.size() == 0) {
            return;
        }
        Iterator<a> it = list.iterator();
        while (it.hasNext()) {
            a(it.next());
        }
    }
}
