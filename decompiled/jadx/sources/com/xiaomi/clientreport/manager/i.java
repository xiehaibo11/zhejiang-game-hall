package com.xiaomi.clientreport.manager;

import com.xiaomi.push.br;

/* JADX INFO: loaded from: classes4.dex */
class i implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f7970a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ br f43a;

    i(a aVar, br brVar) {
        this.f7970a = aVar;
        this.f43a = brVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f43a.run();
    }
}
