package com.vivo.push.d;

import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
final class ab implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f7904a;
    final /* synthetic */ List b;
    final /* synthetic */ List c;
    final /* synthetic */ String d;
    final /* synthetic */ aa e;

    ab(aa aaVar, int i, List list, List list2, String str) {
        this.e = aaVar;
        this.f7904a = i;
        this.b = list;
        this.c = list2;
        this.d = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.e.b.onSetTags(this.e.f7928a, this.f7904a, this.b, this.c, this.d);
    }
}
