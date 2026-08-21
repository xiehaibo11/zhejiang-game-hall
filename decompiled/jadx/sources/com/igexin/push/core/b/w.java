package com.igexin.push.core.b;

/* JADX INFO: loaded from: classes2.dex */
class w extends com.igexin.push.b.d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ boolean f2546a;
    final /* synthetic */ String b;
    final /* synthetic */ i c;

    w(i iVar, boolean z, String str) {
        this.c = iVar;
        this.f2546a = z;
        this.b = str;
    }

    @Override // com.igexin.push.b.d
    public void a() {
        i.a().a(this.d, this.f2546a ? 50 : 49, this.c.g(this.b));
    }
}
