package com.vivo.push.d;

import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
final class i implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f7908a;
    final /* synthetic */ List b;
    final /* synthetic */ List c;
    final /* synthetic */ String d;
    final /* synthetic */ h e;

    i(h hVar, int i, List list, List list2, String str) {
        this.e = hVar;
        this.f7908a = i;
        this.b = list;
        this.c = list2;
        this.d = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.e.b.onDelTags(this.e.f7928a, this.f7908a, this.b, this.c, this.d);
    }
}
