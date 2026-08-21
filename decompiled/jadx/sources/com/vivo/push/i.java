package com.vivo.push;

/* JADX INFO: loaded from: classes4.dex */
final class i implements IPushActionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ e f7925a;

    i(e eVar) {
        this.f7925a = eVar;
    }

    @Override // com.vivo.push.IPushActionListener
    public final void onStateChanged(int i) {
        if (i != 0) {
            this.f7925a.k = null;
            this.f7925a.j.b("APP_TOKEN");
        } else {
            this.f7925a.k = "";
            this.f7925a.j.a("APP_TOKEN", "");
            this.f7925a.m();
            this.f7925a.j.b("APP_TAGS");
        }
    }
}
