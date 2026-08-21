package com.igexin.push.c;

import java.util.Comparator;

/* JADX INFO: loaded from: classes2.dex */
class b implements Comparator<j> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f2469a;

    b(a aVar) {
        this.f2469a = aVar;
    }

    @Override // java.util.Comparator
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compare(j jVar, j jVar2) {
        return (int) (jVar.e() - jVar2.e());
    }
}
