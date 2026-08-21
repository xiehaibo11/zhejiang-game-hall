package com.vivo.push;

import com.vivo.push.e;

/* JADX INFO: loaded from: classes4.dex */
final class g implements IPushActionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ e.a f7923a;
    final /* synthetic */ e b;

    g(e eVar, e.a aVar) {
        this.b = eVar;
        this.f7923a = aVar;
    }

    @Override // com.vivo.push.IPushActionListener
    public final void onStateChanged(int i) {
        if (i != 0) {
            this.b.k = null;
            this.b.j.b("APP_TOKEN");
            return;
        }
        Object[] objArrB = this.f7923a.b();
        if (objArrB == null || objArrB.length == 0) {
            com.vivo.push.util.p.a("PushClientManager", "bind app result is null");
        } else {
            this.b.a((String) this.f7923a.b()[0]);
        }
    }
}
