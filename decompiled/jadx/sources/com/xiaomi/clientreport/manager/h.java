package com.xiaomi.clientreport.manager;

import com.xiaomi.push.bq;

/* JADX INFO: loaded from: classes4.dex */
class h implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f7969a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ bq f42a;

    h(a aVar, bq bqVar) {
        this.f7969a = aVar;
        this.f42a = bqVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f42a.run();
    }
}
